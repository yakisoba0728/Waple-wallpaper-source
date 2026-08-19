// Function: FUN_1404d5604
// Addr: 1404d5604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d5622) overlaps instruction at (ram,0x0001404d5621)
    */

void FUN_1404d5604(byte *param_1,char *param_2,byte param_3,char *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char cVar11;
  byte *in_RAX;
  undefined7 uVar12;
  byte *pbVar9;
  uint *puVar10;
  char unaff_BH;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  cVar6 = (char)param_2;
  *(undefined1 *)(unaff_RDI + -0x4813ffc0) = *(undefined1 *)(unaff_RDI + -0x4813ffc0);
  bVar4 = (byte)in_RAX;
  in_RAX[-0x2c] = in_RAX[-0x2c] + bVar4;
  bVar5 = *param_1;
  *param_1 = *param_1 + param_3;
  *unaff_RSI = *unaff_RSI + bVar4 + CARRY1(bVar5,param_3);
  *in_RAX = *in_RAX + cVar6;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*in_RAX != 0) {
    *in_RAX = *in_RAX + cVar6;
    bVar5 = *in_RAX;
    param_2 = param_2 + 0xc;
    *param_2 = *param_2 + cVar6;
    if (param_1 != (byte *)0x1 && *param_2 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = (int)CONCAT71(uVar12,bVar4 | bVar5) + 0x64050002;
    *(uint *)(ulonglong)uVar7 = *(uint *)(ulonglong)uVar7 | uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = (int)CONCAT71(uVar12,bVar4 + *in_RAX);
  uVar7 = iVar8 + 0xb0000964;
  if ((int)uVar7 < 0) {
    uVar7 = CONCAT31((int3)(uVar7 >> 8),(char)uVar7 + *(char *)(ulonglong)uVar7) + 0xd0000674;
    cVar6 = (char)uVar7;
    out((short)param_2,cVar6);
    uVar7 = uVar7 ^ 0x35eef400;
    uVar7 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8) + unaff_BH,cVar6));
    puVar10 = (uint *)(ulonglong)uVar7;
    *(int *)param_1 = *(int *)param_1 + -1;
    *puVar10 = *puVar10 & uVar7;
    *(char *)puVar10 = (char)*puVar10 + cVar6;
  }
  else {
    if ((char)(unaff_BH * '\x02') < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar1 = (char *)(ulonglong)uVar7 + 0x55;
    *pcVar1 = *pcVar1 + (char)uVar7;
    *param_4 = *param_4 + unaff_R12B;
    uVar7 = iVar8 + 0xe4050966;
    pbVar9 = (byte *)(ulonglong)uVar7;
    bVar5 = (byte)uVar7;
    *pbVar9 = *pbVar9 | bVar5;
    *(int *)(pbVar9 + 0x3f) = *(int *)(pbVar9 + 0x3f) + 1;
    cVar11 = (char)(uVar7 >> 8);
    *param_2 = *param_2 + cVar11;
    if (*param_2 < '\0') {
      pbVar9[0x55] = pbVar9[0x55] + cVar6;
      *param_4 = *param_4 + unaff_R12B;
      *pbVar9 = *pbVar9 + bVar5;
      cVar3 = unaff_BH * '\x04';
      if (cVar3 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_2 = *param_2 + cVar11;
      if (-1 < *param_2) {
        halt_baddata();
      }
      pbVar9[0x55] = pbVar9[0x55] + cVar6;
      *param_4 = *param_4 + unaff_R12B;
      *pbVar9 = *pbVar9 + bVar5;
      pbVar2 = pbVar9 + -0xffc088;
      *pbVar2 = *pbVar2 + (char)((ulonglong)param_2 >> 8);
      if (-1 < (char)*pbVar2) {
        pbVar9[0x55] = pbVar9[0x55] + bVar5;
        *param_4 = *param_4 + unaff_R12B;
        halt_baddata();
      }
      uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5 + *pbVar9) + 0x80000cf4;
      unaff_RSI[unaff_RDI + 0x3e] = unaff_RSI[unaff_RDI + 0x3e] + (char)(uVar7 >> 8);
      pcVar1 = (char *)(unaff_RBP + 0x21004d + (longlong)param_2 * 2);
      *pcVar1 = *pcVar1 + cVar3;
      *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
      pcVar1 = (char *)(unaff_RBP + 0x1601004d + (longlong)param_2 * 2);
      *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)param_1 = *(int *)param_1 + -1;
  iRam00000001825a5699 = iRam00000001825a5699 + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

