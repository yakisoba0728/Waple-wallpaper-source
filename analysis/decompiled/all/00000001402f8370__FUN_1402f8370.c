// Function: FUN_1402f8370
// Addr: 1402f8370
// Size: 2467 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402f8370(longlong *param_1,uint *param_2,uint param_3,uint *param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  short *psVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  char cVar17;
  uint *puVar18;
  undefined1 auStack_158 [32];
  uint *local_138;
  uint *local_130;
  longlong *local_128;
  char local_118 [8];
  undefined8 *local_110;
  longlong *local_108;
  uint *local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  byte local_d7;
  char acStack_d6 [61];
  char local_99;
  char local_8e;
  char local_86;
  byte local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  ulonglong local_58;
  
  local_58 = DAT_1404dc110 ^ (ulonglong)auStack_158;
  local_110 = (undefined8 *)0x0;
  local_e0 = 0;
  if ((int)param_3 < 1) {
    param_3 = -(-param_3 & 0x7fffffff);
  }
  else {
    param_3 = param_3 & 0x7fffffff;
  }
  local_108 = param_1;
  local_100 = param_4;
  if (param_2 == (uint *)0x0) goto UNWIND_INFO_1402f8d3c_UnwindCodes_84__UnwindOpCode;
  local_f8 = (undefined8 *)0x0;
  local_e8 = 0;
  if (((*param_2 & 2) == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01';
  }
  local_118[0] = cVar17;
  uVar5 = FUN_1402f53d0(param_1,param_2,&local_110);
  puVar11 = local_110;
  if (uVar5 != 0) {
LAB_1402f8bba:
    uVar5 = uVar5 & 0xff;
    lVar10 = local_e8;
    if ((((uVar5 != 0x51) && (uVar5 != 2)) && (uVar5 != 0x55)) || (param_5 == '\0'))
    goto UNWIND_INFO_1402f8d3c_UnwindCodes_45__UnwindOpCode;
    if (puVar11 == (undefined8 *)0x0) {
      uVar5 = 0x55;
      plVar9 = local_108;
      puVar18 = local_100;
    }
    else {
      if ((code *)puVar11[4] == (code *)0x0) {
LAB_1402f8c19:
        uVar5 = *(uint *)(puVar11 + 1);
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
        if (uVar5 == 0) {
          uVar5 = 0x55;
          goto LAB_1402f8d01;
        }
        if ((code *)puVar11[4] == (code *)0x0) {
          if (0x80 < uVar5) {
            uVar5 = 0x80;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(&local_d8,*puVar11,uVar5);
        }
        uVar8 = (*(code *)puVar11[4])(puVar11,0,&local_d8,0x80);
        *(uint *)((longlong)puVar11 + 0xc) = uVar8;
        uVar5 = -(uint)(uVar8 < 0x80) & 0x55;
        if (uVar8 < 0x80) goto LAB_1402f8d01;
        if (((local_d8 == '\0') && (local_8e == '\0')) &&
           ((local_86 == '\0' &&
            (((((byte)(local_d7 - 1) < 0x21 && (local_99 == '\0')) && (acStack_d6[local_d7] == '\0')
              ) && (local_85 < 0x80)))))) {
          local_138 = local_100;
          uVar5 = FUN_1402f6250(local_108,puVar11,
                                (CONCAT31(CONCAT21(CONCAT11(local_85,local_84),local_83),local_82) +
                                 0x7fU & 0xffffff80) + 0x80,param_3);
          goto LAB_1402f8d01;
        }
      }
      else {
        iVar6 = (*(code *)puVar11[4])(puVar11,0,0,0);
        uVar5 = -(uint)(iVar6 != 0) & 0x55;
        if (iVar6 == 0) goto LAB_1402f8c19;
LAB_1402f8d01:
        plVar9 = local_108;
        puVar18 = local_100;
        if ((char)uVar5 != '\x02') goto LAB_1402f8d34;
      }
      puVar18 = local_100;
      plVar9 = local_108;
      local_138 = local_100;
      uVar5 = FUN_1402f6250(local_108,puVar11,0,param_3);
    }
LAB_1402f8d34:
    if ((((uVar5 & 0xff) == 2) || ((uVar5 & 0xff) == 0x55)) && ((*param_2 & 4) != 0)) {
      local_138 = param_2;
      uVar5 = func_0x0001402f94f0(plVar9,puVar11,param_3,puVar18);
    }
    lVar10 = local_e8;
    if (uVar5 == 0) {
      if (puVar11 != (undefined8 *)0x0) {
        lVar10 = puVar11[6];
        if ((code *)puVar11[5] != (code *)0x0) {
          (*(code *)puVar11[5])(puVar11);
        }
UNWIND_INFO_1402f8d3c_UnwindCodes_30__UnwindOpCode:
        if (cVar17 == '\0') {
          (**(code **)(lVar10 + 0x10))(lVar10,puVar11);
        }
      }
      goto UNWIND_INFO_1402f8d3c_UnwindCodes_84__UnwindOpCode;
    }
    goto UNWIND_INFO_1402f8d3c_UnwindCodes_45__UnwindOpCode;
  }
  if ((param_4 == (uint *)0x0) && (lVar10 = 0, -1 < (int)param_3))
  goto UNWIND_INFO_1402f8d3c_UnwindCodes_45__UnwindOpCode;
  lVar10 = *param_1;
  local_e8 = lVar10;
  if (((*param_2 & 8) == 0) ||
     (puVar16 = *(undefined8 **)(param_2 + 10), puVar16 == (undefined8 *)0x0)) {
    plVar9 = param_1 + 3;
    uVar5 = 0xb;
    local_f0 = plVar9 + *(uint *)((longlong)param_1 + 0x14);
    if (plVar9 < local_f0) {
      do {
        puVar16 = (undefined8 *)*plVar9;
        if ((*(byte *)*puVar16 & 1) != 0) {
          if ((*param_2 & 0x10) == 0) {
            uVar8 = 0;
            puVar18 = (uint *)0x0;
          }
          else {
            uVar8 = param_2[0xc];
            puVar18 = *(uint **)(param_2 + 0xe);
          }
          local_128 = &local_e0;
          local_138 = (uint *)CONCAT44(local_138._4_4_,uVar8);
          local_130 = puVar18;
          local_f8 = puVar16;
          uVar5 = func_0x0001402f9880(puVar16,&local_110,local_118,param_3);
          puVar11 = local_110;
          lVar10 = local_e8;
          if (uVar5 == 0) goto LAB_1402f863a;
          if (((param_5 != '\0') &&
              (iVar6 = FUN_140421e50(*(undefined8 *)(*(longlong *)*plVar9 + 8),"truetype"),
              iVar6 == 0)) && ((char)uVar5 == -0x72)) {
            if ((code *)puVar11[4] != (code *)0x0) {
              iVar6 = (*(code *)puVar11[4])(puVar11,0,0,0);
              uVar5 = -(uint)(iVar6 != 0) & 0x55;
              cVar17 = local_118[0];
              if (iVar6 != 0) break;
            }
            local_130 = local_100;
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
            local_138 = puVar18;
            uVar5 = FUN_1402f9a90(local_108,puVar11,param_3,uVar8);
            cVar17 = local_118[0];
            if (uVar5 == 0) {
              lVar10 = puVar11[6];
              if ((code *)puVar11[5] != (code *)0x0) {
                (*(code *)puVar11[5])(puVar11);
              }
              goto UNWIND_INFO_1402f8d3c_UnwindCodes_30__UnwindOpCode;
            }
          }
          cVar17 = local_118[0];
          if ((char)uVar5 != '\x02') break;
        }
        plVar9 = plVar9 + 1;
        cVar17 = local_118[0];
      } while (plVar9 < local_f0);
    }
    goto LAB_1402f8bba;
  }
  local_f8 = puVar16;
  if ((*(byte *)*puVar16 & 1) == 0) {
UNWIND_INFO_1402f8d3c_UnwindCodes_45__UnwindOpCode:
    if (puVar11 != (undefined8 *)0x0) {
      lVar14 = puVar11[6];
      if ((code *)puVar11[5] != (code *)0x0) {
        (*(code *)puVar11[5])(puVar11);
      }
      if (cVar17 == '\0') {
        (**(code **)(lVar14 + 0x10))(lVar14,puVar11);
      }
    }
  }
  else {
    if ((*param_2 & 0x10) == 0) {
      uVar5 = 0;
      local_130 = (uint *)0x0;
    }
    else {
      uVar5 = param_2[0xc];
      local_130 = *(uint **)(param_2 + 0xe);
    }
    local_128 = &local_e0;
    local_138 = (uint *)CONCAT44(local_138._4_4_,uVar5);
    iVar6 = func_0x0001402f9880(puVar16,&local_110,local_118,param_3);
    puVar11 = local_110;
    cVar17 = local_118[0];
    if (iVar6 != 0) goto UNWIND_INFO_1402f8d3c_UnwindCodes_45__UnwindOpCode;
LAB_1402f863a:
    plVar9 = (longlong *)(**(code **)(lVar10 + 8))(lVar10,0x18);
    lVar14 = local_e0;
    if (plVar9 != (longlong *)0x0) {
      plVar9[2] = local_e0;
      lVar10 = *(longlong *)(local_e0 + 0x90);
      if ((undefined8 *)(lVar10 + 0x20) != (undefined8 *)0x0) {
        lVar2 = *(longlong *)(lVar10 + 0x28);
        plVar9[1] = 0;
        *plVar9 = lVar2;
        if (lVar2 == 0) {
          *(undefined8 *)(lVar10 + 0x20) = plVar9;
        }
        else {
          *(longlong **)(lVar2 + 8) = plVar9;
        }
        *(longlong **)(lVar10 + 0x28) = plVar9;
      }
      if ((int)param_3 < 0) {
LAB_1402f8987:
        iVar6 = 0;
        if ((*(byte *)(lVar14 + 8) & 1) != 0) {
          sVar4 = *(short *)(lVar14 + 0x6e);
          if (sVar4 < 0) {
            sVar4 = -sVar4;
            *(short *)(lVar14 + 0x6e) = sVar4;
          }
          if ((*(byte *)(lVar14 + 8) & 0x20) == 0) {
            *(short *)(lVar14 + 0x72) = sVar4;
          }
        }
        if (((*(byte *)(lVar14 + 8) & 2) != 0) && (0 < *(int *)(lVar14 + 0x28))) {
          do {
            psVar13 = (short *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar14 + 0x30));
            sVar4 = *psVar13;
            if (sVar4 < 0) {
              sVar4 = -sVar4;
              *psVar13 = sVar4;
            }
            iVar7 = *(int *)(psVar13 + 4);
            if (iVar7 < 0) {
              iVar7 = -iVar7;
              *(int *)(psVar13 + 4) = iVar7;
            }
            iVar15 = *(int *)(psVar13 + 6);
            if (iVar15 < 0) {
              iVar15 = -iVar15;
              *(int *)(psVar13 + 6) = iVar15;
            }
            if (((sVar4 < 0) || (iVar7 < 0)) || (iVar15 < 0)) {
              psVar13[0] = 0;
              psVar13[1] = 0;
              psVar13[2] = 0;
              psVar13[3] = 0;
              psVar13[4] = 0;
              psVar13[5] = 0;
              psVar13[6] = 0;
              psVar13[7] = 0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(lVar14 + 0x28));
        }
        puVar11 = *(undefined8 **)(lVar14 + 0xd0);
        *puVar11 = 0x10000;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined8 *)((longlong)puVar11 + 0xc) = 0x10000;
        *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
        *(undefined4 *)(puVar11 + 0xc) = 1;
        *(undefined1 *)(puVar11 + 0xb) = 0xff;
        if (local_100 == (uint *)0x0) {
          if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x90) != 0)) &&
             (piVar1 = (int *)(*(longlong *)(lVar14 + 0xd0) + 0x60), *piVar1 = *piVar1 + -1,
             *(int *)(*(longlong *)(lVar14 + 0xd0) + 0x60) < 1)) {
            puVar16 = *(undefined8 **)(lVar14 + 0x90);
            puVar11 = puVar16 + 4;
            if (puVar11 != (undefined8 *)0x0) {
              for (plVar9 = (longlong *)*puVar11; plVar9 != (longlong *)0x0;
                  plVar9 = (longlong *)plVar9[1]) {
                if (plVar9[2] == lVar14) {
                  lVar2 = *plVar9;
                  lVar10 = puVar16[2];
                  plVar9 = (longlong *)plVar9[1];
                  if (lVar2 == 0) {
                    *puVar11 = plVar9;
                  }
                  else {
                    *(longlong **)(lVar2 + 8) = plVar9;
                  }
                  if (plVar9 == (longlong *)0x0) {
                    puVar16[5] = lVar2;
                    (**(code **)(lVar10 + 0x10))(lVar10);
                  }
                  else {
                    *plVar9 = lVar2;
                    (**(code **)(lVar10 + 0x10))(lVar10);
                  }
                  goto UNWIND_INFO_1402f8d3c_UnwindCodes_73__OffsetInProlog;
                }
              }
            }
          }
        }
        else {
          *(longlong *)local_100 = lVar14;
        }
      }
      else {
        if ((local_e0 != 0) && (lVar10 = *(longlong *)(local_e0 + 0x90), lVar10 != 0)) {
          lVar2 = *(longlong *)(lVar10 + 0x10);
          iVar6 = *(int *)(*(longlong *)(lVar10 + 0x18) + 0x40);
          if (iVar6 < 1) {
            if (-1 < iVar6) {
              lRam0000000000000008 = local_e0;
              local_f0 = *(longlong **)(local_e0 + 0x90);
              local_f8 = (undefined8 *)local_f0[3];
              lVar10 = local_f0[2];
              lRam0000000000000000 = local_f0[1];
              puVar11 = (undefined8 *)(**(code **)(lVar10 + 8))(lVar10,0x38);
              if (puVar11 == (undefined8 *)0x0) {
LAB_1402f8848:
                FUN_1402f7150(0);
                (**(code **)(lVar2 + 0x10))(lVar2,0);
              }
              else {
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
                puVar11[3] = 0;
                puVar11[4] = 0;
                puVar11[5] = 0;
                puVar11[6] = 0;
                iVar6 = 0x40;
                puRam00000000000000f0 = puVar11;
                if ((*(uint *)*local_f0 & 0x200) == 0) {
                  local_f0 = (longlong *)(**(code **)(lVar10 + 8))(lVar10,0xb0);
                  if (local_f0 != (longlong *)0x0) {
                    func_0x000140421870((longlong)local_f0 + 8,0,0xa8);
                    return;
                  }
                  iVar7 = 0x40;
                  local_f0 = (longlong *)0x0;
                }
                else {
                  iVar7 = 0;
                  if ((code *)local_f8[0xd] != (code *)0x0) {
                    iVar7 = (*(code *)local_f8[0xd])(0);
                  }
                }
                if ((*(uint *)(lRam0000000000000008 + 8) & 0x10000) == 0) {
                  if (iVar7 != 0) goto LAB_1402f8848;
                }
                else {
                  puVar11 = (undefined8 *)(**(code **)(lVar10 + 8))(lVar10,0x48);
                  if (puVar11 == (undefined8 *)0x0) goto LAB_1402f8848;
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  puVar11[5] = 0;
                  puVar11[6] = 0;
                  puVar11[7] = 0;
                  puVar11[8] = 0;
                  puRam00000000000000e8 = puVar11;
                }
                _DAT_00000010 = *(undefined8 *)(lVar14 + 0x78);
                *(undefined8 *)(lVar14 + 0x78) = 0;
                if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0x90) != 0)) {
                  lVar10 = *(longlong *)(*(longlong *)(lVar14 + 0x90) + 0x18);
                  lVar2 = *(longlong *)(lVar14 + 0x98);
                  local_108 = (longlong *)0x0;
                  plVar9 = (longlong *)
                           func_0x0001402f7f60(lVar2,*(undefined4 *)(lVar10 + 0x3c),&local_110);
                  iVar7 = (int)local_110;
                  if (((int)local_110 == 0) &&
                     (plVar12 = (longlong *)(**(code **)(lVar2 + 8))(lVar2,0x18), iVar7 = iVar6,
                     plVar12 != (longlong *)0x0)) {
                    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
                    *plVar9 = lVar14;
                    puVar11 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,0x28);
                    if (puVar11 == (undefined8 *)0x0) {
LAB_1402f893e:
                      (**(code **)(lVar2 + 0x10))(lVar2,plVar12);
                      iVar7 = iVar6;
                      goto LAB_1402f8947;
                    }
                    iVar7 = 0;
                    *puVar11 = 0;
                    puVar11[1] = 0;
                    puVar11[2] = 0;
                    puVar11[3] = 0;
                    puVar11[4] = 0;
                    plVar9[7] = (longlong)puVar11;
                    pcVar3 = *(code **)(lVar10 + 0x58);
                    if ((pcVar3 == (code *)0x0) || (iVar7 = (*pcVar3)(plVar9), iVar7 == 0)) {
                      plVar12[2] = (longlong)plVar9;
                      local_108 = plVar9;
                      if ((undefined8 *)(lVar14 + 0xa8) != (undefined8 *)0x0) {
                        lVar10 = *(longlong *)(lVar14 + 0xb0);
                        plVar12[1] = 0;
                        *plVar12 = lVar10;
                        if (lVar10 == 0) {
                          *(undefined8 *)(lVar14 + 0xa8) = plVar12;
                        }
                        else {
                          *(longlong **)(lVar10 + 8) = plVar12;
                        }
                        *(longlong **)(lVar14 + 0xb0) = plVar12;
                        goto LAB_1402f893a;
                      }
                    }
                    else {
LAB_1402f893a:
                      iVar6 = iVar7;
                      if (iVar7 != 0) goto LAB_1402f893e;
                    }
                  }
                  else {
LAB_1402f8947:
                    if (plVar9 != (longlong *)0x0) {
                      if (plVar9[7] != 0) {
                        (**(code **)(lVar2 + 0x10))(lVar2);
                      }
                      plVar9[7] = 0;
                      (**(code **)(lVar2 + 0x10))(lVar2,plVar9);
                    }
                  }
                  if (iVar7 == 0) {
                    *(longlong **)(lVar14 + 0x80) = local_108;
                    goto LAB_1402f8987;
                  }
                }
              }
            }
          }
          else {
            lVar10 = (**(code **)(lVar2 + 8))(lVar2,iVar6);
            if (lVar10 != 0) {
              func_0x000140421870(lVar10,0,(longlong)iVar6);
              return;
            }
          }
        }
        if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x90) != 0)) &&
           (piVar1 = (int *)(*(longlong *)(lVar14 + 0xd0) + 0x60), *piVar1 = *piVar1 + -1,
           *(int *)(*(longlong *)(lVar14 + 0xd0) + 0x60) < 1)) {
          puVar16 = *(undefined8 **)(lVar14 + 0x90);
          if (puVar16 + 4 != (undefined8 *)0x0) {
            for (plVar9 = (longlong *)puVar16[4]; plVar9 != (longlong *)0x0;
                plVar9 = (longlong *)plVar9[1]) {
              if (plVar9[2] == lVar14) {
                lVar2 = *plVar9;
                lVar10 = puVar16[2];
                plVar9 = (longlong *)plVar9[1];
                if (lVar2 == 0) {
                  puVar16[4] = plVar9;
                }
                else {
                  *(longlong **)(lVar2 + 8) = plVar9;
                }
                if (plVar9 == (longlong *)0x0) {
                  puVar16[5] = lVar2;
                }
                else {
                  *plVar9 = lVar2;
                }
                (**(code **)(lVar10 + 0x10))(lVar10);
                goto UNWIND_INFO_1402f8d3c_UnwindCodes_73__OffsetInProlog;
              }
            }
          }
        }
      }
      goto UNWIND_INFO_1402f8d3c_UnwindCodes_84__UnwindOpCode;
    }
  }
  lVar14 = local_e0;
  puVar16 = local_f8;
  if (local_e0 != 0) {
UNWIND_INFO_1402f8d3c_UnwindCodes_73__OffsetInProlog:
    func_0x0001402f6b60(lVar10,lVar14,puVar16);
  }
UNWIND_INFO_1402f8d3c_UnwindCodes_84__UnwindOpCode:
  func_0x0001402ed2f0(local_58 ^ (ulonglong)auStack_158);
  return;
}

