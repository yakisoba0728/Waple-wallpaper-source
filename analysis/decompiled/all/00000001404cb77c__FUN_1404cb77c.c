// Function: FUN_1404cb77c
// Addr: 1404cb77c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb77c(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  byte bVar4;
  undefined7 in_register_00000001;
  byte bVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  pbVar1 = &stack0x00000000 + CONCAT44(unaff_00000034,unaff_ESI);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  bVar5 = (char)unaff_EBX + (char)((uint)unaff_EBX >> 8);
  bVar4 = in_AL + 0x34;
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                   CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_1 >> 8);
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar5;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,bVar4) + CONCAT71(in_register_00000001,bVar4));
  *pcVar2 = (*pcVar2 - bVar4) - CARRY1(bVar3,bVar5);
  *(uint *)(param_2 + 0x6003e005) = *(uint *)(param_2 + 0x6003e005) | unaff_ESI;
  bVar4 = bVar4 & (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,bVar4) =
       *(char *)CONCAT71(in_register_00000001,bVar4) + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar4) =
       *(char *)CONCAT71(in_register_00000001,bVar4) + bVar4;
  *(uint *)(param_1 + CONCAT71(in_register_00000001,bVar4)) =
       *(uint *)(param_1 + CONCAT71(in_register_00000001,bVar4)) &
       CONCAT31((int3)((uint)unaff_EBX >> 8),bVar5);
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

