// Function: FUN_14011b950
// Addr: 14011b950
// Size: 1255 bytes


void FUN_14011b950(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined **local_d0;
  uint local_c8 [2];
  ulonglong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_70 = CONCAT31(local_70._1_3_,6);
  local_70 = local_70 & 0xfffffeff;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plVar3 = (longlong *)FUN_14028af20(0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  lVar4 = FUN_14028af20(0x58);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(lVar4 + 0x10) = lVar4;
  *(undefined2 *)(lVar4 + 0x18) = 0x101;
  *plVar3 = lVar4;
  plVar11 = *(longlong **)(param_1 + 0xa8);
  plVar1 = *(longlong **)(param_1 + 0xb0);
  local_78 = plVar3;
  while( true ) {
    if (plVar11 == plVar1) {
      puVar9 = (undefined8 *)FUN_140004d00(&local_a0,&local_78,0);
      local_f8 = (longlong *)0xa;
      local_f0 = 0;
      uVar2 = local_e8 >> 0x20;
      local_e8 = local_e8 & 0xffffffff00000000;
      uVar12 = puVar9[2];
      uStack_e0 = 0;
      if (uVar12 != 0) {
        local_e8 = CONCAT44((int)uVar2,(int)uVar12);
        uVar8 = thunk_FUN_14028af20(uVar12 & 0xffffffff);
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        uStack_e0 = uVar8;
        FUN_1404210f0(uVar8,puVar9,uVar12 & 0xffffffff);
        local_f8 = (longlong *)CONCAT44((int)uVar12,(undefined4)local_f8);
        local_f0 = uVar8;
      }
      uVar8 = local_f0;
      FUN_140017240(&local_a0);
      FUN_140015140(param_1 + 0x4a0);
      FUN_1400182d0(param_1 + 0x158,&local_f8);
      FUN_140290ea0(param_1 + 0x4a0);
      thunk_FUN_14028af80(uVar8);
      FUN_140085440(&local_78);
      return;
    }
    puVar9 = (undefined8 *)*plVar11;
    uVar10 = local_98 >> 8;
    local_98 = CONCAT31((int3)uVar10,7);
    local_98 = local_98 & 0xfffffeff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    local_a0 = plVar3;
    pcVar5 = (char *)(**(code **)(*(longlong *)*puVar9 + 0x30))();
    local_c8[0] = CONCAT31(local_c8[0]._1_3_,4);
    sVar6 = strlen(pcVar5);
    uVar12 = sVar6 & 0xffffffff;
    puVar7 = (undefined4 *)_malloc_base(uVar12 + 5);
    if (puVar7 == (undefined4 *)0x0) break;
    *puVar7 = (int)sVar6;
    uVar10 = local_c8[0] | 0x100;
    FUN_1404210f0(puVar7 + 1,pcVar5,uVar12);
    *(undefined1 *)(uVar12 + 4 + (longlong)puVar7) = 0;
    plVar3 = (longlong *)FUN_140086de0(&local_a0,&DAT_1404748b8);
    local_c8[0] = *(uint *)(plVar3 + 1);
    *(uint *)(plVar3 + 1) = uVar10;
    local_d0 = (undefined **)*plVar3;
    *plVar3 = (longlong)puVar7;
    lVar4 = plVar3[2];
    plVar3[2] = 0;
    lStack_b0 = plVar3[4];
    local_b8 = plVar3[3];
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_c0 = lVar4;
    FUN_140086d30(&local_d0);
    if (lVar4 != 0) {
      FUN_140017240(lVar4 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    pcVar5 = (char *)(**(code **)(*(longlong *)*puVar9 + 0x40))();
    local_c8[0] = CONCAT31(local_c8[0]._1_3_,4);
    sVar6 = strlen(pcVar5);
    uVar12 = sVar6 & 0xffffffff;
    puVar7 = (undefined4 *)_malloc_base(uVar12 + 5);
    if (puVar7 == (undefined4 *)0x0) {
      FUN_140017170(&local_f8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_f8);
    }
    *puVar7 = (int)sVar6;
    uVar10 = local_c8[0] | 0x100;
    FUN_1404210f0(puVar7 + 1,pcVar5,uVar12);
    *(undefined1 *)(uVar12 + 4 + (longlong)puVar7) = 0;
    plVar3 = (longlong *)FUN_140086de0(&local_a0,"version","");
    local_c8[0] = *(uint *)(plVar3 + 1);
    *(uint *)(plVar3 + 1) = uVar10;
    local_d0 = (undefined **)*plVar3;
    *plVar3 = (longlong)puVar7;
    uVar12 = plVar3[2];
    plVar3[2] = 0;
    lStack_b0 = plVar3[4];
    local_b8 = plVar3[3];
    plVar3[3] = 0;
    plVar3[4] = 0;
    local_c0 = uVar12;
    FUN_140086d30(&local_d0);
    if (uVar12 != 0) {
      FUN_140017240(uVar12 + 0x40);
      FUN_140017240(uVar12 + 0x20);
      FUN_140017240(uVar12);
      thunk_FUN_14028af80(uVar12,0x60);
    }
    uVar12 = local_f0;
    local_f0 = CONCAT71(local_f0._1_7_,6);
    local_f0._4_4_ = SUB84(uVar12,4);
    local_f0 = CONCAT44(local_f0._4_4_,(undefined4)local_f0) & 0xfffffffffffffeff;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    plVar3 = (longlong *)FUN_14028af20(0x10);
    *plVar3 = 0;
    plVar3[1] = 0;
    lVar4 = FUN_14028af20(0x58);
    local_c0 = local_c0 & 0xfffffffffffffe00;
    local_b8 = 0;
    lStack_b0 = 0;
    *(longlong *)lVar4 = lVar4;
    *(longlong *)(lVar4 + 8) = lVar4;
    *(longlong *)(lVar4 + 0x10) = lVar4;
    *(undefined2 *)(lVar4 + 0x18) = 0x101;
    *plVar3 = lVar4;
    local_d0 = &PTR_FUN_1404776f8;
    local_a8 = 0;
    local_f8 = plVar3;
    (**(code **)(*(longlong *)puVar9[1] + 0x10))((longlong *)puVar9[1],&local_d0);
    FUN_140085520(&local_f8,local_c8);
    FUN_140085440(local_c8);
    uVar8 = FUN_140086de0(&local_a0,"exports","");
    FUN_140085520(uVar8,&local_f8);
    uVar8 = FUN_140085090(&local_d0,&local_a0);
    FUN_140087690(&local_78,uVar8);
    FUN_140085440(&local_d0);
    FUN_140086d30(&local_f8);
    uVar12 = local_e8;
    if (local_e8 != 0) {
      FUN_140017240(local_e8 + 0x40);
      FUN_140017240(uVar12 + 0x20);
      FUN_140017240(uVar12);
      thunk_FUN_14028af80(uVar12,0x60);
    }
    FUN_140086d30(&local_a0);
    lVar4 = local_90;
    if (local_90 != 0) {
      FUN_140017240(local_90 + 0x40);
      FUN_140017240(lVar4 + 0x20);
      FUN_140017240(lVar4);
      thunk_FUN_14028af80(lVar4,0x60);
    }
    plVar11 = plVar11 + 1;
  }
  FUN_140017170(&local_f8,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  FUN_140084bc0(&local_f8);
}

