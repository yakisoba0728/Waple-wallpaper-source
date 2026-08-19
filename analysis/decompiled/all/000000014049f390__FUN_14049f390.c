// Function: FUN_14049f390
// Addr: 14049f390
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f3ec) overlaps instruction at (ram,0x00014049f3eb)
    */

void FUN_14049f390(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  char *in_RAX;
  char *pcVar10;
  char unaff_BL;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *puVar11;
  int *piVar6;
  byte *pbVar7;
  undefined7 uVar9;
  
  *param_4 = *param_4 + unaff_SPL;
  cVar3 = (char)in_RAX;
  *param_2 = *param_2 + cVar3;
  *in_RAX = *in_RAX + cVar3;
  puVar11 = unaff_RSI;
  if (*in_RAX == '\0') {
    puVar11 = unaff_RSI + 1;
    out(*unaff_RSI,(short)param_2);
  }
  cVar8 = (char)((ulonglong)in_RAX >> 8);
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = cVar3 + cVar8;
  piVar6 = (int *)CONCAT71(uVar9,cVar3);
  out(*(undefined1 *)puVar11,(short)param_2);
  *piVar6 = *piVar6 + (int)piVar6;
  piVar6 = (int *)(CONCAT71(uVar9,cVar3) | 0x6f);
  *piVar6 = *piVar6 + (int)piVar6;
  *param_4 = *param_4 + (byte)piVar6;
  bVar4 = (byte)piVar6 | bRam00000001468bfdaf;
  pbVar7 = (byte *)CONCAT71(uVar9,bVar4);
  pcVar10 = (char *)(param_1 + -1);
  if (pcVar10 == (char *)0x0 || bVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar7 = *pbVar7 ^ bVar4;
  *pcVar10 = *pcVar10 + cVar8;
  uVar5 = (int)pbVar7 + 0x74050002;
  uVar2 = (undefined3)(uVar5 >> 8);
  bVar4 = (byte)uVar5 | *(byte *)(ulonglong)uVar5;
  pbVar7 = (byte *)(pcVar10 + CONCAT31(uVar2,bVar4));
  *pbVar7 = *pbVar7 ^ 0xcf;
  if (*pbVar7 == 0) {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar3 = bVar4 + unaff_BL;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar10 = *pcVar10 + cVar3;
  pcVar10 = pcVar10 + -0x30fffe8c;
  *pcVar10 = *pcVar10 + cVar3;
  if (*pcVar10 == '\0') {
    *param_4 = *param_4 + unaff_SPL;
  }
  cVar3 = cVar3 + unaff_BL;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + cVar3;
  *pcVar10 = *pcVar10 + cVar3;
  if (*pcVar10 != '\0') {
    pcVar1 = pcVar10 + -0x30fffe8c;
    *pcVar1 = *pcVar1 + cVar3;
    if (*pcVar1 == '\0') {
      *param_4 = *param_4 + cVar3;
    }
    else {
      pcVar10 = (char *)(ulonglong)(byte)(cVar3 + unaff_BL);
    }
  }
  *param_4 = *param_4 + (char)pcVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

