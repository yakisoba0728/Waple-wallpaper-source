// Function: FUN_1403b14c0
// Addr: 1403b14c0
// Size: 759 bytes


bool FUN_1403b14c0(int *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res18 [2];
  
  uVar9 = 0;
  local_res18[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
  uVar5 = uVar9;
  if (lVar2 != 0) {
    uVar5 = *(ulonglong *)(lVar2 + 0x10);
  }
  iVar3 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                    (param_3,*(undefined8 *)(param_3 + 0x98),0x627,local_res18,uVar5);
  if ((iVar3 != 0) && (local_res18[0] == 199)) {
    local_res18[0] = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
    uVar5 = uVar9;
    if (lVar2 != 0) {
      uVar5 = *(ulonglong *)(lVar2 + 0x10);
    }
    iVar3 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                      (param_3,*(undefined8 *)(param_3 + 0x98),0x644,local_res18,uVar5);
    if ((iVar3 != 0) && (local_res18[0] == 0xe1)) {
      local_res18[0] = 0;
      lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
      uVar5 = uVar9;
      if (lVar2 != 0) {
        uVar5 = *(ulonglong *)(lVar2 + 0x10);
      }
      iVar3 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                        (param_3,*(undefined8 *)(param_3 + 0x98),0x649,local_res18,uVar5);
      if ((iVar3 != 0) && (local_res18[0] == 0xec)) {
        local_res18[0] = 0;
        lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
        uVar5 = uVar9;
        if (lVar2 != 0) {
          uVar5 = *(ulonglong *)(lVar2 + 0x10);
        }
        iVar3 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                          (param_3,*(undefined8 *)(param_3 + 0x98),0x64a,local_res18,uVar5);
        if ((iVar3 != 0) && (local_res18[0] == 0xed)) {
          local_res18[0] = 0;
          lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
          uVar5 = uVar9;
          if (lVar2 != 0) {
            uVar5 = *(ulonglong *)(lVar2 + 0x10);
          }
          iVar3 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                            (param_3,*(undefined8 *)(param_3 + 0x98),0x652,local_res18,uVar5);
          if ((iVar3 != 0) && (uVar5 = uVar9, uVar10 = uVar9, local_res18[0] == 0xfa)) {
            do {
              lVar2 = uVar10 * 6;
              uVar8 = (uint)(byte)(&DAT_140452cd3)[lVar2] * 0x10000 +
                      (uint)(byte)(&DAT_140452cd4)[lVar2] * 0x100 +
                      (uint)(byte)(&DAT_140452cd2)[lVar2] * 0x1000000 +
                      (uint)(byte)(&DAT_140452cd5)[lVar2];
              iVar3 = *(int *)(param_2 + 0x3c) + -1;
              uVar7 = uVar9;
              if (-1 < iVar3) {
                do {
                  uVar4 = (uint)(iVar3 + (int)uVar7) >> 1;
                  uVar1 = *(uint *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar4 * 0x24);
                  if (uVar8 < uVar1) {
                    iVar3 = uVar4 - 1;
                  }
                  else {
                    if (uVar8 <= uVar1) {
                      iVar3 = *(int *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar4 * 0x24 +
                                      0x1c);
                      param_1[uVar5 + 2] = iVar3;
                      if (iVar3 != 0) {
                        uVar8 = (uint)(byte)(&DAT_140452cd7)[lVar2] +
                                (uint)(byte)(&DAT_140452cd6)[lVar2] * 0x100;
                        if (uVar8 == 0) {
                          *(undefined8 **)(param_1 + uVar5 * 2 + 10) = &DAT_14045dd10;
                          uVar6 = FUN_140372760();
                          *(undefined8 *)(param_1 + uVar5 * 2 + 0x18) = uVar6;
                          uVar5 = (ulonglong)((int)uVar5 + 1);
                        }
                        else {
                          *(undefined **)(param_1 + uVar5 * 2 + 10) = &DAT_140452cd0 + uVar8;
                          if (&DAT_140452cd0 + uVar8 != (undefined *)0x0) {
                            uVar6 = FUN_140372760();
                            *(undefined8 *)(param_1 + uVar5 * 2 + 0x18) = uVar6;
                            uVar5 = (ulonglong)((int)uVar5 + 1);
                          }
                        }
                      }
                      goto LAB_1403b171b;
                    }
                    uVar7 = (ulonglong)(uVar4 + 1);
                  }
                } while ((int)uVar7 <= iVar3);
              }
              param_1[uVar5 + 2] = 0;
LAB_1403b171b:
              uVar10 = uVar10 + 1;
              if (uVar10 == 5) {
                *param_1 = (int)uVar5;
                *(undefined1 *)(param_1 + 1) = 0;
                return (int)uVar5 != 0;
              }
            } while( true );
          }
        }
      }
    }
  }
  return false;
}

