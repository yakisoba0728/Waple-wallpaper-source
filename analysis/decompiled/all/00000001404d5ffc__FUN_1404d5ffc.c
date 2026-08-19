// Function: FUN_1404d5ffc
// Addr: 1404d5ffc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5ffc(undefined8 param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined2 uVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined2 *in_RAX;
  undefined7 uVar11;
  char cVar12;
  undefined7 uVar13;
  byte bVar14;
  undefined8 unaff_RBX;
  longlong unaff_RSI;
  byte unaff_R12B;
  undefined2 in_FPUControlWord;
  char unaff_retaddr;
  char cStackX_8;
  byte bVar2;
  char *pcVar9;
  longlong lVar10;
  
  bVar14 = (byte)((ulonglong)param_2 >> 8);
  uVar13 = (undefined7)((ulonglong)param_1 >> 8);
  *in_RAX = in_FPUControlWord;
  cVar12 = (char)param_1 + (char)in_RAX;
  *in_RAX = in_FPUControlWord;
  uVar11 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = (char)in_RAX + (char)((ulonglong)unaff_RBX >> 8);
  pcVar9 = (char *)CONCAT71(uVar11,cVar5);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar9 = *pcVar9 + cVar5;
  pcVar9[-0x29] = pcVar9[-0x29] + bVar14;
  *(undefined2 *)pcVar9 = in_FPUControlWord;
  bVar6 = cVar5 + (char)unaff_RBX;
  lVar10 = CONCAT71(uVar11,bVar6);
  bVar7 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  pbVar4 = (byte *)(lVar10 * 2);
  bVar1 = *pbVar4;
  bVar2 = *pbVar4;
  *pbVar4 = bVar2 + bVar6 + CARRY1(bVar7,unaff_R12B);
  pcVar9 = (char *)(unaff_RSI + CONCAT71(uVar13,cVar12));
  *pcVar9 = *pcVar9 + bVar14 +
            (CARRY1(bVar1,bVar6) || CARRY1(bVar2 + bVar6,CARRY1(bVar7,unaff_R12B)));
  uVar3 = SUB82(param_2,0);
  param_2[lVar10] = param_2[lVar10] | bVar14;
  uVar8 = in(uVar3);
  pcVar9 = (char *)(ulonglong)uVar8;
  *param_2 = *param_2 + (char)param_2;
  out(uVar3,(char)uVar8);
  *pcVar9 = *pcVar9 + (char)unaff_RBX;
  *(byte *)CONCAT71(uVar13,cVar12) = *(char *)CONCAT71(uVar13,cVar12) + unaff_R12B;
  *pcVar9 = *pcVar9 + (char)uVar8;
  uVar8 = in(uVar3);
  pcVar9 = (char *)(ulonglong)uVar8;
  *param_2 = *param_2 + (char)param_2;
  bVar7 = (byte)uVar8;
  out(uVar3,bVar7);
  *pcVar9 = *pcVar9 + unaff_retaddr;
  *(byte *)CONCAT71(uVar13,cVar12) = *(char *)CONCAT71(uVar13,cVar12) + unaff_R12B;
  *param_2 = *param_2 | bVar7;
  *pcVar9 = *pcVar9 + cVar12;
  if (*pcVar9 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + bVar7;
  if (*pcVar9 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UNK_1404d6fd5 = UNK_1404d6fd5 + cStackX_8;
  if (UNK_1404d6fd5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + bVar7;
  if (*pcVar9 != '\0') {
    *pcVar9 = *pcVar9 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(uVar13,cVar12) = *(char *)CONCAT71(uVar13,cVar12) + (char)(uVar8 >> 8);
  *pcVar9 = *pcVar9 + bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

