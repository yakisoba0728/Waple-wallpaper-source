// Function: FUN_1401d3bb0
// Addr: 1401d3bb0
// Size: 1263 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401d3bb0(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong in_RAX;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
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
  undefined1 local_98 [24];
  undefined1 local_80 [64];
  
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar12 = (longlong *)
              (**(code **)(**(longlong **)(*param_1 + 0x1510) + 8))
                        (*(longlong **)(*param_1 + 0x1510),*(undefined8 *)(param_2 + 0x10));
    in_RAX = 0;
    if ((plVar12 != (longlong *)0x0) &&
       ((iVar6 = (**(code **)(*plVar12 + 0x60))(plVar12), iVar6 == 1 ||
        (in_RAX = (**(code **)(*plVar12 + 0x60))(plVar12), (int)in_RAX == 4)))) {
      in_RAX = FUN_1401d77a0(param_1,plVar12);
      *(longlong **)(param_2 + 0x38) = plVar12;
    }
  }
  else if (*(int *)(param_2 + 8) == 2) {
    lVar16 = **(longlong **)(param_2 + 0x38);
    *param_3 = param_2 + 0x80;
    puVar10 = (undefined8 *)(**(code **)(lVar16 + 0x80))();
    uVar13 = puVar10[1];
    *(undefined8 *)(param_2 + 0x98) = *puVar10;
    *(undefined8 *)(param_2 + 0xa0) = uVar13;
    uVar13 = puVar10[3];
    *(undefined8 *)(param_2 + 0xa8) = puVar10[2];
    *(undefined8 *)(param_2 + 0xb0) = uVar13;
    uVar13 = puVar10[5];
    *(undefined8 *)(param_2 + 0xb8) = puVar10[4];
    *(undefined8 *)(param_2 + 0xc0) = uVar13;
    uVar13 = puVar10[7];
    *(undefined8 *)(param_2 + 200) = puVar10[6];
    *(undefined8 *)(param_2 + 0xd0) = uVar13;
    lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x2c8);
    if (((uint)*(ushort *)(lVar16 + 0x14) != *(uint *)(param_2 + 0x5c)) ||
       ((uint)*(ushort *)(lVar16 + 0x16) != *(uint *)(param_2 + 0x60))) {
      func_0x0001401ab6c0(*param_1 + 0x16c0,*(undefined8 *)(param_2 + 0x50));
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
    }
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x88) >> 8),
                    *(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88));
  }
  plVar12 = *(longlong **)(param_2 + 0x38);
  if (plVar12 == (longlong *)0x0) {
LAB_1401d4372:
    return in_RAX & 0xffffffffffffff00;
  }
  uVar20 = *(uint *)((longlong)plVar12 + 0x304);
  if ((uVar20 >> 0xc & 1) == 0) {
    in_RAX = (ulonglong)(uVar20 | 0x1010);
    *(uint *)((longlong)plVar12 + 0x304) = uVar20 | 0x1010;
    if ((uVar20 & 0x10) == 0) {
      uVar11 = (**(code **)(*plVar12 + 0x110))(plVar12);
      return uVar11 & 0xffffffffffffff00;
    }
    goto LAB_1401d4372;
  }
  in_RAX = (**(code **)(*plVar12 + 0x68))(plVar12);
  if ((((char)in_RAX == '\0') && (in_RAX = FUN_1401850e0(plVar12), (char)in_RAX == '\0')) ||
     (lVar16 = plVar12[0x59], lVar16 == 0)) goto LAB_1401d4372;
  if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x4c) == *(int *)(*param_1 + 0x144))) {
    *(undefined4 *)(param_2 + 0x48) = 1;
    in_RAX = *param_1;
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(in_RAX + 0x144);
    goto LAB_1401d4372;
  }
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 8) == 1) {
      uVar1 = *(ushort *)(lVar16 + 0x16);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x20);
      uVar2 = *(ushort *)(lVar16 + 0x14);
      fVar22 = *(float *)(param_2 + 0x58) * DAT_140492790;
      local_a0 = (uint)uVar2;
      uVar20 = *(uint *)(lVar4 + 0x24);
      uVar21 = *(uint *)(lVar4 + 0x20);
      local_9c = (uint)uVar1;
      lVar16 = FUN_14028b190((longlong)(int)(uVar20 * uVar21 * 4));
      plVar12 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x20);
      (**(code **)(*plVar12 + 0x40))(plVar12,lVar16,0);
      if (*(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88)) {
        *(longlong *)(param_2 + 0x88) = *(longlong *)(param_2 + 0x80);
      }
      uVar7 = 0;
      if (uVar21 != 0) {
        do {
          uVar19 = 0;
          if (uVar20 != 0) {
            do {
              uVar9 = (uVar19 * uVar21 + uVar7) * 4;
              if (0x7e < *(byte *)(lVar16 + 3 + (ulonglong)uVar9)) {
                local_c8 = *(undefined1 *)(lVar16 + (ulonglong)uVar9);
                puVar10 = *(undefined8 **)(param_2 + 0x88);
                local_c7 = *(undefined1 *)(lVar16 + 1 + (ulonglong)uVar9);
                local_c6 = *(undefined1 *)(lVar16 + 2 + (ulonglong)uVar9);
                local_c5 = 0xff;
                uStack_c4 = (undefined2)
                            (int)((*(float *)(param_2 + 0x58) * (float)uVar7 - (float)(uVar2 >> 1))
                                 + fVar22);
                uStack_c2 = (undefined2)
                            (int)((*(float *)(param_2 + 0x58) * (float)uVar19 - (float)(uVar1 >> 1))
                                 + fVar22);
                if (puVar10 == *(undefined8 **)(param_2 + 0x90)) {
                  FUN_140060070(param_2 + 0x80,puVar10,&local_c8);
                }
                else {
                  *puVar10 = CONCAT26(uStack_c2,
                                      CONCAT24(uStack_c4,
                                               CONCAT13(0xff,CONCAT12(local_c6,CONCAT11(local_c7,
                                                  local_c8)))));
                  *(longlong *)(param_2 + 0x88) = *(longlong *)(param_2 + 0x88) + 8;
                }
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar20);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar21);
      }
      func_0x00014028b040(lVar16);
      puVar10 = (undefined8 *)(**(code **)(**(longlong **)(param_2 + 0x38) + 0x80))();
      uVar13 = puVar10[1];
      *(undefined8 *)(param_2 + 0x98) = *puVar10;
      *(undefined8 *)(param_2 + 0xa0) = uVar13;
      uVar13 = puVar10[3];
      *(undefined8 *)(param_2 + 0xa8) = puVar10[2];
      *(undefined8 *)(param_2 + 0xb0) = uVar13;
      uVar13 = puVar10[5];
      *(undefined8 *)(param_2 + 0xb8) = puVar10[4];
      *(undefined8 *)(param_2 + 0xc0) = uVar13;
      uVar13 = puVar10[7];
      *(undefined8 *)(param_2 + 200) = puVar10[6];
      *(undefined8 *)(param_2 + 0xd0) = uVar13;
      func_0x0001401d6e00(param_1,param_2);
      *(uint *)(param_2 + 0x5c) = local_a0;
      *(uint *)(param_2 + 0x60) = local_9c;
      *(undefined4 *)(param_2 + 8) = 2;
    }
UNWIND_INFO_1401d4277_UnwindCodes_80__UnwindOpCode:
    *param_3 = param_2 + 0x80;
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x88) >> 8),
                    *(longlong *)(param_2 + 0x80) != *(longlong *)(param_2 + 0x88));
  }
  uVar1 = *(ushort *)(lVar16 + 0x16);
  uVar20 = (uint)uVar1;
  uVar21 = (uint)*(ushort *)(lVar16 + 0x14);
  if ((0xf00 < *(ushort *)(lVar16 + 0x14)) || (uVar7 = uVar21, 0x870 < uVar1)) {
    fVar22 = (float)uVar21 / (float)uVar1;
    if (fVar22 < _DAT_140492830) {
      uVar20 = 0x870;
      uVar7 = (uint)(fVar22 * _DAT_140492a20);
    }
    else {
      uVar7 = 0xf00;
      uVar20 = (uint)(DAT_140492a28 / fVar22);
    }
  }
  local_d8 = 1;
  local_e0 = 2;
  local_e8 = 0x1b;
  iVar17 = (int)(((int)uVar7 >> 0x1f & 3U) + uVar7) >> 2;
  iVar8 = (int)(uVar20 + ((int)uVar20 >> 0x1f & 3U)) >> 2;
  iVar6 = 2;
  if (2 < iVar17) {
    iVar6 = iVar17;
  }
  iVar17 = 2;
  if (2 < iVar8) {
    iVar17 = iVar8;
  }
  local_f0 = 0;
  local_f8 = 0;
  *(float *)(param_2 + 0x58) = (float)uVar21 / (float)iVar6;
  plVar12 = *(longlong **)(*(longlong *)(*param_1 + 0x1700) + 0x1518);
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x70))(plVar12,iVar6,iVar17,1);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    local_d8 = 5;
    local_e0 = 0x10000002;
    local_e8 = 0x1b;
    local_f0 = 0;
    local_f8 = 0;
    plVar3 = *(longlong **)(*(longlong *)(*param_1 + 0x1700) + 0x1518);
    uVar13 = (**(code **)(*plVar3 + 0x70))(plVar3,iVar6,iVar17,1);
    *(undefined8 *)(param_2 + 0x50) = uVar13;
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar14 = 0x90;
  if (lVar4 == 0) {
    lVar14 = 0x88;
  }
  lVar14 = *(longlong *)(lVar14 + (longlong)param_1);
  if (lVar14 != 0) {
    *(undefined8 *)(lVar14 + 0xd0) = *(undefined8 *)(lVar16 + 0x20);
    *(undefined8 *)(lVar14 + 0xd8) = *(undefined8 *)(param_2 + 0x40);
    lVar16 = plVar12[1];
    plVar3 = (longlong *)(lVar16 + 0x50);
    *plVar3 = *plVar3 + 8;
    **(undefined8 **)(lVar16 + 0x50) = plVar12;
    (**(code **)(*plVar12 + 0x48))(plVar12);
    FUN_140156090(lVar14);
    (**(code **)(**(longlong **)(*param_1 + 0x1518) + 0xd8))(*(longlong **)(*param_1 + 0x1518),1);
    (**(code **)(**(longlong **)(*param_1 + 0x48) + 8))();
    (**(code **)(**(longlong **)(*param_1 + 0x1518) + 0xd8))(*(longlong **)(*param_1 + 0x1518),1,0);
    FUN_140157500(lVar14);
    *(longlong *)(plVar12[1] + 0x50) = *(longlong *)(plVar12[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar12[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x50))(plVar12);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar12[1] + 0x50) + 0x48))();
    }
    (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))(*(longlong **)(param_2 + 0x50),plVar12);
    func_0x0001401ab6c0(*param_1 + 0x16c0,plVar12);
    *(undefined4 *)(param_2 + 8) = 1;
    goto UNWIND_INFO_1401d4277_UnwindCodes_80__UnwindOpCode;
  }
  func_0x000140031a20(local_98);
  acStack_b8[0] = s_WRITEALPHA_140490278[8];
  acStack_b8[1] = s_WRITEALPHA_140490278[9];
  local_b0 = 10;
  uStack_b5 = 0;
  uStack_b4 = 0;
  local_a8 = 0xf;
  local_c0 = SUB87(s_WRITEALPHA_140490278._0_8_,0);
  cStack_b9 = SUB81(s_WRITEALPHA_140490278._0_8_,7);
  cStack_b6 = '\0';
  puVar15 = (undefined4 *)FUN_14015a510(local_98,local_c0);
  *puVar15 = 1;
  if (local_a8 < 0x10) {
    puVar18 = auStack_118;
    if (lVar4 == 0) goto LAB_1401d401b;
    local_c0[0] = s_OPACITYMASK_140490288[0];
    local_c0[1] = s_OPACITYMASK_140490288[1];
    local_c0[2] = s_OPACITYMASK_140490288[2];
    local_c0[3] = s_OPACITYMASK_140490288[3];
    local_c0[4] = s_OPACITYMASK_140490288[4];
    local_c0[5] = s_OPACITYMASK_140490288[5];
    local_c0[6] = s_OPACITYMASK_140490288[6];
    cStack_b9 = (char)s_OPACITYMASK_140490288._7_4_;
    acStack_b8 = SUB42(s_OPACITYMASK_140490288._7_4_,1);
    cStack_b6 = SUB41(s_OPACITYMASK_140490288._7_4_,3);
    uStack_b4 = 0;
    local_b0 = 0xb;
    local_a8 = 0xf;
    uStack_b5 = 0;
    puVar15 = (undefined4 *)FUN_14015a510(local_98,local_c0);
    *puVar15 = 1;
    puVar18 = auStack_118;
    if (local_a8 < 0x10) goto LAB_1401d401b;
    lVar14 = CONCAT17(cStack_b9,local_c0);
    uVar11 = local_a8 + 1;
    lVar16 = lVar14;
    if (uVar11 < 0x1000) {
LAB_1401d3fe5:
      uVar11 = func_0x00014028b040(lVar16,uVar11);
      return uVar11;
    }
    lVar16 = *(longlong *)(lVar14 + -8);
    if ((lVar14 - lVar16) - 8U < 0x20) {
      uVar11 = local_a8 + 0x28;
      goto LAB_1401d3fe5;
    }
  }
  else {
    lVar14 = CONCAT17(cStack_b9,local_c0);
    uVar11 = local_a8 + 1;
    lVar16 = lVar14;
    if (uVar11 < 0x1000) {
LAB_1401d3f64:
      uVar11 = func_0x00014028b040(lVar16,uVar11);
      return uVar11;
    }
    lVar16 = *(longlong *)(lVar14 + -8);
    if ((lVar14 - lVar16) - 8U < 0x20) {
      uVar11 = local_a8 + 0x28;
      goto LAB_1401d3f64;
    }
  }
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar18 = auStack_110;
LAB_1401d401b:
  uVar11 = *param_1;
  *(undefined8 *)(puVar18 + -8) = 0x1401d4039;
  uVar11 = FUN_1401501e0(uVar11 + 0x1630,"materials/util/downsample_quarter.json",local_98,0);
  if (lVar4 == 0) {
    param_1[0x11] = uVar11;
  }
  else {
    param_1[0x12] = uVar11;
  }
  *(undefined **)(puVar18 + -8) = &UNK_1401d405a;
  uVar11 = func_0x00014000dab0(local_80);
  return uVar11;
}

