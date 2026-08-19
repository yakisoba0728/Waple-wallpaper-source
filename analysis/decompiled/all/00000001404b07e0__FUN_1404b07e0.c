// Function: FUN_1404b07e0
// Addr: 1404b07e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b07e0(longlong param_1,uint *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint unaff_EBX;
  longlong unaff_RBP;
  byte in_CF;
  bool bVar6;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  iRam000000018b51efec = iRam000000018b51efec + (uint)in_CF;
  uRam00000000cf001583 = uRam00000000cf001583 & 0xcf001583;
  bVar6 = 0x7c < (byte)uRam00000000cf001583;
  uRam00000000cf001583._1_3_ = (undefined3)(uRam00000000cf001583 >> 8);
  uRam00000000cf001583 = CONCAT31(uRam00000000cf001583._1_3_,(byte)uRam00000000cf001583 + 0x83);
  iRam000000018b51effc = iRam000000018b51effc + (uint)bVar6;
  uRam00000000cf001583 = uRam00000000cf001583 & 0xcf001583;
  bVar6 = 0x7c < (byte)uRam00000000cf001583;
  uRam00000000cf001583._1_3_ = (undefined3)(uRam00000000cf001583 >> 8);
  uRam00000000cf001583 = CONCAT31(uRam00000000cf001583._1_3_,(byte)uRam00000000cf001583 + 0x83);
  uVar4 = bVar6 + 0xe483cd83;
  pbVar2 = (byte *)(ulonglong)uVar4 + unaff_RBP + 0x21004b;
  *pbVar2 = *pbVar2 + (char)param_2;
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                   CONCAT11((char)(uVar4 >> 8) * '\x02' + (char)param_2,
                            (byte)uVar4 | *(byte *)(ulonglong)uVar4));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  *(char *)((longlong)param_2 + param_1) = *(char *)((longlong)param_2 + param_1) + bVar5;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar4 >> 8);
  pcVar1 = (char *)((ulonglong)uVar4 + param_1);
  *pcVar1 = *pcVar1 + bVar5;
  pbVar2 = (byte *)((ulonglong)uVar4 - 0x47ffea7d);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + bVar5;
  iRam000000018b509c30 = iRam000000018b509c30 + (uint)CARRY1(bVar3,bVar5);
  *param_2 = *param_2 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

