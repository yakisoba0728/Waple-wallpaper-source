// Function: FUN_1404d6010
// Addr: 1404d6010
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6010(char *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  undefined2 uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined2 *in_RAX;
  byte bVar10;
  char unaff_BL;
  longlong unaff_RSI;
  byte unaff_R12B;
  undefined2 in_FPUControlWord;
  char unaff_retaddr;
  char cStackX_8;
  byte bVar2;
  longlong lVar8;
  char *pcVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = in_FPUControlWord;
  bVar5 = (char)in_RAX + unaff_BL;
  lVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  bVar6 = *param_4;
  *param_4 = *param_4 + unaff_R12B;
  pbVar4 = (byte *)(lVar8 * 2);
  bVar1 = *pbVar4;
  bVar2 = *pbVar4;
  *pbVar4 = bVar2 + bVar5 + CARRY1(bVar6,unaff_R12B);
  param_1[unaff_RSI] =
       param_1[unaff_RSI] + bVar10 +
       (CARRY1(bVar1,bVar5) || CARRY1(bVar2 + bVar5,CARRY1(bVar6,unaff_R12B)));
  uVar3 = SUB82(param_2,0);
  param_2[lVar8] = param_2[lVar8] | bVar10;
  uVar7 = in(uVar3);
  pcVar9 = (char *)(ulonglong)uVar7;
  *param_2 = *param_2 + (char)param_2;
  out(uVar3,(char)uVar7);
  *pcVar9 = *pcVar9 + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar9 = *pcVar9 + (char)uVar7;
  uVar7 = in(uVar3);
  pcVar9 = (char *)(ulonglong)uVar7;
  *param_2 = *param_2 + (char)param_2;
  bVar6 = (byte)uVar7;
  out(uVar3,bVar6);
  *pcVar9 = *pcVar9 + unaff_retaddr;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | bVar6;
  *pcVar9 = *pcVar9 + (char)param_1;
  if (*pcVar9 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + bVar6;
  if (*pcVar9 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  UNK_1404d6fd5 = UNK_1404d6fd5 + cStackX_8;
  if (UNK_1404d6fd5 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar9 = *pcVar9 + bVar6;
  if (*pcVar9 != '\0') {
    *pcVar9 = *pcVar9 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  *pcVar9 = *pcVar9 + bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

