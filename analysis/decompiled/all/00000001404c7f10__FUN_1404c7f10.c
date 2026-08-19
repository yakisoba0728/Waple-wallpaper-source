// Function: FUN_1404c7f10
// Addr: 1404c7f10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7f50) overlaps instruction at (ram,0x0001404c7f4f)
    */

void FUN_1404c7f10(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  char cVar8;
  undefined8 in_RAX;
  undefined7 uVar9;
  char *pcVar6;
  char cVar10;
  char cVar11;
  undefined6 uVar12;
  char unaff_BL;
  char cVar13;
  char unaff_BH;
  longlong unaff_RSI;
  uint *unaff_RDI;
  char unaff_R12B;
  char in_CF;
  bool bVar14;
  byte *pbVar5;
  char *pcVar7;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  cVar10 = (char)param_2;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = ((char)in_RAX + -0x7e) - in_CF;
  pbVar5 = (byte *)CONCAT71(uVar9,bVar1);
  *param_1 = *param_1 + unaff_R12B;
  *pbVar5 = *pbVar5 + bVar1;
  cVar13 = unaff_BL + (char)param_1;
  cVar2 = (char)((ulonglong)in_RAX >> 8);
  if (cVar13 == '\0' || SCARRY1(unaff_BL,(char)param_1) != cVar13 < '\0') {
    cVar2 = bVar1 + cVar2;
    pbVar5 = (byte *)CONCAT71(uVar9,cVar2);
    *(undefined4 *)pbVar5 = *(undefined4 *)pbVar5;
    pbVar5[unaff_RSI + 0x4c7e6400] = pbVar5[unaff_RSI + 0x4c7e6400] - cVar2;
  }
  else {
    bVar14 = SCARRY1(cVar10,unaff_BH);
    cVar10 = cVar10 + unaff_BH;
    if (cVar10 != '\0' && bVar14 == cVar10 < '\0') {
      pcVar7 = (char *)(unaff_RSI + (longlong)unaff_RDI * 2);
      *pcVar7 = *pcVar7 + cVar13;
      *param_1 = *param_1 + unaff_R12B;
      *pbVar5 = *pbVar5 + bVar1;
      pbVar5[0x7e] = pbVar5[0x7e] + cVar10;
      *pbVar5 = *pbVar5 ^ bVar1;
      return;
    }
    *pbVar5 = *pbVar5 + cVar13;
    pcVar7 = (char *)(unaff_RSI + 0x4c + (longlong)unaff_RDI * 2);
    *pcVar7 = *pcVar7 + cVar2;
  }
  *param_1 = *param_1 + (char)((ulonglong)pbVar5 >> 8);
  uVar4 = (int)pbVar5 + 0x64050002;
  pcVar6 = (char *)(ulonglong)uVar4;
  cVar2 = (char)uVar4;
  pcVar6[unaff_RSI + 0x30843900] = pcVar6[unaff_RSI + 0x30843900] - cVar2;
  pcVar7 = (char *)(unaff_RSI + 0x4c + (longlong)unaff_RDI * 2);
  *pcVar7 = *pcVar7 + cVar11;
  cVar8 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar8;
  *pcVar6 = *pcVar6 + cVar2;
  *pcVar6 = *pcVar6 + cVar13;
  *param_1 = *param_1 + unaff_BH;
  pcVar7 = (char *)(unaff_RSI + 0x4c + (longlong)unaff_RDI * 2);
  *pcVar7 = *pcVar7 + cVar11;
  *param_1 = *param_1 + cVar8;
  *pcVar6 = *pcVar6 + cVar2;
  bVar3 = cVar2 + cVar8;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar3);
  *(undefined4 *)pcVar7 = *(undefined4 *)pcVar7;
  pcVar7[unaff_RSI + 0x4c7e6400] = pcVar7[unaff_RSI + 0x4c7e6400] - bVar3;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar3;
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,cVar10)) + bVar3 + CARRY1(bVar1,bVar3);
  *pcVar7 = *pcVar7 + cVar10;
  LOCK();
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

