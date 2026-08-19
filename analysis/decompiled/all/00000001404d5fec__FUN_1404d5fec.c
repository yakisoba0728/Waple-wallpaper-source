// Function: FUN_1404d5fec
// Addr: 1404d5fec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5fec(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined2 *in_RAX;
  undefined7 uVar12;
  char *pcVar13;
  char cVar14;
  byte bVar15;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  byte unaff_R12B;
  undefined2 in_FPUControlWord;
  longlong unaff_retaddr;
  char cStackX_8;
  char cStackX_10;
  byte bVar2;
  byte *pbVar10;
  char *pcVar11;
  
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  *in_RAX = in_FPUControlWord;
  *in_RAX = in_FPUControlWord;
  uVar12 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar7 = (char)((ulonglong)unaff_RBX >> 8);
  bVar6 = (char)in_RAX + cVar7;
  pbVar10 = (byte *)CONCAT71(uVar12,bVar6);
  *param_4 = *param_4 + unaff_R12B;
  *pbVar10 = *pbVar10 + bVar6;
  *(char *)(unaff_RSI + -0x27) = *(char *)(unaff_RSI + -0x27) + cVar14;
  uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),(char)param_1 + (char)in_RAX) & 0xffffffff;
  uVar4 = (ulonglong)(*pbVar10 < bVar6) << 0x20 | uVar3;
  pcVar13 = (char *)(ulonglong)((uint)(uVar4 >> 0x18) | (uint)(uVar4 << 9));
  cVar7 = bVar6 + cVar7;
  pcVar11 = (char *)CONCAT71(uVar12,cVar7);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar11 = *pcVar11 + cVar7;
  pcVar11[-0x29] = pcVar11[-0x29] + bVar15;
  *(undefined2 *)pcVar11 = in_FPUControlWord;
  bVar8 = cVar7 + (char)unaff_RBX;
  bVar6 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  pbVar10 = (byte *)(CONCAT71(uVar12,bVar8) * 2);
  bVar1 = *pbVar10;
  bVar2 = *pbVar10;
  *pbVar10 = bVar2 + bVar8 + CARRY1(bVar6,unaff_R12B);
  pcVar13[unaff_retaddr] =
       pcVar13[unaff_retaddr] + bVar15 +
       (CARRY1(bVar1,bVar8) || CARRY1(bVar2 + bVar8,CARRY1(bVar6,unaff_R12B)));
  uVar5 = SUB82(param_2,0);
  param_2[CONCAT71(uVar12,bVar8)] = param_2[CONCAT71(uVar12,bVar8)] | bVar15;
  uVar9 = in(uVar5);
  pcVar11 = (char *)(ulonglong)uVar9;
  *param_2 = *param_2 + cVar14;
  out(uVar5,(char)uVar9);
  *pcVar11 = *pcVar11 + (char)unaff_RBX;
  *pcVar13 = *pcVar13 + unaff_R12B;
  *pcVar11 = *pcVar11 + (char)uVar9;
  uVar9 = in(uVar5);
  pcVar11 = (char *)(ulonglong)uVar9;
  *param_2 = *param_2 + cVar14;
  bVar6 = (byte)uVar9;
  out(uVar5,bVar6);
  *pcVar11 = *pcVar11 + cStackX_8;
  *pcVar13 = *pcVar13 + unaff_R12B;
  *param_2 = *param_2 | bVar6;
  *pcVar11 = *pcVar11 + (char)(uVar3 >> 0x18);
  if (*pcVar11 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar11 = *pcVar11 + bVar6;
  if (*pcVar11 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UNK_1404d6fd5 = UNK_1404d6fd5 + cStackX_10;
  if (UNK_1404d6fd5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar11 = *pcVar11 + bVar6;
  if (*pcVar11 != '\0') {
    *pcVar11 = *pcVar11 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar13 = *pcVar13 + (char)(uVar9 >> 8);
  *pcVar11 = *pcVar11 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

