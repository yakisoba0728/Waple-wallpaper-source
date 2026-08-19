// Function: FUN_1404d1c80
// Addr: 1404d1c80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1cd3) overlaps instruction at (ram,0x0001404d1cd2)
    */

void FUN_1404d1c80(byte *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  char cVar7;
  char *in_RAX;
  char *pcVar5;
  int iVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  char unaff_BL;
  char cVar12;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint *unaff_RSI;
  byte *unaff_RDI;
  longlong in_R10;
  bool bVar13;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3c) = in_ST0;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  cVar12 = unaff_BL + bVar6;
  bVar2 = (byte)in_RAX;
  iVar8 = (int)param_1;
  if ((POPCOUNT(cVar12) & 1U) == 0) {
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) + 0x21004d +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)));
    *pcVar5 = *pcVar5 + bVar9;
    *in_RAX = *in_RAX + bVar2;
    *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) + 0x3c) = in_ST1;
    cVar12 = cVar12 + bVar6;
    if ((POPCOUNT(cVar12) & 1U) != 0) {
      param_1[in_R10] = param_1[in_R10] + param_3;
      goto code_r0x0001404d1cd7;
    }
    pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) + 0x21004d +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)));
    *pcVar5 = *pcVar5 + bVar9;
    cVar7 = *in_RAX;
    *in_RAX = *in_RAX + bVar2;
    in_ST1 = in_ST2;
    if (SCARRY1(cVar7,bVar2)) {
      pcVar5 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + 0x16d80035 +
                       (longlong)unaff_RSI * 4);
      *pcVar5 = *pcVar5 + bVar2 + 0x34;
      *param_1 = *param_1;
      uVar3 = (int)in_RAX + 0x4050736;
      bVar2 = (byte)uVar3;
      *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | bVar2;
      uVar4 = uVar3 ^ 0x4d1c4800;
      *param_1 = *param_1 + (char)(uVar4 >> 8);
      *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + bVar2;
      pcVar5 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + -0x4d15ffcb +
                       (longlong)unaff_RSI * 4);
      *pcVar5 = *pcVar5 + bVar2;
      pcVar5 = (char *)(ulonglong)uVar3;
      cVar7 = (char)(uVar3 >> 8);
      *param_1 = *param_1 + cVar7;
      *pcVar5 = *pcVar5 + bVar2;
      *pcVar5 = *pcVar5 + cVar7;
      pcVar5 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + 0x16d80035 +
                       (longlong)unaff_RSI * 4);
      *pcVar5 = *pcVar5 + bVar2;
      *param_1 = *param_1 + cVar12;
      *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) =
           *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) - iVar8;
      *unaff_RDI = *unaff_RDI + 0x35;
      *unaff_RDI = *unaff_RDI + 0x35;
      pcVar5 = (char *)(ulonglong)((uVar3 ^ 0xd1) + iVar8);
      *pcVar5 = *pcVar5 + '5';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) + 0x3c) = in_ST1;
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)) + 0x4d +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar12)));
  *pcVar5 = *pcVar5 + unaff_BH;
  bVar10 = *param_1;
  *param_1 = *param_1 + bVar9;
  *param_2 = (*param_2 - iVar8) - (uint)CARRY1(bVar10,bVar9);
  *param_1 = *param_1 + cVar12;
  *(int *)unaff_RDI = *(int *)unaff_RDI + unaff_EBP;
  cRam000000014a2d28a9 = cRam000000014a2d28a9 + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar9 = bVar9 + in_RAX[0x50];
  bVar10 = 0x2b;
  param_1 = (byte *)(ulonglong)
                    ((iVar8 - *(int *)CONCAT44(unaff_0000002c,unaff_EBP)) -
                    (uint)CARRY1(bVar6,unaff_BH));
  bVar13 = bRam00000001534d69ee < bVar2;
  bRam00000001534d69ee = bRam00000001534d69ee - bVar2;
  cVar12 = (bVar2 + 0xb3) - bVar13;
  in_RAX = (char *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11(bVar6 + unaff_BH,bVar2)) >> 8),cVar12);
  param_1[CONCAT62(uVar11,CONCAT11(0x2b,bVar9))] =
       param_1[CONCAT62(uVar11,CONCAT11(0x2b,bVar9))] + cVar12;
code_r0x0001404d1cd7:
  puVar1 = (undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x39);
  *puVar1 = *puVar1;
  *(uint *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) << 0x1a |
       *(uint *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) >> 6;
  in_RAX[0x39] = in_RAX[0x39] & bVar10;
  cVar12 = (char)((ulonglong)in_RAX >> 8);
  in_RAX[0x4e506] = in_RAX[0x4e506] + cVar12;
  *unaff_RSI = *unaff_RSI | (uint)in_RAX;
  pcVar5 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'e') | 2);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *param_1 = *param_1 + cVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

