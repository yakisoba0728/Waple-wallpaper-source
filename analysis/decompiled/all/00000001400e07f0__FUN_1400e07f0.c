// Function: FUN_1400e07f0
// Addr: 1400e07f0
// Size: 2252 bytes


/* WARNING: Type propagation algorithm not settling */

byte * FUN_1400e07f0(longlong param_1,byte *param_2,byte *param_3,longlong param_4,uint param_5)

{
  byte *pbVar1;
  char *pcVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *******pppppppuVar20;
  byte *pbVar21;
  int iVar22;
  char *pcVar23;
  ulonglong uVar24;
  byte *pbVar25;
  undefined8 *******pppppppuVar26;
  longlong local_res20;
  byte *local_a8;
  ulonglong local_a0;
  uint *local_98;
  undefined8 *******local_90;
  undefined8 uStack_88;
  byte *local_80;
  byte *local_78;
  uint local_70;
  byte *local_68;
  ulonglong local_60;
  byte *local_58;
  longlong local_50;
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0xc0);
  }
  local_res20 = param_4;
  if (param_2 == param_3) {
    return param_2;
  }
LAB_1400e0860:
  do {
    if (local_res20 == 0) {
      return param_2;
    }
    switch(*(undefined4 *)(local_res20 + 8)) {
    default:
      return param_2;
    case 1:
    case 8:
    case 9:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0x11:
    case 0x14:
      break;
    case 2:
      if ((*(uint *)(param_1 + 0xe0) & 0x1000) == 0) {
        return param_3;
      }
      if (param_2[-1] == 10) {
        return param_2;
      }
      if (param_2[-1] == 0xd) {
        return param_2;
      }
      pbVar9 = (byte *)FUN_1400e13d0(param_2,param_3,param_3,&DAT_140486dea);
      if (pbVar9 != param_3) {
        return pbVar9 + 1;
      }
      return pbVar9;
    case 3:
      if ((*(uint *)(param_1 + 0xe0) & 0x1000) != 0) {
        pbVar9 = (byte *)FUN_1400e13d0(param_2,param_3,param_3,&DAT_140486dea);
        return pbVar9;
      }
      return param_3;
    case 4:
      cVar8 = (&DAT_140486df0)[param_2[-1]];
      do {
        bVar6 = *param_2;
        if ((bool)(*(byte *)(local_res20 + 0xc) & 1) == ((&DAT_140486df0)[bVar6] == cVar8)) {
          return param_2;
        }
        param_2 = param_2 + 1;
        cVar8 = (&DAT_140486df0)[bVar6];
      } while (param_2 != param_3);
      return param_2;
    case 5:
      if (0x31 < param_5) {
        return param_2;
      }
      lVar10 = FUN_1400e07f0(param_1,param_2 + 1,param_3,*(undefined8 *)(local_res20 + 0x10),
                             param_5 + 1);
      return (byte *)(lVar10 + -1);
    case 6:
      pcVar2 = *(char **)(local_res20 + 0x28);
      uVar16 = *(uint *)(local_res20 + 0x24);
      uVar17 = (ulonglong)uVar16;
      pbVar9 = param_3;
      if ((param_3 != *(byte **)(param_1 + 0xd8)) && (1 < uVar16)) {
        uVar14 = (longlong)*(byte **)(param_1 + 0xd8) - (longlong)param_3;
        uVar24 = (ulonglong)(uVar16 - 1);
        if ((longlong)uVar14 <= (longlong)(ulonglong)(uVar16 - 1)) {
          uVar24 = uVar14;
        }
        pbVar9 = param_3 + uVar24;
      }
      if ((*(uint *)(param_1 + 0xe0) & 0x100) == 0) {
        if ((longlong)pbVar9 - (longlong)param_2 < (longlong)uVar17) {
          return param_3;
        }
        pbVar13 = (byte *)thunk_FUN_14028e750(param_2,pbVar9);
        if (pbVar9 == pbVar13) {
          return param_3;
        }
        return pbVar13;
      }
      if ((longlong)pbVar9 - (longlong)param_2 < (longlong)uVar17) {
        return param_3;
      }
      lVar10 = *(longlong *)(param_1 + 200);
      pcVar23 = pcVar2;
      pbVar13 = param_2;
      pbVar25 = param_2;
      if (uVar16 != 0) goto LAB_1400e0ab0;
      goto LAB_1400e0aee;
    case 7:
      goto switchD_1400e0881_caseD_7;
    case 10:
      if (0x31 < param_5) {
        return param_2;
      }
      iVar22 = param_5 + 1;
      pbVar9 = (byte *)FUN_1400e07f0(param_1,param_2,param_3,*(undefined8 *)(local_res20 + 0x20),
                                     iVar22);
      pbVar13 = (byte *)FUN_1400e07f0(param_1,pbVar9,param_3,*(undefined8 *)(local_res20 + 0x10),
                                      iVar22);
      if (pbVar13 != pbVar9) {
        do {
          pbVar9 = (byte *)FUN_1400e07f0(param_1,pbVar13,param_3,*(undefined8 *)(local_res20 + 0x20)
                                         ,iVar22);
          if (pbVar13 == pbVar9) {
            return pbVar9;
          }
          pbVar13 = (byte *)FUN_1400e07f0(param_1,pbVar9,param_3,*(undefined8 *)(local_res20 + 0x10)
                                          ,iVar22);
        } while (pbVar13 != pbVar9);
        return pbVar9;
      }
      return pbVar9;
    case 0xc:
      goto switchD_1400e0881_caseD_c;
    case 0x10:
      if (*(longlong *)(local_res20 + 0x28) != 0) {
        if (0x31 < param_5) {
          return param_2;
        }
        do {
          lVar10 = (longlong)param_3 - (longlong)param_2;
          if (0x200 < lVar10) {
            lVar10 = 0x200;
          }
          pbVar9 = param_2 + lVar10;
          lVar19 = local_res20;
          do {
            if (param_2 == pbVar9) break;
            pbVar9 = (byte *)FUN_1400e07f0(param_1,param_2,pbVar9,*(undefined8 *)(lVar19 + 0x10),
                                           param_5 + 1);
            lVar19 = *(longlong *)(lVar19 + 0x28);
          } while (lVar19 != 0);
          if (pbVar9 != param_2 + lVar10) {
            return pbVar9;
          }
          param_2 = pbVar9;
          if (pbVar9 == param_3) {
            return pbVar9;
          }
        } while( true );
      }
      break;
    case 0x12:
      if (*(int *)(local_res20 + 0x20) < 1) {
        if (0x31 < param_5) {
          return param_2;
        }
        while( true ) {
          lVar10 = (longlong)param_3 - (longlong)param_2;
          if (0x200 < lVar10) {
            lVar10 = 0x200;
          }
          pbVar9 = param_2 + lVar10;
          uVar11 = FUN_1400e07f0(param_1,param_2,pbVar9,*(undefined8 *)(local_res20 + 0x10),
                                 param_5 + 1);
          param_2 = (byte *)FUN_1400e07f0(param_1,param_2,uVar11,
                                          *(undefined8 *)(*(longlong *)(local_res20 + 0x28) + 0x10),
                                          param_5 + 1);
          if (param_2 != pbVar9) break;
          if (param_2 == param_3) {
            return param_2;
          }
        }
        return param_2;
      }
    }
    local_res20 = *(longlong *)(local_res20 + 0x10);
  } while( true );
