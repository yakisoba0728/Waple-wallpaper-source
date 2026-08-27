// Function: FUN_1400c8340
// Addr: 1400c8340
// Size: 1393 bytes


void FUN_1400c8340(longlong param_1,byte param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [24];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong alStack_130 [4];
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  ulonglong local_d8;
  longlong local_d0 [25];
  
  puVar7 = auStack_168;
  if (param_2 == (*(byte *)(param_1 + 0xb60) & 1)) {
    return;
  }
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) | 1;
    puVar8 = auStack_168;
    if ((*(longlong *)(param_1 + 0x668) == -1) &&
       (puVar8 = auStack_168, *(longlong *)(param_1 + 0x4b8) != 0)) {
      FUN_1400c8b60(param_1);
      puVar8 = auStack_168;
    }
    goto LAB_1400c8839;
  }
  *(uint *)(param_1 + 0xb60) = *(uint *)(param_1 + 0xb60) & 0xfffffffe;
  puVar8 = auStack_168;
  if (*(longlong *)(param_1 + 0x668) == -1) goto LAB_1400c8839;
  if (*(int *)(param_1 + 0x4ec) == 0) {
    FUN_1400c8e60(param_1);
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x658) = 0;
  FUN_1404217a0(&local_f0,0,0xe0);
  local_d8 = 0xf;
  local_d0[1] = 0;
  local_d0[0] = 0;
  local_d0[5] = 0;
  local_d0[4] = 0;
  local_d0[9] = 0;
  local_d0[8] = 0;
  local_d0[0xd] = 0;
  local_d0[0xc] = 0;
  local_d0[0x11] = 0;
  local_d0[0x10] = 0;
  local_d0[0x15] = 0;
  local_d0[0x14] = 0;
  local_f0 = 0;
  local_d0[2] = 0;
  local_d0[3] = 0xf;
  local_d0[6] = 0;
  local_d0[7] = 0xf;
  local_d0[10] = 0;
  local_d0[0xb] = 0xf;
  local_d0[0xe] = 0;
  local_d0[0xf] = 0xf;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0xf;
  local_d0[0x16] = 0;
  local_d0[0x17] = 0xf;
  FUN_14000de40(param_1 + 0x520,&local_f0);
  FUN_14000de40(param_1 + 0x540,local_d0);
  FUN_14000de40(param_1 + 0x560,local_d0 + 4);
  FUN_14000de40(param_1 + 0x580,local_d0 + 8);
  FUN_14000de40(param_1 + 0x5a0,local_d0 + 0xc);
  FUN_14000de40(param_1 + 0x5c0,local_d0 + 0x10);
  FUN_14000de40(param_1 + 0x5e0,local_d0 + 0x14);
  if ((ulonglong)local_d0[0x17] < 0x10) {
LAB_1400c8533:
    if (0xf < (ulonglong)local_d0[0x13]) {
      uVar6 = local_d0[0x13] + 1;
      lVar5 = local_d0[0x10];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_d0[0x10] + -8);
        if (0x1f < (local_d0[0x10] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d0[0x13] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (0xf < (ulonglong)local_d0[0xf]) {
      uVar6 = local_d0[0xf] + 1;
      lVar5 = local_d0[0xc];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_d0[0xc] + -8);
        if (0x1f < (local_d0[0xc] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d0[0xf] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (0xf < (ulonglong)local_d0[0xb]) {
      uVar6 = local_d0[0xb] + 1;
      lVar5 = local_d0[8];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_d0[8] + -8);
        if (0x1f < (local_d0[8] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d0[0xb] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (0xf < (ulonglong)local_d0[7]) {
      uVar6 = local_d0[7] + 1;
      lVar5 = local_d0[4];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_d0[4] + -8);
        if (0x1f < (local_d0[4] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d0[7] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (0xf < (ulonglong)local_d0[3]) {
      uVar6 = local_d0[3] + 1;
      lVar5 = local_d0[0];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_d0[0] + -8);
        if (0x1f < (local_d0[0] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d0[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (0xf < local_d8) {
      lVar3 = CONCAT71(uStack_ef,local_f0);
      uVar6 = local_d8 + 1;
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = local_d8 + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x600);
    local_108 = 0;
    uStack_100 = 0;
    local_138 = 0;
    alStack_130[2] = 0;
    alStack_130[1] = 0;
    alStack_130[0] = 0;
    alStack_130[3] = 0xf;
    uStack_110 = 0;
    local_f8 = 0;
    local_148 = 0;
    uStack_140 = 0;
    if (plVar1 != &local_148) {
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        uVar6 = *(longlong *)(param_1 + 0x610) - lVar5;
        if (0xfff < uVar6) {
          if (0x1f < (lVar5 - *(longlong *)(lVar5 + -8)) - 8U) goto LAB_1400c8823;
          uVar6 = uVar6 + 0x27;
          lVar5 = *(longlong *)(lVar5 + -8);
        }
        thunk_FUN_14028af80(lVar5,uVar6);
      }
      *plVar1 = local_148;
      *(undefined8 *)(param_1 + 0x608) = uStack_140;
      *(longlong *)(param_1 + 0x610) = local_138;
    }
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    FUN_14000de40(param_1 + 0x618,alStack_130);
    *(undefined4 *)(param_1 + 0x638) = (undefined4)uStack_110;
    *(undefined4 *)(param_1 + 0x63c) = uStack_110._4_4_;
    *(undefined4 *)(param_1 + 0x640) = (undefined4)local_108;
    *(undefined4 *)(param_1 + 0x644) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x648) = (undefined4)uStack_100;
    *(undefined4 *)(param_1 + 0x64c) = uStack_100._4_4_;
    *(undefined4 *)(param_1 + 0x650) = (undefined4)local_f8;
    if (0xf < (ulonglong)alStack_130[3]) {
      uVar6 = alStack_130[3] + 1;
      lVar5 = alStack_130[0];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(alStack_130[0] + -8);
        if (0x1f < (alStack_130[0] - lVar5) - 8U) goto LAB_1400c8823;
        uVar6 = alStack_130[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar5,uVar6);
    }
    if (local_148 != 0) {
      lVar5 = local_148;
      puVar7 = auStack_168;
      if ((0xfff < (ulonglong)(local_138 - local_148)) &&
         (lVar5 = *(longlong *)(local_148 + -8), puVar7 = auStack_168,
         0x1f < (local_148 - *(longlong *)(local_148 + -8)) - 8U)) goto LAB_1400c8823;
      goto LAB_1400c882d;
    }
  }
  else {
    uVar6 = local_d0[0x17] + 1;
    lVar5 = local_d0[0x14];
    if (uVar6 < 0x1000) {
LAB_1400c852e:
      thunk_FUN_14028af80(lVar5,uVar6);
      goto LAB_1400c8533;
    }
    lVar5 = *(longlong *)(local_d0[0x14] + -8);
    if ((local_d0[0x14] - lVar5) - 8U < 0x20) {
      uVar6 = local_d0[0x17] + 0x28;
      goto LAB_1400c852e;
    }
LAB_1400c8823:
    pcVar2 = (code *)swi(0x29);
    lVar5 = (*pcVar2)(5);
    puVar7 = auStack_160;
LAB_1400c882d:
    *(undefined8 *)(puVar7 + -8) = 0x1400c8832;
    thunk_FUN_14028af80(lVar5);
  }
  *(undefined8 *)(param_1 + 0x65c) = 0;
  puVar8 = puVar7;
LAB_1400c8839:
  *(undefined8 *)(puVar8 + -8) = 0x1400c8845;
  iVar4 = FUN_140290d80(param_1 + 0x450);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_1400c88b2;
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x49c) != 0x7fffffff) {
    *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) | 0x10;
    *(byte *)(param_1 + 0x664) = param_2;
    *(undefined8 *)(puVar8 + -8) = 0x1400c8870;
    FUN_140290ea0(param_1 + 0x450);
    return;
  }
  *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar8 + -8) = &UNK_1400c88a7;
  FUN_140290d30(6);
}

