// Function: FUN_14030bc70
// Addr: 14030bc70
// Size: 1209 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14030bc70(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_1d8 [32];
  ushort *local_1b8;
  uint local_1a8;
  int local_1a4;
  ushort local_1a0 [2];
  ushort local_19c [2];
  longlong local_198;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  uint local_168;
  undefined1 local_164 [4];
  undefined8 local_160;
  short local_154;
  int local_150;
  int local_14c;
  int local_140;
  int local_138;
  int local_130;
  longlong local_b0;
  int local_98;
  int local_94;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_1d8;
  lVar9 = *(longlong *)(param_2 + 8);
  if ((*(int *)(param_1 + 0x80) != -1) &&
     (((((param_4 & 8) == 0 || ((*(byte *)(lVar9 + 8) & 1) == 0)) &&
       ((*(uint *)(lVar9 + 4) & 0x7fff0000) == 0)) && ((*(uint *)(lVar9 + 8) & 0x8000) == 0)))) {
    iVar8 = FUN_140311cf0(param_1,param_2,(ulonglong)param_3);
    lVar3 = *(longlong *)(param_2 + 8);
    if (iVar8 == 0) {
      if ((*(uint *)(lVar3 + 8) & 0x20001) == 0) {
        return 0;
      }
      local_1a4 = *(int *)(param_1 + 0x1c);
      local_170 = 0;
      local_1a8 = *(uint *)(param_1 + 0x20);
      FUN_1404217a0(local_164,0,0x10c);
      local_160 = *(undefined8 *)(lVar3 + 0xa0);
      local_70 = 0;
      local_68 = 0;
      local_188 = lVar3;
      local_180 = param_1;
      local_178 = param_2;
      local_168 = param_4;
      FUN_140311fa0(&local_188,param_3,0,1);
      FUN_1402f11b0(&local_70,0,*(undefined8 *)(local_188 + 0x98),0);
      uVar10 = (ulonglong)local_94;
      *(int *)(param_2 + 0x50) = local_138;
      *(int *)(param_2 + 0x54) = local_94;
      if ((*(int *)(lVar9 + 0x474) == 3) && (0 < local_154)) {
        if ((param_4 & 0x10) != 0) {
          local_140 = local_150;
          local_14c = local_98;
        }
        *(int *)(param_2 + 0x90) =
             *(int *)(param_2 + 0x90) +
             ((int)((ulonglong)
                    ((longlong)local_1a4 * (longlong)local_140 +
                    ((longlong)local_1a4 * (longlong)local_140 >> 0x3f) + 0x8000) >> 0x10) >> 6);
        *(int *)(param_2 + 0x94) =
             *(int *)(param_2 + 0x94) +
             ((int)((ulonglong)
                    ((longlong)(int)local_1a8 * (longlong)local_14c + 0x8000 +
                    ((longlong)(int)local_1a8 * (longlong)local_14c >> 0x3f)) >> 0x10) >> 6);
      }
      if ((*(int *)(param_2 + 0x40) == 0) && (local_138 != 0)) {
        *(int *)(param_2 + 0x40) =
             (int)((ulonglong)
                   ((longlong)local_1a4 * (longlong)local_138 + 0x8000 +
                   ((longlong)local_1a4 * (longlong)local_138 >> 0x3f)) >> 0x10);
      }
      if (*(int *)(param_2 + 0x4c) != 0) {
        return 0;
      }
      if (local_94 == 0) {
        return 0;
      }
      goto LAB_14030be63;
    }
    if ((*(byte *)(lVar3 + 8) & 1) == 0) {
      return iVar8;
    }
  }
  if ((param_4 >> 0xe & 1) != 0) {
    return 6;
  }
  local_1a8 = param_4 & 1;
  if (((param_4 & 1) == 0) && (*(short *)(param_1 + 0x74) == 0)) {
    return 0x24;
  }
  if (((param_4 & 0x1100000) == 0x100000) && (*(longlong *)(lVar9 + 0x4e8) != 0)) {
    local_198 = *(longlong *)(lVar9 + 0x2d0);
    iVar8 = (**(code **)(local_198 + 0x178))(param_2,param_3);
    lVar3 = local_198;
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_1 + 0x1c);
      local_1b8 = local_1a0;
      uVar2 = *(uint *)(param_1 + 0x20);
      *(undefined4 *)(param_2 + 0x60) = 0x53564720;
      (**(code **)(local_198 + 0x150))(lVar9,0,param_3,&local_1a4);
      local_1b8 = local_19c;
      (**(code **)(lVar3 + 0x150))(lVar9,1,param_3,&local_1a8);
      uVar10 = (ulonglong)local_19c[0];
      lVar9 = (longlong)iVar8 * (ulonglong)local_1a0[0];
      *(uint *)(param_2 + 0x50) = (uint)local_1a0[0];
      *(uint *)(param_2 + 0x54) = (uint)local_19c[0];
      *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
      local_1a8 = uVar2;
