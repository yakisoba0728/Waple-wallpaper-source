// Function: FUN_14006ebe0
// Addr: 14006ebe0
// Size: 291 bytes


void FUN_14006ebe0(undefined8 param_1,char param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar19;
  undefined1 auStack_b8 [88];
  undefined *puStack_60;
  undefined1 auStack_58 [40];
  uint local_30;
  
  if (param_2 == '\0') {
    DAT_1404e53b4 = DAT_1404e53b4 & 0xfffffff7;
  }
  else {
    DAT_1404e53b4 = DAT_1404e53b4 | 8;
  }
  if ((DAT_1404e53b4 & 0xc) == 0) {
    local_30 = (local_30 >> 8 & 0xfffffe) << 8;
                    /* WARNING: Subroutine does not return */
    puStack_60 = &UNK_14006ed03;
    FUN_140086eb0(&DAT_1404df6b8,"general","");
  }
  puStack_60 = (undefined *)0x14006ec1f;
  uVar19 = func_0x00014000d730();
  puVar7 = DAT_1404e5400;
  puVar1 = DAT_1404e5400;
  for (puVar3 = (undefined8 *)*DAT_1404e5400; puVar3 != puVar7; puVar3 = (undefined8 *)*puVar3) {
    lVar4 = puVar3[6];
    DAT_1404e5400 = puVar1;
    if (lVar4 != 0) {
      if (puVar3 != (undefined8 *)(lVar4 + 0x40)) {
        plVar16 = (longlong *)(lVar4 + 0xe0);
        if (0xf < *(ulonglong *)(lVar4 + 0xf8)) {
          plVar16 = (longlong *)*plVar16;
        }
                    /* WARNING: Subroutine does not return */
        puStack_60 = (undefined *)0x14006ec6d;
        FUN_14000f950(puVar3 + 0x14,plVar16,*(undefined8 *)(lVar4 + 0xf0));
      }
      lVar4 = puVar3[6];
      if (puVar3 != (undefined8 *)(lVar4 + 0x60)) {
        plVar16 = (longlong *)(lVar4 + 0x120);
        if (0xf < *(ulonglong *)(lVar4 + 0x138)) {
          plVar16 = (longlong *)*plVar16;
        }
                    /* WARNING: Subroutine does not return */
        puStack_60 = (undefined *)0x14006eca1;
        FUN_14000f950(puVar3 + 0x18,plVar16,*(undefined8 *)(lVar4 + 0x130));
      }
    }
    if ((longlong *)puVar3[6] != (longlong *)0x0) {
      puStack_60 = (undefined *)0x14006ecb0;
      uVar19 = (**(code **)(*(longlong *)puVar3[6] + 0x18))();
      puVar3[6] = 0;
    }
    puVar1 = DAT_1404e5400;
  }
  bVar18 = DAT_1404e56e8 != 0;
  bVar9 = false;
  uVar6 = DAT_1404e53b8;
  puVar7 = puVar1;
  lVar4 = DAT_1404e5440;
  for (puVar3 = (undefined8 *)*puVar1; DAT_1404e53b8 = uVar6, DAT_1404e5400 = puVar7,
      DAT_1404e5440 = lVar4, puVar3 != puVar1; puVar3 = (undefined8 *)*puVar3) {
    if (bVar9) {
      bVar9 = true;
    }
    else {
      plVar16 = (longlong *)puVar3[6];
      if ((plVar16 != (longlong *)0x0) &&
         (cVar8 = FUN_14010d1d0(), uVar19 = extraout_XMM0_Da, cVar8 != '\0')) {
        uVar11 = (**(code **)(*plVar16 + 0x98))(plVar16,auStack_58);
                    /* WARNING: Subroutine does not return */
        FUN_140086eb0(uVar11,"wproperties","");
      }
      bVar9 = false;
    }
    uVar6 = DAT_1404e53b8;
    puVar7 = DAT_1404e5400;
    lVar4 = DAT_1404e5440;
  }
  bVar5 = true;
  puVar1 = DAT_1404e64a0;
  for (puVar3 = (undefined8 *)*puVar7; DAT_1404e64a0 = puVar1, puVar3 != puVar7;
      puVar3 = (undefined8 *)*puVar3) {
    if (puVar3[6] != 0) {
      puVar1 = puVar3 + 2;
      puVar15 = puVar1;
      if (0xf < (ulonglong)puVar3[5]) {
        puVar15 = (undefined8 *)*puVar1;
      }
      uVar14 = 0;
      uVar17 = 0xcbf29ce484222325;
      if (puVar3[4] != 0) {
        do {
          pbVar2 = (byte *)((longlong)puVar15 + uVar14);
          uVar14 = uVar14 + 1;
          uVar17 = (uVar17 ^ *pbVar2) * 0x100000001b3;
        } while (uVar14 < (ulonglong)puVar3[4]);
      }
      lVar12 = func_0x000140011170(&DAT_1404e5438,auStack_b8,puVar1,uVar17);
      lVar13 = lVar4;
      if (*(longlong *)(lVar12 + 8) != 0) {
        lVar13 = *(longlong *)(lVar12 + 8);
      }
      uVar19 = extraout_XMM0_Da_00;
      if (((bVar5) && (lVar13 != lVar4)) && ((uVar6 >> (*(byte *)(lVar13 + 0x51) & 0x1f) & 1) != 0))
      {
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
      plVar16 = *(longlong **)puVar3[6];
      if ((plVar16 != (longlong *)0x0) &&
         (cVar8 = FUN_14010d1d0(plVar16), uVar19 = extraout_XMM0_Da_01, cVar8 != '\0')) {
        uVar11 = (**(code **)(*plVar16 + 0x98))(plVar16,auStack_58);
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
      uVar19 = FUN_140290f70(0x1404e56f0);
    }
    if ((cRam00000001404e5774 != '\0') && (cRam00000001404e5774 = '\0', lRam00000001404e5748 != 0))
    {
      if (plRam00000001404e5740 != (longlong *)0x0) {
        uVar19 = (**(code **)(*plRam00000001404e5740 + 0x38))
                           (plRam00000001404e5740,uRam00000001404e5798);
      }
      FUN_1400cfa40(uVar19,0x1404e5748,0x1404e5750);
    }
  }
  return;
}

