// Function: FUN_1404b1028
// Addr: 1404b1028
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1028(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  longlong in_RAX;
  byte unaff_BL;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar6;
  byte *pbVar5;
  
  param_1[0x15a80000] = param_1[0x15a80000] + (char)((ulonglong)param_2 >> 8);
  pbVar5 = (byte *)(in_RAX + unaff_RBP * 4);
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + unaff_BL;
  uVar4 = (int)in_RAX + 0x49e56400 + (uint)CARRY1(bVar3,unaff_BL);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = in(8);
  pbVar5 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  bVar6 = CARRY1(*pbVar5,bVar3);
  *pbVar5 = *pbVar5 + bVar3;
  if (*pbVar5 != 0) {
    *pbVar5 = *pbVar5 + bVar3;
    pbVar5 = (byte *)((ulonglong)CONCAT31(uVar2,bVar3) ^ 0xd);
    *pbVar5 = *pbVar5 + (char)pbVar5;
    pbVar1 = pbVar5 + unaff_RBP * 4;
    bVar6 = CARRY1(*pbVar1,unaff_BL);
    *pbVar1 = *pbVar1 + unaff_BL;
  }
  *param_1 = *param_1 + (char)pbVar5 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

