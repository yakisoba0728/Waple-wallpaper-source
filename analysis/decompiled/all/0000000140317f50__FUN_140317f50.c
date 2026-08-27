// Function: FUN_140317f50
// Addr: 140317f50
// Size: 685 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140317f50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  int *local_2e0;
  int local_2d8;
  int local_2d4;
  int local_2d0 [2];
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2a8 [16];
  undefined8 local_228 [12];
  undefined8 local_1c8 [48];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_308;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  iVar7 = 0;
  local_2d4 = 0;
  local_2a8[0] = 0;
  local_2c8 = param_1;
  (*(code *)param_2[0xf])(param_2,local_1c8,0x10,&local_2d8);
  if (local_2d8 < 0) {
    local_2d4 = 0xa2;
  }
  else if ((local_2d8 == 0) || (0x10 < local_2d8)) {
LAB_1403181ac:
    local_2d4 = 3;
  }
  else {
    local_2c0 = *param_2;
    local_2b8 = param_2[2];
    iVar2 = iVar7;
    if (0 < local_2d8) {
      do {
        iVar6 = 0;
        lVar9 = (longlong)iVar7;
        *param_2 = local_1c8[lVar9 * 3];
        param_2[2] = local_1c8[lVar9 * 3 + 1];
        (*(code *)param_2[0xf])(param_2,local_228,4,local_2d0);
        iVar8 = local_2d0[0];
        if (iVar7 == 0) {
          if (3 < local_2d0[0] - 1U) goto LAB_1403181ac;
          local_2d4 = FUN_14031ad50(param_1,local_2d8,local_2d0[0]);
          if (local_2d4 != 0) goto LAB_1403181cc;
          local_2e0 = &local_2d4;
          local_2e8 = 0;
          local_2a8[0] = FUN_1402f7ff0(uVar1,4,0,local_2d8 * iVar8);
          if (local_2d4 != 0) goto LAB_1403181cc;
          iVar2 = 1;
          if (1 < local_2d8) {
            do {
              iVar4 = iVar2 * iVar8;
              lVar5 = (longlong)iVar2;
              iVar2 = iVar2 + 1;
              local_2a8[lVar5] = local_2a8[0] + (longlong)iVar4 * 4;
            } while (iVar2 < local_2d8);
          }
        }
        else {
          iVar8 = iVar2;
          if (local_2d0[0] != iVar2) goto LAB_1403181ac;
        }
        if (0 < local_2d0[0]) {
          lVar9 = local_2a8[lVar9];
          do {
            lVar5 = (longlong)iVar6;
            *param_2 = local_228[lVar5 * 3];
            param_2[2] = local_228[lVar5 * 3 + 1];
            uVar3 = (*(code *)param_2[10])(param_2,0);
            iVar6 = iVar6 + 1;
            *(undefined4 *)(lVar9 + lVar5 * 4) = uVar3;
            param_1 = local_2c8;
          } while (iVar6 < local_2d0[0]);
        }
        iVar7 = iVar7 + 1;
        iVar2 = iVar8;
      } while (iVar7 < local_2d8);
    }
    iVar7 = 0;
    *param_2 = local_2c0;
    param_2[2] = local_2b8;
    lVar9 = *(longlong *)(param_1 + 0x2e0);
    if (*(longlong *)(lVar9 + 0x28) != 0) {
      FUN_1402f7f90(uVar1);
      *(undefined8 *)(lVar9 + 0x28) = 0;
    }
    if (0 < local_2d8) {
      do {
        lVar5 = (longlong)iVar7;
        iVar7 = iVar7 + 1;
        *(longlong *)(lVar9 + 0x28 + lVar5 * 8) = local_2a8[lVar5];
        local_2a8[lVar5] = 0;
      } while (iVar7 < local_2d8);
    }
  }
LAB_1403181cc:
  FUN_1402f7f90(uVar1,local_2a8[0]);
  *(int *)(param_2 + 3) = local_2d4;
  return;
}

