// Function: FUN_1401d3ae0
// Addr: 1401d3ae0
// Size: 1990 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401d3ae0(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong in_RAX;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined2 uStack_c4;
  undefined2 uStack_c2;
  char local_c0 [7];
  char cStack_b9;
  char acStack_b8 [2];
  char cStack_b6;
  undefined1 uStack_b5;
  undefined4 uStack_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  uint local_a0;
  uint local_9c;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  
  puVar19 = auStack_118;
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar13 = (longlong *)
              (**(code **)(**(longlong **)(*param_1 + 0x1510) + 8))
                        (*(longlong **)(*param_1 + 0x1510),*(undefined8 *)(param_2 + 0x10));
    in_RAX = 0;
    if ((plVar13 != (longlong *)0x0) &&
       ((iVar7 = (**(code **)(*plVar13 + 0x60))(plVar13), iVar7 == 1 ||
        (in_RAX = (**(code **)(*plVar13 + 0x60))(plVar13), (int)in_RAX == 4)))) {
      in_RAX = FUN_1401d76d0(param_1,plVar13);
      *(longlong **)(param_2 + 0x38) = plVar13;
    }
  }
  else if (*(int *)(param_2 + 8) == 2) {
    lVar17 = **(longlong **)(param_2 + 0x38);
    *param_3 = param_2 + 0x80;
    puVar11 = (undefined8 *)(**(code **)(lVar17 + 0x80))();
    uVar14 = puVar11[1];
    *(undefined8 *)(param_2 + 0x98) = *puVar11;
    *(undefined8 *)(param_2 + 0xa0) = uVar14;
    uVar14 = puVar11[3];
    *(undefined8 *)(param_2 + 0xa8) = puVar11[2];
    *(undefined8 *)(param_2 + 0xb0) = uVar14;
    uVar14 = puVar11[5];
    *(undefined8 *)(param_2 + 0xb8) = puVar11[4];
    *(undefined8 *)(param_2 + 0xc0) = uVar14;
    uVar14 = puVar11[7];
    *(undefined8 *)(param_2 + 200) = puVar11[6];
    *(undefined8 *)(param_2 + 0xd0) = uVar14;
    lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x2c8);
    if (((uint)*(ushort *)(lVar17 + 0x14) != *(uint *)(param_2 + 0x5c)) ||
       ((uint)*(ushort *)(lVar17 + 0x16) != *(uint *)(param_2 + 0x60))) {
      FUN_1401ab5f0(*param_1 + 0x16c0,*(undefined8 *)(param_2 + 0x50));
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x88) >> 8),
                    *(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88));
  }
  plVar13 = *(longlong **)(param_2 + 0x38);
  if (plVar13 == (longlong *)0x0) {
LAB_1401d42a2:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar22 = *(uint *)((longlong)plVar13 + 0x304);
  if ((uVar22 >> 0xc & 1) == 0) {
    in_RAX = (ulonglong)(uVar22 | 0x1010);
    *(uint *)((longlong)plVar13 + 0x304) = uVar22 | 0x1010;
    if ((uVar22 & 0x10) == 0) {
      uVar12 = (**(code **)(*plVar13 + 0x110))(plVar13);
      return uVar12 & 0xffffffffffffff00;
    }
    goto LAB_1401d42a2;
  }
  in_RAX = (**(code **)(*plVar13 + 0x68))(plVar13);
  if ((((char)in_RAX == '\0') && (in_RAX = FUN_140185010(plVar13), (char)in_RAX == '\0')) ||
     (lVar17 = plVar13[0x59], lVar17 == 0)) goto LAB_1401d42a2;
  if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x4c) == *(int *)(*param_1 + 0x144))) {
    *(undefined4 *)(param_2 + 0x48) = 1;
    in_RAX = *param_1;
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(in_RAX + 0x144);
    goto LAB_1401d42a2;
  }
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 8) == 1) {
      uVar1 = *(ushort *)(lVar17 + 0x16);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x20);
      uVar2 = *(ushort *)(lVar17 + 0x14);
      fVar24 = *(float *)(param_2 + 0x58) * DAT_1404926c0;
      local_a0 = (uint)uVar2;
      uVar22 = *(uint *)(lVar4 + 0x24);
      uVar23 = *(uint *)(lVar4 + 0x20);
      local_9c = (uint)uVar1;
      lVar17 = thunk_FUN_14028af20((longlong)(int)(uVar22 * uVar23 * 4));
      plVar13 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x20);
      (**(code **)(*plVar13 + 0x40))(plVar13,lVar17,0);
      if (*(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88)) {
        *(longlong *)(param_2 + 0x88) = *(longlong *)(param_2 + 0x80);
      }
      uVar8 = 0;
      if (uVar23 != 0) {
        do {
          uVar21 = 0;
          if (uVar22 != 0) {
            do {
              uVar10 = (uVar21 * uVar23 + uVar8) * 4;
              if (0x7e < *(byte *)(lVar17 + 3 + (ulonglong)uVar10)) {
                local_c8 = *(undefined1 *)(lVar17 + (ulonglong)uVar10);
                puVar11 = *(undefined8 **)(param_2 + 0x88);
                uStack_c7 = *(undefined1 *)(lVar17 + 1 + (ulonglong)uVar10);
                uStack_c6 = *(undefined1 *)(lVar17 + 2 + (ulonglong)uVar10);
                uStack_c5 = 0xff;
                uStack_c4 = (undefined2)
                            (int)((*(float *)(param_2 + 0x58) * (float)uVar8 - (float)(uVar2 >> 1))
                                 + fVar24);
                uStack_c2 = (undefined2)
                            (int)((*(float *)(param_2 + 0x58) * (float)uVar21 - (float)(uVar1 >> 1))
                                 + fVar24);
                if (puVar11 == *(undefined8 **)(param_2 + 0x90)) {
                  FUN_14005ffa0(param_2 + 0x80,puVar11,&local_c8);
                }
                else {
                  *puVar11 = CONCAT26(uStack_c2,
                                      CONCAT24(uStack_c4,
                                               CONCAT13(0xff,CONCAT12(uStack_c6,
                                                                      CONCAT11(uStack_c7,local_c8)))
                                              ));
                  *(longlong *)(param_2 + 0x88) = *(longlong *)(param_2 + 0x88) + 8;
                }
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 < uVar22);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar23);
      }
      thunk_FUN_14028af80(lVar17);
      puVar11 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x38) + 0x80))();
      uVar14 = puVar11[1];
      *(undefined8 *)(param_2 + 0x98) = *puVar11;
      *(undefined8 *)(param_2 + 0xa0) = uVar14;
      uVar14 = puVar11[3];
      *(undefined8 *)(param_2 + 0xa8) = puVar11[2];
      *(undefined8 *)(param_2 + 0xb0) = uVar14;
      uVar14 = puVar11[5];
      *(undefined8 *)(param_2 + 0xb8) = puVar11[4];
      *(undefined8 *)(param_2 + 0xc0) = uVar14;
      uVar14 = puVar11[7];
      *(undefined8 *)(param_2 + 200) = puVar11[6];
      *(undefined8 *)(param_2 + 0xd0) = uVar14;
      FUN_1401d6d30(param_1,param_2);
      *(uint *)(param_2 + 0x5c) = local_a0;
      *(uint *)(param_2 + 0x60) = local_9c;
      *(undefined4 *)(param_2 + 8) = 2;
    }
    goto LAB_1401d424c;
  }
  uVar1 = *(ushort *)(lVar17 + 0x16);
  uVar22 = (uint)uVar1;
  uVar23 = (uint)*(ushort *)(lVar17 + 0x14);
  if ((0xf00 < *(ushort *)(lVar17 + 0x14)) || (uVar8 = uVar23, 0x870 < uVar1)) {
    fVar24 = (float)uVar23 / (float)uVar1;
    if (fVar24 < _DAT_140492760) {
      uVar22 = 0x870;
      uVar8 = (uint)(fVar24 * _DAT_140492950);
    }
    else {
      uVar8 = 0xf00;
      uVar22 = (uint)(DAT_140492958 / fVar24);
    }
  }
  local_d8 = 1;
  local_e0 = 2;
  local_e8 = 0x1b;
  iVar18 = (int)(((int)uVar8 >> 0x1f & 3U) + uVar8) >> 2;
  iVar9 = (int)(uVar22 + ((int)uVar22 >> 0x1f & 3U)) >> 2;
  iVar7 = 2;
  if (2 < iVar18) {
    iVar7 = iVar18;
  }
  iVar18 = 2;
  if (2 < iVar9) {
    iVar18 = iVar9;
  }
  local_f0 = 0;
  local_f8 = 0;
  *(float *)(param_2 + 0x58) = (float)uVar23 / (float)iVar7;
  plVar13 = *(longlong **)(*(longlong *)(*param_1 + 0x1700) + 0x1518);
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x70))(plVar13,iVar7,iVar18,1);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    local_d8 = 5;
    local_e0 = 0x10000002;
    local_e8 = 0x1b;
    local_f0 = 0;
    local_f8 = 0;
    plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x1700) + 0x1518);
    uVar14 = (**(code **)(*plVar3 + 0x70))(plVar3,iVar7,iVar18,1);
    *(undefined8 *)(param_2 + 0x50) = uVar14;
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar15 = 0x90;
  if (lVar4 == 0) {
    lVar15 = 0x88;
  }
  uVar12 = *(ulonglong *)(lVar15 + (longlong)param_1);
  puVar20 = auStack_118;
  if (uVar12 == 0) {
    FUN_140031950(local_98);
    acStack_b8[0] = s_WRITEALPHA_1404901a8[8];
    acStack_b8[1] = s_WRITEALPHA_1404901a8[9];
    local_b0 = 10;
    uStack_b5 = 0;
    uStack_b4 = 0;
    local_a8 = 0xf;
    local_c0 = SUB87(s_WRITEALPHA_1404901a8._0_8_,0);
    cStack_b9 = SUB81(s_WRITEALPHA_1404901a8._0_8_,7);
    cStack_b6 = '\0';
    puVar16 = (undefined4 *)FUN_14015a440(local_98,local_c0);
    *puVar16 = 1;
    if (local_a8 < 0x10) {
LAB_1401d3e99:
      puVar20 = auStack_118;
      if (lVar4 == 0) goto LAB_1401d3f4b;
      local_c0[0] = s_OPACITYMASK_1404901b8[0];
      local_c0[1] = s_OPACITYMASK_1404901b8[1];
      local_c0[2] = s_OPACITYMASK_1404901b8[2];
      local_c0[3] = s_OPACITYMASK_1404901b8[3];
      local_c0[4] = s_OPACITYMASK_1404901b8[4];
      local_c0[5] = s_OPACITYMASK_1404901b8[5];
      local_c0[6] = s_OPACITYMASK_1404901b8[6];
      cStack_b9 = (char)s_OPACITYMASK_1404901b8._7_4_;
      acStack_b8 = SUB42(s_OPACITYMASK_1404901b8._7_4_,1);
      cStack_b6 = SUB41(s_OPACITYMASK_1404901b8._7_4_,3);
      uStack_b4 = 0;
      local_b0 = 0xb;
      local_a8 = 0xf;
      uStack_b5 = 0;
      puVar16 = (undefined4 *)FUN_14015a440(local_98,local_c0);
      *puVar16 = 1;
      puVar20 = auStack_118;
      if (local_a8 < 0x10) goto LAB_1401d3f4b;
      lVar6 = CONCAT17(cStack_b9,local_c0);
      uVar12 = local_a8 + 1;
      lVar15 = lVar6;
      if (0xfff < uVar12) {
        lVar15 = *(longlong *)(lVar6 + -8);
        if (0x1f < (lVar6 - lVar15) - 8U) goto LAB_1401d3f44;
        uVar12 = local_a8 + 0x28;
      }
      thunk_FUN_14028af80(lVar15,uVar12);
      uVar12 = FUN_140150110(*param_1 + 0x1630,"materials/util/downsample_quarter.json",local_98,0);
      param_1[0x12] = uVar12;
    }
    else {
      lVar6 = CONCAT17(cStack_b9,local_c0);
      uVar12 = local_a8 + 1;
      lVar15 = lVar6;
      if (uVar12 < 0x1000) {
LAB_1401d3e94:
        thunk_FUN_14028af80(lVar15,uVar12);
        goto LAB_1401d3e99;
      }
      lVar15 = *(longlong *)(lVar6 + -8);
      if ((lVar6 - lVar15) - 8U < 0x20) {
        uVar12 = local_a8 + 0x28;
        goto LAB_1401d3e94;
      }
LAB_1401d3f44:
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar20 = auStack_110;
LAB_1401d3f4b:
      puVar19 = puVar20;
      uVar12 = *param_1;
      *(undefined8 *)(puVar19 + -8) = 0x1401d3f69;
      uVar12 = FUN_140150110(uVar12 + 0x1630,"materials/util/downsample_quarter.json",local_98,0);
      if (lVar4 == 0) {
        param_1[0x11] = uVar12;
      }
      else {
        param_1[0x12] = uVar12;
      }
    }
    *(undefined8 *)(puVar19 + -8) = 0x1401d3f8a;
    FUN_14000d9e0(local_80);
    *(undefined8 *)(puVar19 + -8) = 0x1401d3f93;
    FUN_140030c70(local_90);
    puVar20 = puVar19;
  }
  *(undefined8 *)(uVar12 + 0xd0) = *(undefined8 *)(lVar17 + 0x20);
  *(undefined8 *)(uVar12 + 0xd8) = *(undefined8 *)(param_2 + 0x40);
  lVar17 = plVar13[1];
  plVar3 = (longlong *)(lVar17 + 0x50);
  *plVar3 = *plVar3 + 8;
  **(undefined8 **)(lVar17 + 0x50) = plVar13;
  pcVar5 = *(code **)(*plVar13 + 0x48);
  *(undefined8 *)(puVar20 + -8) = 0x1401d3fc2;
  (*pcVar5)(plVar13);
  *(undefined8 *)(puVar20 + -8) = 0x1401d3fca;
  FUN_140155fc0(uVar12);
  plVar3 = *(longlong **)(*param_1 + 0x1518);
  pcVar5 = *(code **)(*plVar3 + 0xd8);
  *(undefined8 *)(puVar20 + -8) = 0x1401d3fe5;
  (*pcVar5)(plVar3,1);
  pcVar5 = *(code **)(**(longlong **)(*param_1 + 0x48) + 8);
  *(undefined8 *)(puVar20 + -8) = 0x1401d3ff3;
  (*pcVar5)();
  plVar3 = *(longlong **)(*param_1 + 0x1518);
  pcVar5 = *(code **)(*plVar3 + 0xd8);
  *(undefined8 *)(puVar20 + -8) = 0x1401d400c;
  (*pcVar5)(plVar3,1,0);
  *(undefined8 *)(puVar20 + -8) = 0x1401d4014;
  FUN_140157430(uVar12);
  *(longlong *)(plVar13[1] + 0x50) = *(longlong *)(plVar13[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar13[1] + 0x50) == (longlong *)0x0) {
    pcVar5 = *(code **)(*plVar13 + 0x50);
    *(undefined8 *)(puVar20 + -8) = 0x1401d403e;
    (*pcVar5)(plVar13);
  }
  else {
    pcVar5 = *(code **)(*(longlong *)**(longlong **)(plVar13[1] + 0x50) + 0x48);
    *(undefined8 *)(puVar20 + -8) = 0x1401d4033;
    (*pcVar5)();
  }
  plVar3 = *(longlong **)(param_2 + 0x50);
  pcVar5 = *(code **)(*plVar3 + 0x18);
  *(undefined8 *)(puVar20 + -8) = 0x1401d404b;
  (*pcVar5)(plVar3,plVar13);
  uVar12 = *param_1;
  *(undefined8 *)(puVar20 + -8) = 0x1401d405e;
  FUN_1401ab5f0(uVar12 + 0x16c0,plVar13);
  *(undefined4 *)(param_2 + 8) = 1;
LAB_1401d424c:
  *param_3 = param_2 + 0x80;
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x88) >> 8),
                  *(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88));
}