LAB_14030be63:
      *(int *)(param_2 + 0x4c) =
           (int)((longlong)(int)local_1a8 * uVar10 + 0x8000 +
                 ((longlong)((longlong)(int)local_1a8 * uVar10) >> 0x3f) >> 0x10);
      return 0;
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) {
    return 6;
  }
  local_1b8 = (ushort *)((ulonglong)local_1b8 & 0xffffffffffffff00);
  iVar8 = FUN_140313d90(&local_188,param_1,param_2,param_4);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (((param_4 & 0x110) == 0x100) && (local_60 != 0)) {
    *(uint *)(param_2 + 0x40) = (uint)*(byte *)((ulonglong)param_3 + local_60) << 6;
    iVar8 = 0;
    goto LAB_14030c0e9;
  }
  iVar8 = FUN_140311fa0(&local_188,param_3,0,0);
  if (iVar8 != 0) goto LAB_14030c0e9;
  puVar1 = (uint *)(param_2 + 0xb8);
  if (*(int *)(param_2 + 0x60) == 0x636f6d70) {
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(local_170 + 0x50);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(local_170 + 0x58);
  }
  else {
    *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    uVar7 = *(undefined8 *)(local_170 + 0x20);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(local_170 + 0x18);
    *(undefined8 *)(param_2 + 0xa0) = uVar7;
    uVar4 = *(undefined4 *)(local_170 + 0x2c);
    uVar5 = *(undefined4 *)(local_170 + 0x30);
    uVar6 = *(undefined4 *)(local_170 + 0x34);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(local_170 + 0x28);
    *(undefined4 *)(param_2 + 0xac) = uVar4;
    *(undefined4 *)(param_2 + 0xb0) = uVar5;
    *(undefined4 *)(param_2 + 0xb4) = uVar6;
    *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(local_170 + 0x38);
    *puVar1 = *puVar1 & 0xfffffdff;
    if ((local_1a8 == 0) && (*(ushort *)(*(longlong *)(param_1 + 0x40) + 2) < 0x18)) {
      *puVar1 = *puVar1 | 0x100;
    }
    if (local_130 != 0) {
      FUN_1402f3790((undefined8 *)(param_2 + 0x98),-local_130,0);
    }
  }
  if ((param_4 & 2) == 0) {
    *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(local_b0 + 0x220);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(local_b0 + 0x218);
    if (*(char *)(local_b0 + 0x1d2) == '\0') {
LAB_14030c0d6:
      *puVar1 = *puVar1 | 8;
    }
    else {
      iVar8 = *(int *)(local_b0 + 0x1d4);
      if (iVar8 == 0) {
        *puVar1 = *puVar1 | 0x20;
      }
      else if (iVar8 != 1) {
        if (iVar8 == 4) {
          *puVar1 = *puVar1 | 0x30;
        }
        else {
          if (iVar8 != 5) goto LAB_14030c0d6;
          *puVar1 = *puVar1 | 0x10;
        }
      }
    }
  }
  iVar8 = FUN_140310180(&local_188,param_3);
LAB_14030c0e9:
  FUN_1402f11b0(&local_70,0,*(undefined8 *)(local_188 + 0x98),0);
  return iVar8;
}

