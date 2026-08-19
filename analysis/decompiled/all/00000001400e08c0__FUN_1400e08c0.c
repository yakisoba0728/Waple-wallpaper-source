// Function: FUN_1400e08c0
// Addr: 1400e08c0
// Size: 2161 bytes


/* WARNING: Type propagation algorithm not settling */

byte * FUN_1400e08c0(longlong param_1,byte *param_2,byte *param_3,longlong param_4,uint param_5)

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
  undefined8 *******pppppppuVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte *pbVar20;
  int iVar21;
  char *pcVar22;
  ulonglong uVar23;
  byte *pbVar24;
  undefined8 *******pppppppuVar25;
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
LAB_1400e0930:
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
      pbVar9 = (byte *)FUN_1400e14a0(param_2,param_3,param_3,&DAT_140486eba);
      if (pbVar9 != param_3) {
        return pbVar9 + 1;
      }
      return pbVar9;
    case 3:
      if ((*(uint *)(param_1 + 0xe0) & 0x1000) != 0) {
        pbVar9 = (byte *)FUN_1400e14a0(param_2,param_3,param_3,&DAT_140486eba);
        return pbVar9;
      }
      return param_3;
    case 4:
      cVar8 = (&DAT_140486ec0)[param_2[-1]];
      do {
        bVar6 = *param_2;
        if ((bool)(*(byte *)(local_res20 + 0xc) & 1) == ((&DAT_140486ec0)[bVar6] == cVar8)) {
          return param_2;
        }
        param_2 = param_2 + 1;
        cVar8 = (&DAT_140486ec0)[bVar6];
      } while (param_2 != param_3);
      return param_2;
    case 5:
      if (0x31 < param_5) {
        return param_2;
      }
      lVar10 = FUN_1400e08c0(param_1,param_2 + 1,param_3,*(undefined8 *)(local_res20 + 0x10),
                             param_5 + 1);
      return (byte *)(lVar10 + -1);
    case 6:
      pcVar2 = *(char **)(local_res20 + 0x28);
      uVar16 = *(uint *)(local_res20 + 0x24);
      uVar19 = (ulonglong)uVar16;
      pbVar9 = param_3;
      if ((param_3 != *(byte **)(param_1 + 0xd8)) && (1 < uVar16)) {
        uVar14 = (longlong)*(byte **)(param_1 + 0xd8) - (longlong)param_3;
        uVar23 = (ulonglong)(uVar16 - 1);
        if ((longlong)uVar14 <= (longlong)(ulonglong)(uVar16 - 1)) {
          uVar23 = uVar14;
        }
        pbVar9 = param_3 + uVar23;
      }
      if ((*(uint *)(param_1 + 0xe0) & 0x100) == 0) {
        if ((longlong)pbVar9 - (longlong)param_2 < (longlong)uVar19) {
          return param_3;
        }
        pbVar13 = (byte *)FUN_14028f4c0(param_2,pbVar9);
        if (pbVar9 == pbVar13) {
          return param_3;
        }
        return pbVar13;
      }
      if ((longlong)pbVar9 - (longlong)param_2 < (longlong)uVar19) {
        return param_3;
      }
      lVar10 = *(longlong *)(param_1 + 200);
      pcVar22 = pcVar2;
      pbVar13 = param_2;
      pbVar24 = param_2;
      if (uVar16 != 0) goto LAB_1400e0b80;
      goto LAB_1400e0bbe;
    case 7:
      goto switchD_1400e0951_caseD_7;
    case 10:
      if (0x31 < param_5) {
        return param_2;
      }
      iVar21 = param_5 + 1;
      pbVar9 = (byte *)FUN_1400e08c0(param_1,param_2,param_3,*(undefined8 *)(local_res20 + 0x20),
                                     iVar21);
      pbVar13 = (byte *)FUN_1400e08c0(param_1,pbVar9,param_3,*(undefined8 *)(local_res20 + 0x10),
                                      iVar21);
      if (pbVar13 != pbVar9) {
        do {
          pbVar9 = (byte *)FUN_1400e08c0(param_1,pbVar13,param_3,*(undefined8 *)(local_res20 + 0x20)
                                         ,iVar21);
          if (pbVar13 == pbVar9) {
            return pbVar9;
          }
          pbVar13 = (byte *)FUN_1400e08c0(param_1,pbVar9,param_3,*(undefined8 *)(local_res20 + 0x10)
                                          ,iVar21);
        } while (pbVar13 != pbVar9);
        return pbVar9;
      }
      return pbVar9;
    case 0xc:
      goto switchD_1400e0951_caseD_c;
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
          lVar18 = local_res20;
          do {
            if (param_2 == pbVar9) break;
            pbVar9 = (byte *)FUN_1400e08c0(param_1,param_2,pbVar9,*(undefined8 *)(lVar18 + 0x10),
                                           param_5 + 1);
            lVar18 = *(longlong *)(lVar18 + 0x28);
          } while (lVar18 != 0);
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
          uVar11 = FUN_1400e08c0(param_1,param_2,pbVar9,*(undefined8 *)(local_res20 + 0x10),
                                 param_5 + 1);
          param_2 = (byte *)FUN_1400e08c0(param_1,param_2,uVar11,
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
switchD_1400e0951_caseD_c:
  local_res20 = 0;
  goto LAB_1400e0930;
switchD_1400e0951_caseD_7:
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
    pbVar24 = (byte *)0xf;
    pppppppuVar25 = local_90;
    if (1 < *local_98) {
      local_50 = *(longlong *)(param_1 + 200);
      local_58 = *(byte **)(param_1 + 0xd8);
      local_70 = *(uint *)(param_1 + 0xe0) & 0x100;
      local_a0 = 1;
      local_60 = (ulonglong)*local_98;
      do {
        pbVar20 = local_78;
        pbVar13 = local_80;
        pppppppuVar25 = local_90;
        pbVar24 = local_78;
        local_a8 = local_80;
        if (pbVar9 == local_58) break;
        bVar7 = *pbVar9;
        if (local_70 != 0) {
          bVar7 = (**(code **)(**(longlong **)(local_50 + 8) + 0x20))
                            (*(longlong **)(local_50 + 8),bVar7);
        }
        if (pbVar20 <= pbVar13) {
          if (pbVar13 == (byte *)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1400173b0();
          }
          pbVar9 = pbVar13 + 1;
          pbVar24 = (byte *)((ulonglong)pbVar9 | 0xf);
          if (pbVar24 < (byte *)0x8000000000000000) {
            if ((byte *)(0x7fffffffffffffff - ((ulonglong)pbVar20 >> 1)) < pbVar20) {
              pbVar24 = (byte *)0x7fffffffffffffff;
              pbVar15 = (byte *)0x8000000000000027;
            }
            else {
              if (pbVar24 < pbVar20 + ((ulonglong)pbVar20 >> 1)) {
                pbVar24 = pbVar20 + ((ulonglong)pbVar20 >> 1);
              }
              pbVar1 = pbVar24 + 1;
              if (pbVar1 == (byte *)0x0) {
                uVar19 = 0;
                goto LAB_1400e0df3;
              }
              if (pbVar1 < (byte *)0x1000) {
                uVar19 = func_0x00014028aff0(pbVar1);
                goto LAB_1400e0df3;
              }
              pbVar15 = pbVar24 + 0x28;
              if (pbVar15 <= pbVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017440();
              }
            }
          }
          else {
            pbVar24 = (byte *)0x7fffffffffffffff;
            pbVar15 = (byte *)0x8000000000000027;
          }
          lVar10 = func_0x00014028aff0(pbVar15);
          if (lVar10 != 0) {
            uVar19 = lVar10 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar19 - 8) = lVar10;
LAB_1400e0df3:
            local_80 = pbVar9;
            local_78 = pbVar24;
            if (&DAT_00000010 <= pbVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(uVar19,pppppppuVar25,pbVar13);
            }
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(uVar19,&local_90,pbVar13);
          }
          goto LAB_1400e107e;
        }
        local_80 = pbVar13 + 1;
        pppppppuVar12 = &local_90;
        if ((byte *)0xf < pbVar20) {
          pppppppuVar12 = pppppppuVar25;
        }
        *(byte *)((longlong)pppppppuVar12 + (longlong)pbVar13) = bVar7;
        pbVar13[(longlong)pppppppuVar12 + 1] = 0;
        local_a0 = local_a0 + 1;
        pbVar9 = pbVar9 + 1;
        pbVar13 = local_80;
        pbVar24 = local_78;
        pppppppuVar25 = local_90;
        local_a8 = local_80;
      } while (local_a0 < local_60);
    }
    do {
      uVar16 = *local_98;
      pbVar20 = (byte *)(ulonglong)uVar16;
      if (pbVar20 <= pbVar13) {
        uVar17 = local_98[3];
        pbVar9 = *(byte **)(local_98 + 4);
        pppppppuVar12 = &local_90;
        if ((byte *)0xf < pbVar24) {
          pppppppuVar12 = pppppppuVar25;
        }
        for (; pbVar13 = local_a8, uVar16 <= uVar17; uVar17 = uVar17 - uVar16) {
          iVar21 = func_0x0001404210c0(pppppppuVar12,pbVar9,pbVar20);
          if (iVar21 == 0) {
            if ((byte *)0xf < pbVar24) {
              if (((byte *)0xfff < pbVar24 + 1) &&
                 (0x1f < (ulonglong)((longlong)pppppppuVar25 + (-8 - (longlong)pppppppuVar25[-1]))))
              goto LAB_1400e107e;
              func_0x00014028b040();
            }
            if (uVar16 == 0) goto LAB_1400e0f4e;
            pbVar20 = param_2 + (longlong)pbVar20;
            bVar6 = 1;
            pbVar9 = local_68;
            goto LAB_1400e1050;
          }
          pbVar9 = pbVar9 + (longlong)pbVar20;
        }
      }
      local_98 = *(uint **)(local_98 + 6);
    } while (local_98 != (uint *)0x0);
    if ((byte *)0xf < pbVar24) {
      if (((byte *)0xfff < pbVar24 + 1) &&
         (0x1f < (ulonglong)((longlong)pppppppuVar25 + (-8 - (longlong)pppppppuVar25[-1])))) {
LAB_1400e107e:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        return pbVar20;
      }
      func_0x00014028b040();
    }
  }
