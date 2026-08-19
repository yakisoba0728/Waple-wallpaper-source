// Function: FUN_1404cab68
// Addr: 1404cab68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cab68(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  undefined8 in_RAX;
  byte bVar5;
  longlong unaff_RBX;
  byte in_CF;
  bool bVar6;
  byte *pbVar3;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  bVar2 = (byte)in_RAX;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  bVar1 = bVar4 - bVar2;
  bVar6 = bVar4 < bVar2 || bVar1 < in_CF;
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar1 - in_CF,bVar2));
  bVar1 = *pbVar3;
  bVar4 = *pbVar3;
  *pbVar3 = bVar4 + bVar2 + bVar6;
  *(char *)(param_1 + param_2) =
       *(char *)(param_1 + param_2) + bVar5 + (CARRY1(bVar1,bVar2) || CARRY1(bVar4 + bVar2,bVar6));
  *(byte *)(param_1 + unaff_RBX) = *(byte *)(param_1 + unaff_RBX) | bVar5;
  pbVar3[0x23] = pbVar3[0x23] + bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

