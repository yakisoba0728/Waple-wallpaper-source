// Function: FUN_1400dfe50
// Addr: 1400dfe50
// Size: 2363 bytes


/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_1400dfe50(longlong param_1,longlong *param_2,byte *******param_3,byte *******param_4,
             ulonglong param_5,uint param_6)

{
  byte *******pppppppbVar1;
  uint uVar2;
  byte *******pppppppbVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte *******pppppppbVar11;
  byte ******ppppppbVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte *******pppppppbVar15;
  ulonglong uVar16;
  uint uVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar20;
  int iVar21;
  byte *_Buf2;
  longlong lVar22;
  char *pcVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  byte *******pppppppbVar26;
  byte *******local_res18;
  char *local_res20;
  byte *******local_b8;
  byte *******local_b0;
  uint *local_a8;
  byte *******local_98;
  undefined8 uStack_90;
  byte *******local_88;
  byte *******local_80;
  uint local_78;
  byte *******local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong uVar19;
  
  uVar2 = param_6;
  if (param_5 == 0) {
    param_5 = *(longlong *)(param_1 + 0xc0);
  }
  if (param_3 != param_4) {
    for (; lVar8 = param_5, param_5 != 0; param_5 = *(longlong *)(param_5 + 0x10)) {
      switch(*(undefined4 *)(param_5 + 8)) {
      default:
        goto switchD_1400dfed2_caseD_0;
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
        if ((*(uint *)(param_1 + 0xe0) & 0x1000) == 0) goto LAB_1400e0192;
        if ((*(byte *)((longlong)param_3 + -1) != 10) && (*(byte *)((longlong)param_3 + -1) != 0xd))
        {
          puVar10 = (undefined8 *)
                    FUN_1400e1320(&param_5,param_3,param_4,&IMAGE_DOS_HEADER_140000000,
                                  &DAT_140486ef2);
          param_3 = (byte *******)*puVar10;
          if (param_3 != param_4) {
            param_3 = (byte *******)((longlong)param_3 + 1);
          }
        }
        goto switchD_1400dfed2_caseD_0;
      case 3:
        if ((*(uint *)(param_1 + 0xe0) & 0x1000) != 0) {
          FUN_1400e1320(param_2,param_3,param_4,&IMAGE_DOS_HEADER_140000000,&DAT_140486ef2);
          return param_2;
        }
        goto LAB_1400e0192;
      case 4:
        cVar7 = (&DAT_140486df0)[*(byte *)((longlong)param_3 + -1)];
        goto LAB_1400e0700;
      case 5:
        if (param_6 < 0x32) {
          plVar13 = (longlong *)
                    FUN_1400dfe50(param_1,&param_5,(byte *)((longlong)param_3 + 1),param_4,
                                  *(undefined8 *)(param_5 + 0x10),param_6 + 1);
          *param_2 = *plVar13 + -1;
          return param_2;
        }
        goto switchD_1400dfed2_caseD_0;
      case 6:
        local_res20 = *(char **)(param_5 + 0x28);
        uVar2 = *(uint *)(param_5 + 0x24);
        uVar16 = (ulonglong)uVar2;
        param_5 = CONCAT44(param_5._4_4_,uVar2);
        pppppppbVar18 = param_4;
        if ((param_4 != *(byte ********)(param_1 + 0xd8)) && (1 < uVar2)) {
          uVar14 = (longlong)*(byte ********)(param_1 + 0xd8) - (longlong)param_4;
          uVar19 = (ulonglong)(uVar2 - 1);
          if ((longlong)uVar14 <= (longlong)(ulonglong)(uVar2 - 1)) {
            uVar19 = uVar14;
          }
          pppppppbVar18 = (byte *******)((longlong)param_4 + uVar19);
        }
        if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
          pppppppbVar11 = pppppppbVar18;
          if ((longlong)pppppppbVar18 - (longlong)param_3 < (longlong)uVar16) goto LAB_1400e0185;
          local_res18 = *(byte ********)(param_1 + 200);
          pppppppbVar11 = param_3;
          pcVar23 = local_res20;
          pppppppbVar24 = param_3;
          if (uVar2 == 0) goto LAB_1400e0185;
          goto LAB_1400e0120;
        }
        if ((longlong)pppppppbVar18 - (longlong)param_3 < (longlong)uVar16) goto LAB_1400e0192;
        pppppppbVar11 = (byte *******)thunk_FUN_14028e750(param_3,pppppppbVar18,local_res20,uVar16);
        goto LAB_1400e0185;
      case 7:
        goto switchD_1400dfed2_caseD_7;
      case 10:
        if (param_6 < 0x32) {
          iVar21 = param_6 + 1;
          plVar13 = (longlong *)
                    FUN_1400dfe50(param_1,&param_5,param_3,param_4,*(undefined8 *)(param_5 + 0x20),
                                  iVar21);
          lVar9 = *plVar13;
          plVar13 = (longlong *)
                    FUN_1400dfe50(param_1,&param_5,lVar9,param_4,*(undefined8 *)(lVar8 + 0x10),
                                  iVar21);
          lVar22 = *plVar13;
          if (lVar22 == lVar9) goto LAB_1400e06d2;
          goto LAB_1400e0680;
        }
        goto switchD_1400dfed2_caseD_0;
      case 0x10:
        if (*(longlong *)(param_5 + 0x28) != 0) {
          if (param_6 < 0x32) {
            do {
              lVar8 = (longlong)param_4 - (longlong)param_3;
              if (0x200 < lVar8) {
                lVar8 = 0x200;
              }
              pppppppbVar18 = (byte *******)((longlong)param_3 + lVar8);
              lVar9 = param_5;
              do {
                if (param_3 == pppppppbVar18) break;
                puVar10 = (undefined8 *)
                          FUN_1400dfe50(param_1,&local_res18,param_3,pppppppbVar18,
                                        *(undefined8 *)(lVar9 + 0x10),uVar2 + 1);
                lVar9 = *(longlong *)(lVar9 + 0x28);
                pppppppbVar18 = (byte *******)*puVar10;
              } while (lVar9 != 0);
              if ((pppppppbVar18 != (byte *******)((longlong)param_3 + lVar8)) ||
                 (param_3 = pppppppbVar18, pppppppbVar18 == param_4)) {
                *param_2 = (longlong)pppppppbVar18;
                return param_2;
              }
            } while( true );
          }
          goto switchD_1400dfed2_caseD_0;
        }
        break;
      case 0x12:
        if (*(int *)(param_5 + 0x20) < 1) {
          if (param_6 < 0x32) {
            iVar21 = param_6 + 1;
            do {
              lVar9 = (longlong)param_4 - (longlong)param_3;
              if (0x200 < lVar9) {
                lVar9 = 0x200;
              }
              pppppppbVar18 = (byte *******)((longlong)param_3 + lVar9);
              FUN_1400dfe50(param_1,&param_5,param_3,pppppppbVar18,*(undefined8 *)(lVar8 + 0x10),
                            iVar21);
              puVar10 = (undefined8 *)
                        FUN_1400dfe50(param_1,&local_res18,param_3,param_5,
                                      *(undefined8 *)(*(longlong *)(lVar8 + 0x28) + 0x10),iVar21);
              param_3 = (byte *******)*puVar10;
            } while ((param_3 == pppppppbVar18) && (param_3 != param_4));
            goto LAB_1400e0001;
          }
          goto switchD_1400dfed2_caseD_0;
        }
      }
    }
  }
  goto switchD_1400dfed2_caseD_0;
