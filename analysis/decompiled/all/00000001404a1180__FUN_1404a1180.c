// Function: FUN_1404a1180
// Addr: 1404a1180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1180(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte *pbVar6;
  char cVar7;
  longlong unaff_RBX;
  longlong unaff_RBP;
  byte bVar3;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) * '\x02',(byte)in_RAX));
  *pbVar6 = *pbVar6 | (byte)in_RAX;
  param_1[unaff_RBX] = param_1[unaff_RBX] + cVar7;
  param_1[0x3a07000] = param_1[0x3a07000] + cVar7;
  *(char *)(unaff_RBP + 0x640003a0) = *(char *)(unaff_RBP + 0x640003a0) + (byte)param_2;
  uVar5 = in(0x49);
  bVar1 = *param_1;
  bVar4 = (byte)uVar5;
  *param_1 = *param_1 + bVar4;
  pbVar6 = (byte *)((ulonglong)uVar5 * 2);
  bVar2 = *pbVar6;
  bVar3 = *pbVar6;
  *pbVar6 = bVar3 + bVar4 + CARRY1(bVar1,bVar4);
  *(char *)(param_2 + -0x1ff50ff4) =
       *(char *)(param_2 + -0x1ff50ff4) + cVar7 +
       (CARRY1(bVar2,bVar4) || CARRY1(bVar3 + bVar4,CARRY1(bVar1,bVar4)));
  pbVar6 = (byte *)((ulonglong)uVar5 + 0x21);
  *pbVar6 = *pbVar6 | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

