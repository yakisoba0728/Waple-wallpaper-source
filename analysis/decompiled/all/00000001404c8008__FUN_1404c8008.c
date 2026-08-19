// Function: FUN_1404c8008
// Addr: 1404c8008
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8008(byte *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar8;
  byte *in_RAX;
  undefined7 uVar9;
  char *pcVar10;
  char cVar11;
  undefined6 uVar12;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  char in_CF;
  byte *pbVar6;
  char *pcVar7;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)param_2;
  param_2[-0x75ccffd0] = param_2[-0x75ccffd0] + (char)param_1 + in_CF;
  *in_RAX = *in_RAX ^ (byte)in_RAX;
  *(byte *)(unaff_RDI + 0x4c) = *(byte *)(unaff_RDI + 0x4c) & unaff_BH;
  bVar3 = *param_1;
  bVar8 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar8;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX + *unaff_RSI + CARRY1(bVar3,bVar8);
  pbVar6 = (byte *)CONCAT71(uVar9,bVar3);
  *param_2 = *param_2 + cVar11;
  if (*param_2 != '\0') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar1 = *pbVar6;
  *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar3;
  *pbVar6 = *pbVar6 ^ bVar3;
  bVar4 = bVar3 + 0x81;
  pbVar6 = (byte *)CONCAT71(uVar9,bVar4);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + bVar4;
  param_1[CONCAT62(uVar12,CONCAT11(bVar1,cVar11))] =
       param_1[CONCAT62(uVar12,CONCAT11(bVar1,cVar11))] + bVar1;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar8;
  pcVar10 = (char *)(ulonglong)
                    ((uint)param_1 ^
                    *(uint *)(CONCAT62(uVar12,CONCAT11(bVar1,cVar11)) + -0x75b8ffd0));
  *pbVar6 = *pbVar6 ^ bVar4;
  bVar4 = bVar3 + 2;
  pbVar6 = (byte *)CONCAT71(uVar9,bVar4);
  *pcVar10 = *pcVar10 + unaff_R12B;
  *pbVar6 = *pbVar6 + bVar4;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + bVar1;
  *(char *)(unaff_RDI + -0x76) = *(char *)(unaff_RDI + -0x76) + bVar4;
  *pbVar6 = *pbVar6 ^ bVar4;
  cVar5 = bVar3 + 0x83;
  pcVar7 = (char *)CONCAT71(uVar9,cVar5);
  *pcVar10 = *pcVar10 + unaff_R12B;
  *pcVar7 = *pcVar7 + cVar5;
  *pcVar7 = *pcVar7 + cVar11;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + *pcVar7;
  cVar2 = *pcVar7;
  cVar11 = *pcVar7;
  *pcVar7 = *pcVar7 + bVar8;
  if (*pcVar7 != '\0' && SCARRY1(cVar11,bVar8) == *pcVar7 < '\0') {
    *pcVar10 = *pcVar10 + bVar8;
    *pcVar7 = *pcVar7 + cVar5;
    *pcVar10 = *pcVar10 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar10 = *pcVar10 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

