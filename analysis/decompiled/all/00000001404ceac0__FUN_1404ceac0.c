// Function: FUN_1404ceac0
// Addr: 1404ceac0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceac0(char *param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar9;
  char *pcVar7;
  char *pcVar8;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  char *pcStack_30;
  char *pcStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  
  cVar5 = (char)param_1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (char)in_RAX + 'd' + in_CF;
  uVar6 = (uint)CONCAT71(uVar9,bVar3 | *(byte *)CONCAT71(uVar9,bVar3)) | 0x5000954;
  pcVar7 = (char *)((ulonglong)uVar6 ^ 8);
  pcVar1 = pcVar7 + -0x57ffc685;
  *pcVar1 = *pcVar1 + (char)pcVar7;
  pcVar8 = pcVar7;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    pcVar7[0x210049ef] = pcVar7[0x210049ef] + (char)((ulonglong)param_1 >> 8);
    *unaff_RDI = *unaff_RDI + cVar5;
    if (*unaff_RDI != '\0') {
      *param_2 = *param_2 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar7[-0x41ffc5ba] = pcVar7[-0x41ffc5ba] + (char)(uVar6 >> 8);
    *param_1 = *param_1;
    cVar4 = (char)unaff_RDI;
    *unaff_RSI = *unaff_RSI + cVar4;
    *unaff_RDI = *unaff_RDI + cVar4;
    if (*unaff_RDI != '\0') {
      *unaff_RDI = *unaff_RDI + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[-0x41ffc5ba] = unaff_RDI[-0x41ffc5ba] + (char)((ulonglong)unaff_RDI >> 8);
    pcVar8 = unaff_RDI;
    unaff_RDI = pcVar7;
  }
  *param_1 = *param_1;
  *pcVar8 = *pcVar8 + cVar5;
  if (*pcVar8 != '\0') {
    *param_2 = *param_2 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)unaff_RDI >> 8);
  pcStack_10 = param_1;
  *param_1 = *param_1 + (char)&pcStack_10;
  cVar5 = (char)pcVar8;
  *unaff_RSI = *unaff_RSI + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  if (*pcVar8 != '\0') {
    *pcVar8 = *pcVar8 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar8 = *pcVar8 + (char)((ulonglong)pcVar8 >> 8);
  pcStack_18 = param_1;
  pcStack_20 = param_1;
  *param_1 = *param_1 + (char)unaff_RDI;
  pcStack_28 = param_2;
  pcStack_30 = param_2;
  bVar3 = in(9);
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3);
  pcVar1 = (char *)((longlong)&pcStack_30 + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *pbVar2 = *pbVar2 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

