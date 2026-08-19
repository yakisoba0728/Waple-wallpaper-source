// Function: FUN_1404d54e0
// Addr: 1404d54e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d552e) overlaps instruction at (ram,0x0001404d552d)
    */

void FUN_1404d54e0(char *param_1,char *param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 in_RAX;
  undefined7 uVar9;
  byte bVar10;
  byte bVar11;
  byte unaff_BL;
  byte bVar12;
  undefined7 unaff_00000019;
  char cVar13;
  longlong unaff_RBP;
  int *unaff_RSI;
  longlong unaff_RDI;
  byte unaff_R12B;
  bool bVar14;
  undefined1 auStack_10 [8];
  char acStack_8 [8];
  char *pcVar8;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  *(char *)(unaff_RDI + 0x3f) = *(char *)(unaff_RDI + 0x3f) << 1;
  cVar13 = (char)acStack_8;
  *param_4 = *param_4 + unaff_R12B;
  uVar7 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + bVar11,(char)in_RAX)) + 0x34050002
  ;
  uVar2 = (undefined3)(uVar7 >> 8);
  bVar4 = (byte)uVar7 | *(byte *)(ulonglong)uVar7;
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,bVar4);
  *(char *)(unaff_RDI + 0x3f) = *(char *)(unaff_RDI + 0x3f) << 1;
  bVar12 = unaff_BL + bVar11;
  if (CARRY1(unaff_BL,bVar11) || bVar12 == 0) {
    acStack_8[(longlong)param_2 * 2] = acStack_8[(longlong)param_2 * 2] + bVar4;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar8 = *pcVar8 + bVar4;
    bVar5 = bVar4 + bVar10;
    pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,bVar5);
    if (!CARRY1(bVar4,bVar10) && bVar5 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar14 = CARRY1(bVar12,bVar11);
    bVar12 = bVar12 + bVar11;
    if (!bVar14 && bVar12 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    acStack_8[(longlong)param_2 * 2] = acStack_8[(longlong)param_2 * 2] + bVar5;
    *param_4 = *param_4 + unaff_R12B;
    *pcVar8 = *pcVar8 + bVar5;
    pbVar1 = (byte *)(pcVar8 + -0x2fffc089);
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar5;
    if (!CARRY1(bVar4,bVar5) && *pbVar1 != 0) {
      cVar13 = *pcVar8;
      acStack_8[(longlong)param_1] =
           acStack_8[(longlong)param_1] + bVar11 + (0xeffff98b < CONCAT31(uVar2,bVar5 + cVar13));
      acStack_8[(longlong)unaff_RSI] =
           acStack_8[(longlong)unaff_RSI] + (bVar5 + cVar13 + 0x74 | 100);
      *(char *)(unaff_RBP + 0x75) = *(char *)(unaff_RBP + 0x75) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = CONCAT22((short)(uVar7 >> 0x10),CONCAT11((char)(uVar7 >> 8) + bVar11,bVar5));
    cVar13 = (char)auStack_10;
    bVar4 = *param_4;
    *param_4 = *param_4 + unaff_R12B;
    *unaff_RSI = *unaff_RSI + iVar3 + (uint)CARRY1(bVar4,unaff_R12B);
    *param_1 = *param_1 + bVar10;
    cVar6 = in(8);
    *param_2 = *param_2 + (char)param_1;
    if (*param_2 != '\0') {
      cRam00000000d04d5b61 = cRam00000000d04d5b61 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar8 = (char *)(ulonglong)(CONCAT31((int3)((uint)iVar3 >> 8),cVar6) ^ 0x35e9bf00);
    *(byte *)CONCAT71(unaff_00000019,bVar12) = *(char *)CONCAT71(unaff_00000019,bVar12) + bVar11;
  }
  *param_4 = *param_4 + cVar13;
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)pcVar8;
  *pcVar8 = *pcVar8 + (char)pcVar8;
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  cVar6 = in(8);
  pcVar8 = (char *)CONCAT71(uVar9,cVar6);
  *pcVar8 = *pcVar8 + cVar6;
  if (*pcVar8 != '\0') {
    *pcVar8 = *pcVar8 + cVar6;
    pcVar8 = (char *)((CONCAT71(uVar9,cVar6) ^ 6) - 0x40ffca17);
    *pcVar8 = *pcVar8 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT71(unaff_00000019,bVar12) = *(char *)CONCAT71(unaff_00000019,bVar12) + bVar11;
  *param_4 = *param_4 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