LAB_1400e0f4e:
  pbVar20 = local_68;
  lVar10 = *(longlong *)(local_res20 + 0x38);
  pbVar9 = pbVar20;
  if (lVar10 == 0) {
LAB_1400e1025:
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
        uVar19 = 0;
        do {
          if ((*(byte *)(*(longlong *)(lVar10 + 8) + uVar19) <= bVar6) &&
             (bVar6 <= *(byte *)(*(longlong *)(lVar10 + 8) + (ulonglong)((int)uVar19 + 1)))) {
            cVar8 = '\x01';
            goto LAB_1400e1019;
          }
          uVar16 = (int)uVar19 + 2;
          uVar19 = (ulonglong)uVar16;
        } while (uVar16 < *(uint *)(lVar10 + 4));
      }
      cVar8 = '\0';
    }
    else {
      cVar8 = func_0x0001400e4fe0(bVar6,lVar10,*(undefined8 *)(param_1 + 200));
    }
LAB_1400e1019:
    if (cVar8 == '\0') goto LAB_1400e1025;
    bVar6 = 1;
  }
LAB_1400e1050:
  if ((bVar6 != (*(byte *)(local_res20 + 0xc) & 1)) && (pbVar20 != param_2)) {
    return param_2;
  }
  param_2 = pbVar9;
  if (pbVar9 == param_3) {
    return pbVar9;
  }
  goto switchD_1400e0951_caseD_7;
LAB_1400e0b80:
  plVar3 = *(longlong **)(lVar10 + 8);
  cVar8 = *pcVar22;
  cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,*param_2);
  if (cVar5 == cVar8) {
    pbVar13 = pbVar24;
    if (pcVar22 + 1 == pcVar2 + uVar19) {
LAB_1400e0bbe:
      if (pbVar9 == pbVar13) {
        return param_3;
      }
      return pbVar13;
    }
    param_2 = param_2 + 1;
    pcVar22 = pcVar22 + 1;
    goto LAB_1400e0b80;
  }
  pbVar13 = pbVar9;
  if (pbVar24 == pbVar9 + -uVar19) goto LAB_1400e0bbe;
  param_2 = pbVar24 + 1;
  pcVar22 = pcVar2;
  pbVar24 = param_2;
  goto LAB_1400e0b80;
}

