// Function: FUN_14035d200
// Addr: 14035d200
// Size: 2636 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14035d200(undefined8 param_1,uint *param_2,longlong param_3,undefined8 *param_4,int param_5)

{
  int *piVar1;
  undefined ***pppuVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint *puVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  uint *puVar33;
  bool bVar34;
  float fVar35;
  undefined1 auStack_228 [32];
  undefined ***local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined8 *local_1d8;
  uint local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  uint *local_1a0;
  longlong local_198;
  uint local_188;
  uint local_184;
  uint local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  uint *local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined ***local_100;
  longlong local_f8;
  undefined **local_e8;
  undefined **local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined4 *local_b8;
  undefined4 local_b0;
  int local_ac;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_228;
  uVar30 = 0;
  plVar17 = *(longlong **)(param_2 + 0x2e);
  local_168 = param_2;
  local_178 = param_4;
  local_f8 = param_3;
  uVar19 = local_108;
  while (plVar17 == (longlong *)0x0) {
    local_108._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    if (*(longlong *)(param_2 + 0x2a) == 0) {
      plVar17 = (longlong *)0x0;
      break;
    }
    local_108 = uVar19;
    plVar17 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar34 = *(longlong *)(param_2 + 0x2e) == 0;
    if (bVar34) {
      *(longlong **)(param_2 + 0x2e) = plVar17;
    }
    UNLOCK();
    if (bVar34) break;
    if (plVar17 != (longlong *)0x0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    uVar19 = local_108;
    plVar17 = *(longlong **)(param_2 + 0x2e);
  }
  lVar18 = FUN_1403ce860(&DAT_1404e51b8);
  if (lVar18 == 0) {
    return 0;
  }
  (**(code **)(**(longlong **)(lVar18 + 8) + 0xa8))(*(longlong **)(lVar18 + 8),&local_150);
  lVar18 = *(longlong *)(param_3 + 0x80);
  *(undefined2 *)(param_3 + 0x59) = 0;
  *(undefined4 *)(param_3 + 100) = 0;
  *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_3 + 0x70);
  pppuVar2 = (undefined ***)(lVar18 + (ulonglong)(*(uint *)(param_3 + 0x60) & 0x3fffffff) * 4);
  uVar22 = uVar30;
  if (*(uint *)(param_3 + 0x60) == 0) {
    local_108 = (ulonglong)local_108._4_4_ << 0x20;
    uVar30 = 0;
    puVar33 = param_2;
  }
  else {
    do {
      iVar16 = (int)uVar30;
      uVar31 = *(uint *)(*(longlong *)(param_3 + 0x70) + uVar22 * 0x14);
      *(int *)(*(longlong *)(param_3 + 0x70) + 0xc + uVar22 * 0x14) = iVar16;
      uVar24 = (ulonglong)(iVar16 + 1);
      uVar29 = uVar24;
      if (uVar31 < 0x10000) {
        *(ushort *)(lVar18 + uVar30 * 2) = (ushort)uVar31;
      }
      else if (uVar31 < 0x110000) {
        uVar29 = (ulonglong)(iVar16 + 2);
        *(short *)(lVar18 + uVar30 * 2) = (short)(uVar31 - 0x10000 >> 10) + -0x2800;
        *(ushort *)(lVar18 + uVar24 * 2) = ((ushort)uVar31 & 0x3ff) + 0xdc00;
      }
      else {
        *(undefined2 *)(lVar18 + uVar30 * 2) = 0xfffd;
      }
      uVar31 = (int)uVar22 + 1;
      uVar30 = uVar29;
      uVar22 = (ulonglong)uVar31;
    } while (uVar31 < *(uint *)(param_3 + 0x60));
    local_108 = (ulonglong)(uint)((int)uVar29 * 2);
    uVar22 = 0;
    uVar30 = uVar22;
    uVar29 = uVar22;
    puVar33 = local_168;
    if (*(uint *)(param_3 + 0x60) != 0) {
      do {
        iVar16 = *(int *)(*(longlong *)(param_3 + 0x70) + uVar29 * 0x14);
        uVar5 = *(undefined2 *)(*(longlong *)(param_3 + 0x70) + 8 + uVar29 * 0x14);
        uVar30 = (ulonglong)((int)uVar22 + 1);
        *(undefined2 *)((longlong)pppuVar2 + uVar22 * 2) = uVar5;
        if (iVar16 - 0x10000U < 0x100000) {
          *(undefined2 *)((longlong)pppuVar2 + uVar30 * 2) = uVar5;
          uVar30 = (ulonglong)((int)uVar22 + 2);
        }
        uVar31 = (int)uVar29 + 1;
        uVar22 = uVar30;
        uVar29 = (ulonglong)uVar31;
      } while (uVar31 < *(uint *)(param_3 + 0x60));
    }
  }
  uVar19 = 0;
  local_208 = &local_e0;
  local_e8 = TextAnalysis::vftable;
  iVar26 = (int)uVar30;
  local_e0 = TextAnalysis::vftable;
  local_c0 = (uint)(*(int *)(param_3 + 0x38) != 0);
  local_98 = local_c0 == 1;
  local_b8 = &local_b0;
  local_c8 = 0;
  local_d8 = 1;
  local_b0 = 0;
  local_90 = 0;
  local_100 = pppuVar2;
  local_d4 = iVar26;
  local_d0 = lVar18;
  local_ac = iVar26;
  iVar16 = (**(code **)(*local_150 + 0x18))(local_150,&local_e8,0);
  if (iVar16 < 0) goto LAB_14035dbe2;
  local_184 = *(uint *)(param_3 + 0x38) & 0xfffffffd;
  uVar31 = ((uint)(iVar26 * 3) >> 1) + 0x10;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1402c9654(&local_88,*(longlong *)(param_3 + 0x40),0x14);
  }
  local_160 = 0;
  local_158 = 0;
  local_138 = 0;
  local_130 = (undefined8 *)0x0;
  local_118 = 0;
  local_110 = 0;
  local_128 = 0;
  local_120 = 0;
  if ((param_5 != 0) && (cVar15 = FUN_1403d3ee0(local_178,param_5,&local_118), cVar15 != '\0')) {
    local_1f8 = &local_138;
    local_200 = &local_160;
    local_208 = pppuVar2;
    FUN_1403d3cc0(&local_118,&local_128,0);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar30;
  uVar19 = SUB168(ZEXT816(2) * auVar6,0);
  if (SUB168(ZEXT816(2) * auVar6,8) != 0) {
    uVar19 = 0xffffffffffffffff;
  }
  local_148 = (undefined8 *)thunk_FUN_14028af20(uVar19);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar30;
  uVar19 = SUB168(ZEXT816(2) * auVar7,0);
  if (SUB168(ZEXT816(2) * auVar7,8) != 0) {
    uVar19 = 0xffffffffffffffff;
  }
  local_140 = thunk_FUN_14028af20(uVar19);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = CONCAT44(0,uVar31);
  uVar19 = SUB168(ZEXT816(2) * auVar8,0);
  if (SUB168(ZEXT816(2) * auVar8,8) != 0) {
    uVar19 = 0xffffffffffffffff;
  }
  local_170 = (undefined8 *)thunk_FUN_14028af20(uVar19);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = CONCAT44(0,uVar31);
  uVar19 = SUB168(ZEXT816(2) * auVar9,0);
  if (SUB168(ZEXT816(2) * auVar9,8) != 0) {
    uVar19 = 0xffffffffffffffff;
  }
  local_1a8 = (undefined8 *)thunk_FUN_14028af20(uVar19);
  puVar25 = local_170;
  local_1a0 = &local_188;
  local_1b0 = local_170;
  local_1b8 = local_140;
  local_1c0 = local_148;
  local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,uVar31);
  local_1d0 = local_160._4_4_;
  local_1d8 = local_130;
  local_1e0 = local_158;
  local_1f0 = &local_88;
  local_1e8 = (longlong *)0x0;
  local_1f8 = &local_a0;
  local_180 = (uint)(local_184 == 5);
  local_200 = (undefined8 *)CONCAT44(local_200._4_4_,local_180);
  local_208 = (undefined ***)((ulonglong)local_208 & 0xffffffff00000000);
  local_178 = local_1a8;
  iVar16 = (**(code **)(*local_150 + 0x38))(local_150,lVar18,uVar30,plVar17);
  uVar28 = local_180;
  if (iVar16 == -0x7ff8ff86) {
    uVar32 = local_160._4_4_;
    do {
      thunk_FUN_14028af80(puVar25);
      thunk_FUN_14028af80(local_178);
      uVar31 = uVar31 * 2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = CONCAT44(0,uVar31);
      uVar19 = SUB168(ZEXT816(2) * auVar10,0);
      if (SUB168(ZEXT816(2) * auVar10,8) != 0) {
        uVar19 = 0xffffffffffffffff;
      }
      local_170 = (undefined8 *)thunk_FUN_14028af20(uVar19);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = CONCAT44(0,uVar31);
      uVar19 = SUB168(ZEXT816(2) * auVar11,0);
      if (SUB168(ZEXT816(2) * auVar11,8) != 0) {
        uVar19 = 0xffffffffffffffff;
      }
      local_1a8 = (undefined8 *)thunk_FUN_14028af20(uVar19);
      puVar25 = local_170;
      local_1a0 = &local_188;
      local_1b0 = local_170;
      local_1b8 = local_140;
      local_1c0 = local_148;
      local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,uVar31);
      local_1d0 = uVar32;
      local_1d8 = local_130;
      local_1e0 = local_158;
      local_1f0 = &local_88;
      local_1e8 = (longlong *)0x0;
      local_1f8 = &local_a0;
      local_200 = (undefined8 *)CONCAT44(local_200._4_4_,uVar28);
      local_208 = (undefined ***)((ulonglong)local_208 & 0xffffffff00000000);
      local_178 = local_1a8;
      iVar16 = (**(code **)(*local_150 + 0x38))(local_150,lVar18,uVar30,plVar17);
      param_3 = local_f8;
      puVar33 = local_168;
    } while (iVar16 == -0x7ff8ff86);
  }
  if (iVar16 < 0) {
LAB_14035db84:
    uVar19 = 0;
  }
  else {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = CONCAT44(0,uVar31);
    uVar19 = SUB168(ZEXT816(4) * auVar12,0);
    if (SUB168(ZEXT816(4) * auVar12,8) != 0) {
      uVar19 = 0xffffffffffffffff;
    }
    local_168 = (uint *)thunk_FUN_14028af20(uVar19);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = CONCAT44(0,uVar31);
    uVar19 = SUB168(ZEXT816(8) * auVar13,0);
    if (SUB168(ZEXT816(8) * auVar13,8) != 0) {
      uVar19 = 0xffffffffffffffff;
    }
    lVar20 = thunk_FUN_14028af20(uVar19);
    lVar23 = *(longlong *)(puVar33 + 8);
    uVar31 = *(uint *)(lVar23 + 0x14);
    if (uVar31 == 0) {
      lVar21 = FUN_1403c5340(lVar23 + 0x78);
      uVar28 = (uint)*(byte *)(lVar21 + 0x13) + (uint)*(byte *)(lVar21 + 0x12) * 0x100;
      uVar31 = 1000;
      if (uVar28 - 0x10 < 0x3ff1) {
        uVar31 = uVar28;
      }
      *(uint *)(lVar23 + 0x14) = uVar31;
    }
    puVar27 = local_148;
    puVar14 = local_168;
    puVar25 = local_170;
    fVar3 = (float)puVar33[0x14];
    fVar4 = (float)puVar33[0x15];
    local_1a0 = local_168;
    local_1a8 = (undefined8 *)CONCAT44(local_1a8._4_4_,local_160._4_4_);
    local_1b0 = local_130;
    local_1b8 = local_158;
    local_1c0 = &local_88;
    local_1c8 = &local_a0;
    local_1d0 = local_180;
    local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffff00000000);
    local_1e0 = CONCAT44(local_1e0._4_4_,(float)uVar31);
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,local_188);
    local_1f8 = local_178;
    local_200 = local_170;
    local_208 = (undefined ***)CONCAT44(local_208._4_4_,iVar26);
    local_1e8 = plVar17;
    local_198 = lVar20;
    iVar16 = (**(code **)(*local_150 + 0x40))(local_150,lVar18,local_148);
    pppuVar2 = local_100;
    if (iVar16 < 0) goto LAB_14035db84;
    uVar31 = (int)local_108 + 3U >> 2;
    uVar30 = 0;
    if (local_188 != 0) {
      do {
        *(undefined4 *)((longlong)local_100 + uVar30 * 4 + (ulonglong)uVar31 * 4) = 0xffffffff;
        uVar28 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar28;
      } while (uVar28 < local_188);
    }
    uVar30 = 0;
    if (*(int *)(param_3 + 0x60) != 0) {
      do {
        uVar28 = *(uint *)(*(longlong *)(param_3 + 0x70) + 8 + uVar30 * 0x14);
        uVar22 = (ulonglong)
                 *(ushort *)
                  ((longlong)local_100 +
                  (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x70) + 0xc + uVar30 * 0x14) * 2);
        if (*(uint *)((longlong)local_100 + uVar22 * 4 + (ulonglong)uVar31 * 4) <= uVar28) {
          uVar28 = *(uint *)((longlong)local_100 + uVar22 * 4 + (ulonglong)uVar31 * 4);
        }
        uVar32 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar32;
        *(uint *)((longlong)local_100 + uVar22 * 4 + (ulonglong)uVar31 * 4) = uVar28;
      } while (uVar32 < *(uint *)(param_3 + 0x60));
    }
    uVar30 = 1;
    if (1 < local_188) {
      do {
        if (*(int *)((longlong)local_100 + uVar30 * 4 + (ulonglong)uVar31 * 4) == -1) {
          *(undefined4 *)((longlong)local_100 + uVar30 * 4 + (ulonglong)uVar31 * 4) =
               *(undefined4 *)
                ((longlong)local_100 + (ulonglong)((int)uVar30 - 1) * 4 + (ulonglong)uVar31 * 4);
        }
        uVar28 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar28;
      } while (uVar28 < local_188);
    }
    cVar15 = FUN_1403bf1a0(param_3);
    if (cVar15 == '\0') goto LAB_14035db84;
    uVar30 = 0;
    *(undefined4 *)(param_3 + 0x60) = 0;
    if (local_188 != 0) {
      do {
        uVar22 = (ulonglong)*(uint *)(param_3 + 0x60);
        lVar23 = *(longlong *)(param_3 + 0x70);
        *(uint *)(param_3 + 0x60) = *(uint *)(param_3 + 0x60) + 1;
        *(uint *)(lVar23 + uVar22 * 0x14) = (uint)*(ushort *)((longlong)puVar25 + uVar30 * 2);
        *(undefined4 *)(lVar23 + 8 + uVar22 * 0x14) =
             *(undefined4 *)((longlong)pppuVar2 + uVar30 * 4 + (ulonglong)uVar31 * 4);
        *(int *)(lVar23 + 4 + uVar22 * 0x14) = (int)(longlong)(float)puVar14[uVar30];
        *(int *)(lVar23 + 0xc + uVar22 * 0x14) = (int)*(float *)(lVar20 + uVar30 * 8);
        lVar18 = uVar30 * 8;
        uVar28 = (int)uVar30 + 1;
        uVar30 = (ulonglong)uVar28;
        *(int *)(lVar23 + 0x10 + uVar22 * 0x14) = (int)*(float *)(lVar20 + 4 + lVar18);
      } while (uVar28 < local_188);
    }
    *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_3 + 0x70);
    *(undefined2 *)(param_3 + 0x59) = 0x100;
    *(undefined4 *)(param_3 + 100) = 0;
    if ((*(int *)(param_3 + 0x60) * 5 & 0x3fffffffU) != 0) {
      FUN_1404217a0(*(undefined8 *)(param_3 + 0x80),0,*(int *)(param_3 + 0x60) * 0x14);
    }
    uVar31 = local_184;
    uVar30 = 0;
    if (local_188 != 0) {
      do {
        lVar18 = *(longlong *)(param_3 + 0x70);
        lVar23 = *(longlong *)(param_3 + 0x80);
        fVar35 = (float)FUN_1402edef0((float)*(int *)(lVar18 + 4 + uVar30 * 0x14) * fVar3);
        *(int *)(lVar23 + uVar30 * 0x14) = (int)fVar35;
        iVar16 = -*(int *)(lVar18 + 0xc + uVar30 * 0x14);
        if (uVar31 != 5) {
          iVar16 = *(int *)(lVar18 + 0xc + uVar30 * 0x14);
        }
        fVar35 = (float)FUN_1402edef0((float)iVar16 * fVar3);
        *(int *)(lVar23 + 8 + uVar30 * 0x14) = (int)fVar35;
        fVar35 = (float)FUN_1402edef0((float)*(int *)(lVar18 + 0x10 + uVar30 * 0x14) * fVar4);
        uVar28 = (int)uVar30 + 1;
        *(int *)(lVar23 + 0xc + uVar30 * 0x14) = (int)fVar35;
        puVar27 = local_148;
        uVar30 = (ulonglong)uVar28;
      } while (uVar28 < local_188);
    }
    if (local_184 == 5) {
      FUN_1403f8e70(param_3);
    }
    uVar30 = 0;
    uVar31 = 0;
    if (*(int *)(param_3 + 0x60) != 0) {
      do {
        uVar28 = (int)uVar30 + 1;
        puVar33 = (uint *)(*(longlong *)(param_3 + 0x70) + 4 + uVar30 * 0x14);
        *puVar33 = *puVar33 & 0xfffffff8;
        uVar31 = *(uint *)(param_3 + 0x60);
        uVar30 = (ulonglong)uVar28;
      } while (uVar28 < uVar31);
    }
    if (uVar31 == 0xffffffff) {
      uVar31 = 0xffffffff;
    }
    uVar30 = (ulonglong)uVar31;
    if (1 < uVar31) {
      lVar18 = *(longlong *)(param_3 + 0x70);
      local_208 = (undefined ***)CONCAT44(local_208._4_4_,0xffffffff);
      iVar16 = FUN_1403a1a20(param_3,lVar18,0,uVar30);
      piVar1 = (int *)(param_3 + 0xe0);
      *piVar1 = *piVar1 - uVar31;
      if (*piVar1 < 0) {
        *(undefined1 *)(param_3 + 0x58) = 0;
      }
      if (*(int *)(param_3 + 0x1c) == 2) {
LAB_14035db27:
        uVar28 = 0;
        lVar23 = 0;
        do {
          if (iVar16 != *(int *)(lVar18 + 8 + lVar23 * 0x14)) {
            puVar33 = (uint *)(lVar18 + 4 + lVar23 * 0x14);
            *puVar33 = *puVar33 | 3;
          }
          uVar28 = uVar28 + 1;
          lVar23 = lVar23 + 1;
        } while (uVar28 < uVar31);
      }
      else {
        iVar26 = *(int *)(lVar18 + 8);
        if (iVar16 == iVar26) {
          do {
            uVar31 = (int)uVar30 - 1;
            uVar30 = (ulonglong)uVar31;
            if (*(int *)(lVar18 + 8 + uVar30 * 0x14) == iVar26) break;
            puVar33 = (uint *)(lVar18 + 4 + uVar30 * 0x14);
            *puVar33 = *puVar33 | 3;
          } while (uVar31 != 0);
        }
        else {
          iVar26 = *(int *)(lVar18 + 8 + (ulonglong)(uVar31 - 1) * 0x14);
          if (iVar16 != iVar26) goto LAB_14035db27;
          uVar30 = 0;
          do {
            if (*(int *)(lVar18 + 8 + uVar30 * 0x14) == iVar26) break;
            puVar33 = (uint *)(lVar18 + 4 + uVar30 * 0x14);
            *puVar33 = *puVar33 | 3;
            uVar28 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar28;
          } while (uVar28 < uVar31);
        }
      }
    }
    thunk_FUN_14028af80(puVar27);
    thunk_FUN_14028af80(local_170);
    thunk_FUN_14028af80(local_140);
    thunk_FUN_14028af80(local_178);
    thunk_FUN_14028af80(local_168);
    thunk_FUN_14028af80(lVar20);
    uVar19 = 1;
  }
  if (1 < (int)local_128 + 1U) {
    thunk_FUN_1402d9040(local_120);
  }
  if (1 < (int)local_118 + 1U) {
    thunk_FUN_1402d9040(local_110);
  }
  if (1 < (int)local_138 + 1U) {
    thunk_FUN_1402d9040(local_130);
  }
  if (1 < (int)local_160 + 1U) {
    thunk_FUN_1402d9040(local_158);
  }
LAB_14035dbe2:
  local_e8 = TextAnalysis::vftable;
  local_e0 = TextAnalysis::vftable;
  lVar18 = local_90;
  while (lVar18 != 0) {
    lVar23 = *(longlong *)(lVar18 + 0x20);
    thunk_FUN_14028af80(lVar18,0x28);
    lVar18 = lVar23;
  }
  return uVar19;
}

