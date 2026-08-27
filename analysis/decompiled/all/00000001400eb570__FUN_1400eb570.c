// Function: FUN_1400eb570
// Addr: 1400eb570
// Size: 2784 bytes


undefined8 *
FUN_1400eb570(undefined8 *param_1,char *param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res8 [2];
  uint local_res18;
  undefined4 uStackX_1c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  uint *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 local_100;
  longlong local_f8;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 ******local_68 [2];
  longlong local_58;
  ulonglong local_50;
  
  puVar15 = auStack_138;
  FUN_14015eb90(param_1,param_4);
  puVar17 = param_5;
  plVar18 = (longlong *)0x0;
  *param_1 = &PTR_FUN_140487088;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x57;
  param_1[0x2d] = 0;
  param_1[0x27] = param_5;
  if (param_1 + 0xf != param_3) {
    puVar8 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar8 = (undefined8 *)*param_3;
    }
    FUN_14000f880(param_1 + 0xf,puVar8,param_3[2]);
  }
  uVar4 = *(uint *)(param_3 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((longlong)param_1 + 0x1c) = uVar4 | 0x40000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x1c;
  local_d0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_c0 = 0x1c;
  local_bc = 1;
  local_c4 = 1;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_c8 = 1;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_f0 = 0;
  uStack_ec = 0;
  iStack_e8 = 0;
  uStack_e4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  sVar5 = strlen(param_2);
  FUN_140017480(&local_f0,param_2,sVar5);
  FUN_1400eaf10(local_68,&local_f0);
  uVar13 = CONCAT44(uStack_d4,local_d8);
  if (uVar13 < 0x10) {
LAB_1400eb6ce:
    if ((*(char *)((longlong)param_3 + 0x29) == '\0') && (*(char *)(param_3 + 5) == '\0')) {
      pppppppuVar10 = local_68;
      if (0xf < local_50) {
        pppppppuVar10 = (undefined8 *******)local_68[0];
      }
      cVar2 = FUN_14016ff50(pppppppuVar10);
      if (cVar2 == '\0') {
        pppppppuVar10 = local_68;
        if (0xf < local_50) {
          pppppppuVar10 = (undefined8 *******)local_68[0];
        }
        if ((local_58 != 4) || (iVar3 = memcmp(pppppppuVar10,&DAT_140487000,4), iVar3 != 0))
        goto LAB_1400ebbd9;
        puVar8 = (undefined8 *)FUN_14028af20(0x20);
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined4 *)(puVar8 + 3) = 0;
        param_1[0x1c] = puVar8;
        cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x140))
                          (*(longlong **)(param_4 + 0x158),param_2,puVar8);
        if (cVar2 != '\0') {
          local_110 = &param_5;
          local_118 = local_res8;
          cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x148))
                            (*(longlong **)(param_4 + 0x158),*(undefined8 *)param_1[0x1c],0,
                             &local_res18);
          if (cVar2 != '\0') {
            *(uint *)(param_1[0x1c] + 0x10) = local_res8[0];
            *(int *)(param_1[0x1c] + 0x14) = (int)param_5;
            fVar22 = *(float *)((longlong)param_3 + 0x24);
            iVar3 = (int)param_5;
            if (fVar22 != 0.0) {
              if ((float)local_res8[0] / (float)((ulonglong)param_5 & 0xffffffff) <= fVar22) {
                iVar3 = (int)(longlong)((float)local_res8[0] / fVar22);
                *(int *)(param_1[0x1c] + 0xc) =
                     (int)(longlong)((float)(uint)((int)param_5 - iVar3) * DAT_1404926c0);
                param_5 = (undefined8 *)CONCAT44(param_5._4_4_,iVar3);
              }
              else {
                uVar4 = (uint)(longlong)(fVar22 * (float)((ulonglong)param_5 & 0xffffffff));
                *(int *)(param_1[0x1c] + 8) =
                     (int)(longlong)((float)(local_res8[0] - uVar4) * DAT_1404926c0);
                local_res8[0] = uVar4;
              }
            }
            *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 1;
            *(uint *)((longlong)param_1 + 0x2c) = local_res8[0];
            *(uint *)(param_1 + 4) = local_res8[0];
            *(int *)(param_1 + 6) = iVar3;
            *(int *)((longlong)param_1 + 0x24) = iVar3;
            local_b8 = CONCAT44(2,(undefined4)local_b8);
            uStack_b0 = 0x1000000000008;
            local_d0 = CONCAT44(iVar3,local_res8[0]);
            uVar7 = thunk_FUN_14028af20(local_res8[0] * iVar3 * 4);
            lVar9 = param_1[0x1c];
            local_100 = *(undefined4 *)(lVar9 + 0xc);
            local_108 = *(undefined4 *)(lVar9 + 8);
            local_110 = (undefined8 *)CONCAT44(local_110._4_4_,(int)param_5);
            local_118._0_4_ = local_res8[0];
            FUN_140170470(CONCAT44(uStackX_1c,local_res18),*(undefined4 *)(lVar9 + 0x10));
            local_118 = (uint *)CONCAT44(local_118._4_4_,4);
            FUN_1400eb220(&local_80,uVar7,*(undefined4 *)(param_1 + 4),
                          *(undefined4 *)((longlong)param_1 + 0x24));
            (**(code **)(*(longlong *)*puVar17 + 0x28))
                      ((longlong *)*puVar17,&local_d0,local_80,&local_98);
            thunk_FUN_14028af80(uVar7);
            *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xbfffffff;
            goto LAB_1400ebef1;
          }
        }
        if (*(longlong *)param_1[0x1c] != 0) {
          (**(code **)(**(longlong **)(param_4 + 0x158) + 0x150))();
        }
        thunk_FUN_14028af80(param_1[0x1c],0x20);
        param_1[0x1c] = 0;
        goto LAB_1400ebef1;
      }
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x20;
      local_f0 = local_f0 & 0xffffff00;
      uStack_ec = 0;
      iStack_e8 = 0;
      uStack_e4 = 0;
      local_e0 = local_e0 & 0xffffff00;
      uStack_dc = 0;
      local_d8 = 0;
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_4 + 0x158) + 0x130))
                         (*(longlong **)(param_4 + 0x158),param_4);
      param_1[0x1b] = plVar6;
      if ((plVar6 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined8 *)(param_4 + 0x1518),param_1),
         cVar2 != '\0')) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x18))((longlong *)param_1[0x1b],param_2,0,0);
        (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],&local_f0);
      }
      if ((char)local_f0 == '\0') {
        puVar17 = (undefined8 *)param_1[0x1b];
        cVar2 = '\0';
        if (puVar17 != (undefined8 *)0x0) {
          (**(code **)*puVar17)(puVar17,1);
          cVar2 = (char)local_f0;
        }
        param_1[0x1b] = 0;
        if (cVar2 != '\0') goto LAB_1400eb7ca;
        uVar4 = 0x40;
        iVar3 = 0x40;
      }
      else {
        plVar18 = (longlong *)param_1[0x1b];
LAB_1400eb7ca:
        uVar4 = uStack_ec;
        iVar3 = iStack_e8;
        if ((plVar18 != (longlong *)0x0) &&
           (fVar22 = *(float *)((longlong)param_3 + 0x24), fVar22 != 0.0)) {
          fVar24 = 0.0;
          fVar25 = (float)(int)uStack_ec;
          fVar26 = (float)iStack_e8;
          if (fVar25 / fVar26 <= fVar22) {
            fVar23 = 0.0;
            iVar3 = (int)(longlong)(fVar25 / fVar22);
            fVar24 = ((float)(uint)(iStack_e8 - iVar3) / fVar26) * DAT_1404926c0;
            fVar22 = DAT_140492704 - fVar24;
          }
          else {
            uVar4 = (uint)(longlong)(fVar22 * fVar26);
            fVar23 = ((float)(uStack_ec - uVar4) / fVar25) * DAT_1404926c0;
            fVar22 = DAT_140492704;
          }
          local_118 = (uint *)CONCAT44(local_118._4_4_,fVar22);
          (**(code **)(*plVar18 + 0x28))(plVar18,fVar23,fVar24);
        }
      }
      iVar20 = 4;
      if (((char)local_e0 != '\0') && ((*(uint *)(param_4 + 0x118) & 0x10000) != 0)) {
        *(undefined4 *)(param_1 + 3) = 0xe;
        iVar20 = 8;
        *(undefined4 *)(param_1 + 0x2c) = 10;
        local_c0 = 10;
      }
      local_a8 = local_a8 | 0x100;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
      *(int *)(param_1 + 6) = iVar3;
      *(int *)((longlong)param_1 + 0x24) = iVar3;
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      *(uint *)(param_1 + 4) = uVar4;
      local_b8 = local_b8 & 0xffffffff;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,0x28);
      iVar16 = iVar3 * uVar4 * iVar20;
      local_d0 = CONCAT44(iVar3,uVar4);
      uVar7 = thunk_FUN_14028af20(iVar16);
      FUN_1404217a0(uVar7,0,iVar16);
      local_118 = (uint *)CONCAT44(local_118._4_4_,iVar20);
      FUN_1400eb220(&local_80,uVar7,*(undefined4 *)(param_1 + 4),
                    *(undefined4 *)((longlong)param_1 + 0x24));
      (**(code **)(*(longlong *)*param_5 + 0x28))((longlong *)*param_5,&local_d0,local_80,&local_98)
      ;
      if ((local_98 != (undefined8 *)0x0) && ((local_a8 & 0x100) != 0)) {
        (**(code **)*local_98)(local_98,&DAT_140487078,param_1 + 0x2d);
      }
      thunk_FUN_14028af80(uVar7);
      puVar17 = param_5;
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) goto LAB_1400ebef1;
      if (local_98 != (undefined8 *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
LAB_1400ebee6:
        *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xbfffffff;
        puVar17 = param_5;
        goto LAB_1400ebef1;
      }
LAB_1400ebf69:
      FUN_1400eef70(param_1);
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x40000000;
    }
    else {
LAB_1400ebbd9:
      local_f8 = 0;
      local_res18 = 0;
      local_res8[0] = 0;
      if (*(char *)(param_3 + 5) == '\0') {
        if (*(char *)((longlong)param_3 + 0x29) == '\0') {
          local_118 = local_res8;
          cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x60))
                            (*(longlong **)(param_4 + 0x158),param_2,&local_a0,&local_res18);
          if (cVar2 != '\0') {
            local_118 = (uint *)&local_f8;
            FUN_1401702f0(local_a0,&local_res18,local_res8);
            (**(code **)(**(longlong **)(param_4 + 0x158) + 0x68))
                      (*(longlong **)(param_4 + 0x158),local_a0);
            lVar9 = local_f8;
            goto LAB_1400ebe7e;
          }
        }
        else {
          local_118 = local_res8;
          cVar2 = FUN_140174710(param_4 + 0x1708,param_2,&local_f8);
          lVar12 = local_f8;
          if (cVar2 != '\0') {
            fVar22 = *(float *)((longlong)param_3 + 0x24);
            if (fVar22 == 0.0) {
              lVar9 = thunk_FUN_14028af20(local_res8[0] * local_res18 * 4);
              FUN_1404210f0(lVar9,lVar12,local_res8[0] * local_res18 * 4);
              uVar4 = local_res8[0];
            }
            else if ((float)local_res18 / (float)local_res8[0] <= fVar22) {
              lVar21 = (longlong)((float)local_res8[0] * fVar22);
              iVar20 = (int)lVar21;
              iVar3 = iVar20 * local_res8[0] * 4;
              local_a0 = lVar21;
              lVar9 = thunk_FUN_14028af20(iVar3);
              FUN_1404217a0(lVar9,0,iVar3);
              uVar4 = iVar20 - local_res18;
              uVar14 = 0;
              if (local_res8[0] != 0) {
                do {
                  FUN_1404210f0((ulonglong)(uVar14 * iVar20 * 4) + (int)((uVar4 >> 1) << 2) + lVar9,
                                (ulonglong)(uVar14 * local_res18 * 4) + lVar12,local_res18 * 4);
                  uVar14 = uVar14 + 1;
                  lVar21 = local_a0;
                } while (uVar14 < local_res8[0]);
              }
              local_res18 = (uint)lVar21;
              uVar4 = local_res8[0];
            }
            else {
              uVar4 = (uint)(longlong)((float)local_res18 / fVar22);
              iVar3 = uVar4 * local_res18 * 4;
              lVar9 = thunk_FUN_14028af20(iVar3);
              FUN_1404217a0(lVar9,0,iVar3);
              uVar19 = uVar4 - local_res8[0] >> 1;
              uVar14 = uVar19;
              if (local_res8[0] != 0) {
                do {
                  FUN_1404210f0((ulonglong)(local_res18 * uVar14 * 4) + lVar9,
                                (ulonglong)((uVar14 - uVar19) * local_res18 * 4) + lVar12,
                                local_res18 * 4);
                  uVar14 = uVar14 + 1;
                } while (uVar14 - uVar19 < local_res8[0]);
              }
            }
            local_res8[0] = uVar4;
            plVar18 = *(longlong **)(*(longlong *)(param_4 + 0x1710) + 0x158);
            (**(code **)(*plVar18 + 0x118))(plVar18,local_f8);
LAB_1400ebe7e:
            puVar17 = param_5;
            if (lVar9 == 0) goto LAB_1400ebef1;
            *(uint *)((longlong)param_1 + 0x2c) = local_res18;
            *(uint *)(param_1 + 4) = local_res18;
            *(uint *)(param_1 + 6) = local_res8[0];
            *(uint *)((longlong)param_1 + 0x24) = local_res8[0];
            local_d0 = CONCAT44(local_res8[0],local_res18);
            local_b8 = CONCAT44(1,(undefined4)local_b8);
            uStack_b0 = CONCAT44(uStack_b0._4_4_,8);
            local_118 = (uint *)CONCAT44(local_118._4_4_,4);
            FUN_1400eb220(&local_80,lVar9);
            (**(code **)(*(longlong *)*param_5 + 0x28))
                      ((longlong *)*param_5,&local_d0,local_80,&local_98);
            thunk_FUN_14028af80(lVar9);
            goto LAB_1400ebee6;
          }
        }
      }
      else {
        lVar9 = *(longlong *)(param_4 + 0x1848);
        puVar17 = param_5;
        if (lVar9 != 0) {
          cVar2 = FUN_14000d010(lVar9 + 8,param_2);
          lVar12 = 0x108;
          if (cVar2 == '\0') {
            lVar12 = 0x160;
          }
          puVar17 = param_5;
          if (((*(longlong *)(lVar9 + lVar12) != *(longlong *)(lVar9 + 8 + lVar12)) &&
              (uVar4 = *(uint *)(lVar9 + 0x38 + lVar12), uVar4 != 0)) &&
             (*(int *)(lVar9 + 0x3c + lVar12) != 0)) {
            local_res8[0] = *(uint *)(lVar9 + 0x3c + lVar12);
            local_118 = (uint *)&local_f8;
            local_res18 = uVar4;
            FUN_1401702f0(*(longlong *)(lVar9 + lVar12),&local_res18,local_res8);
            lVar9 = local_f8;
            goto LAB_1400ebe7e;
          }
        }
      }
