// Function: FUN_1400eb640
// Addr: 1400eb640
// Size: 141 bytes


undefined8 *
FUN_1400eb640(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint auStackX_8 [2];
  uint uStackX_18;
  undefined4 uStackX_1c;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  uint *puStack_118;
  undefined8 *puStack_110;
  undefined4 uStack_108;
  undefined4 uStack_100;
  longlong lStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  uint uStack_a8;
  longlong lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 ******appppppuStack_68 [2];
  longlong lStack_58;
  ulonglong uStack_50;
  
  puVar14 = auStack_138;
  FUN_14015ec60(param_1,param_4);
  puVar10 = param_5;
  plVar16 = (longlong *)0x0;
  *param_1 = &PTR_UNWIND_INFO_1400eb3f9_UnwindCodes_1__UnwindOpCode_140487158;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x57;
  param_1[0x2d] = 0;
  param_1[0x27] = param_5;
  if (param_1 + 0xf != param_3) {
    puVar10 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar10 = (undefined8 *)*param_3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(param_1 + 0xf,puVar10,param_3[2]);
  }
  uVar8 = *(uint *)(param_3 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  *(uint *)((longlong)param_1 + 0x1c) = uVar8 | 0x40000000;
  *(undefined4 *)(param_1 + 0x2c) = 0x1c;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0x1c;
  uStack_bc = 1;
  uStack_c4 = 1;
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_c8 = 1;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  iStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uVar4 = func_0x000140421ed0(param_2);
  func_0x000140017550(&uStack_f0,param_2,uVar4);
  FUN_1400eafe0(appppppuStack_68,&uStack_f0);
  uVar13 = CONCAT44(uStack_d4,uStack_d8);
  if (uVar13 < 0x10) {
code_r0x0001400eb79e:
    if ((*(char *)((longlong)param_3 + 0x29) == '\0') && (*(char *)(param_3 + 5) == '\0')) {
      pppppppuVar9 = appppppuStack_68;
      if (0xf < uStack_50) {
        pppppppuVar9 = (undefined8 *******)appppppuStack_68[0];
      }
      cVar2 = func_0x000140170020(pppppppuVar9);
      if (cVar2 == '\0') {
        pppppppuVar9 = appppppuStack_68;
        if (0xf < uStack_50) {
          pppppppuVar9 = (undefined8 *******)appppppuStack_68[0];
        }
        if ((lStack_58 != 4) ||
           (iVar3 = func_0x0001404210c0(pppppppuVar9,&UNK_1404870d0), iVar3 != 0))
        goto code_r0x0001400ebca9;
        puVar6 = (undefined8 *)func_0x00014028aff0(0x20);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *(undefined4 *)(puVar6 + 3) = 0;
        param_1[0x1c] = puVar6;
        cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x140))
                          (*(longlong **)(param_4 + 0x158),param_2,puVar6);
        if (cVar2 != '\0') {
          puStack_110 = &param_5;
          puStack_118 = auStackX_8;
          cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x148))
                            (*(longlong **)(param_4 + 0x158),*(undefined8 *)param_1[0x1c],0,
                             &uStackX_18);
          if (cVar2 != '\0') {
            *(uint *)(param_1[0x1c] + 0x10) = auStackX_8[0];
            *(int *)(param_1[0x1c] + 0x14) = (int)param_5;
            fVar19 = *(float *)((longlong)param_3 + 0x24);
            iVar3 = (int)param_5;
            if (fVar19 != 0.0) {
              if ((float)auStackX_8[0] / (float)((ulonglong)param_5 & 0xffffffff) <= fVar19) {
                iVar3 = (int)(longlong)((float)auStackX_8[0] / fVar19);
                *(int *)(param_1[0x1c] + 0xc) =
                     (int)(longlong)((float)(uint)((int)param_5 - iVar3) * DAT_140492790);
                param_5 = (undefined8 *)CONCAT44(param_5._4_4_,iVar3);
              }
              else {
                uVar8 = (uint)(longlong)(fVar19 * (float)((ulonglong)param_5 & 0xffffffff));
                *(int *)(param_1[0x1c] + 8) =
                     (int)(longlong)((float)(auStackX_8[0] - uVar8) * DAT_140492790);
                auStackX_8[0] = uVar8;
              }
            }
            *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 1;
            *(uint *)((longlong)param_1 + 0x2c) = auStackX_8[0];
            *(uint *)(param_1 + 4) = auStackX_8[0];
            *(int *)(param_1 + 6) = iVar3;
            *(int *)((longlong)param_1 + 0x24) = iVar3;
            uStack_b8 = CONCAT44(2,(undefined4)uStack_b8);
            uStack_b0 = 0x1000000000008;
            uStack_d0 = CONCAT44(iVar3,auStackX_8[0]);
            uVar4 = FUN_14028b190(auStackX_8[0] * iVar3 * 4);
            lVar7 = param_1[0x1c];
            uStack_100 = *(undefined4 *)(lVar7 + 0xc);
            uStack_108 = *(undefined4 *)(lVar7 + 8);
            puStack_110 = (undefined8 *)CONCAT44(puStack_110._4_4_,(int)param_5);
            puStack_118._0_4_ = auStackX_8[0];
            func_0x000140170540(CONCAT44(uStackX_1c,uStackX_18),*(undefined4 *)(lVar7 + 0x10));
            puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,4);
            FUN_1400eb2f0(&lStack_80,uVar4,*(undefined4 *)(param_1 + 4),
                          *(undefined4 *)((longlong)param_1 + 0x24));
            (**(code **)(*(longlong *)*puVar10 + 0x28))
                      ((longlong *)*puVar10,&uStack_d0,lStack_80,&puStack_98);
            func_0x00014028b040(uVar4);
            *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xbfffffff;
            goto code_r0x0001400ebfc1;
          }
        }
        if (*(longlong *)param_1[0x1c] != 0) {
          (**(code **)(**(longlong **)(param_4 + 0x158) + 0x150))();
        }
        func_0x00014028b040(param_1[0x1c],0x20);
        param_1[0x1c] = 0;
        goto code_r0x0001400ebfc1;
      }
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x20;
      uStack_f0 = uStack_f0 & 0xffffff00;
      uStack_ec = 0;
      iStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = uStack_e0 & 0xffffff00;
      uStack_dc = 0;
      uStack_d8 = 0;
      plVar5 = (longlong *)
               (**(code **)(**(longlong **)(param_4 + 0x158) + 0x130))
                         (*(longlong **)(param_4 + 0x158),param_4);
      param_1[0x1b] = plVar5;
      if ((plVar5 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar5 + 8))(plVar5,*(undefined8 *)(param_4 + 0x1518),param_1),
         cVar2 != '\0')) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x18))((longlong *)param_1[0x1b],param_2,0,0);
        (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],&uStack_f0);
      }
      if ((char)uStack_f0 == '\0') {
        puVar10 = (undefined8 *)param_1[0x1b];
        cVar2 = '\0';
        if (puVar10 != (undefined8 *)0x0) {
          (**(code **)*puVar10)(puVar10,1);
          cVar2 = (char)uStack_f0;
        }
        param_1[0x1b] = 0;
        if (cVar2 != '\0') goto code_r0x0001400eb89a;
        uVar8 = 0x40;
        iVar3 = 0x40;
      }
      else {
        plVar16 = (longlong *)param_1[0x1b];
code_r0x0001400eb89a:
        uVar8 = uStack_ec;
        iVar3 = iStack_e8;
        if ((plVar16 != (longlong *)0x0) &&
           (fVar19 = *(float *)((longlong)param_3 + 0x24), fVar19 != 0.0)) {
          fVar21 = 0.0;
          fVar22 = (float)(int)uStack_ec;
          fVar23 = (float)iStack_e8;
          if (fVar22 / fVar23 <= fVar19) {
            fVar20 = 0.0;
            iVar3 = (int)(longlong)(fVar22 / fVar19);
            fVar21 = ((float)(uint)(iStack_e8 - iVar3) / fVar23) * DAT_140492790;
            fVar19 = DAT_1404927d4 - fVar21;
          }
          else {
            uVar8 = (uint)(longlong)(fVar19 * fVar23);
            fVar20 = ((float)(uStack_ec - uVar8) / fVar22) * DAT_140492790;
            fVar19 = DAT_1404927d4;
          }
          puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,fVar19);
          (**(code **)(*plVar16 + 0x28))(plVar16,fVar20,fVar21);
        }
      }
      iVar17 = 4;
      if (((char)uStack_e0 != '\0') && ((*(uint *)(param_4 + 0x118) & 0x10000) != 0)) {
        *(undefined4 *)(param_1 + 3) = 0xe;
        iVar17 = 8;
        *(undefined4 *)(param_1 + 0x2c) = 10;
        uStack_c0 = 10;
      }
      uStack_a8 = uStack_a8 | 0x100;
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
      *(int *)(param_1 + 6) = iVar3;
      *(int *)((longlong)param_1 + 0x24) = iVar3;
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      *(uint *)(param_1 + 4) = uVar8;
      uStack_b8 = uStack_b8 & 0xffffffff;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,0x28);
      iVar15 = iVar3 * uVar8 * iVar17;
      uStack_d0 = CONCAT44(iVar3,uVar8);
      uVar4 = FUN_14028b190(iVar15);
      func_0x000140421870(uVar4,0,iVar15);
      puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,iVar17);
      FUN_1400eb2f0(&lStack_80,uVar4,*(undefined4 *)(param_1 + 4),
                    *(undefined4 *)((longlong)param_1 + 0x24));
      (**(code **)(*(longlong *)*param_5 + 0x28))
                ((longlong *)*param_5,&uStack_d0,lStack_80,&puStack_98);
      if ((puStack_98 != (undefined8 *)0x0) && ((uStack_a8 & 0x100) != 0)) {
        (**(code **)*puStack_98)(puStack_98,&UNK_140487148,param_1 + 0x2d);
      }
      func_0x00014028b040(uVar4);
      puVar10 = param_5;
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) goto code_r0x0001400ebfc1;
      if (puStack_98 != (undefined8 *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
code_r0x0001400ebfb6:
        *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xbfffffff;
        puVar10 = param_5;
        goto code_r0x0001400ebfc1;
      }
code_r0x0001400ec039:
      func_0x0001400ef040(param_1);
      *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x40000000;
    }
    else {
code_r0x0001400ebca9:
      lStack_f8 = 0;
      uStackX_18 = 0;
      auStackX_8[0] = 0;
      if (*(char *)(param_3 + 5) == '\0') {
        if (*(char *)((longlong)param_3 + 0x29) == '\0') {
          puStack_118 = auStackX_8;
          cVar2 = (**(code **)(**(longlong **)(param_4 + 0x158) + 0x60))
                            (*(longlong **)(param_4 + 0x158),param_2,&lStack_a0,&uStackX_18);
          if (cVar2 != '\0') {
            puStack_118 = (uint *)&lStack_f8;
            func_0x0001401703c0(lStack_a0,&uStackX_18,auStackX_8);
            (**(code **)(**(longlong **)(param_4 + 0x158) + 0x68))
                      (*(longlong **)(param_4 + 0x158),lStack_a0);
            lVar7 = lStack_f8;
            goto code_r0x0001400ebf4e;
          }
        }
        else {
          puStack_118 = auStackX_8;
          cVar2 = func_0x0001401747e0(param_4 + 0x1708,param_2,&lStack_f8);
          lVar12 = lStack_f8;
          if (cVar2 != '\0') {
            fVar19 = *(float *)((longlong)param_3 + 0x24);
            if (fVar19 == 0.0) {
              uVar4 = FUN_14028b190(auStackX_8[0] * uStackX_18 * 4);
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(uVar4,lVar12,auStackX_8[0] * uStackX_18 * 4);
            }
            if ((float)uStackX_18 / (float)auStackX_8[0] <= fVar19) {
              lStack_a0 = (longlong)((float)auStackX_8[0] * fVar19);
              uVar18 = (uint)lStack_a0;
              iVar3 = uVar18 * auStackX_8[0] * 4;
              lVar7 = FUN_14028b190(iVar3);
              func_0x000140421870(lVar7,0,iVar3);
              uVar8 = auStackX_8[0];
              if (auStackX_8[0] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0((int)((uVar18 - uStackX_18 >> 1) << 2) + lVar7,lVar12,uStackX_18 * 4);
              }
            }
            else {
              uVar8 = (uint)(longlong)((float)uStackX_18 / fVar19);
              iVar3 = uVar8 * uStackX_18 * 4;
              lVar7 = FUN_14028b190(iVar3);
              func_0x000140421870(lVar7,0,iVar3);
              uVar18 = uStackX_18;
              if (auStackX_8[0] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0((ulonglong)(uStackX_18 * (uVar8 - auStackX_8[0] >> 1) * 4) + lVar7,
                              lVar12,uStackX_18 * 4);
              }
            }
            uStackX_18 = uVar18;
            auStackX_8[0] = uVar8;
            plVar16 = *(longlong **)(*(longlong *)(param_4 + 0x1710) + 0x158);
            (**(code **)(*plVar16 + 0x118))(plVar16,lStack_f8);
code_r0x0001400ebf4e:
            puVar10 = param_5;
            if (lVar7 == 0) goto code_r0x0001400ebfc1;
            *(uint *)((longlong)param_1 + 0x2c) = uStackX_18;
            *(uint *)(param_1 + 4) = uStackX_18;
            *(uint *)(param_1 + 6) = auStackX_8[0];
            *(uint *)((longlong)param_1 + 0x24) = auStackX_8[0];
            uStack_d0 = CONCAT44(auStackX_8[0],uStackX_18);
            uStack_b8 = CONCAT44(1,(undefined4)uStack_b8);
            uStack_b0 = CONCAT44(uStack_b0._4_4_,8);
            puStack_118 = (uint *)CONCAT44(puStack_118._4_4_,4);
            FUN_1400eb2f0(&lStack_80,lVar7);
            (**(code **)(*(longlong *)*param_5 + 0x28))
                      ((longlong *)*param_5,&uStack_d0,lStack_80,&puStack_98);
            func_0x00014028b040(lVar7);
            goto code_r0x0001400ebfb6;
          }
        }
      }
      else {
        lVar7 = *(longlong *)(param_4 + 0x1848);
        puVar10 = param_5;
        if (lVar7 != 0) {
          cVar2 = FUN_14000d0e0(lVar7 + 8,param_2);
          lVar12 = 0x108;
          if (cVar2 == '\0') {
            lVar12 = 0x160;
          }
          puVar10 = param_5;
          if (((*(longlong *)(lVar7 + lVar12) != *(longlong *)(lVar7 + 8 + lVar12)) &&
              (uVar8 = *(uint *)(lVar7 + 0x38 + lVar12), uVar8 != 0)) &&
             (*(int *)(lVar7 + 0x3c + lVar12) != 0)) {
            auStackX_8[0] = *(uint *)(lVar7 + 0x3c + lVar12);
            puStack_118 = (uint *)&lStack_f8;
            uStackX_18 = uVar8;
            func_0x0001401703c0(*(longlong *)(lVar7 + lVar12),&uStackX_18,auStackX_8);
            lVar7 = lStack_f8;
            goto code_r0x0001400ebf4e;
          }
        }
      }
code_r0x0001400ebfc1:
      if (puStack_98 == (undefined8 *)0x0) goto code_r0x0001400ec039;
      uStack_f0 = *(uint *)(param_1 + 0x2c);
      uStack_e4 = uStack_c8;
      iStack_e8 = 0;
      uStack_ec = (*(uint *)((longlong)param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18;
      (**(code **)(*(longlong *)*puVar10 + 0x38))
                ((longlong *)*puVar10,puStack_98,&uStack_f0,&uStack_88);
      func_0x0001400ef9a0(param_1 + 0x28,&puStack_98);
      uVar4 = func_0x000140099a50(puVar10[3],*(undefined4 *)((longlong)param_1 + 0x1c),1);
      param_1[0x2b] = uVar4;
    }
    puVar10 = (undefined8 *)param_1[0x1f];
    for (puVar6 = (undefined8 *)*puVar10; puVar6 != puVar10; puVar6 = (undefined8 *)*puVar6) {
      plVar16 = (longlong *)puVar6[10];
      param_5 = param_1;
      if (plVar16 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c390();
      }
      (**(code **)(*plVar16 + 0x10))(plVar16,&param_5);
    }
    if (0xf < uStack_50) {
      uVar13 = uStack_50 + 1;
      pppppppuVar9 = (undefined8 *******)appppppuStack_68[0];
      if (0xfff < uVar13) {
        pppppppuVar9 = (undefined8 *******)appppppuStack_68[0][-1];
        if (0x1f < (ulonglong)((longlong)appppppuStack_68[0] + (-8 - (longlong)pppppppuVar9)))
        goto code_r0x0001400ec0ee;
        uVar13 = uStack_50 + 0x28;
      }
      func_0x00014028b040(pppppppuVar9,uVar13);
    }
    if (lStack_80 == 0) {
      return param_1;
    }
    lVar7 = lStack_80;
    if (((lStack_70 - lStack_80 & 0xfffffffffffffff0U) < 0x1000) ||
       (lVar7 = *(longlong *)(lStack_80 + -8), puVar14 = auStack_138,
       (lStack_80 - *(longlong *)(lStack_80 + -8)) - 8U < 0x20)) goto code_r0x0001400ec0f8;
  }
  else {
    lVar12 = CONCAT44(uStack_ec,uStack_f0);
    uVar11 = uVar13 + 1;
    lVar7 = lVar12;
    if (uVar11 < 0x1000) {
code_r0x0001400eb799:
      func_0x00014028b040(lVar7,uVar11);
      goto code_r0x0001400eb79e;
    }
    lVar7 = *(longlong *)(lVar12 + -8);
    if ((lVar12 - lVar7) - 8U < 0x20) {
      uVar11 = uVar13 + 0x28;
      goto code_r0x0001400eb799;
    }
  }
code_r0x0001400ec0ee:
  pcVar1 = (code *)swi(0x29);
  lVar7 = (*pcVar1)(5);
  puVar14 = auStack_130;
code_r0x0001400ec0f8:
  *(undefined8 *)(puVar14 + -8) = 0x1400ec0fd;
  func_0x00014028b040(lVar7);
  return param_1;
}

