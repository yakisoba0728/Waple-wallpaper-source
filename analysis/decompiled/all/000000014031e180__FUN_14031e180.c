// Function: FUN_14031e180
// Addr: 14031e180
// Size: 784 bytes


ulonglong FUN_14031e180(uint *param_1,uint param_2,longlong param_3,int param_4,uint param_5,
                       char param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  ulonglong uVar15;
  uint local_res18 [4];
  
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar11 = (ulonglong)param_2;
  local_res18[0] = 0;
  if (param_5 < 3) {
    param_1[1] = param_5;
    if (param_5 == 0) {
      if (param_2 < 0xe6) {
        uVar10 = FUN_1402f7ff0(uVar2,2,0,uVar11,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar10;
        if (local_res18[0] != 0) goto LAB_14031e452;
        puVar13 = &DAT_14043cd80;
        goto LAB_14031e41f;
      }
    }
    else if (param_5 == 1) {
      if (param_2 < 0xa7) {
        uVar10 = FUN_1402f7ff0(uVar2,2,0,uVar11,0,local_res18);
        *(undefined8 *)(param_1 + 2) = uVar10;
        if (local_res18[0] != 0) goto LAB_14031e452;
        puVar13 = &DAT_14043cf50;
        goto LAB_14031e41f;
      }
    }
    else if ((param_5 == 2) && (param_2 < 0x58)) {
      uVar10 = FUN_1402f7ff0(uVar2,2,0,uVar11,0,local_res18);
      *(undefined8 *)(param_1 + 2) = uVar10;
      if (local_res18[0] != 0) goto LAB_14031e452;
      puVar13 = &DAT_14043d0a0;
LAB_14031e41f:
      FUN_1404210f0(uVar10,puVar13,uVar11 * 2);
      goto LAB_14031e42d;
    }
LAB_14031e3e1:
    local_res18[0] = 3;
  }
  else {
    param_1[1] = param_4 + param_5;
    local_res18[0] = FUN_1402f5c50(param_3);
    if (local_res18[0] != 0) goto LAB_14031e452;
    bVar5 = FUN_1402f55a0(param_3,local_res18);
    *param_1 = (uint)bVar5;
    if (local_res18[0] != 0) goto LAB_14031e452;
    puVar9 = (undefined2 *)FUN_1402f7ff0(uVar2,2,0,param_2,0,local_res18);
    *(undefined2 **)(param_1 + 2) = puVar9;
    if (local_res18[0] != 0) goto LAB_14031e452;
    *puVar9 = 0;
    uVar14 = *param_1;
    if (uVar14 == 0) {
      if (param_2 != 0) {
        local_res18[0] = FUN_1402f4fe0(param_3,param_2 * 2 + -2);
        if (local_res18[0] != 0) goto LAB_14031e452;
        uVar15 = 1;
        if (1 < param_2) {
          do {
            lVar3 = *(longlong *)(param_1 + 2);
            lVar1 = uVar15 * 2;
            uVar8 = FUN_1402f52a0(param_3);
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            *(undefined2 *)(lVar3 + lVar1) = uVar8;
          } while (uVar14 < param_2);
        }
        FUN_1402f5100(param_3);
      }
    }
    else {
      if ((uVar14 != 1) && (uVar14 != 2)) goto LAB_14031e3e1;
      uVar15 = 1;
      if (1 < param_2) {
        while (uVar6 = FUN_1402f5ac0(param_3,local_res18), local_res18[0] == 0) {
          if (*param_1 == 2) {
            uVar7 = FUN_1402f5ac0();
            if (local_res18[0] != 0) break;
            uVar14 = (uint)uVar7;
          }
          else {
            bVar5 = FUN_1402f55a0(param_3,local_res18);
            if (local_res18[0] != 0) break;
            uVar14 = (uint)bVar5;
          }
          uVar12 = 0;
          uVar4 = 0xffff - uVar6;
          if ((uint)uVar6 < 0xffff - uVar14 || (uint)uVar6 == 0xffff - uVar14) {
            uVar4 = uVar14;
          }
          for (; uVar12 <= uVar4; uVar12 = uVar12 + 1) {
            uVar14 = (int)uVar15 + 1;
            *(ushort *)(*(longlong *)(param_1 + 2) + uVar15 * 2) = uVar6;
            if (param_2 <= uVar14) goto LAB_14031e42d;
            uVar6 = uVar6 + 1;
            uVar15 = (ulonglong)uVar14;
          }
        }
        goto LAB_14031e452;
      }
    }
LAB_14031e42d:
    if (param_6 == '\0') {
      uVar11 = (ulonglong)local_res18[0];
    }
    else {
      uVar11 = FUN_14031e030(param_1,uVar11,uVar2);
      local_res18[0] = (uint)uVar11;
    }
    if ((int)uVar11 == 0) {
      return uVar11;
    }
  }
LAB_14031e452:
  FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 2));
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 4));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  return (ulonglong)local_res18[0];
}

