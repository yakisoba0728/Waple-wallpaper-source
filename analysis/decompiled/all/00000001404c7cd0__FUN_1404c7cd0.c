// Function: FUN_1404c7cd0
// Addr: 1404c7cd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7cd0(char *param_1,undefined2 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char cVar7;
  byte *pbVar6;
  char cVar8;
  char cVar9;
  char unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RDI;
  bool in_PF;
  bool bVar10;
  
  pbVar6 = (byte *)(ulonglong)uRamd400313313003132;
  cVar7 = (char)uRamd400313313003132;
  cVar9 = (char)(uRamd400313313003132 >> 8);
  if (in_PF) {
    *param_1 = *param_1 + cVar9;
    *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar10 = SCARRY1(cRam00000000e04c8511,cVar7);
  cRam00000000e04c8511 = cRam00000000e04c8511 + cVar7;
  cVar8 = (char)param_2;
  if (bVar10) {
    pbVar1 = pbVar6 + -0x2fffcf90;
    bVar10 = SCARRY1(*pbVar1,cVar9);
    *pbVar1 = *pbVar1 + cVar9;
  }
  else {
    cVar3 = cVar7 + cVar8;
    if (!SCARRY1(cVar7,cVar8)) {
      pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x4c + unaff_RDI * 2);
      *pcVar2 = *pcVar2 + cVar3;
      *param_1 = *param_1 + cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar10 = SCARRY1(cVar3,cVar8);
    pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uRamd400313313003132 >> 8),cVar3 + cVar8);
  }
  bVar4 = (byte)pbVar6;
  if (!bVar10) {
    pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x4c + unaff_RDI * 2);
    *pcVar2 = *pcVar2 + bVar4;
    *param_1 = *param_1 + unaff_BL;
    uVar5 = (uint)pbVar6 & 0x1170009;
    *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 - (char)uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar7 = (char)((ulonglong)pbVar6 >> 8);
  cVar9 = (char)((ushort)param_2 >> 8);
  cVar8 = cVar8 + cVar7;
  if (cVar8 == '\0') {
    pbVar6[0x7a] = pbVar6[0x7a] + cVar9;
    *pbVar6 = *pbVar6 ^ bVar4;
    in(CONCAT11(cVar9,cVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x21004c + unaff_RDI * 2);
  *pcVar2 = *pcVar2 + unaff_BL;
  *pbVar6 = *pbVar6 + bVar4;
  pcVar2 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30);
  *pcVar2 = *pcVar2 << 1;
  cVar8 = cVar8 + cVar7;
  if (cVar8 != '\0') {
    pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x521004c + unaff_RDI * 2);
    *pcVar2 = *pcVar2 + unaff_BL;
    uVar5 = (int)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar4 + *pbVar6) + 0x40000664;
    pbVar6 = (byte *)(ulonglong)uVar5;
    if ((POPCOUNT(uVar5 & 0xff) & 1U) != 0) {
      pbVar6[0x7a] = pbVar6[0x7a] + cVar9;
      *pbVar6 = *pbVar6 ^ (byte)uVar5;
      in(CONCAT11(cVar9,cVar8));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar6 = *pbVar6 + (byte)uVar5;
    bVar4 = in(9);
    pbVar6 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar4);
    pbVar6[0x7b] = pbVar6[0x7b] + bVar4;
    *pbVar6 = *pbVar6 ^ bVar4;
    LOCK();
    *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
    UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar6[0x7b] = pbVar6[0x7b] + bVar4;
  *pbVar6 = *pbVar6 ^ bVar4;
  LOCK();
  *(undefined1 *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x30) = unaff_BH;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

