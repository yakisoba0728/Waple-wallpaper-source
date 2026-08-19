// Function: FUN_1404d6904
// Addr: 1404d6904
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6904(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char cVar7;
  undefined7 uVar8;
  char unaff_BH;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  pbVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  iVar4 = func_0x00014c4e6953();
  uVar5 = iVar4 + 0x4740c00U + *(int *)(ulonglong)(iVar4 + 0x4740c00U);
  pcVar6 = (char *)((ulonglong)uVar5 | 0xe0);
  *pcVar6 = *pcVar6 + (char)pcVar6;
  uRam0000000174526920 = uRam0000000174526920 & (uint)pcVar6;
  cVar3 = (char)pcVar6 + *pcVar6;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),cVar3);
  pcVar6 = (char *)(ulonglong)uVar5;
  unaff_RDI[0x37] = unaff_RDI[0x37];
  if (param_1 != 1 && cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + unaff_BH;
  *pcVar6 = *pcVar6 + cVar3;
  cVar1 = *pcVar6;
  unaff_RDI[0x37] = unaff_RDI[0x37];
  if (param_1 + -2 == 0 || cVar1 != '\0') {
    *pcVar6 = *pcVar6 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar2 = *pbVar2 >> 1;
  *pcVar6 = *pcVar6 + cVar7;
  *pcVar6 = *pcVar6 + cVar3;
  *(int *)CONCAT71(uVar8,cVar7) = *(int *)CONCAT71(uVar8,cVar7) + (int)(param_1 + -2);
  pbVar2 = (byte *)((ulonglong)(uVar5 + 0x6420a00) + (longlong)pbVar2 * 2);
  *pbVar2 = *pbVar2 << 3 | *pbVar2 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