switchD_1400e0881_caseD_c:
  local_res20 = 0;
  goto LAB_1400e0860;
switchD_1400e0881_caseD_7:
  bVar6 = *param_2;
  if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
    bVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 8) + 0x20))();
  }
  pbVar9 = param_2 + 1;
  local_98 = *(uint **)(local_res20 + 0x20);
  local_68 = pbVar9;
  if (local_98 != (uint *)0x0) {
    local_a8 = (byte *)0x1;
    local_78 = (byte *)0xf;
    local_80 = (byte *)0x1;
    uStack_88 = 0;
    local_90 = (undefined8 *******)(ulonglong)bVar6;
    pbVar13 = (byte *)0x1;
    pbVar25 = (byte *)0xf;
    pppppppuVar26 = local_90;
    if (1 < *local_98) {
      local_50 = *(longlong *)(param_1 + 200);
      local_58 = *(byte **)(param_1 + 0xd8);
      local_70 = *(uint *)(param_1 + 0xe0) & 0x100;
      local_a0 = 1;
      pbVar21 = (byte *)0xf;
      local_60 = (ulonglong)*local_98;
      do {
        pppppppuVar26 = local_90;
        pbVar13 = local_a8;
        pbVar25 = pbVar21;
        if (pbVar9 == local_58) break;
        bVar7 = *pbVar9;
        if (local_70 != 0) {
          bVar7 = (**(code **)(**(longlong **)(local_50 + 8) + 0x20))
                            (*(longlong **)(local_50 + 8),bVar7);
        }
        if (local_a8 < pbVar21) {
          local_80 = local_a8 + 1;
          pppppppuVar20 = &local_90;
          if ((byte *)0xf < pbVar21) {
            pppppppuVar20 = pppppppuVar26;
          }
          *(byte *)((longlong)pppppppuVar20 + (longlong)local_a8) = bVar7;
          local_a8[(longlong)pppppppuVar20 + 1] = 0;
          local_a8 = local_80;
          pbVar25 = local_78;
        }
        else {
          if (local_a8 == (byte *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1400172e0();
          }
          pbVar13 = local_a8 + 1;
          pbVar25 = (byte *)((ulonglong)pbVar13 | 0xf);
          if (pbVar25 < (byte *)0x8000000000000000) {
            if ((byte *)(0x7fffffffffffffff - ((ulonglong)pbVar21 >> 1)) < pbVar21) {
              pbVar25 = (byte *)0x7fffffffffffffff;
              pbVar15 = (byte *)0x8000000000000027;
              goto LAB_1400e0cfc;
            }
            if (pbVar25 < pbVar21 + ((ulonglong)pbVar21 >> 1)) {
              pbVar25 = pbVar21 + ((ulonglong)pbVar21 >> 1);
            }
            pbVar1 = pbVar25 + 1;
            if (pbVar1 == (byte *)0x0) {
              pppppppuVar20 = (undefined8 *******)0x0;
            }
            else {
              if ((byte *)0xfff < pbVar1) {
                pbVar15 = pbVar25 + 0x28;
                if (pbVar15 <= pbVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400e0cfc;
              }
              pppppppuVar20 = (undefined8 *******)FUN_14028af20(pbVar1);
            }
          }
          else {
            pbVar25 = (byte *)0x7fffffffffffffff;
            pbVar15 = (byte *)0x8000000000000027;
LAB_1400e0cfc:
            ppppppuVar12 = (undefined8 ******)FUN_14028af20(pbVar15);
            if (ppppppuVar12 == (undefined8 ******)0x0) goto LAB_1400e0fae;
            pppppppuVar20 =
                 (undefined8 *******)((longlong)ppppppuVar12 + 0x27U & 0xffffffffffffffe0);
            pppppppuVar20[-1] = ppppppuVar12;
          }
          local_80 = pbVar13;
          local_78 = pbVar25;
          if (pbVar21 < &DAT_00000010) {
            FUN_1404210f0(pppppppuVar20,&local_90,local_a8);
            *(byte *)((longlong)pppppppuVar20 + (longlong)local_a8) = bVar7;
            local_a8[(longlong)pppppppuVar20 + 1] = 0;
            local_a8 = pbVar13;
            local_90 = pppppppuVar20;
          }
          else {
            FUN_1404210f0(pppppppuVar20,pppppppuVar26,local_a8);
            *(byte *)((longlong)pppppppuVar20 + (longlong)local_a8) = bVar7;
            local_a8[(longlong)pppppppuVar20 + 1] = 0;
            if (pbVar21 + 1 < (byte *)0x1000) {
              thunk_FUN_14028af80(pppppppuVar26);
              local_a8 = pbVar13;
              local_90 = pppppppuVar20;
            }
            else {
              if (0x1f < (ulonglong)((longlong)pppppppuVar26 + (-8 - (longlong)pppppppuVar26[-1])))
              goto LAB_1400e0fae;
              thunk_FUN_14028af80(pppppppuVar26[-1],pbVar21 + 0x28);
              local_a8 = pbVar13;
              local_90 = pppppppuVar20;
            }
          }
        }
        local_a0 = local_a0 + 1;
        pbVar9 = pbVar9 + 1;
        pbVar13 = local_a8;
        pbVar21 = pbVar25;
        pppppppuVar26 = local_90;
      } while (local_a0 < local_60);
    }
    do {
      uVar16 = *local_98;
      pbVar21 = (byte *)(ulonglong)uVar16;
      if (pbVar21 <= pbVar13) {
        uVar18 = local_98[3];
        pbVar9 = *(byte **)(local_98 + 4);
        pppppppuVar20 = &local_90;
        if ((byte *)0xf < pbVar25) {
          pppppppuVar20 = pppppppuVar26;
        }
        for (; pbVar13 = local_a8, uVar16 <= uVar18; uVar18 = uVar18 - uVar16) {
          iVar22 = memcmp(pppppppuVar20,pbVar9,(size_t)pbVar21);
          if (iVar22 == 0) {
            if ((byte *)0xf < pbVar25) {
              if (((byte *)0xfff < pbVar25 + 1) &&
                 (0x1f < (ulonglong)((longlong)pppppppuVar26 + (-8 - (longlong)pppppppuVar26[-1]))))
              goto LAB_1400e0fae;
              thunk_FUN_14028af80();
            }
            if (uVar16 == 0) goto LAB_1400e0e7e;
            pbVar21 = param_2 + (longlong)pbVar21;
            bVar6 = 1;
            pbVar9 = local_68;
            goto LAB_1400e0f80;
          }
          pbVar9 = pbVar9 + (longlong)pbVar21;
        }
      }
      local_98 = *(uint **)(local_98 + 6);
    } while (local_98 != (uint *)0x0);
    if ((byte *)0xf < pbVar25) {
      if (((byte *)0xfff < pbVar25 + 1) &&
         (0x1f < (ulonglong)((longlong)pppppppuVar26 + (-8 - (longlong)pppppppuVar26[-1])))) {
LAB_1400e0fae:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        return pbVar21;
      }
      thunk_FUN_14028af80();
    }
  }
LAB_1400e0e7e:
  pbVar21 = local_68;
  lVar10 = *(longlong *)(local_res20 + 0x38);
  pbVar9 = pbVar21;
  if (lVar10 == 0) {
LAB_1400e0f55:
    if ((*(longlong *)(local_res20 + 0x28) == 0) ||
       ((*(byte *)(*(longlong *)(local_res20 + 0x28) + (ulonglong)(bVar6 >> 3)) &
        (byte)(1 << (bVar6 & 7))) == 0)) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xe0) & 0x800) == 0) {
      if (*(uint *)(lVar10 + 4) != 0) {
        uVar17 = 0;
        do {
          if ((*(byte *)(*(longlong *)(lVar10 + 8) + uVar17) <= bVar6) &&
             (bVar6 <= *(byte *)(*(longlong *)(lVar10 + 8) + (ulonglong)((int)uVar17 + 1)))) {
            cVar8 = '\x01';
            goto LAB_1400e0f49;
          }
          uVar16 = (int)uVar17 + 2;
          uVar17 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(lVar10 + 4));
      }
      cVar8 = '\0';
    }
    else {
      cVar8 = FUN_1400e4f10(bVar6,lVar10,*(undefined8 *)(param_1 + 200));
    }
