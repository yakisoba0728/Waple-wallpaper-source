// Function: FUN_14031f7c0
// Addr: 14031f7c0
// Size: 396 bytes


ulonglong FUN_14031f7c0(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  byte local_res8 [8];
  uint local_res20 [2];
  ulonglong uVar9;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  uVar4 = FUN_1402f54a0(param_2);
  *(undefined4 *)(param_1 + 1) = uVar4;
  if (param_4 == '\0') {
    uVar3 = FUN_1402f5ac0(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_14031f927;
    uVar5 = (uint)uVar3;
    uVar4 = 3;
  }
  else {
    uVar5 = FUN_1402f58c0();
    if (local_res20[0] != 0) goto LAB_14031f927;
    uVar4 = 5;
  }
  uVar6 = (ulonglong)local_res20[0];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  if (uVar5 == 0) {
LAB_14031f923:
    if ((int)uVar6 == 0) {
      return uVar6;
    }
  }
  else {
    bVar2 = FUN_1402f55a0(param_2,local_res20);
    uVar8 = 0;
    if (local_res20[0] != 0) goto LAB_14031f927;
    if ((byte)(bVar2 - 1) < 4) {
      iVar7 = (uVar5 + 1) * (uint)bVar2;
      *(uint *)(param_1 + 2) = uVar5;
      *(byte *)((longlong)param_1 + 0x14) = bVar2;
      *(int *)(param_1 + 3) = *(int *)((longlong)param_1 + 0xc) + iVar7 + (int)param_1[1];
      local_res20[0] = FUN_1402f5c90(param_2,iVar7 - (uint)bVar2);
      if (local_res20[0] != 0) goto LAB_14031f927;
      local_res20[0] = FUN_1402f54b0(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
      if ((local_res20[0] == 0) && (uVar6 = uVar9, *(byte *)((longlong)param_1 + 0x14) != 0)) {
        do {
          uVar5 = (int)uVar6 + 1;
          uVar8 = (int)uVar9 << 8 | (uint)local_res8[uVar6];
          uVar9 = (ulonglong)uVar8;
          uVar6 = (ulonglong)uVar5;
        } while ((int)uVar5 < (int)(uint)*(byte *)((longlong)param_1 + 0x14));
      }
      else if (local_res20[0] != 0) goto LAB_14031f927;
      if (uVar8 != 0) {
        *(uint *)((longlong)param_1 + 0x1c) = uVar8 - 1;
        if (param_3 == '\0') {
          uVar6 = FUN_1402f5c90(param_2);
        }
        else {
          uVar6 = FUN_1402f5150(param_2,uVar8 - 1,param_1 + 5);
        }
        local_res20[0] = (uint)uVar6;
        goto LAB_14031f923;
      }
    }
    local_res20[0] = 8;
  }
LAB_14031f927:
  FUN_1402f7f90(uVar1,param_1[4]);
  param_1[4] = 0;
  return (ulonglong)local_res20[0];
}

