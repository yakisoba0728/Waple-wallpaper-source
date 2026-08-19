// Function: FUN_1404ba3e4
// Addr: 1404ba3e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba403) overlaps instruction at (ram,0x0001404ba402)
    */

void FUN_1404ba3e4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint *in_RAX;
  byte *pbVar5;
  undefined7 uVar7;
  byte *pbVar8;
  byte bVar9;
  uint unaff_EBX;
  ulonglong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  undefined8 uStack_8;
  char *pcVar6;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar5 = (byte *)(unaff_RBP & 0xffffffff);
  bVar3 = (byte)pbVar5;
  *pbVar5 = *pbVar5 & bVar3;
  uVar1 = *(uint *)(((ulonglong)in_RAX & 0xffffffff) - 0x5d17ffe0);
  pbVar8 = (byte *)(ulonglong)uVar1;
  *param_4 = *param_4 + bVar3;
  uVar7 = (undefined7)((ulonglong)pbVar5 >> 8);
  bVar3 = bVar3 & *unaff_RDI;
  pcVar6 = (char *)CONCAT71(uVar7,bVar3);
  *pbVar8 = *pbVar8 + (char)((ulonglong)pbVar5 >> 8);
  bVar9 = (byte)unaff_EBX;
  if ((char)*pbVar8 < '\0') {
    pcVar6[unaff_RSI * 2] = pcVar6[unaff_RSI * 2] + bVar3;
  }
  else {
    bVar4 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar9;
    register0x00000020 = (BADSPACEBASE *)&uStack_8;
    uStack_8 = 0x10b0009;
    pcVar6 = (char *)CONCAT71(uVar7,((bVar3 - *pcVar6) - CARRY1(bVar4,bVar9)) + 'p');
  }
  bVar4 = (byte)pcVar6;
  *pcVar6 = *pcVar6 + bVar4;
  *(uint *)(unaff_RSI + param_1) = *(uint *)(unaff_RSI + param_1) & unaff_EBX;
  pbVar5 = (byte *)((longlong)register0x00000020 + unaff_RSI * 8);
  bVar3 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar9;
  bVar2 = CARRY1(bVar4,CARRY1(bVar3,bVar9));
  pcVar6 = (char *)(ulonglong)
                   ((int)CONCAT62((int6)((ulonglong)pcVar6 >> 0x10),
                                  CONCAT11(-bVar2,bVar4 + CARRY1(bVar3,bVar9))) + 0x16d41400 +
                   (uint)bVar2);
  *pcVar6 = *pcVar6 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

