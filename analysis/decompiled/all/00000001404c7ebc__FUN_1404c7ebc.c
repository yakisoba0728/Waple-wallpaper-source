// Function: FUN_1404c7ebc
// Addr: 1404c7ebc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7f50) overlaps instruction at (ram,0x0001404c7f4f)
    */

uint * FUN_1404c7ebc(byte *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char cVar6;
  uint *in_RAX;
  byte *pbVar7;
  char cVar8;
  char cVar9;
  undefined6 uVar10;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  char in_SF;
  bool bVar11;
  char in_OF;
  char *pcVar5;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar9 = (char)((ulonglong)param_2 >> 8);
  cVar8 = (char)param_2;
  bVar1 = (byte)in_RAX;
  cVar2 = (char)param_1;
  if (in_OF == in_SF) {
    cVar6 = *param_2;
    *param_2 = *param_2 + cVar9;
    if (SCARRY1(cVar6,cVar9) == *param_2 < '\0') {
      *(byte *)((longlong)in_RAX + 0x7e) = *(byte *)((longlong)in_RAX + 0x7e) + cVar8;
      *(byte *)in_RAX = (byte)*in_RAX ^ bVar1;
      return in_RAX;
    }
    pcVar5 = (char *)(unaff_RBP + 0x21004c + (longlong)unaff_RDI * 2);
    *pcVar5 = *pcVar5 + cVar2;
    *(byte *)in_RAX = (byte)*in_RAX + bVar1;
    pbVar7 = param_1 + -1;
    if (pbVar7 == (byte *)0x0 || (byte)*in_RAX == 0) {
      *(byte *)in_RAX = (byte)*in_RAX ^ bVar1;
      bVar11 = (char)(byte)*in_RAX < '\0';
code_r0x0001404c7ed1:
      cVar2 = (char)in_RAX;
      if (!bVar11) {
        pcVar5 = (char *)(unaff_RBP + 0x1901004c + (longlong)unaff_RDI * 2);
        *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar11 = SCARRY1(cRam000000010b4c8afd,cVar2);
      cRam000000010b4c8afd = cRam000000010b4c8afd + cVar2;
      cVar6 = (char)pbVar7;
      if (cRam000000010b4c8afd == '\0' || bVar11 != cRam000000010b4c8afd < '\0') {
        *unaff_RSI = *unaff_RSI + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar11 = SCARRY1(cVar8,unaff_BH);
      cVar8 = cVar8 + unaff_BH;
      if (cVar8 == '\0' || bVar11 != cVar8 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
      *pbVar7 = *pbVar7 + unaff_R12B;
      *(byte *)in_RAX = (byte)*in_RAX + cVar2;
      bVar11 = SCARRY1(unaff_BL,cVar6);
      unaff_BL = unaff_BL + cVar6;
      if (unaff_BL != '\0' && bVar11 == unaff_BL < '\0') {
        bVar11 = SCARRY1(cVar8,unaff_BH);
        cVar8 = cVar8 + unaff_BH;
        if (cVar8 != '\0' && bVar11 == cVar8 < '\0') {
          unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
          *pbVar7 = *pbVar7 + unaff_R12B;
          *(byte *)in_RAX = (byte)*in_RAX + cVar2;
code_r0x0001404c7f27:
          *(byte *)((longlong)in_RAX + 0x7e) = *(byte *)((longlong)in_RAX + 0x7e) + cVar8;
          *(byte *)in_RAX = (byte)*in_RAX ^ (byte)in_RAX;
          return in_RAX;
        }
        *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
        unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] =
             unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + (char)((ulonglong)in_RAX >> 8);
        param_1 = pbVar7;
        goto code_r0x0001404c7f57;
      }
code_r0x0001404c7f4b:
      in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                                (char)in_RAX + (char)((ulonglong)in_RAX >> 8));
      *in_RAX = *in_RAX;
    }
    else {
      uVar4 = (uint)in_RAX | *in_RAX;
      in_RAX = (uint *)(ulonglong)uVar4;
      bVar11 = (int)uVar4 < 0;
      pbVar7 = param_1 + -2;
      if (pbVar7 != (byte *)0x0 && uVar4 != 0) goto code_r0x0001404c7ed1;
      *(byte *)in_RAX = (byte)*in_RAX ^ (byte)uVar4;
    }
    *(byte *)((longlong)(in_RAX + 0x131f9900) + (longlong)unaff_RSI) =
         *(byte *)((longlong)(in_RAX + 0x131f9900) + (longlong)unaff_RSI) - (char)in_RAX;
    param_1 = pbVar7;
  }
  else {
    bVar11 = SCARRY1(cRam00000001904c8b29,bVar1);
    cRam00000001904c8b29 = cRam00000001904c8b29 + bVar1;
    if (cRam00000001904c8b29 == '\0' || bVar11 != cRam00000001904c8b29 < '\0')
    goto code_r0x0001404c7f27;
    bVar11 = SCARRY1(unaff_BL,cVar2);
    unaff_BL = unaff_BL + cVar2;
    if (unaff_BL != '\0' && bVar11 == unaff_BL < '\0') {
      uVar4 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar2;
      pbVar7 = param_1;
      if ((byte)*in_RAX != 0 && SCARRY1((byte)uVar4,cVar2) == (char)(byte)*in_RAX < '\0') {
        *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
        uVar4 = (uint)in_RAX + 0xf4050002;
        return (uint *)(ulonglong)(uVar4 | *(uint *)(ulonglong)uVar4);
      }
      goto code_r0x0001404c7f4b;
    }
    bVar11 = SCARRY1(unaff_BL,cVar2);
    unaff_BL = unaff_BL + cVar2;
    if (unaff_BL != '\0' && bVar11 == unaff_BL < '\0') {
      uVar4 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar2;
      if ((byte)*in_RAX != 0 && SCARRY1((byte)uVar4,cVar2) == (char)(byte)*in_RAX < '\0') {
        *param_1 = *param_1 + bVar1;
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
  uVar4 = (int)in_RAX + 0x64050002;
  in_RAX = (uint *)(ulonglong)uVar4;
  cVar2 = (char)uVar4;
  *(byte *)((longlong)(in_RAX + 0xc210e40) + (longlong)unaff_RSI) =
       *(byte *)((longlong)(in_RAX + 0xc210e40) + (longlong)unaff_RSI) - cVar2;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar9;
  cVar6 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar6;
  *(byte *)in_RAX = (byte)*in_RAX + cVar2;
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
  *param_1 = *param_1 + unaff_BH;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar9;
  *param_1 = *param_1 + cVar6;
  *(byte *)in_RAX = (byte)*in_RAX + cVar2;
code_r0x0001404c7f7f:
  bVar3 = (char)in_RAX + (char)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *(undefined4 *)pcVar5 = *(undefined4 *)pcVar5;
  (pcVar5 + 0x4c7e6400)[(longlong)unaff_RSI] = (pcVar5 + 0x4c7e6400)[(longlong)unaff_RSI] - bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  *(byte *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) + bVar3 + CARRY1(bVar1,bVar3);
  *pcVar5 = *pcVar5 + cVar8;
  LOCK();
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

