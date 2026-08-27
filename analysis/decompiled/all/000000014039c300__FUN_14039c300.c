// Function: FUN_14039c300
// Addr: 14039c300
// Size: 1411 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14039c300(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  ulonglong local_198;
  ulonglong uStack_190;
  undefined1 *local_188;
  undefined *puStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  code *local_108;
  int local_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  int local_e0;
  undefined4 uStack_dc;
  int local_cc;
  undefined1 local_c8 [24];
  ulonglong *local_b0;
  
  uVar15 = *(int *)(param_1 + 0x14) * 0x10 + 0xc;
  puVar8 = (ulonglong *)FUN_1403e6c40(param_1,&local_178);
  local_178 = (undefined4)*puVar8;
  uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
  local_1b8 = *puVar8;
  uStack_170 = (undefined4)puVar8[1];
  uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_1b0 = puVar8[1];
  local_1a8 = (undefined4)puVar8[2];
  uStack_1a4 = *(undefined4 *)((longlong)puVar8 + 0x14);
  iStack_160 = (int)puVar8[3];
  uStack_15c = *(undefined4 *)((longlong)puVar8 + 0x1c);
  local_198 = puVar8[4];
  uStack_190 = puVar8[5];
  local_188 = &LAB_1403cfd20;
  puStack_180 = &DAT_14047054d;
  local_148 = 0x403cfd20;
  uStack_144 = 1;
  uStack_140 = 0x4047054d;
  uStack_13c = 1;
  local_168 = local_1a8;
  uStack_164 = uStack_1a4;
  local_158 = local_198;
  uStack_150 = uStack_190;
  iStack_1a0 = iStack_160;
  uStack_19c = uStack_15c;
  lVar9 = FUN_14039a9c0(&local_1b8,&local_138);
  puVar14 = *(undefined8 **)(lVar9 + 0x10);
  iVar16 = *(int *)(lVar9 + 0x18);
  while ((puVar11 = (undefined8 *)CONCAT44(uStack_164,local_168), puVar11 != puVar14 ||
         (iStack_160 != iVar16))) {
    if (iStack_160 == 0) {
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      _DAT_1404e4f30 = DAT_14045dd20;
      puVar11 = &DAT_1404e4f20;
    }
    plVar10 = (longlong *)(*(code *)CONCAT44(uStack_144,local_148))(puVar11);
    uVar15 = uVar15 + (*(int *)(*plVar10 + 0x18) - 1U | 3) + 1;
    FUN_140398d80(&local_178);
  }
  lVar9 = _malloc_base(uVar15);
  if (lVar9 == 0) {
    return (undefined8 *)0x0;
  }
  FUN_140395a70(&local_f8,lVar9);
  if ((local_cc == 0) && (*(char *)(param_1 + 0x10) == '\0')) {
    local_cc = 1;
  }
  puVar14 = (undefined8 *)0x0;
  iVar16 = 0;
  FUN_1402fc370("SERIALIZE",CONCAT44(uStack_f4,local_f8),0,1,0,1,"start [%p..%p] (%lu bytes)",
                CONCAT44(uStack_f4,local_f8),CONCAT44(uStack_dc,local_e0),local_e0 - local_f8);
  bVar19 = false;
  if (local_cc == iVar16) {
    puVar8 = (ulonglong *)FUN_1403a3490(local_c8);
    if (puVar8 == (ulonglong *)0x0) {
      if (local_cc == 0) {
        local_cc = 1;
      }
    }
    else {
      *puVar8 = local_f0;
      puVar8[1] = local_e8;
      puVar8[6] = (ulonglong)local_b0;
      local_b0 = puVar8;
    }
  }
  uVar6 = local_f0;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar13 = 0xb9b9c20 % (ulonglong)*(uint *)(param_1 + 0x20);
    uVar17 = *(uint *)(lVar3 + 4 + uVar13 * 0x18);
    puVar11 = puVar14;
    while ((uVar17 >> 1 & 1) != 0) {
      piVar1 = (int *)(lVar3 + uVar13 * 0x18);
      if (*piVar1 == 0x43464620) {
        if (((*(byte *)(piVar1 + 1) & 1) != 0) && (piVar1 != (int *)0x0)) goto LAB_14039c63b;
        break;
      }
      uVar17 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar17;
      uVar13 = (ulonglong)((int)uVar13 + uVar17 & *(uint *)(param_1 + 0x1c));
      uVar17 = *(uint *)(lVar3 + 4 + uVar13 * 0x18);
    }
    uVar13 = 0x2b822a92 % (ulonglong)*(uint *)(param_1 + 0x20);
    uVar17 = *(uint *)(lVar3 + 4 + uVar13 * 0x18);
    puVar11 = puVar14;
    while ((uVar17 >> 1 & 1) != 0) {
      piVar1 = (int *)(lVar3 + uVar13 * 0x18);
      if (*piVar1 == 0x43464632) {
        if (((*(byte *)(piVar1 + 1) & 1) != 0) && (piVar1 != (int *)0x0)) {
LAB_14039c63b:
          bVar19 = true;
        }
        break;
      }
      uVar17 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar17;
      uVar13 = (ulonglong)((int)uVar13 + uVar17 & *(uint *)(param_1 + 0x1c));
      uVar17 = *(uint *)(lVar3 + 4 + uVar13 * 0x18);
    }
  }
  uVar18 = 0x10000;
  if (bVar19) {
    uVar18 = 0x4f54544f;
  }
  local_1c8 = 0;
  local_1c0 = 0;
  puVar11 = (undefined8 *)FUN_1403e6c40(param_1,&local_178);
  local_138 = *puVar11;
  uStack_130 = puVar11[1];
  local_128 = puVar11[2];
  local_120 = *(int *)(puVar11 + 3);
  local_11c = *(undefined4 *)((longlong)puVar11 + 0x1c);
  uStack_118 = *(undefined4 *)(puVar11 + 4);
  uStack_114 = *(undefined4 *)((longlong)puVar11 + 0x24);
  uStack_110 = *(undefined4 *)(puVar11 + 5);
  local_10c = *(undefined4 *)((longlong)puVar11 + 0x2c);
  local_108 = FUN_1403cc010;
  while (local_120 != 0) {
    puVar11 = (undefined8 *)(*local_108)(local_128,&local_1b8);
    uVar4 = *puVar11;
    uVar5 = puVar11[1];
    uVar2 = puVar11[2];
    if ((int)local_1c8._4_4_ < (int)local_1c8) {
LAB_14039c647:
      puVar11 = (undefined8 *)(local_1c0 + (ulonglong)local_1c8._4_4_ * 0x18);
      local_1c8 = CONCAT44(local_1c8._4_4_ + 1,(int)local_1c8);
      *puVar11 = uVar4;
      puVar11[1] = uVar5;
      puVar11[2] = uVar2;
    }
    else {
      cVar7 = FUN_1403a4a30(&local_1c8,local_1c8._4_4_ + 1,0);
      if (cVar7 != '\0') {
        goto LAB_14039c647;
      }
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f2c = DAT_14045dd18._4_4_;
      _DAT_1404e4f30 = DAT_14045dd20;
    }
    FUN_140398d80(&local_138);
  }
  if (-1 < (int)local_1c8) {
    uVar12 = 0;
    if (local_1c8._4_4_ != 0) {
      FUN_1402ea670(local_1c0,local_1c8._4_4_,0x18,&LAB_1403b4b00);
      uVar12 = local_1c8._4_4_;
    }
    local_1b8 = local_1b8 & 0xffffffffffffff00;
    uStack_1b0 = local_1c0;
    uStack_1a4 = 0;
    iStack_1a0 = iStack_160;
    uStack_19c = uStack_15c;
    local_1a8 = uVar12;
    if ((local_cc == 0) && (uVar6 <= uVar6 + 4)) {
      uVar13 = (uVar6 - local_f0) + 4;
      if ((uVar13 < 0x80000000) && ((longlong)uVar13 <= (longlong)(local_e8 - local_f0))) {
        if ((int)uVar13 != 0) {
          FUN_1404217a0(local_f0,0,uVar13 & 0xffffffff);
        }
        uVar13 = local_f0 + uVar13;
        bVar19 = local_f0 != 0;
        local_f0 = uVar13;
        if ((bVar19) && (uVar6 != 0)) {
          local_178 = (undefined4)local_1b8;
          uStack_174 = local_1b8._4_4_;
          uStack_170 = (undefined4)uStack_1b0;
          uStack_16c = uStack_1b0._4_4_;
          local_168 = local_1a8;
          uStack_164 = uStack_1a4;
          iStack_160 = iStack_1a0;
          uStack_15c = uStack_19c;
          cVar7 = FUN_14038c9d0(uVar6,&local_f8,uVar18,&local_178);
          FUN_1403bf0c0(&local_f8);
          if (cVar7 != '\0') {
            if (((uVar15 == 0) || (0x7fffffff < uVar15)) ||
               (puVar14 = (undefined8 *)_calloc_base(1,0x30), puVar14 == (undefined8 *)0x0)) {
              thunk_FUN_1402d9040(lVar9);
              puVar14 = &DAT_14045dd10;
            }
            else {
              *(undefined2 *)((longlong)puVar14 + 5) = 0;
              *(undefined1 *)((longlong)puVar14 + 7) = 0;
              *(undefined4 *)puVar14 = 0;
              *(undefined1 *)((longlong)puVar14 + 4) = 0;
              puVar14[1] = 0;
              puVar14[2] = 0;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[5] = 0;
              *(undefined4 *)puVar14 = 1;
              *(undefined1 *)((longlong)puVar14 + 4) = 1;
              puVar14[1] = 0;
              puVar14[2] = lVar9;
              *(uint *)(puVar14 + 3) = uVar15;
              *(undefined4 *)((longlong)puVar14 + 0x1c) = 2;
              puVar14[4] = lVar9;
              puVar14[5] = &LAB_14035bf70;
            }
            goto LAB_14039c82f;
          }
          goto LAB_14039c824;
        }
      }
      else {
        local_cc = 4;
      }
    }
    FUN_1403bf0c0(&local_f8);
  }
LAB_14039c824:
  thunk_FUN_1402d9040(lVar9);
LAB_14039c82f:
  if (1 < (int)local_1c8 + 1U) {
    local_1c8 = local_1c8 & 0xffffffff;
    thunk_FUN_1402d9040(local_1c0);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_1403976a0(&local_f8);
  return puVar14;
}