LAB_1400e0f49:
    if (cVar8 == '\0') goto LAB_1400e0f55;
    bVar6 = 1;
  }
LAB_1400e0f80:
  if ((bVar6 != (*(byte *)(local_res20 + 0xc) & 1)) && (pbVar21 != param_2)) {
    return param_2;
  }
  param_2 = pbVar9;
  if (pbVar9 == param_3) {
    return pbVar9;
  }
  goto switchD_1400e0881_caseD_7;
LAB_1400e0ab0:
  plVar3 = *(longlong **)(lVar10 + 8);
  cVar8 = *pcVar23;
  cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,*param_2);
  if (cVar5 == cVar8) {
    pbVar13 = pbVar25;
    if (pcVar23 + 1 == pcVar2 + uVar17) {
LAB_1400e0aee:
      if (pbVar9 == pbVar13) {
        return param_3;
      }
      return pbVar13;
    }
    param_2 = param_2 + 1;
    pcVar23 = pcVar23 + 1;
    goto LAB_1400e0ab0;
  }
  pbVar13 = pbVar9;
  if (pbVar25 == pbVar9 + -uVar17) goto LAB_1400e0aee;
  param_2 = pbVar25 + 1;
  pcVar23 = pcVar2;
  pbVar25 = param_2;
  goto LAB_1400e0ab0;
}

