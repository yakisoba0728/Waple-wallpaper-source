// Function: FUN_1404c7f44
// Addr: 1404c7f44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7f4f) overlaps instruction at (ram,0x0001404c7f4e)
    */

void FUN_1404c7f44(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char cVar8;
  uint *in_RAX;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar9;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RBP;
  char *unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  bool bVar13;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  uRam0000000174517f4c = uRam0000000174517f4c & (uint)in_RAX;
  uVar5 = (uint)in_RAX | *in_RAX;
  pbVar6 = (byte *)(ulonglong)uVar5;
  pbVar9 = (byte *)(param_1 + -1);
  bVar2 = (byte)uVar5;
  if (pbVar9 == (byte *)0x0 || uVar5 == 0) {
    bVar13 = false;
    *pbVar6 = *pbVar6 ^ bVar2;
  }
  else {
    if (-1 < (int)uVar5) {
      pcVar7 = (char *)(unaff_RBP + 0x1901004c + (longlong)unaff_RDI * 2);
      *pcVar7 = *pcVar7 + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar13 = SCARRY1(cRam000000010b4c8afd,bVar2);
    cRam000000010b4c8afd = cRam000000010b4c8afd + bVar2;
    cVar3 = (char)pbVar9;
    if (cRam000000010b4c8afd == '\0' || bVar13 != cRam000000010b4c8afd < '\0') {
      *unaff_RSI = *unaff_RSI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar13 = SCARRY1(cVar10,unaff_BH);
    cVar10 = cVar10 + unaff_BH;
    if (cVar10 == '\0' || bVar13 != cVar10 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
    *pbVar9 = *pbVar9 + unaff_R12B;
    *pbVar6 = *pbVar6 + bVar2;
    bVar13 = SCARRY1(unaff_BL,cVar3);
    unaff_BL = unaff_BL + cVar3;
    bVar4 = (byte)(uVar5 >> 8);
    if (unaff_BL == '\0' || bVar13 != unaff_BL < '\0') {
      pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar2 + bVar4);
      bVar13 = false;
      *(undefined4 *)pbVar6 = *(undefined4 *)pbVar6;
    }
    else {
      bVar13 = SCARRY1(cVar10,unaff_BH);
      cVar10 = cVar10 + unaff_BH;
      if (cVar10 != '\0' && bVar13 == cVar10 < '\0') {
        unaff_RSI[(longlong)unaff_RDI * 2] = unaff_RSI[(longlong)unaff_RDI * 2] + unaff_BL;
        *pbVar9 = *pbVar9 + unaff_R12B;
        *pbVar6 = *pbVar6 + bVar2;
        pbVar6[0x7e] = pbVar6[0x7e] + cVar10;
        *pbVar6 = *pbVar6 ^ bVar2;
        return;
      }
      *pbVar6 = *pbVar6 + unaff_BL;
      pbVar1 = (byte *)(unaff_RSI + (longlong)unaff_RDI * 2 + 0x4c);
      bVar13 = CARRY1(*pbVar1,bVar4);
      *pbVar1 = *pbVar1 + bVar4;
    }
  }
  (pbVar6 + 0x4c7e6400)[(longlong)unaff_RSI] =
       ((pbVar6 + 0x4c7e6400)[(longlong)unaff_RSI] - (char)pbVar6) - bVar13;
  *pbVar9 = *pbVar9 + (char)((ulonglong)pbVar6 >> 8);
  uVar5 = (int)pbVar6 + 0x64050002;
  pcVar7 = (char *)(ulonglong)uVar5;
  cVar3 = (char)uVar5;
  (pcVar7 + 0x30843900)[(longlong)unaff_RSI] = (pcVar7 + 0x30843900)[(longlong)unaff_RSI] - cVar3;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar11;
  cVar8 = (char)(uVar5 >> 8);
  *pbVar9 = *pbVar9 + cVar8;
  *pcVar7 = *pcVar7 + cVar3;
  *pcVar7 = *pcVar7 + unaff_BL;
  *pbVar9 = *pbVar9 + unaff_BH;
  unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] = unaff_RSI[(longlong)unaff_RDI * 2 + 0x4c] + cVar11;
  *pbVar9 = *pbVar9 + cVar8;
  *pcVar7 = *pcVar7 + cVar3;
  bVar4 = cVar3 + cVar8;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar4);
  *(undefined4 *)pcVar7 = *(undefined4 *)pcVar7;
  (pcVar7 + 0x4c7e6400)[(longlong)unaff_RSI] = (pcVar7 + 0x4c7e6400)[(longlong)unaff_RSI] - bVar4;
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar4;
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + bVar4 + CARRY1(bVar2,bVar4);
  *pcVar7 = *pcVar7 + cVar10;
  LOCK();
  *unaff_RDI = *unaff_RDI & (uint)pbVar9;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