LAB_1400ebef1:
      if (local_98 == (undefined8 *)0x0) goto LAB_1400ebf69;
      local_f0 = *(uint *)(param_1 + 0x2c);
      uStack_e4 = local_c8;
      iStack_e8 = 0;
      uStack_ec = (*(uint *)((longlong)param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18;
      (**(code **)(*(longlong *)*puVar17 + 0x38))((longlong *)*puVar17,local_98,&local_f0,&local_88)
      ;
      FUN_1400ef8d0(param_1 + 0x28,&local_98);
      uVar7 = FUN_140099980(puVar17[3],*(undefined4 *)((longlong)param_1 + 0x1c),1);
      param_1[0x2b] = uVar7;
    }
    puVar17 = (undefined8 *)param_1[0x1f];
    for (puVar8 = (undefined8 *)*puVar17; puVar8 != puVar17; puVar8 = (undefined8 *)*puVar8) {
      plVar18 = (longlong *)puVar8[10];
      param_5 = param_1;
      if (plVar18 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2c0();
      }
      (**(code **)(*plVar18 + 0x10))(plVar18,&param_5);
    }
    if (0xf < local_50) {
      uVar13 = local_50 + 1;
      pppppppuVar10 = (undefined8 *******)local_68[0];
      if (0xfff < uVar13) {
        pppppppuVar10 = (undefined8 *******)local_68[0][-1];
        if (0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pppppppuVar10)))
        goto LAB_1400ec01e;
        uVar13 = local_50 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar10,uVar13);
    }
    if (local_80 == 0) {
      return param_1;
    }
    lVar9 = local_80;
    if (((local_70 - local_80 & 0xfffffffffffffff0U) < 0x1000) ||
       (lVar9 = *(longlong *)(local_80 + -8), puVar15 = auStack_138,
       (local_80 - *(longlong *)(local_80 + -8)) - 8U < 0x20)) goto LAB_1400ec028;
  }
  else {
    lVar12 = CONCAT44(uStack_ec,local_f0);
    uVar11 = uVar13 + 1;
    lVar9 = lVar12;
    if (uVar11 < 0x1000) {
LAB_1400eb6c9:
      thunk_FUN_14028af80(lVar9,uVar11);
      goto LAB_1400eb6ce;
    }
    lVar9 = *(longlong *)(lVar12 + -8);
    if ((lVar12 - lVar9) - 8U < 0x20) {
      uVar11 = uVar13 + 0x28;
      goto LAB_1400eb6c9;
    }
  }
LAB_1400ec01e:
  pcVar1 = (code *)swi(0x29);
  lVar9 = (*pcVar1)(5);
  puVar15 = auStack_130;
LAB_1400ec028:
  *(undefined8 *)(puVar15 + -8) = 0x1400ec02d;
  thunk_FUN_14028af80(lVar9);
  return param_1;
}

