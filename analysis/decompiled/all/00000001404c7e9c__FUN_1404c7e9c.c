// Function: FUN_1404c7e9c
// Addr: 1404c7e9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7f50) overlaps instruction at (ram,0x0001404c7f4f)
    */

uint * FUN_1404c7e9c(byte *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  byte *in_RAX;
  undefined7 uVar7;
  uint *puVar4;
  byte *pbVar8;
  char cVar9;
  char cVar10;
  undefined6 uVar11;
  char unaff_BL;
  char cVar12;
  byte unaff_BH;
  byte bVar13;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  bool bVar14;
  char *pcVar5;
  
  uVar11 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar10 = (char)((ulonglong)param_2 >> 8);
  cVar9 = (char)param_2;
  bVar13 = unaff_BH ^ *(byte *)(unaff_RBP + 0x30);
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar13,unaff_BL)) + 0x7d);
  *pcVar5 = *pcVar5 + (byte)in_RAX;
  *in_RAX = *in_RAX ^ (byte)in_RAX;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pbVar8 = (byte *)CONCAT71(uVar7,0x7d);
  *param_1 = *param_1 + unaff_R12B;
  *pbVar8 = *pbVar8 + 0x7d;
  cVar1 = *param_2;
  *param_2 = *param_2 + cVar10;
  if (SCARRY1(cVar1,cVar10) == *param_2 < '\0') {
    if (param_1 == (byte *)0x1 || *param_2 == '\0') {
      *unaff_RSI = *unaff_RSI >> 1 | *unaff_RSI << 7;
      pbVar8 = pbVar8 + (longlong)unaff_RSI * 2;
      *pbVar8 = *pbVar8 >> 3 | *pbVar8 << 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    puVar4 = (uint *)CONCAT71(uVar7,0x71);
code_r0x0001404c7ef3:
    *(byte *)((longlong)puVar4 + 0x7e) = *(byte *)((longlong)puVar4 + 0x7e) + cVar9;
    *(byte *)puVar4 = (byte)*puVar4 ^ (byte)puVar4;
    return puVar4;
  }
  pcVar5 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(bVar13,unaff_BL)) + 0x7d);
  *pcVar5 = *pcVar5 + '}';
  *pbVar8 = *pbVar8 ^ 0x7d;
  puVar4 = (uint *)CONCAT71(uVar7,0x7d);
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar4 = (byte)*puVar4 + 0x7d;
  cVar1 = cRam00000001904c8b29;
  cVar12 = unaff_BL + bVar13;
  cVar6 = (char)param_1;
  if (SCARRY1(unaff_BL,bVar13) == cVar12 < '\0') {
    cVar1 = *param_2;
    *param_2 = *param_2 + cVar10;
    if (SCARRY1(cVar1,cVar10) == *param_2 < '\0') goto code_r0x0001404c7ef3;
    pcVar5 = (char *)(unaff_RBP + 0x21004c + (longlong)unaff_RDI * 2);
    *pcVar5 = *pcVar5 + cVar6;
    *(byte *)puVar4 = (byte)*puVar4 + 0x7d;
    pbVar8 = param_1 + -1;
    if (pbVar8 == (byte *)0x0 || (byte)*puVar4 == 0) {
      *(byte *)puVar4 = (byte)*puVar4 ^ 0x7d;
      bVar14 = (char)(byte)*puVar4 < '\0';
code_r0x0001404c7ed1:
      cVar1 = (char)puVar4;
      if (!bVar14) {
        pcVar5 = (char *)(unaff_RBP + 0x1901004c + (longlong)unaff_RDI * 2);
        *pcVar5 = *pcVar5 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar14 = SCARRY1(cRam000000010b4c8afd,cVar1);
      cRam000000010b4c8afd = cRam000000010b4c8afd + cVar1;
      cVar6 = (char)pbVar8;
      if (cRam000000010b4c8afd == '\0' || bVar14 != cRam000000010b4c8afd < '\0') {
        *unaff_RSI = *unaff_RSI + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar14 = SCARRY1(cVar9,bVar13);
      cVar9 = cVar9 + bVar13;
      if (cVar9 == '\0' || bVar14 != cVar9 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + cVar12;
      *pbVar8 = *pbVar8 + unaff_R12B;
      *(byte *)puVar4 = (byte)*puVar4 + cVar1;
      bVar14 = SCARRY1(cVar12,cVar6);
      cVar12 = cVar12 + cVar6;
      if (cVar12 == '\0' || bVar14 != cVar12 < '\0') goto code_r0x0001404c7f4b;
      bVar14 = SCARRY1(cVar9,bVar13);
      cVar9 = cVar9 + bVar13;
      if (cVar9 != '\0' && bVar14 == cVar9 < '\0') {
        unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + cVar12;
        *pbVar8 = *pbVar8 + unaff_R12B;
        *(byte *)puVar4 = (byte)*puVar4 + cVar1;
code_r0x0001404c7f27:
        *(byte *)((longlong)puVar4 + 0x7e) = *(byte *)((longlong)puVar4 + 0x7e) + cVar9;
        *(byte *)puVar4 = (byte)*puVar4 ^ (byte)puVar4;
        return puVar4;
      }
      *(byte *)puVar4 = (byte)*puVar4 + cVar12;
      unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] =
           unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + (char)((ulonglong)puVar4 >> 8);
      param_1 = pbVar8;
    }
    else {
      uVar3 = (uint)puVar4 | *puVar4;
      puVar4 = (uint *)(ulonglong)uVar3;
      bVar14 = (int)uVar3 < 0;
      pbVar8 = param_1 + -2;
      if (pbVar8 != (byte *)0x0 && uVar3 != 0) goto code_r0x0001404c7ed1;
      *(byte *)puVar4 = (byte)*puVar4 ^ (byte)uVar3;
code_r0x0001404c7f50:
      *(byte *)((longlong)(puVar4 + 0x131f9900) + (longlong)unaff_RSI) =
           *(byte *)((longlong)(puVar4 + 0x131f9900) + (longlong)unaff_RSI) - (char)puVar4;
      param_1 = pbVar8;
    }
  }
  else {
    cRam00000001904c8b29 = cRam00000001904c8b29 + '}';
    if (cRam00000001904c8b29 == '\0' || cVar1 < -0x7d) goto code_r0x0001404c7f27;
    bVar14 = SCARRY1(cVar12,cVar6);
    cVar12 = cVar12 + cVar6;
    if (cVar12 != '\0' && bVar14 == cVar12 < '\0') {
      uVar3 = *puVar4;
      *(byte *)puVar4 = (byte)*puVar4 + cVar6;
      pbVar8 = param_1;
      if ((byte)*puVar4 != 0 && SCARRY1((byte)uVar3,cVar6) == (char)(byte)*puVar4 < '\0') {
        *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
        uVar3 = (uint)puVar4 + 0xf4050002;
        return (uint *)(ulonglong)(uVar3 | *(uint *)(ulonglong)uVar3);
      }
code_r0x0001404c7f4b:
      puVar4 = (uint *)CONCAT71((int7)((ulonglong)puVar4 >> 8),
                                (char)puVar4 + (char)((ulonglong)puVar4 >> 8));
      *puVar4 = *puVar4;
      goto code_r0x0001404c7f50;
    }
    bVar14 = SCARRY1(cVar12,cVar6);
    cVar12 = cVar12 + cVar6;
    if (cVar12 != '\0' && bVar14 == cVar12 < '\0') {
      uVar3 = *puVar4;
      *(byte *)puVar4 = (byte)*puVar4 + cVar6;
      if ((byte)*puVar4 != 0 && SCARRY1((byte)uVar3,cVar6) == (char)(byte)*puVar4 < '\0') {
        *param_1 = *param_1 + 0x7d;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404c7f7f;
    }
    *(byte *)puVar4 = (byte)*puVar4 + cVar12;
    *param_1 = *param_1 + bVar13;
  }
  *param_1 = *param_1 + (char)((ulonglong)puVar4 >> 8);
  uVar3 = (int)puVar4 + 0x64050002;
  puVar4 = (uint *)(ulonglong)uVar3;
  cVar1 = (char)uVar3;
  *(byte *)((longlong)(puVar4 + 0xc210e40) + (longlong)unaff_RSI) =
       *(byte *)((longlong)(puVar4 + 0xc210e40) + (longlong)unaff_RSI) - cVar1;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar10;
  cVar6 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar6;
  *(byte *)puVar4 = (byte)*puVar4 + cVar1;
  *(byte *)puVar4 = (byte)*puVar4 + cVar12;
  *param_1 = *param_1 + bVar13;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar10;
  *param_1 = *param_1 + cVar6;
  *(byte *)puVar4 = (byte)*puVar4 + cVar1;
code_r0x0001404c7f7f:
  bVar2 = (char)puVar4 + (char)((ulonglong)puVar4 >> 8);
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)puVar4 >> 8),bVar2);
  *(undefined4 *)pcVar5 = *(undefined4 *)pcVar5;
  (pcVar5 + 0x4c7e6400)[(longlong)unaff_RSI] = (pcVar5 + 0x4c7e6400)[(longlong)unaff_RSI] - bVar2;
  bVar13 = *param_1;
  *param_1 = *param_1 + bVar2;
  *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(cVar10,cVar9)) + bVar2 + CARRY1(bVar13,bVar2);
  *pcVar5 = *pcVar5 + cVar9;
  LOCK();
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

