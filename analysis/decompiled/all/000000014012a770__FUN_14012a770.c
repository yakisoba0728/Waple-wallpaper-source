// Function: FUN_14012a770
// Addr: 14012a770
// Size: 979 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14012a770(undefined8 param_1,uint param_2,ulonglong param_3,longlong param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int local_res10 [2];
  int *piVar32;
  int *piVar34;
  ulonglong uVar35;
  ulonglong uVar37;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar38;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar39;
  int local_158 [2];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  longlong local_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  longlong local_120;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [80];
  undefined4 uVar33;
  undefined4 uVar36;
  
  uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  uVar39 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  if (0x14 < param_2) {
    if (param_2 != 0x46) {
      if (param_2 != 0x82) {
        if (param_2 != 0x113) goto LAB_14012ac24;
        if (param_3 == 100) {
          (*DAT_140426838)(param_1,100);
          lVar14 = (*DAT_140426948)(param_1,0xffffffeb);
          iVar25 = (*DAT_140426af0)(*(undefined8 *)(lVar14 + 0x158));
          if (iVar25 != 0) {
            (*DAT_140426838)(*(undefined8 *)(lVar14 + 0x158),100);
          }
          func_0x00014028b040(*(undefined8 *)(lVar14 + 0x178));
          *(undefined8 *)(lVar14 + 0x178) = 0;
        }
      }
      return 0;
    }
    lVar14 = (*DAT_140426948)(param_1,0xffffffeb);
    if (((lVar14 != 0) && (param_4 != 0)) && (((byte)*(undefined4 *)(param_4 + 0x20) & 3) != 3)) {
      FUN_1400fdd90(lVar14,&local_150);
      if ((0 < local_148 - local_150) && (0 < local_144 - local_14c)) {
        *(int *)(param_4 + 0x1c) = local_144 - local_14c;
        *(int *)(param_4 + 0x18) = local_148 - local_150;
        *(int *)(param_4 + 0x10) = local_150;
        *(int *)(param_4 + 0x14) = local_14c;
        return 0;
      }
    }
LAB_14012ac24:
    uVar16 = (*DAT_140426810)(param_1,param_2,param_3,param_4);
    return uVar16;
  }
  if (param_2 == 0x14) {
    return 1;
  }
  if (param_2 == 2) {
    return 0;
  }
  if (param_2 == 5) {
    if ((param_3 & 0xfffffffffffffffd) == 0) {
      (*DAT_140426b00)(param_1,0,0);
    }
    goto LAB_14012ac24;
  }
  if (param_2 != 0xf) goto LAB_14012ac24;
  lVar14 = (*DAT_140426948)(param_1,0xffffffeb);
  if (lVar14 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar14 + 0x98) == 0) {
    return 0;
  }
  fVar27 = (float)FUN_1400605a0(lVar14 + 400);
  uVar24 = 0;
  if (DAT_140492790 <= fVar27) {
    *(undefined4 *)(lVar14 + 0x188) = 0;
  }
  else {
    iVar26 = *(int *)(lVar14 + 0x188);
    iVar25 = iVar26 + 1;
    *(int *)(lVar14 + 0x188) = iVar25;
    if ((0x31 < iVar25) && (iVar26 == 0x31)) {
      FUN_140098830("Image repaint issue detected.\n");
    }
  }
  lVar17 = *(longlong *)(lVar14 + 0x178);
  local_120 = lVar17;
  if (lVar17 == 0) {
    plVar21 = (longlong *)(lVar14 + 0x100);
    plVar4 = *(longlong **)(lVar14 + 0x98);
    plVar20 = plVar21;
    if (0xf < *(ulonglong *)(lVar14 + 0x118)) {
      plVar20 = (longlong *)*plVar21;
    }
    cVar11 = (**(code **)(*plVar4 + 0x60))(plVar4,plVar20,&local_140,local_res10,local_158);
    auVar10 = _DAT_140493180;
    uVar9 = _UNK_140492dbc;
    uVar8 = _UNK_140492db8;
    uVar19 = _UNK_140492db4;
    uVar23 = _DAT_140492db0;
    if (cVar11 == '\0') {
      if (0xf < *(ulonglong *)(lVar14 + 0x118)) {
        plVar21 = (longlong *)*plVar21;
      }
      FUN_140098830("Failed loading image: %s\n",plVar21);
      goto LAB_14012abf2;
    }
    uVar18 = local_158[0] * local_res10[0];
    uVar22 = uVar24;
    if ((uVar18 & 0x3ffffffc) != 0) {
      do {
        uVar12 = uVar22 * 4;
        uVar22 = uVar22 + 4;
        puVar1 = (uint *)(local_140 + (ulonglong)uVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar28 = *puVar1 & uVar23;
        uVar29 = uVar5 & uVar19;
        uVar30 = uVar6 & uVar8;
        uVar31 = uVar7 & uVar9;
        puVar2 = (uint *)(local_140 + (ulonglong)uVar12);
        *puVar2 = uVar28 << 0x10 | uVar28 >> 0x10 | *puVar1 & auVar10._0_4_;
        puVar2[1] = uVar29 << 0x10 | uVar29 >> 0x10 | uVar5 & auVar10._4_4_;
        puVar2[2] = uVar30 << 0x10 | uVar30 >> 0x10 | uVar6 & auVar10._8_4_;
        puVar2[3] = uVar31 << 0x10 | uVar31 >> 0x10 | uVar7 & auVar10._12_4_;
      } while (uVar22 < (uVar18 & 0x3ffffffc));
    }
    for (; uVar22 < (uVar18 & 0x3fffffff); uVar22 = uVar22 + 1) {
      uVar23 = uVar22 * 4;
      uVar3 = *(undefined1 *)(local_140 + (ulonglong)uVar23);
      *(undefined1 *)(local_140 + (ulonglong)uVar23) =
           *(undefined1 *)(local_140 + 2 + (ulonglong)uVar23);
      *(undefined1 *)(local_140 + 2 + (ulonglong)uVar23) = uVar3;
    }
    lVar17 = FUN_14028b190((longlong)(int)(uVar18 * 4));
    local_120 = lVar17;
    if (local_158[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar17,(ulonglong)(uint)((local_158[0] + -1) * local_res10[0] * 4) + local_140,
                    local_res10[0] * 4);
    }
    *(undefined4 *)(lVar14 + 0x184) = 0;
    *(int *)(lVar14 + 0x180) = local_res10[0];
    *(longlong *)(lVar14 + 0x178) = lVar17;
    (**(code **)(*plVar4 + 0x68))(plVar4,local_140);
  }
  else {
    local_res10[0] = *(int *)(lVar14 + 0x180);
    local_158[0] = *(int *)(lVar14 + 0x184);
  }
  if (lVar17 != 0) {
    FUN_1400fdd90(lVar14,&local_138);
    iVar26 = local_130 - local_138;
    iVar25 = local_12c - local_134;
    local_128 = local_res10[0];
    local_124 = local_158[0];
    piVar34 = &local_118;
    piVar32 = &local_150;
    local_138 = iVar26;
    local_134 = iVar25;
    FUN_140108cf0(&local_138,&local_128,*(undefined4 *)(lVar14 + 0x160),lVar14 + 0x164,piVar32,
                  piVar34);
    uVar33 = (undefined4)((ulonglong)piVar32 >> 0x20);
    uVar36 = (undefined4)((ulonglong)piVar34 >> 0x20);
    uVar15 = FUN_14028b190((longlong)(iVar25 * iVar26 * 4));
    if (((*(uint *)(lVar14 + 0x160) & 0xfffffffd) != 0) && (uVar23 = uVar24, 0 < iVar25)) {
      do {
        if (0 < iVar26) {
          uVar19 = uVar24;
          do {
            iVar13 = uVar23 * iVar26 + uVar19;
            uVar19 = uVar19 + 1;
            lVar17 = (longlong)(iVar13 * 4);
            *(undefined1 *)(uVar15 + lVar17) = *(undefined1 *)(lVar14 + 0x174);
            *(undefined1 *)(uVar15 + 1 + lVar17) = *(undefined1 *)(lVar14 + 0x175);
            *(undefined1 *)(uVar15 + 2 + lVar17) = *(undefined1 *)(lVar14 + 0x176);
            *(undefined1 *)(uVar15 + 3 + lVar17) = 0xff;
          } while ((int)uVar19 < iVar26);
        }
        uVar23 = uVar23 + 1;
      } while ((int)uVar23 < iVar25);
    }
    uVar35 = CONCAT44(uVar36,local_res10[0]);
    uVar16 = CONCAT44(uVar33,local_144 - local_14c);
    uVar37 = uVar15;
    func_0x000140109250(local_120,local_150,local_14c,local_148 - local_150,uVar16,uVar35,uVar15,
                        local_118,local_114,CONCAT44(uVar38,local_110 - local_118),
                        CONCAT44(uVar39,local_10c - local_114),iVar26);
    uVar38 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar16 = (*DAT_140426960)(param_1,auStack_d8);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0x28;
    uStack_fc = 0x200001;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    iStack_104 = iVar26;
    iStack_100 = iVar25;
    (*_UNK_140426150)(uVar16,0,0,iVar26,CONCAT44(uVar38,iVar25),uVar35 & 0xffffffff00000000,
                      uVar37 & 0xffffffff00000000,iVar26,iVar25,uVar15,&uStack_108,0,0xcc0020);
    (*DAT_140426958)(param_1,auStack_d8);
    func_0x00014028b040(uVar15);
    (*DAT_140426838)(param_1,100);
    (*DAT_140426818)(param_1,100,5000,0);
    *(undefined1 *)(lVar14 + 0x1a0) = 1;
    return 0;
  }
LAB_14012abf2:
  (*DAT_140426960)(param_1,local_88);
  (*DAT_140426958)(param_1,local_88);
  return 0;
}

