// Function: FUN_1403f13e0
// Addr: 1403f13e0
// Size: 1254 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403f13e0(uint *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
                  char param_6)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint local_c0;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  uint local_98;
  longlong local_90;
  uint *local_88;
  ulonglong local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  local_88 = param_1;
  local_68 = param_2;
  FUN_14040eef0(param_3,param_4,param_5);
  lVar1 = (ulonglong)param_4 * 0x14;
  iVar8 = FUN_1403c99a0(param_2,*(undefined4 *)(lVar1 + *(longlong *)(param_3 + 0x70)),&local_58,1);
  if (iVar8 == 0) {
    param_4 = param_4 + 1;
    if (param_4 < param_5) {
      lVar1 = *(longlong *)(param_3 + 0x70);
      uVar11 = (ulonglong)param_4;
      if (param_6 == '\0') {
        do {
          lVar2 = uVar11 * 0x14;
          if ((*(byte *)(lVar2 + 0x10 + lVar1) & 0x1f) == 0xc) {
            *(undefined4 *)(lVar2 + *(longlong *)(param_3 + 0x80)) = 0;
            *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 4 + lVar2) = 0;
          }
          param_4 = param_4 + 1;
          uVar11 = uVar11 + 1;
        } while (param_4 < param_5);
      }
      else {
        do {
          lVar2 = uVar11 * 0x14;
          if ((*(byte *)(lVar2 + 0x10 + lVar1) & 0x1f) == 0xc) {
            piVar3 = (int *)(*(longlong *)(param_3 + 0x80) + 8 + lVar2);
            *piVar3 = *piVar3 - *(int *)(*(longlong *)(param_3 + 0x80) + lVar2);
            piVar3 = (int *)(*(longlong *)(param_3 + 0x80) + 0xc + lVar2);
            *piVar3 = *piVar3 - *(int *)(*(longlong *)(param_3 + 0x80) + 4 + lVar2);
            *(undefined4 *)(lVar2 + *(longlong *)(param_3 + 0x80)) = 0;
            *(undefined4 *)(*(longlong *)(param_3 + 0x80) + 4 + lVar2) = 0;
          }
          param_4 = param_4 + 1;
          uVar11 = uVar11 + 1;
        } while (param_4 < param_5);
      }
    }
  }
  else {
    uVar10 = 0;
    iStack_54 = iStack_54 + *(int *)(*(longlong *)(param_3 + 0x80) + 0xc + lVar1);
    local_58 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    if (lVar2 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined8 *)(lVar2 + 0x28);
    }
    local_9c = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x48))
                         (param_2,*(undefined8 *)(param_2 + 0x98),
                          *(undefined4 *)(lVar1 + *(longlong *)(param_3 + 0x70)),uVar13);
    iVar8 = *(int *)(param_2 + 0x40);
    if ((iVar8 != 0) && (*(char *)(param_2 + 0x3c) == '\0')) {
      if (*(int *)(param_2 + 0x28) < 0) {
        iVar8 = -iVar8;
      }
      iVar9 = 0;
      if (local_9c != 0) {
        iVar9 = iVar8;
      }
      local_9c = local_9c + iVar9;
    }
    local_90 = *(longlong *)(param_3 + 0x70);
    bVar4 = *(byte *)(local_90 + 0xe + lVar1);
    local_98 = (uint)(bVar4 >> 5);
    if (((*(byte *)(local_90 + 0xc + lVar1) & 4) == 0) || ((bVar4 & 0x10) == 0)) {
      uVar15 = 1;
    }
    else {
      uVar15 = bVar4 & 0xf;
    }
    local_a8 = 0;
    local_a4 = 0;
    if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
      local_a8 = -*(int *)(lVar1 + *(longlong *)(param_3 + 0x80));
      local_a4 = -*(int *)(lVar1 + 4 + *(longlong *)(param_3 + 0x80));
    }
    local_a0 = param_4 + 1;
    local_80 = (ulonglong)local_a0;
    local_b4 = -1;
    local_b0 = 0xff;
    uVar11 = local_80;
    iVar8 = iStack_54;
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_b8 = local_9c;
    iStack_70 = local_9c;
    iStack_50 = local_9c;
    iVar9 = local_9c;
    iVar14 = local_58;
    iVar6 = local_58;
    local_ac = iStack_54;
    while (local_a0 < param_5) {
      local_60 = local_80 * 0x14;
      uVar5 = *(ushort *)(local_90 + 0x10 + local_60);
      local_58 = iVar6;
      iStack_54 = local_ac;
      if (((uVar5 & 0x1f) - 10 < 3) && (uVar5 = uVar5 >> 8, uVar5 != 0)) {
        uVar7 = (uint)uVar11;
        if (1 < uVar15) {
          bVar4 = *(byte *)(local_90 + 0xe + local_60);
          uVar7 = 0;
          if ((bVar4 & 0x10) == 0) {
            uVar7 = bVar4 & 0xf;
          }
          if (((local_98 == 0) || (local_98 != bVar4 >> 5)) ||
             (iVar12 = uVar7 - 1, (int)uVar15 <= iVar12)) {
            iVar12 = uVar15 - 1;
          }
          uVar7 = local_a0;
          if (local_b4 != iVar12) {
            local_b0 = 0xff;
            local_b4 = iVar12;
            if ((uVar10 == 0) && (uVar10 = *local_88, (uVar10 & 0xfffffffe) != 4)) {
              uVar10 = FUN_140418c60(local_88[1]);
              iVar9 = local_9c;
            }
            if (uVar10 != 4) {
              iVar12 = (uVar15 - iVar12) + -1;
            }
            iVar14 = iVar6 + (iVar9 * iVar12) / (int)uVar15;
            local_b8 = iVar9 / (int)uVar15;
            iVar8 = local_ac;
            uVar7 = local_a0;
          }
        }
        local_c8 = uVar7;
        local_ac = iVar8;
        local_c0 = (uint)uVar5;
        if (local_b0 != local_c0) {
          iStack_74 = local_ac;
          local_b0 = local_c0;
          local_78 = iVar14;
          iStack_70 = local_b8;
        }
        FUN_1403f1b50(local_88,local_68,param_3,&local_78);
        *(undefined4 *)(local_60 + *(longlong *)(param_3 + 0x80)) = 0;
        *(undefined4 *)(local_60 + 4 + *(longlong *)(param_3 + 0x80)) = 0;
        piVar3 = (int *)(local_60 + 8 + *(longlong *)(param_3 + 0x80));
        *piVar3 = *piVar3 + local_a8;
        piVar3 = (int *)(local_60 + 0xc + *(longlong *)(param_3 + 0x80));
        *piVar3 = *piVar3 + local_a4;
        local_9c = iStack_50;
        iVar8 = local_ac;
        iVar9 = iStack_50;
      }
      else {
        iVar6 = *(int *)(*(longlong *)(param_3 + 0x80) + local_60);
        iVar12 = *(int *)(*(longlong *)(param_3 + 0x80) + 4 + local_60);
        if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
          iVar6 = -iVar6;
          iVar12 = -iVar12;
        }
        local_a8 = local_a8 + iVar6;
        local_a4 = local_a4 + iVar12;
      }
      local_ac = iVar8;
      local_a0 = local_a0 + 1;
      uVar11 = (ulonglong)local_a0;
      local_80 = local_80 + 1;
      iVar8 = local_ac;
      iVar6 = local_58;
      local_ac = iStack_54;
    }
  }
  return;
}