LAB_1400e0120:
  cVar7 = *pcVar23;
  cVar5 = (*(code *)(*local_res18[1])[4])(local_res18[1],*(byte *)param_3);
  if (cVar5 == cVar7) {
    pppppppbVar11 = pppppppbVar24;
    if (pcVar23 + 1 == local_res20 + (param_5 & 0xffffffff)) {
LAB_1400e0185:
      if (pppppppbVar18 != pppppppbVar11) {
        *param_2 = (longlong)pppppppbVar11;
        return param_2;
      }
LAB_1400e0192:
      *param_2 = (longlong)param_4;
      return param_2;
    }
    param_3 = (byte *******)((longlong)param_3 + 1);
    pcVar23 = pcVar23 + 1;
    goto LAB_1400e0120;
  }
  pppppppbVar11 = pppppppbVar18;
  if (pppppppbVar24 == (byte *******)((longlong)pppppppbVar18 - uVar16)) goto LAB_1400e0185;
  param_3 = (byte *******)((longlong)pppppppbVar24 + 1);
  pcVar23 = local_res20;
  pppppppbVar24 = param_3;
  goto LAB_1400e0120;
  while( true ) {
    plVar13 = (longlong *)
              FUN_1400dfe50(param_1,&param_5,lVar9,param_4,*(undefined8 *)(lVar8 + 0x10),iVar21);
    lVar22 = *plVar13;
    if (lVar22 == lVar9) break;
LAB_1400e0680:
    plVar13 = (longlong *)
              FUN_1400dfe50(param_1,&local_res18,lVar22,param_4,*(undefined8 *)(lVar8 + 0x20),iVar21
                           );
    lVar9 = *plVar13;
    if (lVar22 == lVar9) break;
  }
