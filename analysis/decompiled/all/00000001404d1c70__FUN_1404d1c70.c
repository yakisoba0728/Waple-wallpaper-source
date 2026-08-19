// Function: FUN_1404d1c70
// Addr: 1404d1c70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d1cd3) overlaps instruction at (ram,0x0001404d1cd2)
    */

void FUN_1404d1c70(byte *param_1,byte *param_2,char param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar7;
  uint *in_RAX;
  char *pcVar6;
  int iVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_EBP;
  undefined4 unaff_0000002c;
  uint *unaff_RSI;
  byte *unaff_RDI;
  longlong in_R10;
  bool bVar12;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3c) = in_ST0;
  pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4d +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar6 = *pcVar6 + unaff_BH;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar7;
  bVar2 = (byte)in_RAX;
  *param_2 = *param_2 | bVar2;
  *(char *)in_RAX = (char)*in_RAX + (char)param_1;
  iVar8 = (int)param_1;
  if ((char)*in_RAX == '\0') {
    *in_RAX = *in_RAX & (uint)in_RAX;
code_r0x0001404d1c97:
    pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d +
                     CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *pcVar6 = *pcVar6 + bVar9;
    uVar4 = *in_RAX;
    *(byte *)in_RAX = (char)*in_RAX + bVar2;
    if (SCARRY1((char)uVar4,bVar2)) {
      pcVar6 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + 0x16d80035 +
                       (longlong)unaff_RSI * 4);
      *pcVar6 = *pcVar6 + bVar2 + 0x34;
      *param_1 = *param_1;
      uVar4 = (uint)in_RAX + 0x4050736;
      bVar2 = (byte)uVar4;
      *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | bVar2;
      uVar5 = uVar4 ^ 0x4d1c4800;
      *param_1 = *param_1 + (char)(uVar5 >> 8);
      *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar2;
      pcVar6 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + -0x4d15ffcb +
                       (longlong)unaff_RSI * 4);
      *pcVar6 = *pcVar6 + bVar2;
      pcVar6 = (char *)(ulonglong)uVar4;
      cVar3 = (char)(uVar4 >> 8);
      *param_1 = *param_1 + cVar3;
      *pcVar6 = *pcVar6 + bVar2;
      *pcVar6 = *pcVar6 + cVar3;
      pcVar6 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,0x35)) + 0x16d80035 +
                       (longlong)unaff_RSI * 4);
      *pcVar6 = *pcVar6 + bVar2;
      *param_1 = *param_1 + unaff_BL;
      *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - iVar8;
      *unaff_RDI = *unaff_RDI + 0x35;
      *unaff_RDI = *unaff_RDI + 0x35;
      pcVar6 = (char *)(ulonglong)((uVar4 ^ 0xd1) + iVar8);
      *pcVar6 = *pcVar6 + '5';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if ((POPCOUNT(unaff_BL * '\x02') & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_BL = unaff_BL * '\x02' + bVar7;
    if ((POPCOUNT(unaff_BL) & 1U) == 0) {
      pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004d +
                       CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
      *pcVar6 = *pcVar6 + bVar9;
      *(byte *)in_RAX = (char)*in_RAX + bVar2;
      *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3c) = in_ST1;
      unaff_BL = unaff_BL + bVar7;
      in_ST1 = in_ST2;
      if ((POPCOUNT(unaff_BL) & 1U) != 0) {
        param_1[in_R10] = param_1[in_R10] + param_3;
        goto code_r0x0001404d1cd7;
      }
      goto code_r0x0001404d1c97;
    }
  }
  *(unkbyte10 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3c) = in_ST1;
  pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4d +
                   CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
  *pcVar6 = *pcVar6 + unaff_BH;
  bVar10 = *param_1;
  *param_1 = *param_1 + bVar9;
  *(uint *)param_2 = (*(int *)param_2 - iVar8) - (uint)CARRY1(bVar10,bVar9);
  *param_1 = *param_1 + unaff_BL;
  *(int *)unaff_RDI = *(int *)unaff_RDI + unaff_EBP;
  cRam000000014a2d28a9 = cRam000000014a2d28a9 + (char)param_1;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  bVar9 = bVar9 + (char)in_RAX[0x14];
  bVar10 = 0x2b;
  param_1 = (byte *)(ulonglong)
                    ((iVar8 - *(int *)CONCAT44(unaff_0000002c,unaff_EBP)) -
                    (uint)CARRY1(bVar7,unaff_BH));
  bVar12 = bRam00000001534d69ee < bVar2;
  bRam00000001534d69ee = bRam00000001534d69ee - bVar2;
  cVar3 = (bVar2 + 0xb3) - bVar12;
  in_RAX = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11(bVar7 + unaff_BH,bVar2)) >> 8),cVar3);
  param_1[CONCAT62(uVar11,CONCAT11(0x2b,bVar9))] =
       param_1[CONCAT62(uVar11,CONCAT11(0x2b,bVar9))] + cVar3;
code_r0x0001404d1cd7:
  puVar1 = (undefined1 *)(CONCAT44(unaff_0000002c,unaff_EBP) + 0x39);
  *puVar1 = *puVar1;
  *(uint *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(int *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) << 0x1a |
       *(uint *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) >> 6;
  *(byte *)((longlong)in_RAX + 0x39) = *(byte *)((longlong)in_RAX + 0x39) & bVar10;
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)in_RAX + 0x4e506) = *(char *)((longlong)in_RAX + 0x4e506) + cVar3;
  *unaff_RSI = *unaff_RSI | (uint)in_RAX;
  pcVar6 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'e') | 2);
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

