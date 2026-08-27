// Function: FUN_140013d40
// Addr: 140013d40
// Size: 557 bytes


longlong * FUN_140013d40(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined2 local_88;
  longlong local_80;
  undefined2 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50 [40];
  
  plVar12 = (longlong *)0x0;
  FUN_1402914b0(local_res10,0);
  plVar10 = DAT_1404e5248;
  if (DAT_1404e3ca8 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e3ca8 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3ca8 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res8);
  }
  uVar9 = DAT_1404e3ca8;
  lVar11 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_1404e3ca8 * 8;
  if ((DAT_1404e3ca8 < *(ulonglong *)(lVar11 + 0x18)) &&
     (plVar12 = *(longlong **)(lVar1 + *(longlong *)(lVar11 + 0x10)), plVar12 != (longlong *)0x0))
  goto LAB_140013dd9;
  if (*(char *)(lVar11 + 0x24) == '\0') {
LAB_140013e18:
    if (plVar12 != (longlong *)0x0) goto LAB_140013dd9;
  }
  else {
    lVar11 = FUN_1402916f0();
    if (uVar9 < *(ulonglong *)(lVar11 + 0x18)) {
      plVar12 = *(longlong **)(lVar1 + *(longlong *)(lVar11 + 0x10));
      goto LAB_140013e18;
    }
  }
  plVar12 = plVar10;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)FUN_14028af20(0x30);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      puVar14 = &DAT_140474480;
    }
    else {
      puVar14 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1402914b0(local_b8,0);
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (puVar14 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_b8,puVar14);
    *(undefined4 *)(plVar12 + 1) = 0;
    *plVar12 = (longlong)std::ctype<char>::vftable;
    puVar13 = (undefined4 *)FUN_140291c50(local_50);
    uVar2 = puVar13[1];
    uVar3 = puVar13[2];
    uVar4 = puVar13[3];
    uVar5 = puVar13[4];
    uVar6 = puVar13[5];
    uVar7 = puVar13[6];
    uVar8 = puVar13[7];
    *(undefined4 *)(plVar12 + 2) = *puVar13;
    *(undefined4 *)((longlong)plVar12 + 0x14) = uVar2;
    *(undefined4 *)(plVar12 + 3) = uVar3;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar4;
    *(undefined4 *)(plVar12 + 4) = uVar5;
    *(undefined4 *)((longlong)plVar12 + 0x24) = uVar6;
    *(undefined4 *)(plVar12 + 5) = uVar7;
    *(undefined4 *)((longlong)plVar12 + 0x2c) = uVar8;
    FUN_1402918b0(local_b8);
    if (local_60 != 0) {
      thunk_FUN_1402d9040();
    }
    local_60 = 0;
    if (local_70 != 0) {
      thunk_FUN_1402d9040();
    }
    local_70 = 0;
    if (local_80 != 0) {
      thunk_FUN_1402d9040();
    }
    local_80 = 0;
    if (local_90 != 0) {
      thunk_FUN_1402d9040();
    }
    local_90 = 0;
    if (local_a0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_a0 = 0;
    if (local_b0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_b0 = 0;
    FUN_140291550(local_b8);
    FUN_1402916b0(plVar12);
    (**(code **)(*plVar12 + 8))(plVar12);
    DAT_1404e5248 = plVar12;
  }
LAB_140013dd9:
  FUN_140291550(local_res10);
  return plVar12;
}

