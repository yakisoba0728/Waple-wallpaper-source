// Function: FUN_14006e190
// Addr: 14006e190
// Size: 196 bytes


void FUN_14006e190(void)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_b8 [96];
  undefined1 local_58 [48];
  
  puVar1 = DAT_1404e5400;
  bVar18 = DAT_1404e56e8 != 0;
  bVar10 = false;
  puVar6 = DAT_1404e5400;
  lVar7 = DAT_1404e5440;
  uVar8 = DAT_1404e53b8;
  for (puVar3 = (undefined8 *)*DAT_1404e5400; DAT_1404e53b8 = uVar8, DAT_1404e5400 = puVar6,
      DAT_1404e5440 = lVar7, puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
    if (bVar10) {
      bVar10 = true;
    }
    else {
      plVar4 = (longlong *)puVar3[6];
      if ((plVar4 != (longlong *)0x0) && (cVar9 = FUN_14010d1d0(), cVar9 != '\0')) {
        uVar12 = (**(code **)(*plVar4 + 0x98))(plVar4,local_58);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar12,"wproperties","");
      }
      bVar10 = false;
    }
    puVar6 = DAT_1404e5400;
    lVar7 = DAT_1404e5440;
    uVar8 = DAT_1404e53b8;
  }
  bVar5 = true;
  puVar1 = DAT_1404e64a0;
  for (puVar3 = (undefined8 *)*puVar6; DAT_1404e64a0 = puVar1, puVar3 != puVar6;
      puVar3 = (undefined8 *)*puVar3) {
    if (puVar3[6] != 0) {
      puVar1 = puVar3 + 2;
      puVar16 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar16 = (undefined8 *)*puVar1;
      }
      uVar15 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar16 + uVar15);
          uVar15 = uVar15 + 1;
          uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
        } while (uVar15 < (ulonglong)puVar3[4]);
      }
      lVar13 = func_0x000140011170(&DAT_1404e5438,auStack_b8,puVar1,uVar17);
      lVar14 = lVar7;
      if (*(longlong *)(lVar13 + 8) != 0) {
        lVar14 = *(longlong *)(lVar13 + 8);
      }
      if (((bVar5) && (lVar14 != lVar7)) && ((uVar8 >> (*(byte *)(lVar14 + 0x51) & 0x1f) & 1) != 0))
      {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    puVar1 = DAT_1404e64a0;
  }
  if ((!bVar10) || ((DAT_1404e53b4 & 0x121) != 0 || bVar5)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  for (puVar3 = (undefined8 *)*puVar1; puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
    if (bVar10 == false) {
      plVar4 = *(longlong **)puVar3[6];
      if ((plVar4 != (longlong *)0x0) && (cVar9 = FUN_14010d1d0(plVar4), cVar9 != '\0')) {
        uVar12 = (**(code **)(*plVar4 + 0x98))(plVar4,local_58);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar12,"wproperties","");
      }
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  if (bVar18 != bVar10) {
    if (bVar10 != false) {
      uVar12 = 0x1404e5650;
      if (0xf < uRam00000001404e5668) {
        uVar12 = uRam00000001404e5650;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(&DAT_1404e5778,uVar12,uRam00000001404e5660);
    }
    if (DAT_1404e56e8 != 0) {
      iVar11 = func_0x000140290e50(0x1404e56f0);
      if (iVar11 != 0) {
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

