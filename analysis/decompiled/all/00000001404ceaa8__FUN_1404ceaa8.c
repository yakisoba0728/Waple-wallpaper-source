// Function: FUN_1404ceaa8
// Addr: 1404ceaa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceaa8(uint param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  byte *pbVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 in_RAX;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  char *unaff_RDI;
  uint *puStack_30;
  uint *puStack_28;
  char *pcStack_20;
  char *pcStack_18;
  char *pcStack_10;
  uint *puVar9;
  
  *param_4 = *param_4;
  param_1 = param_1 & *param_2;
  pcVar12 = (char *)(ulonglong)param_1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)in_RAX >> 8);
  uVar4 = in(6);
  puVar9 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar4);
  (&stack0x00000000)[(longlong)unaff_RSI * 2] =
       (&stack0x00000000)[(longlong)unaff_RSI * 2] + unaff_BL;
  uVar8 = (uint)puVar9 | *puVar9;
  bVar7 = (char)uVar8 + 100;
  uVar2 = (undefined3)(uVar8 >> 8);
  uVar8 = CONCAT31(uVar2,bVar7 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar7)) | 0x5000954;
  pcVar10 = (char *)((ulonglong)uVar8 ^ 8);
  pcVar1 = pcVar10 + -0x57ffc685;
  *pcVar1 = *pcVar1 + (char)pcVar10;
  cVar6 = (char)param_1;
  pcVar11 = pcVar10;
  if ((POPCOUNT(*pcVar1) & 1U) == 0) {
    pcVar10[0x210049ef] = pcVar10[0x210049ef] + (char)(param_1 >> 8);
    *unaff_RDI = *unaff_RDI + cVar6;
    if (*unaff_RDI != '\0') {
      *(char *)param_2 = (char)*param_2 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar10[-0x41ffc5ba] = pcVar10[-0x41ffc5ba] + (char)(uVar8 >> 8);
    *pcVar12 = *pcVar12;
    cVar5 = (char)unaff_RDI;
    *unaff_RSI = *unaff_RSI + cVar5;
    *unaff_RDI = *unaff_RDI + cVar5;
    if (*unaff_RDI != '\0') {
      *unaff_RDI = *unaff_RDI + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RDI[-0x41ffc5ba] = unaff_RDI[-0x41ffc5ba] + (char)((ulonglong)unaff_RDI >> 8);
    pcVar11 = unaff_RDI;
    unaff_RDI = pcVar10;
  }
  *pcVar12 = *pcVar12;
  *pcVar11 = *pcVar11 + cVar6;
  if (*pcVar11 != '\0') {
    *(char *)param_2 = (char)*param_2 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *unaff_RDI + (char)((ulonglong)unaff_RDI >> 8);
  pcStack_10 = pcVar12;
  *pcVar12 = *pcVar12 + (char)&pcStack_10;
  cVar6 = (char)pcVar11;
  *unaff_RSI = *unaff_RSI + cVar6;
  *pcVar11 = *pcVar11 + cVar6;
  if (*pcVar11 != '\0') {
    *pcVar11 = *pcVar11 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar11 = *pcVar11 + (char)((ulonglong)pcVar11 >> 8);
  pcStack_18 = pcVar12;
  pcStack_20 = pcVar12;
  *pcVar12 = *pcVar12 + (char)unaff_RDI;
  puStack_28 = param_2;
  puStack_30 = param_2;
  bVar7 = in(9);
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
  pcVar1 = (char *)((longlong)&puStack_30 + (longlong)param_2 * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *pbVar3 = *pbVar3 | bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

