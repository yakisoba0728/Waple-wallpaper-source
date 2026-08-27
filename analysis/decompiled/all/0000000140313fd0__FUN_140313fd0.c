// Function: FUN_140313fd0
// Addr: 140313fd0
// Size: 2174 bytes


int FUN_140313fd0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  uint *puVar22;
  int local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  uint *local_78;
  uint local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  uint *local_50;
  longlong local_48;
  longlong local_40;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  local_a8 = 0;
  if (*(longlong *)(param_1 + 0x408) == 0) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    uVar14 = 0;
    if (param_2 != 0) {
      do {
        if (*(int *)(param_3 + uVar14 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          break;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < param_2);
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      return 0;
    }
    local_a8 = FUN_1403073d0(param_1);
    if (local_a8 != 0) {
      return local_a8;
    }
  }
  puVar21 = *(uint **)(param_1 + 0x408);
  puVar22 = *(uint **)(puVar21 + 6);
  if (*puVar22 < param_2) {
    param_2 = *puVar22;
  }
  uVar14 = 0;
  if (param_2 != 0) {
    do {
      if (0x20000 < *(int *)(param_3 + uVar14 * 4) + 0x10000U) {
        return 6;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while (uVar13 < param_2);
  }
  local_78 = puVar21;
  if ((*(char *)(param_1 + 0x400) == '\0') && (*(longlong *)(puVar21 + 0x22) == 0)) {
    iVar9 = FUN_140310b10(param_1);
    if ((iVar9 != 0x8e) && (iVar9 != 0)) {
      return iVar9;
    }
    local_a8 = 0;
  }
  bVar5 = false;
  if (*(longlong *)(puVar21 + 2) == 0) {
    uVar10 = FUN_1402f80b0(uVar2,4,0,*puVar22,0,&local_a8);
    *(undefined8 *)(puVar21 + 2) = uVar10;
    if (local_a8 != 0) {
      return local_a8;
    }
    bVar5 = true;
  }
  lVar11 = *(longlong *)(puVar21 + 4);
  if (lVar11 == 0) {
    uVar10 = FUN_1402f80b0(uVar2,4,0,*puVar22,0,&local_a8);
    *(undefined8 *)(local_78 + 4) = uVar10;
    if (local_a8 != 0) {
      return local_a8;
    }
    iVar9 = 1;
LAB_140314264:
    puVar21 = local_78;
    uVar13 = *puVar22;
    *local_78 = uVar13;
    if (param_3 != 0) {
      FUN_1404210f0(*(undefined8 *)(local_78 + 4),param_3,(ulonglong)param_2 << 2);
      uVar13 = *puVar21;
    }
    if (param_4 != '\0') {
      if (bVar5) {
        param_2 = uVar13;
      }
      FUN_140311660(param_1,param_2,*(undefined8 *)(puVar21 + 4),*(undefined8 *)(puVar21 + 2));
    }
    *(undefined1 *)(param_1 + 0x401) = 0;
    if (*puVar21 != 0) {
      uVar14 = 0;
      do {
        if (*(int *)(*(longlong *)(puVar21 + 4) + uVar14 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          break;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < *puVar21);
    }
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      if (iVar9 == 1) {
        puVar22 = *(uint **)(param_1 + 0x408);
        local_98 = 0;
        if (puVar22 == (uint *)0x0) {
          local_a8 = 0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0xa0);
          local_88 = plVar3[6];
          local_50 = puVar22;
          local_a4 = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,plVar3,&local_9c);
          if (local_a4 == 0) {
            local_a4 = FUN_1402f4fe0(plVar3);
            if (local_a4 == 0) {
              lVar11 = plVar3[7];
              lVar18 = *plVar3;
              iVar9 = FUN_1402f5200(plVar3);
              if (iVar9 == 0x10000) {
                uVar6 = FUN_1402f52a0(plVar3);
                uVar7 = FUN_1402f52a0(plVar3);
                local_8c = uVar6 & 0xfff;
                if (local_9c < (uint)uVar7 + local_8c * 4) {
                  local_a4 = 8;
                }
                else {
                  local_a0 = ((uint)uVar7 - (int)lVar18) + (int)lVar11;
                  if ((short)uVar6 < 0) {
                    uVar13 = (int)plVar3[7] - (int)*plVar3;
                    if (local_a0 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                      lVar11 = (ulonglong)local_a0 + *plVar3;
                    }
                    else {
                      lVar11 = plVar3[8];
                    }
                    plVar3[7] = lVar11;
                    local_68 = FUN_1403114e0(plVar3,&local_98);
                    local_a0 = (int)plVar3[7] - (int)*plVar3;
                    if (uVar13 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                      plVar3[7] = (ulonglong)uVar13 + *plVar3;
                    }
                    else {
                      plVar3[7] = plVar3[8];
                    }
                  }
                  else {
                    local_68 = 0;
                  }
                  lVar18 = local_88;
                  lVar11 = FUN_1402f7ff0(local_88,4,0,*puVar22 * 3,0,&local_a4);
                  lVar12 = 0;
                  local_40 = lVar11;
                  if ((local_a4 == 0) &&
                     (local_80 = FUN_1402f80b0(lVar18,4,0,*(undefined4 *)(param_1 + 0x3d0),0,
                                               &local_a4), lVar12 = local_80, local_a4 == 0)) {
                    local_90 = 0;
                    local_58 = lVar11 + (ulonglong)*puVar22 * 4;
                    local_60 = local_58 + (ulonglong)*puVar22 * 4;
                    if (local_8c != 0) {
                      do {
                        uVar6 = FUN_1402f52a0(plVar3);
                        uVar7 = FUN_1402f52a0(plVar3);
                        if ((short)uVar7 < 0) {
                          uVar14 = 0;
                          uVar13 = 0;
                          if (*puVar22 != 0) {
                            do {
                              sVar8 = FUN_1402f52a0(plVar3);
                              *(int *)(lVar11 + uVar14 * 4) = (int)sVar8 << 2;
                              uVar17 = (int)uVar14 + 1;
                              uVar14 = (ulonglong)uVar17;
                              uVar13 = *puVar22;
                            } while (uVar17 < uVar13);
                          }
                        }
                        else {
                          if (puVar22[0x1a] <= (uVar7 & 0xfff)) {
                            local_a4 = 8;
                            lVar12 = local_80;
                            goto LAB_1403147b0;
                          }
                          uVar13 = *puVar22;
                          lVar11 = *(longlong *)(puVar22 + 0x1c) +
                                   (ulonglong)((uVar7 & 0xfff) * uVar13) * 4;
                        }
                        lVar18 = local_58;
                        if (((uVar7 >> 0xe & 1) != 0) && (uVar14 = 0, uVar13 != 0)) {
                          do {
                            sVar8 = FUN_1402f52a0(plVar3);
                            lVar12 = local_60;
                            *(int *)(lVar18 + uVar14 * 4) = (int)sVar8 << 2;
                            uVar13 = (int)uVar14 + 1;
                            uVar14 = (ulonglong)uVar13;
                          } while (uVar13 < *puVar22);
                          uVar14 = 0;
                          if (*puVar22 != 0) {
                            do {
                              sVar8 = FUN_1402f52a0(plVar3);
                              *(int *)(lVar12 + uVar14 * 4) = (int)sVar8 << 2;
                              uVar13 = (int)uVar14 + 1;
                              uVar14 = (ulonglong)uVar13;
                            } while (uVar13 < *puVar22);
                          }
                        }
                        iVar9 = FUN_1403103e0(puVar22,uVar7,lVar11,local_58,local_60);
                        lVar18 = local_88;
                        if (iVar9 != 0) {
                          local_70 = (int)plVar3[7] - (int)*plVar3;
                          if (local_a0 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                            lVar11 = (ulonglong)local_a0 + *plVar3;
                          }
                          else {
                            lVar11 = plVar3[8];
                          }
                          plVar3[7] = lVar11;
                          if ((uVar7 >> 0xd & 1) == 0) {
                            local_94 = local_98;
                            local_48 = 0;
                            lVar11 = local_68;
                          }
                          else {
                            local_48 = FUN_1403114e0(plVar3,&local_94);
                            lVar11 = local_48;
                          }
                          uVar17 = local_94;
                          uVar13 = local_94;
                          if (local_94 == 0) {
                            uVar13 = *(uint *)(param_1 + 0x3d0);
                          }
                          lVar12 = FUN_140311370(plVar3,uVar13);
                          lVar18 = local_88;
                          if ((lVar11 != 0) && (lVar12 != 0)) {
                            uVar14 = 0;
                            if (lVar11 == -1) {
                              if (*(int *)(param_1 + 0x3d0) != 0) {
                                do {
                                  piVar19 = (int *)(local_80 + uVar14 * 4);
                                  lVar11 = (longlong)*(int *)(lVar12 + uVar14 * 4) * (longlong)iVar9
                                  ;
                                  uVar13 = (int)uVar14 + 1;
                                  uVar14 = (ulonglong)uVar13;
                                  *piVar19 = *piVar19 +
                                             (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f))
                                                  >> 0x10);
                                  puVar22 = local_50;
                                } while (uVar13 < *(uint *)(param_1 + 0x3d0));
                              }
                            }
                            else if (uVar17 != 0) {
                              do {
                                uVar7 = *(ushort *)(lVar11 + uVar14 * 2);
                                if ((uint)uVar7 < *(uint *)(param_1 + 0x3d0)) {
                                  piVar19 = (int *)(local_80 + (ulonglong)uVar7 * 4);
                                  lVar16 = (longlong)*(int *)(lVar12 + uVar14 * 4) * (longlong)iVar9
                                  ;
                                  *piVar19 = *piVar19 +
                                             (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f))
                                                  >> 0x10);
                                }
                                uVar13 = (int)uVar14 + 1;
                                uVar14 = (ulonglong)uVar13;
                                puVar22 = local_50;
                              } while (uVar13 < uVar17);
                            }
                          }
                          if (local_48 != -1) {
                            FUN_1402f7f90(local_88,local_48);
                          }
                          FUN_1402f7f90(lVar18,lVar12);
                          if (local_70 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                            plVar3[7] = (ulonglong)local_70 + *plVar3;
                          }
                          else {
                            plVar3[7] = plVar3[8];
                          }
                        }
                        local_90 = local_90 + 1;
                        local_a0 = local_a0 + uVar6;
                        lVar11 = local_40;
                      } while (local_90 < local_8c);
                    }
                    lVar12 = local_80;
                    uVar14 = 0;
                    if (*(int *)(param_1 + 0x3d0) != 0) {
                      do {
                        lVar11 = uVar14 * 4;
                        uVar13 = (int)uVar14 + 1;
                        uVar14 = (ulonglong)uVar13;
                        piVar19 = (int *)(*(longlong *)(param_1 + 0x3d8) + lVar11);
                        *piVar19 = *piVar19 + (*(int *)(lVar11 + local_80) + 0x200 >> 10);
                      } while (uVar13 < *(uint *)(param_1 + 0x3d0));
                    }
                    FUN_1402f1260(param_1 + 0xa8,&LAB_140313000,0);
                  }
LAB_1403147b0:
                  if (local_68 != -1) {
                    FUN_1402f7f90(lVar18,local_68);
                  }
                  FUN_1402f7f90(lVar18,lVar12);
                  FUN_1402f7f90(lVar18);
                }
              }
              else {
                local_a4 = 0;
              }
              FUN_1402f5100(plVar3);
              local_a8 = local_a4;
              puVar21 = local_78;
            }
            else {
              local_a8 = 0;
            }
          }
          else {
            local_a8 = 0;
          }
        }
      }
      else if (iVar9 == 2) {
        FUN_1402f7f90(uVar2);
        *(undefined8 *)(param_1 + 0x3d8) = 0;
        local_a8 = FUN_1403131a0(param_1);
      }
    }
    uVar14 = 0;
    if (puVar21[0x1a] != 0) {
      do {
        *(undefined4 *)(*(longlong *)(puVar21 + 0x1e) + uVar14 * 4) = 0xfffe0000;
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < puVar21[0x1a]);
    }
  }
  else {
    uVar14 = 0;
    if (param_2 != 0) {
      do {
        if (*(int *)(uVar14 * 4 + lVar11) != *(int *)(param_3 + uVar14 * 4)) {
          iVar9 = 2;
          goto LAB_140314242;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < param_2);
    }
    piVar19 = (int *)(lVar11 + uVar14 * 4);
    uVar13 = *puVar22;
    bVar4 = false;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      uVar15 = uVar14;
      if ((uint)uVar14 < uVar13) {
        do {
          iVar9 = *piVar19;
          piVar19 = piVar19 + 1;
          if (iVar9 != 0) {
            bVar4 = true;
          }
          uVar17 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar17;
        } while (uVar17 < uVar13);
        goto LAB_140314237;
      }
    }
    else {
      piVar20 = (int *)(*(longlong *)(local_78 + 10) +
                       (((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar13 + uVar14) * 4);
      uVar15 = uVar14;
      if ((uint)uVar14 < uVar13) {
        do {
          iVar9 = *piVar20;
          piVar20 = piVar20 + 1;
          iVar1 = *piVar19;
          piVar19 = piVar19 + 1;
          if (iVar1 != iVar9) {
            bVar4 = true;
          }
          uVar17 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar17;
        } while (uVar17 < uVar13);
LAB_140314237:
        iVar9 = 0;
        if (bVar4) {
LAB_140314242:
          uVar13 = (uint)uVar14;
          while (uVar13 < *puVar22) {
            if (*(int *)(lVar11 + uVar14 * 4) != 0) {
              iVar9 = 2;
              break;
            }
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
          }
          goto LAB_140314264;
        }
      }
    }
    local_a8 = -1;
  }
  return local_a8;
}

