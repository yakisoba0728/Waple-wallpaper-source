// Function: FUN_14034f5b0
// Addr: 14034f5b0
// Size: 1195 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14034f5b0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int *local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  int local_c0;
  int *local_a8;
  longlong local_a0;
  undefined4 local_98;
  code *local_90;
  longlong *local_70;
  undefined8 local_68;
  uint local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_118;
  local_d8 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = param_2 + 0x98;
  iVar12 = 0;
  iVar11 = 0;
  iVar5 = 0;
  local_e8[0] = 0;
  piVar9 = (int *)(param_2 + 0x68);
  lVar14 = param_2;
  local_e0 = param_4;
  local_d0 = param_2;
  if (*(int *)(param_2 + 0x60) == *(int *)(param_1 + 0x20)) {
    if (((param_3 == 2) || ((int)param_3 < 0)) || (4 < (int)param_3)) {
      local_e8[0] = 0x13;
      iVar12 = iVar11;
      iVar5 = 0;
    }
    else {
      if ((*(byte *)(*(longlong *)(param_2 + 0xf0) + 8) & 1) != 0) {
        FUN_1402f7f90(local_d8,*(undefined8 *)(param_2 + 0x78));
        *(undefined8 *)(param_2 + 0x78) = 0;
        puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      cVar4 = FUN_1402f7200(param_2,param_3,local_e0);
      if (cVar4 == '\0') {
        iVar8 = 0;
        if ((*piVar9 != 0) && (iVar12 = iVar11, *(int *)(param_2 + 0x70) != 0)) {
          local_f0 = local_e8;
          local_f8 = 0;
          uVar7 = FUN_1402f80b0(local_d8,*(int *)(param_2 + 0x70),0);
          *(undefined8 *)(param_2 + 0x78) = uVar7;
          if (local_e8[0] != 0) goto LAB_14034f67c;
          puVar1 = (uint *)(*(longlong *)(param_2 + 0xf0) + 8);
          *puVar1 = *puVar1 | 1;
          iVar12 = *(int *)(param_2 + 0x90) * -0x40;
          iVar8 = *piVar9 << 6;
          if (*(char *)(param_2 + 0x82) == '\x06') {
            iVar8 = (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f) +
                    iVar8 / 3 + (iVar8 >> 0x1f);
          }
          iVar8 = *(int *)(param_2 + 0x94) * -0x40 + iVar8;
          if (((-*(int *)(param_2 + 0x90) & 0x3ffffffU) != 0) || (iVar8 != 0)) {
            FUN_1402f3790(lVar2,iVar12,iVar8);
          }
          if (param_3 < 2) {
            if ((*(byte *)(param_2 + 0xb8) & 0x40) == 0) {
              local_98 = 1;
              local_a8 = piVar9;
              local_a0 = lVar2;
              local_e8[0] = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8)
              ;
            }
            else {
              piVar10 = *(int **)(param_2 + 0xa0);
              if (piVar10 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                piVar13 = piVar10 + (ulonglong)*(ushort *)(param_2 + 0x9a) * 2;
              }
              uVar6 = *(int *)(param_2 + 0x6c) << 2;
              if (uVar6 < 0x8000) {
                local_c0 = *(int *)(param_2 + 0x70);
                local_c8 = *(longlong *)(param_2 + 0x78);
                local_90 = FUN_14034fac0;
                local_70 = &local_c8;
                local_98 = 3;
                local_68 = 0;
                local_5c = *piVar9 * 4;
                if (-1 < local_c0) {
                  local_c8 = (ulonglong)(uint)((*piVar9 + -1) * local_c0) + local_c8;
                }
                piVar9 = piVar10;
                local_60 = uVar6;
                if (piVar10 < piVar13) {
                  do {
                    *piVar9 = *piVar9 << 2;
                    piVar9[1] = piVar9[1] << 2;
                    piVar9 = piVar9 + 2;
                  } while (piVar9 < piVar13);
                  local_a0 = lVar2;
                  local_e8[0] = (**(code **)(param_1 + 0x68))
                                          (*(undefined8 *)(param_1 + 0x60),&local_a8);
                  do {
                    *piVar10 = (int)(*piVar10 + (*piVar10 >> 0x1f & 3U)) >> 2;
                    piVar10[1] = (int)(piVar10[1] + (piVar10[1] >> 0x1f & 3U)) >> 2;
                    piVar10 = piVar10 + 2;
                    lVar14 = local_d0;
                  } while (piVar10 < piVar13);
                }
                else {
                  local_a0 = lVar2;
                  local_e8[0] = (**(code **)(param_1 + 0x68))
                                          (*(undefined8 *)(param_1 + 0x60),&local_a8);
                  lVar14 = local_d0;
                }
              }
              else {
                local_e8[0] = 0x62;
                lVar14 = local_d0;
              }
            }
          }
          else if (param_3 == 3) {
            local_c0 = *(int *)(param_2 + 0x70);
            lVar3 = *(longlong *)(param_1 + 8);
            local_c8 = *(longlong *)(param_2 + 0x78);
            local_90 = (code *)&LAB_14034fa60;
            local_70 = &local_c8;
            local_68 = 0;
            local_60 = *(uint *)(param_2 + 0x6c);
            local_5c = *piVar9;
            local_98 = 3;
            if (-1 < local_c0) {
              local_c8 = (ulonglong)(uint)((local_5c + -1) * local_c0) + local_c8;
            }
            local_a0 = lVar2;
            FUN_1402f3790(lVar2,-*(int *)(lVar3 + 0x158),-*(int *)(lVar3 + 0x15c));
            iVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
            if (iVar5 == 0) {
              local_c8 = local_c8 + 1;
              FUN_1402f3790(lVar2,*(int *)(lVar3 + 0x158) - *(int *)(lVar3 + 0x160),
                            *(int *)(lVar3 + 0x15c) - *(int *)(lVar3 + 0x164));
              iVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
              if (iVar5 == 0) {
                local_c8 = local_c8 + 1;
                FUN_1402f3790(lVar2,*(int *)(lVar3 + 0x160) - *(int *)(lVar3 + 0x168),
                              *(int *)(lVar3 + 0x164) - *(int *)(lVar3 + 0x16c));
                iVar5 = (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x60),&local_a8);
                FUN_1402f3790(lVar2,*(undefined4 *)(lVar3 + 0x168),*(undefined4 *)(lVar3 + 0x16c));
                local_e8[0] = iVar5;
              }
              else {
                FUN_1402f3790(lVar2,*(undefined4 *)(lVar3 + 0x160),*(undefined4 *)(lVar3 + 0x164));
                local_e8[0] = iVar5;
              }
            }
            else {
              FUN_1402f3790(lVar2,*(undefined4 *)(lVar3 + 0x158),*(undefined4 *)(lVar3 + 0x15c));
              local_e8[0] = iVar5;
            }
          }
          else if (param_3 == 4) {
            local_e8[0] = FUN_14034fb50(param_1,lVar2,piVar9);
          }
        }
        iVar5 = iVar8;
        if (local_e8[0] == 0) {
          *(undefined4 *)(lVar14 + 0x60) = 0x62697473;
          goto LAB_14034f6a5;
        }
      }
      else {
        local_e8[0] = 0x62;
      }
    }
  }
  else {
    local_e8[0] = 6;
    iVar5 = 0;
  }
LAB_14034f67c:
  if ((*(byte *)(*(longlong *)(lVar14 + 0xf0) + 8) & 1) != 0) {
    FUN_1402f7f90(local_d8,*(undefined8 *)(param_2 + 0x78));
    *(undefined8 *)(param_2 + 0x78) = 0;
    puVar1 = (uint *)(*(longlong *)(lVar14 + 0xf0) + 8);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
LAB_14034f6a5:
  if ((iVar12 != 0) || (iVar5 != 0)) {
    FUN_1402f3790(lVar2,-iVar12,-iVar5);
  }
  return local_e8[0];
}

