// Function: FUN_1404c7e88
// Addr: 1404c7e88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7f50) overlaps instruction at (ram,0x0001404c7f4f)
    */

uint * FUN_1404c7e88(byte *param_1,char *param_2)

{
  byte bVar1;
  uint3 uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  byte *pbVar8;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  char in_SF;
  char in_OF;
  bool bVar12;
  char *pcVar7;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  cVar4 = (char)param_1;
  if (in_OF == in_SF) {
    cVar3 = *param_2;
    *param_2 = *param_2 + cVar10;
    if (SCARRY1(cVar3,cVar10) != *param_2 < '\0') {
      pcVar7 = (char *)(unaff_RBP + 0x421004c + (longlong)unaff_RDI * 2);
      *pcVar7 = *pcVar7 + cVar4;
      uVar6 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + (byte)*in_RAX + -0x1c) +
              0x307d3200;
      pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x7d);
      *pcVar7 = *pcVar7 + (byte)uVar6;
      *(byte *)(ulonglong)uVar6 = *(byte *)(ulonglong)uVar6 ^ (byte)uVar6;
      uVar2 = (uint3)(uVar6 >> 8);
      pbVar8 = (byte *)CONCAT71((uint7)uVar2,0x7d);
      *param_1 = *param_1 + unaff_R12B;
      *pbVar8 = *pbVar8 + 0x7d;
      cVar3 = *param_2;
      *param_2 = *param_2 + cVar10;
      if (SCARRY1(cVar3,cVar10) == *param_2 < '\0') {
        if (param_1 == (byte *)0x1 || *param_2 == '\0') {
          *unaff_RSI = *unaff_RSI >> 1 | *unaff_RSI << 7;
          pbVar8 = pbVar8 + (longlong)unaff_RSI * 2;
          *pbVar8 = *pbVar8 >> 3 | *pbVar8 << 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        in_RAX = (uint *)(ulonglong)CONCAT31(uVar2,0x71);
        goto code_r0x0001404c7ef3;
      }
      pcVar7 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x7d);
      *pcVar7 = *pcVar7 + '}';
      *pbVar8 = *pbVar8 ^ 0x7d;
      in_RAX = (uint *)(ulonglong)CONCAT31(uVar2,0x7d);
      *param_1 = *param_1 + unaff_R12B;
      *(byte *)in_RAX = (byte)*in_RAX + 0x7d;
      goto code_r0x0001404c7ebb;
    }