LAB_1400e06d2:
  *param_2 = lVar9;
  return param_2;
switchD_1400dfed2_caseD_7:
  do {
    bVar6 = *(byte *)param_3;
    local_res20 = (char *)CONCAT44(local_res20._4_4_,(uint)bVar6);
    if ((*(uint *)(param_1 + 0xe0) & 0x100) != 0) {
      plVar13 = *(longlong **)(*(longlong *)(param_1 + 200) + 8);
      bVar6 = (**(code **)(*plVar13 + 0x20))(plVar13,bVar6);
      local_res20 = (char *)CONCAT44(local_res20._4_4_,(uint)bVar6);
    }
    local_a8 = *(uint **)(lVar8 + 0x20);
    pppppppbVar18 = (byte *******)((longlong)param_3 + 1);
    if (local_a8 == (uint *)0x0) {
LAB_1400e0549:
      lVar9 = *(longlong *)(lVar8 + 0x38);
      uVar2 = (uint)local_res20;
      bVar6 = (byte)local_res20;
      pppppppbVar11 = pppppppbVar18;
      if (lVar9 != 0) {
        if ((*(uint *)(param_1 + 0xe0) & 0x800) == 0) {
          if (*(uint *)(lVar9 + 4) != 0) {
            uVar16 = 0;
            do {
              if ((*(byte *)(*(longlong *)(lVar9 + 8) + uVar16) <= bVar6) &&
                 (bVar6 <= *(byte *)(*(longlong *)(lVar9 + 8) + (ulonglong)((int)uVar16 + 1)))) {
                cVar7 = '\x01';
                goto LAB_1400e05a9;
              }
              uVar17 = (int)uVar16 + 2;
              uVar16 = (ulonglong)uVar17;
            } while (uVar17 < *(uint *)(lVar9 + 4));
          }
          cVar7 = '\0';
        }
        else {
          cVar7 = FUN_1400e4f10((uint)local_res20 & 0xff,lVar9,*(undefined8 *)(param_1 + 200));
        }
LAB_1400e05a9:
        if (cVar7 != '\0') {
          bVar6 = 1;
          goto LAB_1400e05e1;
        }
      }
      if ((*(longlong *)(lVar8 + 0x28) == 0) ||
         ((*(byte *)(*(longlong *)(lVar8 + 0x28) + (ulonglong)((uVar2 & 0xff) >> 3)) &
          (byte)(1 << (bVar6 & 7))) == 0)) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
    }
    else {
      local_b8 = (byte *******)0xf;
      local_80 = (byte *******)0xf;
      local_b0 = (byte *******)0x1;
      local_88 = (byte *******)0x1;
      uStack_90 = 0;
      local_98 = (byte *******)(ulonglong)bVar6;
      pppppppbVar11 = (byte *******)0x1;
      pppppppbVar24 = local_98;
      if (1 < *local_a8) {
        local_58 = *(longlong *)(param_1 + 200);
        pppppppbVar3 = *(byte ********)(param_1 + 0xd8);
        local_78 = *(uint *)(param_1 + 0xe0) & 0x100;
        local_68 = 1;
        pppppppbVar20 = pppppppbVar18;
        local_60 = (ulonglong)*local_a8;
        do {
          pppppppbVar24 = local_98;
          pppppppbVar26 = local_b8;
          pppppppbVar11 = local_b0;
          if (pppppppbVar20 == pppppppbVar3) break;
          bVar6 = *(byte *)pppppppbVar20;
          local_res18 = (byte *******)CONCAT71(local_res18._1_7_,bVar6);
          if (local_78 != 0) {
            bVar6 = (**(code **)(**(longlong **)(local_58 + 8) + 0x20))();
            local_res18 = (byte *******)CONCAT71(local_res18._1_7_,bVar6);
          }
          if (local_b0 < local_b8) {
            local_88 = (byte *******)((longlong)local_b0 + 1);
            pppppppbVar11 = (byte *******)&local_98;
            if ((byte *******)0xf < local_b8) {
              pppppppbVar11 = pppppppbVar24;
            }
            *(byte *)((longlong)pppppppbVar11 + (longlong)local_b0) = bVar6;
            ((byte *)((longlong)pppppppbVar11 + 1))[(longlong)local_b0] = 0;
            local_b8 = local_80;
            local_b0 = local_88;
          }
          else {
            if (local_b0 == (byte *******)0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_1400172e0();
            }
            pppppppbVar11 = (byte *******)((longlong)local_b0 + 1);
            pppppppbVar25 = (byte *******)((ulonglong)pppppppbVar11 | 0xf);
            if (pppppppbVar25 < (byte *******)0x8000000000000000) {
              if ((byte *******)(0x7fffffffffffffff - ((ulonglong)local_b8 >> 1)) < local_b8) {
                local_b8 = (byte *******)0x7fffffffffffffff;
                pppppppbVar15 = (byte *******)0x8000000000000027;
                goto LAB_1400e035c;
              }
              pppppppbVar15 = (byte *******)((longlong)local_b8 + ((ulonglong)local_b8 >> 1));
              if (pppppppbVar25 < pppppppbVar15) {
                pppppppbVar25 = pppppppbVar15;
              }
              pppppppbVar1 = (byte *******)((longlong)pppppppbVar25 + 1);
              local_70 = local_b8;
              if (pppppppbVar1 == (byte *******)0x0) {
                pppppppbVar26 = (byte *******)0x0;
              }
              else {
                if ((byte *******)0xfff < pppppppbVar1) {
                  pppppppbVar15 = pppppppbVar25 + 5;
                  local_b8 = pppppppbVar25;
                  if (pppppppbVar15 <= pppppppbVar1) {
                    /* WARNING: Subroutine does not return */
                    FUN_140017370();
                  }
                  goto LAB_1400e035c;
                }
                pppppppbVar26 = (byte *******)FUN_14028af20(pppppppbVar1);
              }
            }
            else {
              local_b8 = (byte *******)0x7fffffffffffffff;
              pppppppbVar15 = (byte *******)0x8000000000000027;
LAB_1400e035c:
              local_70 = pppppppbVar26;
              ppppppbVar12 = (byte ******)FUN_14028af20(pppppppbVar15);
              pppppppbVar26 = pppppppbVar25;
              if (ppppppbVar12 == (byte ******)0x0) goto LAB_1400e0607;
              pppppppbVar26 = (byte *******)((longlong)ppppppbVar12 + 0x27U & 0xffffffffffffffe0);
              pppppppbVar26[-1] = ppppppbVar12;
              pppppppbVar25 = local_b8;
            }
            local_b8 = pppppppbVar25;
            local_88 = pppppppbVar11;
            local_80 = local_b8;
            if (local_70 < &DAT_00000010) {
              FUN_1404210f0(pppppppbVar26,&local_98,local_b0);
              *(byte *)((longlong)pppppppbVar26 + (longlong)local_b0) = (byte)local_res18;
              ((byte *)((longlong)pppppppbVar26 + 1))[(longlong)local_b0] = 0;
              local_b0 = pppppppbVar11;
              local_98 = pppppppbVar26;
            }
            else {
              FUN_1404210f0(pppppppbVar26,pppppppbVar24,local_b0);
              *(byte *)((longlong)pppppppbVar26 + (longlong)local_b0) = (byte)local_res18;
              ((byte *)((longlong)pppppppbVar26 + 1))[(longlong)local_b0] = 0;
              if ((byte *)((longlong)local_70 + 1) < (byte *)0x1000) {
                thunk_FUN_14028af80(pppppppbVar24);
                local_b0 = pppppppbVar11;
                local_98 = pppppppbVar26;
              }
              else {
                if ((byte *)0x1f <
                    (byte *)((longlong)pppppppbVar24 + (-8 - (longlong)pppppppbVar24[-1])))
                goto LAB_1400e0607;
                thunk_FUN_14028af80(pppppppbVar24[-1],local_70 + 5);
                local_b0 = pppppppbVar11;
                local_98 = pppppppbVar26;
              }
            }
          }
          pppppppbVar20 = (byte *******)((longlong)pppppppbVar20 + 1);
          local_68 = local_68 + 1;
          pppppppbVar11 = local_b0;
          pppppppbVar24 = local_98;
        } while (local_68 < local_60);
      }
      do {
        uVar2 = *local_a8;
        pppppppbVar26 = (byte *******)(ulonglong)uVar2;
        if (pppppppbVar26 <= pppppppbVar11) {
          uVar17 = local_a8[3];
          _Buf2 = *(byte **)(local_a8 + 4);
          local_res18 = (byte *******)&local_98;
          if ((byte *******)0xf < local_b8) {
            local_res18 = pppppppbVar24;
          }
          for (; uVar2 <= uVar17; uVar17 = uVar17 - uVar2) {
            iVar21 = memcmp(local_res18,_Buf2,(size_t)pppppppbVar26);
            if (iVar21 == 0) {
              if ((byte *******)0xf < local_b8) {
                if (((byte *)0xfff < (byte *)((longlong)local_b8 + 1)) &&
                   ((byte *)0x1f <
                    (byte *)((longlong)pppppppbVar24 + (-8 - (longlong)pppppppbVar24[-1]))))
                goto LAB_1400e0607;
                thunk_FUN_14028af80();
              }
              pppppppbVar11 = (byte *******)((longlong)pppppppbVar26 + (longlong)param_3);
              goto LAB_1400e0531;
            }
            _Buf2 = _Buf2 + (longlong)pppppppbVar26;
            pppppppbVar11 = local_b0;
          }
        }
        local_a8 = *(uint **)(local_a8 + 6);
      } while (local_a8 != (uint *)0x0);
      pppppppbVar11 = param_3;
      if ((byte *******)0xf < local_b8) {
        if (((byte *)0xfff < (byte *)((longlong)local_b8 + 1)) &&
           ((byte *)0x1f < (byte *)((longlong)pppppppbVar24 + (-8 - (longlong)pppppppbVar24[-1]))))
        {
LAB_1400e0607:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          break;
        }
        thunk_FUN_14028af80();
      }
LAB_1400e0531:
      lVar8 = param_5;
      if (pppppppbVar11 == param_3) goto LAB_1400e0549;
      bVar6 = 1;
    }
LAB_1400e05e1:
    if ((bVar6 != (*(byte *)(lVar8 + 0xc) & 1)) && (pppppppbVar11 != param_3)) {
LAB_1400e0001:
      *param_2 = (longlong)param_3;
      return param_2;
    }
    pppppppbVar26 = pppppppbVar18;
    param_3 = pppppppbVar18;
  } while (pppppppbVar18 != param_4);
  *param_2 = (longlong)pppppppbVar26;
  return param_2;
  while (param_3 = (byte *******)((longlong)param_3 + 1), cVar7 = (&DAT_140486df0)[bVar6],
        param_3 != param_4) {
LAB_1400e0700:
    bVar6 = *(byte *)param_3;
    if ((bool)(*(byte *)(param_5 + 0xc) & 1) == ((&DAT_140486df0)[bVar6] == cVar7)) break;
  }
switchD_1400dfed2_caseD_0:
  *param_2 = (longlong)param_3;
  return param_2;
}

