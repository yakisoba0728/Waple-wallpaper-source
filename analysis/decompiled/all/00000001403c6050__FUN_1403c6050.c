// Function: FUN_1403c6050
// Addr: 1403c6050
// Size: 710 bytes


void FUN_1403c6050(longlong param_1,longlong param_2,ulonglong param_3,float *param_4,float *param_5
                  )

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  int local_res10 [4];
  int local_res20 [2];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  lVar3 = *(longlong *)(param_2 + 0x90);
  uVar8 = 0;
  iVar1 = *(int *)(lVar3 + 0x68);
  iVar2 = *(int *)(lVar3 + 0x6c);
  local_48 = 0;
  local_44 = 0;
  if ((iVar1 == 0) && (local_res10[0] = 0, iVar2 == 0)) {
LAB_1403c6291:
    bVar5 = false;
LAB_1403c6294:
    *param_4 = (float)(int)(short)((ushort)*(byte *)(param_1 + 2) * 0x100 +
                                  (ushort)*(byte *)(param_1 + 3)) * *(float *)(lVar3 + 0x50);
    if (bVar5) goto LAB_1403c62c6;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
    uVar7 = uVar8;
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x80);
    }
    iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x90) + 0xa0))
                      (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3,
                       (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100,&local_48
                       ,&local_44,uVar7);
    local_res10[0] = local_44;
    if (iVar6 == 0) goto LAB_1403c6291;
    if (*(float *)(lVar3 + 0x4c) != 0.0) {
      fVar9 = (float)FUN_14041a5c0((float)local_44 * *(float *)(lVar3 + 0x4c) + DAT_1404926c0);
      local_48 = (int)(fVar9 + (float)local_48);
    }
    if (*(char *)(lVar3 + 0x3c) == '\0') {
      iVar6 = -*(int *)(lVar3 + 0x40);
      if (-1 < *(int *)(lVar3 + 0x28)) {
        iVar6 = *(int *)(lVar3 + 0x40);
      }
      local_48 = local_48 + iVar6;
    }
    local_res10[0] = 0;
    local_res20[0] = 0;
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
    uVar7 = uVar8;
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x48);
    }
    iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x90) + 0x68))
                      (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3 & 0xffffffff,local_res20,
                       local_res10,uVar7);
    if (iVar6 == 0) {
      local_res10[0] = 0;
      local_res20[0] = 0;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 0x10);
      if (lVar4 != 0) {
        uVar8 = *(undefined8 *)(lVar4 + 0x50);
      }
      iVar6 = (**(code **)(*(longlong *)(lVar3 + 0x90) + 0x70))
                        (lVar3,*(undefined8 *)(lVar3 + 0x98),param_3 & 0xffffffff,local_res20,
                         local_res10,uVar8);
      if (iVar6 != 0) {
        if (*(char *)(lVar3 + 0x3c) == '\0') {
          iVar6 = -*(int *)(lVar3 + 0x40);
          if (-1 < *(int *)(lVar3 + 0x28)) {
            iVar6 = *(int *)(lVar3 + 0x40);
          }
          local_res20[0] = local_res20[0] + iVar6;
          iVar6 = -*(int *)(lVar3 + 0x44);
          if (-1 < *(int *)(lVar3 + 0x2c)) {
            iVar6 = *(int *)(lVar3 + 0x44);
          }
          local_res10[0] = local_res10[0] + iVar6;
        }
        FUN_1403d05d0(lVar3,param_3 & 0xffffffff,&local_40,&local_3c);
        local_res20[0] = local_res20[0] - local_40;
        local_res10[0] = local_res10[0] - local_3c;
      }
    }
    else if (*(char *)(lVar3 + 0x3c) == '\0') {
      iVar6 = -*(int *)(lVar3 + 0x40);
      if (-1 < *(int *)(lVar3 + 0x28)) {
        iVar6 = *(int *)(lVar3 + 0x40);
      }
      local_res20[0] = local_res20[0] + iVar6;
      iVar6 = -*(int *)(lVar3 + 0x44);
      if (-1 < *(int *)(lVar3 + 0x2c)) {
        iVar6 = *(int *)(lVar3 + 0x44);
      }
      local_res10[0] = local_res10[0] + iVar6;
    }
    bVar5 = true;
    local_res10[0] = local_44 - local_res10[0];
    if (iVar1 == 0) goto LAB_1403c6294;
    *param_4 = (float)(local_48 - local_res20[0]);
LAB_1403c62c6:
    if (iVar2 != 0) {
      fVar9 = (float)local_res10[0];
      goto LAB_1403c62f6;
    }
  }
  fVar9 = (float)(int)(short)((ushort)*(byte *)(param_1 + 4) * 0x100 +
                             (ushort)*(byte *)(param_1 + 5)) * *(float *)(lVar3 + 0x54);
LAB_1403c62f6:
  *param_5 = fVar9;
  return;
}

