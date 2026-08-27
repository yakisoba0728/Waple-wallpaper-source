// Function: FUN_1403131a0
// Addr: 1403131a0
// Size: 1536 bytes


ulonglong FUN_1403131a0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  uint *puVar16;
  uint local_res18 [2];
  uint local_res20;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  longlong local_98;
  longlong local_90;
  uint local_88;
  uint local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  
  lVar8 = param_2[6];
  local_b8 = (**(code **)(param_1 + 0x2a0))(param_1,0x63767420,param_2,&local_88);
  uVar11 = 0;
  if (local_b8 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    return 0;
  }
  *(uint *)(param_1 + 0x3d0) = local_88 >> 1;
  uVar6 = FUN_1402f7ff0(lVar8,4,0,local_88 >> 1,0,&local_b8);
  *(undefined8 *)(param_1 + 0x3d8) = uVar6;
  uVar7 = (ulonglong)local_b8;
  if ((local_b8 == 0) &&
     (uVar7 = FUN_1402f4fe0(param_2,*(int *)(param_1 + 0x3d0) * 2), (int)uVar7 == 0)) {
    piVar14 = *(int **)(param_1 + 0x3d8);
    piVar1 = piVar14 + *(uint *)(param_1 + 0x3d0);
    local_b8 = 0;
    for (; piVar14 < piVar1; piVar14 = piVar14 + 1) {
      sVar2 = FUN_1402f52a0(param_2);
      *piVar14 = (int)sVar2 << 6;
    }
    FUN_1402f5100(param_2);
    if (*(char *)(param_1 + 0x401) == '\0') {
      uVar7 = (ulonglong)local_b8;
    }
    else {
      puVar16 = *(uint **)(param_1 + 0x408);
      local_b0 = 0;
      uVar7 = uVar11;
      if ((puVar16 != (uint *)0x0) && (*(longlong *)(param_1 + 0x3d8) != 0)) {
        local_90 = param_2[6];
        local_68 = puVar16;
        local_res18[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,param_2,&local_b4);
        if ((local_res18[0] == 0) &&
           (local_res18[0] = FUN_1402f4fe0(param_2,local_b4), uVar7 = 0, local_res18[0] == 0)) {
          lVar8 = param_2[7];
          lVar15 = *param_2;
          iVar5 = FUN_1402f5200(param_2);
          if (iVar5 == 0x10000) {
            uVar3 = FUN_1402f52a0(param_2);
            uVar4 = FUN_1402f52a0(param_2);
            local_a0 = uVar3 & 0xfff;
            if (local_b4 < (uint)uVar4 + local_a0 * 4) {
              local_res18[0] = 8;
            }
            else {
              local_98 = 0;
              local_res20 = ((uint)uVar4 - (int)lVar15) + (int)lVar8;
              if ((short)uVar3 < 0) {
                uVar12 = (int)param_2[7] - (int)*param_2;
                if (local_res20 < (uint)((int)param_2[8] - (int)*param_2)) {
                  lVar8 = (ulonglong)local_res20 + *param_2;
                }
                else {
                  lVar8 = param_2[8];
                }
                param_2[7] = lVar8;
                local_80 = FUN_1403114e0(param_2,&local_b0);
                local_res20 = (int)param_2[7] - (int)*param_2;
                if (uVar12 < (uint)((int)param_2[8] - (int)*param_2)) {
                  param_2[7] = (ulonglong)uVar12 + *param_2;
                }
                else {
                  param_2[7] = param_2[8];
                }
              }
              else {
                local_80 = 0;
              }
              lVar15 = local_90;
              lVar8 = FUN_1402f7ff0(local_90,4,0,*puVar16 * 3,0,local_res18);
              local_58 = lVar8;
              if ((local_res18[0] == 0) &&
                 (local_98 = FUN_1402f80b0(lVar15,4,0,*(undefined4 *)(param_1 + 0x3d0),0,local_res18
                                          ), local_res18[0] == 0)) {
                local_a4 = 0;
                local_70 = (ulonglong)*puVar16 * 4 + lVar8;
                local_78 = local_70 + (ulonglong)*puVar16 * 4;
                if (local_a0 != 0) {
                  do {
                    uVar3 = FUN_1402f52a0(param_2);
                    uVar4 = FUN_1402f52a0(param_2);
                    if ((short)uVar4 < 0) {
                      uVar12 = 0;
                      uVar7 = uVar11;
                      if (*puVar16 != 0) {
                        do {
                          sVar2 = FUN_1402f52a0(param_2);
                          uVar13 = (int)uVar7 + 1;
                          *(int *)(lVar8 + uVar7 * 4) = (int)sVar2 << 2;
                          uVar12 = *puVar16;
                          uVar7 = (ulonglong)uVar13;
                        } while (uVar13 < uVar12);
                      }
                    }
                    else {
                      if (puVar16[0x1a] <= (uVar4 & 0xfff)) {
                        local_res18[0] = 8;
                        goto LAB_140313733;
                      }
                      uVar12 = *puVar16;
                      lVar8 = *(longlong *)(puVar16 + 0x1c) +
                              (ulonglong)((uVar4 & 0xfff) * uVar12) * 4;
                    }
                    lVar15 = local_70;
                    if (((uVar4 >> 0xe & 1) != 0) && (uVar7 = uVar11, uVar12 != 0)) {
                      do {
                        sVar2 = FUN_1402f52a0(param_2);
                        lVar9 = local_78;
                        uVar12 = (int)uVar7 + 1;
                        *(int *)(lVar15 + uVar7 * 4) = (int)sVar2 << 2;
                        uVar7 = (ulonglong)uVar12;
                      } while (uVar12 < *puVar16);
                      uVar7 = uVar11;
                      if (*puVar16 != 0) {
                        do {
                          sVar2 = FUN_1402f52a0(param_2);
                          uVar12 = (int)uVar7 + 1;
                          *(int *)(lVar9 + uVar7 * 4) = (int)sVar2 << 2;
                          uVar7 = (ulonglong)uVar12;
                        } while (uVar12 < *puVar16);
                      }
                    }
                    local_a8 = FUN_1403103e0(puVar16,uVar4,lVar8,local_70,local_78);
                    lVar15 = local_90;
                    if (local_a8 != 0) {
                      local_84 = (int)param_2[7] - (int)*param_2;
                      if (local_res20 < (uint)((int)param_2[8] - (int)*param_2)) {
                        lVar8 = (ulonglong)local_res20 + *param_2;
                      }
                      else {
                        lVar8 = param_2[8];
                      }
                      param_2[7] = lVar8;
                      if ((uVar4 >> 0xd & 1) == 0) {
                        local_ac = local_b0;
                        local_60 = 0;
                        lVar8 = local_80;
                      }
                      else {
                        local_60 = FUN_1403114e0(param_2,&local_ac);
                        lVar8 = local_60;
                      }
                      uVar13 = local_ac;
                      uVar12 = local_ac;
                      if (local_ac == 0) {
                        uVar12 = *(uint *)(param_1 + 0x3d0);
                      }
                      lVar9 = FUN_140311370(param_2,uVar12);
                      lVar15 = local_90;
                      if ((lVar8 != 0) && (lVar9 != 0)) {
                        if (lVar8 == -1) {
                          if (*(int *)(param_1 + 0x3d0) != 0) {
                            uVar7 = uVar11;
                            do {
                              uVar12 = (int)uVar7 + 1;
                              piVar1 = (int *)(local_98 + uVar7 * 4);
                              lVar8 = (longlong)*(int *)(lVar9 + uVar7 * 4) * (longlong)local_a8;
                              *piVar1 = *piVar1 + (int)((ulonglong)
                                                        (lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
                              uVar7 = (ulonglong)uVar12;
                              puVar16 = local_68;
                            } while (uVar12 < *(uint *)(param_1 + 0x3d0));
                          }
                        }
                        else if (uVar13 != 0) {
                          uVar7 = uVar11;
                          do {
                            uVar4 = *(ushort *)(lVar8 + uVar7 * 2);
                            if ((uint)uVar4 < *(uint *)(param_1 + 0x3d0)) {
                              piVar1 = (int *)(local_98 + (ulonglong)uVar4 * 4);
                              lVar10 = (longlong)*(int *)(lVar9 + uVar7 * 4) * (longlong)local_a8;
                              *piVar1 = *piVar1 + (int)((ulonglong)
                                                        (lVar10 + (lVar10 >> 0x3f) + 0x8000) >> 0x10
                                                       );
                            }
                            uVar12 = (int)uVar7 + 1;
                            uVar7 = (ulonglong)uVar12;
                            puVar16 = local_68;
                          } while (uVar12 < uVar13);
                        }
                      }
                      if (local_60 != -1) {
                        FUN_1402f7f90(local_90,local_60);
                      }
                      FUN_1402f7f90(lVar15,lVar9);
                      if (local_84 < (uint)((int)param_2[8] - (int)*param_2)) {
                        param_2[7] = (ulonglong)local_84 + *param_2;
                      }
                      else {
                        param_2[7] = param_2[8];
                      }
                    }
                    local_a4 = local_a4 + 1;
                    local_res20 = local_res20 + uVar3;
                    lVar8 = local_58;
                  } while (local_a4 < local_a0);
                }
                if (*(int *)(param_1 + 0x3d0) != 0) {
                  do {
                    uVar12 = (int)uVar11 + 1;
                    piVar1 = (int *)(*(longlong *)(param_1 + 0x3d8) + uVar11 * 4);
                    *piVar1 = *piVar1 + (*(int *)(uVar11 * 4 + local_98) + 0x200 >> 10);
                    uVar11 = (ulonglong)uVar12;
                  } while (uVar12 < *(uint *)(param_1 + 0x3d0));
                }
                FUN_1402f1260(param_1 + 0xa8,&LAB_140313000,0);
              }
LAB_140313733:
              if (local_80 != -1) {
                FUN_1402f7f90(lVar15,local_80);
              }
              FUN_1402f7f90(lVar15,local_98);
              FUN_1402f7f90(lVar15,lVar8);
            }
          }
          else {
            local_res18[0] = 0;
          }
          FUN_1402f5100(param_2);
          uVar7 = (ulonglong)local_res18[0];
        }
      }
    }
  }
  return uVar7;
}

