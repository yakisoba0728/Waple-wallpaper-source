// Function: FUN_1404cb76c
// Addr: 1404cb76c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb76c(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char in_AL;
  char cVar4;
  byte bVar5;
  char in_AH;
  undefined6 in_register_00000002;
  char cVar6;
  byte bVar7;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  pbVar1 = &stack0x00000000 + CONCAT44(unaff_00000034,unaff_ESI);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  bVar7 = (char)unaff_EBX + (char)((uint)unaff_EBX >> 8) * '\x02';
  cVar4 = in_AL + '4';
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                   CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar2 = *pcVar2 + cVar6;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar4)) + cVar4;
  bVar5 = cVar4 + (byte)param_2 + 0x68;
  pcVar2 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x4c +
                   CONCAT44(unaff_00000034,unaff_ESI) * 4);
  *pcVar2 = *pcVar2 + cVar6;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar7;
  pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)));
  *pcVar2 = (*pcVar2 - bVar5) - CARRY1(bVar3,bVar7);
  *(uint *)(param_2 + 0x6003e005) = *(uint *)(param_2 + 0x6003e005) | unaff_ESI;
  bVar5 = bVar5 & (byte)param_2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + (char)param_1;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5)) + bVar5;
  *(uint *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5))) =
       *(uint *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar5))) &
       CONCAT31((int3)((uint)unaff_EBX >> 8),bVar7);
  (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] =
       (&stack0x00000000)[CONCAT44(unaff_00000034,unaff_ESI) * 8] + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

