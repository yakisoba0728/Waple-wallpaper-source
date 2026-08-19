// Function: FUN_140073a70
// Addr: 140073a70
// Size: 51 bytes


void FUN_140073a70(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_b8 [96];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined1 auStack_28 [16];
  
  puVar7 = DAT_1404e5400;
  puVar1 = DAT_1404e5400;
  for (puVar3 = (undefined8 *)*DAT_1404e5400; puVar3 != puVar7; puVar3 = (undefined8 *)*puVar3) {
    plVar4 = (longlong *)puVar3[6];
    DAT_1404e5400 = puVar1;
    if (plVar4 != (longlong *)0x0) {
      puVar1 = puVar3 + 2;
      puVar16 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar16 = (undefined8 *)*puVar1;
      }
      uVar13 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar16 + uVar13);
          uVar13 = uVar13 + 1;
          uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
        } while (uVar13 < (ulonglong)puVar3[4]);
      }
      puStack_50 = (undefined *)0x140073b04;
      lVar14 = func_0x000140011170(&DAT_1404e5438,auStack_28,puVar1,uVar17);
      uVar6 = DAT_1404e53b4;
      lVar15 = DAT_1404e5440;
      if (*(longlong *)(lVar14 + 8) != 0) {
        lVar15 = *(longlong *)(lVar14 + 8);
      }
      if (((DAT_1404e53b4 & 0x21) == 0) &&
         ((lVar15 == DAT_1404e5440 ||
          ((DAT_1404e53b8 >> (*(byte *)(lVar15 + 0x51) & 0x1f) & 1) == 0)))) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      puStack_50 = &UNK_140073b48;
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar11);
      puStack_50 = &UNK_140073b58;
      (**(code **)(*plVar4 + 0x30))(plVar4,(uVar6 & 0xc0) != 0);
    }
    puVar1 = DAT_1404e5400;
  }
  bVar18 = DAT_1404e56e8 != 0;
  bVar9 = false;
  uVar6 = DAT_1404e53b8;
  puVar7 = puVar1;
  lVar15 = DAT_1404e5440;
  for (puVar3 = (undefined8 *)*puVar1; DAT_1404e53b8 = uVar6, DAT_1404e5400 = puVar7,
      DAT_1404e5440 = lVar15, puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
    if (bVar9) {
      bVar9 = true;
    }
    else {
      plVar4 = (longlong *)puVar3[6];
      if ((plVar4 != (longlong *)0x0) && (cVar8 = FUN_14010d1d0(), cVar8 != '\0')) {
        uVar11 = (**(code **)(*plVar4 + 0x98))(plVar4,auStack_58);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar11,"wproperties","");
      }
      bVar9 = false;
    }
    uVar6 = DAT_1404e53b8;
    puVar7 = DAT_1404e5400;
    lVar15 = DAT_1404e5440;
  }
  bVar5 = true;
  puVar1 = DAT_1404e64a0;
  for (puVar3 = (undefined8 *)*puVar7; DAT_1404e64a0 = puVar1, puVar3 != puVar7;
      puVar3 = (undefined8 *)*puVar3) {
    if (puVar3[6] != 0) {
      puVar1 = puVar3 + 2;
      puVar16 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar16 = (undefined8 *)*puVar1;
      }
      uVar13 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar16 + uVar13);
          uVar13 = uVar13 + 1;
          uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
        } while (uVar13 < (ulonglong)puVar3[4]);
      }
      lVar12 = func_0x000140011170(&DAT_1404e5438,auStack_b8,puVar1,uVar17);
      lVar14 = lVar15;
      if (*(longlong *)(lVar12 + 8) != 0) {
        lVar14 = *(longlong *)(lVar12 + 8);
      }
      if (((bVar5) && (lVar14 != lVar15)) && ((uVar6 >> (*(byte *)(lVar14 + 0x51) & 0x1f) & 1) != 0)
         ) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    puVar1 = DAT_1404e64a0;
  }
  if ((!bVar9) || ((DAT_1404e53b4 & 0x121) != 0 || bVar5)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  for (puVar3 = (undefined8 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
    if (bVar9 == false) {
      plVar4 = *(longlong **)puVar3[6];
      if ((plVar4 != (longlong *)0x0) && (cVar8 = FUN_14010d1d0(plVar4), cVar8 != '\0')) {
        uVar11 = (**(code **)(*plVar4 + 0x98))(plVar4,auStack_58);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar11,"wproperties","");
      }
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
  }
  if (bVar18 != bVar9) {
    if (bVar9 != false) {
      uVar11 = 0x1404e5650;
      if (0xf < uRam00000001404e5668) {
        uVar11 = uRam00000001404e5650;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(&DAT_1404e5778,uVar11,uRam00000001404e5660);
    }
    if (DAT_1404e56e8 != 0) {
      iVar10 = func_0x000140290e50(0x1404e56f0);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(5);
      }
      if (iRam00000001404e573c == 0x7fffffff) {
        iRam00000001404e573c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290e00(6);
      }
      FUN_140015170(0x1404e56e0);
      FUN_140290f70(0x1404e56f0);
    }
    if ((cRam00000001404e5774 != '\0') && (cRam00000001404e5774 = '\0', lRam00000001404e5748 != 0))
    {
      if (plRam00000001404e5740 != (longlong *)0x0) {
        (**(code **)(*plRam00000001404e5740 + 0x38))(plRam00000001404e5740,uRam00000001404e5798);
      }
      FUN_1400cfa40();
    }
  }
  return;
}

