// Function: FUN_14000f450
// Addr: 14000f450
// Size: 612 bytes


longlong * FUN_14000f450(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_f8 [8];
  longlong local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined2 local_c8;
  longlong local_c0;
  undefined2 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_60 [56];
  
  plVar13 = (longlong *)0x0;
  FUN_1402914b0(local_res10,0);
  plVar11 = DAT_1404e5260;
  if (DAT_1404e3ca0 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e3ca0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e3ca0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res8);
  }
  uVar10 = DAT_1404e3ca0;
  lVar12 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_1404e3ca0 * 8;
  if ((DAT_1404e3ca0 < *(ulonglong *)(lVar12 + 0x18)) &&
     (plVar13 = *(longlong **)(lVar1 + *(longlong *)(lVar12 + 0x10)), plVar13 != (longlong *)0x0))
  goto LAB_14000f4e9;
  if (*(char *)(lVar12 + 0x24) == '\0') {
LAB_14000f528:
    if (plVar13 != (longlong *)0x0) goto LAB_14000f4e9;
  }
  else {
    lVar12 = FUN_1402916f0();
    if (uVar10 < *(ulonglong *)(lVar12 + 0x18)) {
      plVar13 = *(longlong **)(lVar1 + *(longlong *)(lVar12 + 0x10));
      goto LAB_14000f528;
    }
  }
  plVar13 = plVar11;
  if (plVar11 == (longlong *)0x0) {
    plVar13 = (longlong *)FUN_14028af20(0x60);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      puVar15 = &DAT_140474480;
    }
    else {
      puVar15 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1402914b0(local_f8,0);
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    if (puVar15 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_f8,puVar15);
    *(undefined4 *)(plVar13 + 1) = 0;
    *plVar13 = (longlong)std::ctype<wchar_t>::vftable;
    puVar14 = (undefined4 *)FUN_140291c50(local_90);
    uVar2 = puVar14[1];
    uVar3 = puVar14[2];
    uVar4 = puVar14[3];
    uVar5 = puVar14[4];
    uVar6 = puVar14[5];
    uVar7 = puVar14[6];
    uVar8 = puVar14[7];
    *(undefined4 *)(plVar13 + 2) = *puVar14;
    *(undefined4 *)((longlong)plVar13 + 0x14) = uVar2;
    *(undefined4 *)(plVar13 + 3) = uVar3;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar4;
    *(undefined4 *)(plVar13 + 4) = uVar5;
    *(undefined4 *)((longlong)plVar13 + 0x24) = uVar6;
    *(undefined4 *)(plVar13 + 5) = uVar7;
    *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar8;
    puVar14 = (undefined4 *)FUN_140291ac0(local_60);
    uVar9 = *(undefined8 *)(puVar14 + 4);
    uVar2 = puVar14[7];
    uStack_70 = puVar14[8];
    uStack_6c = puVar14[9];
    uStack_68 = puVar14[10];
    uVar3 = puVar14[1];
    uVar4 = puVar14[2];
    uVar5 = puVar14[3];
    uStack_78 = (undefined4)*(undefined8 *)(puVar14 + 6);
    _uStack_78 = CONCAT44(uVar2,uStack_78);
    local_80._0_4_ = (undefined4)uVar9;
    local_80._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
    *(undefined4 *)(plVar13 + 6) = *puVar14;
    *(undefined4 *)((longlong)plVar13 + 0x34) = uVar3;
    *(undefined4 *)(plVar13 + 7) = uVar4;
    *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar5;
    *(undefined4 *)(plVar13 + 8) = (undefined4)local_80;
    *(undefined4 *)((longlong)plVar13 + 0x44) = local_80._4_4_;
    *(undefined4 *)(plVar13 + 9) = uStack_78;
    *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar2;
    *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar2;
    *(undefined4 *)(plVar13 + 10) = uStack_70;
    *(undefined4 *)((longlong)plVar13 + 0x54) = uStack_6c;
    *(undefined4 *)(plVar13 + 0xb) = uStack_68;
    local_80 = uVar9;
    FUN_1402918b0(local_f8);
    if (local_a0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_a0 = 0;
    if (local_b0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_b0 = 0;
    if (local_c0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_c0 = 0;
    if (local_d0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_d0 = 0;
    if (local_e0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_e0 = 0;
    if (local_f0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_f0 = 0;
    FUN_140291550(local_f8);
    FUN_1402916b0(plVar13);
    (**(code **)(*plVar13 + 8))(plVar13);
    DAT_1404e5260 = plVar13;
  }
LAB_14000f4e9:
  FUN_140291550(local_res10);
  return plVar13;
}