code_r0x0001404c7ebf:
    cVar3 = *param_2;
    *param_2 = *param_2 + cVar10;
    if (SCARRY1(cVar3,cVar10) == *param_2 < '\0') {
code_r0x0001404c7ef3:
      *(byte *)((longlong)in_RAX + 0x7e) = *(byte *)((longlong)in_RAX + 0x7e) + cVar9;
      *(byte *)in_RAX = (byte)*in_RAX ^ (byte)in_RAX;
      return in_RAX;
    }
    pcVar7 = (char *)(unaff_RBP + 0x21004c + (longlong)unaff_RDI * 2);
    *pcVar7 = *pcVar7 + cVar4;
    *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
    pbVar8 = param_1 + -1;
    if (pbVar8 == (byte *)0x0 || (byte)*in_RAX == 0) {
      *(byte *)in_RAX = (byte)*in_RAX ^ (byte)in_RAX;
      bVar12 = (char)(byte)*in_RAX < '\0';
code_r0x0001404c7ed1:
      cVar4 = (char)in_RAX;
      if (!bVar12) {
        pcVar7 = (char *)(unaff_RBP + 0x1901004c + (longlong)unaff_RDI * 2);
        *pcVar7 = *pcVar7 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar12 = SCARRY1(cRam000000010b4c8afd,cVar4);
      cRam000000010b4c8afd = cRam000000010b4c8afd + cVar4;
      cVar3 = (char)pbVar8;
      if (cRam000000010b4c8afd == '\0' || bVar12 != cRam000000010b4c8afd < '\0') {
        *unaff_RSI = *unaff_RSI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar12 = SCARRY1(cVar9,unaff_BH);
      cVar9 = cVar9 + unaff_BH;
      if (cVar9 == '\0' || bVar12 != cVar9 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
      *pbVar8 = *pbVar8 + unaff_R12B;
      *(byte *)in_RAX = (byte)*in_RAX + cVar4;
      bVar12 = SCARRY1(unaff_BL,cVar3);
      unaff_BL = unaff_BL + cVar3;
      if (unaff_BL != '\0' && bVar12 == unaff_BL < '\0') {
        bVar12 = SCARRY1(cVar9,unaff_BH);
        cVar9 = cVar9 + unaff_BH;
        if (cVar9 != '\0' && bVar12 == cVar9 < '\0') {
          unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
          *pbVar8 = *pbVar8 + unaff_R12B;
          *(byte *)in_RAX = (byte)*in_RAX + cVar4;
code_r0x0001404c7f27:
          *(byte *)((longlong)in_RAX + 0x7e) = *(byte *)((longlong)in_RAX + 0x7e) + cVar9;
          *(byte *)in_RAX = (byte)*in_RAX ^ (byte)in_RAX;
          return in_RAX;
        }
        *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
        unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] =
             unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + (char)((ulonglong)in_RAX >> 8);
        param_1 = pbVar8;
        goto code_r0x0001404c7f57;
      }
code_r0x0001404c7f4b:
      in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                (char)in_RAX + (char)((ulonglong)in_RAX >> 8));
      *in_RAX = *in_RAX;
    }
    else {
      uVar6 = (uint)in_RAX | *in_RAX;
      in_RAX = (uint *)(ulonglong)uVar6;
      bVar12 = (int)uVar6 < 0;
      pbVar8 = param_1 + -2;
      if (pbVar8 != (byte *)0x0 && uVar6 != 0) goto code_r0x0001404c7ed1;
      *(byte *)in_RAX = (byte)*in_RAX ^ (byte)uVar6;
    }
    *(byte *)((longlong)(in_RAX + 0x131f9900) + (longlong)unaff_RSI) =
         *(byte *)((longlong)(in_RAX + 0x131f9900) + (longlong)unaff_RSI) - (char)in_RAX;
    param_1 = pbVar8;
  }
  else {
code_r0x0001404c7ebb:
    bVar12 = SCARRY1(unaff_BL,unaff_BH);
    unaff_BL = unaff_BL + unaff_BH;
    if (bVar12 == unaff_BL < '\0') goto code_r0x0001404c7ebf;
    cVar3 = (char)in_RAX;
    bVar12 = SCARRY1(cRam00000001904c8b29,cVar3);
    cRam00000001904c8b29 = cRam00000001904c8b29 + cVar3;
    if (cRam00000001904c8b29 == '\0' || bVar12 != cRam00000001904c8b29 < '\0')
    goto code_r0x0001404c7f27;
    bVar12 = SCARRY1(unaff_BL,cVar4);
    unaff_BL = unaff_BL + cVar4;
    if (unaff_BL != '\0' && bVar12 == unaff_BL < '\0') {
      uVar6 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar4;
      pbVar8 = param_1;
      if ((byte)*in_RAX != 0 && SCARRY1((byte)uVar6,cVar4) == (char)(byte)*in_RAX < '\0') {
        *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
        uVar6 = (int)in_RAX + 0xf4050002;
        return (uint *)(ulonglong)(uVar6 | *(uint *)(ulonglong)uVar6);
      }
      goto code_r0x0001404c7f4b;
    }
    bVar12 = SCARRY1(unaff_BL,cVar4);
    unaff_BL = unaff_BL + cVar4;
    if (unaff_BL != '\0' && bVar12 == unaff_BL < '\0') {
      uVar6 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar4;
      if ((byte)*in_RAX != 0 && SCARRY1((byte)uVar6,cVar4) == (char)(byte)*in_RAX < '\0') {
        *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404c7f7f;
    }
    *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
    *param_1 = *param_1 + unaff_BH;
  }
code_r0x0001404c7f57:
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar6 = (int)in_RAX + 0x64050002;
  in_RAX = (uint *)(ulonglong)uVar6;
  cVar4 = (char)uVar6;
  *(byte *)((longlong)(in_RAX + 0xc210e40) + (longlong)unaff_RSI) =
       *(byte *)((longlong)(in_RAX + 0xc210e40) + (longlong)unaff_RSI) - cVar4;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar10;
  cVar3 = (char)(uVar6 >> 8);
  *param_1 = *param_1 + cVar3;
  *(byte *)in_RAX = (byte)*in_RAX + cVar4;
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
  *param_1 = *param_1 + unaff_BH;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar10;
  *param_1 = *param_1 + cVar3;
  *(byte *)in_RAX = (byte)*in_RAX + cVar4;
code_r0x0001404c7f7f:
  bVar5 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar7 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar5);
  *(undefined4 *)pcVar7 = *(undefined4 *)pcVar7;
  (pcVar7 + 0x4c7e6400)[(longlong)unaff_RSI] = (pcVar7 + 0x4c7e6400)[(longlong)unaff_RSI] - bVar5;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar5;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) + bVar5 + CARRY1(bVar1,bVar5);
  *pcVar7 = *pcVar7 + cVar9;
  LOCK();
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

