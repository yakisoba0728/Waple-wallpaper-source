// Function: FUN_140311fa0
// Addr: 140311fa0
// Size: 3261 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140311fa0(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ushort uVar18;
  int iVar19;
  longlong lVar20;
  ushort uVar21;
  ulonglong uVar22;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  int *local_190;
  int local_188;
  char local_184;
  ushort local_180 [2];
  short local_17c [2];
  uint local_178;
  char local_174;
  uint local_170;
  int local_16c;
  uint local_168;
  ulonglong local_160;
  uint local_158;
  uint *local_150;
  longlong local_148;
  ulonglong *local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  ulonglong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_1b8;
  lVar7 = *param_1;
  iVar11 = 0;
  local_188 = 0;
  if (100 < param_3) {
    param_1[5] = *(longlong *)(lVar7 + 0xa0);
    return 0x15;
  }
  lVar17 = param_1[3];
  local_184 = '\0';
  if (*(ushort *)(lVar7 + 0x18e) < param_3) {
    *(short *)(lVar7 + 0x18e) = (short)param_3;
  }
  *(uint *)((longlong)param_1 + 0x24) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_16c = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    local_168 = *(uint *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  else {
    local_16c = 0x10000;
    local_168 = 0x10000;
  }
  puVar8 = *(undefined8 **)(*(longlong *)(lVar7 + 0xd0) + 0x50);
  local_174 = param_4;
  local_158 = param_3;
  if (puVar8 == (undefined8 *)0x0) {
    iVar11 = FUN_140306f00(lVar7,param_2,&local_178);
    *(uint *)(param_1 + 6) = local_178;
    local_160 = CONCAT44(local_160._4_4_,iVar11);
  }
  else {
    local_188 = (**(code **)*puVar8)(puVar8[1],param_2,&local_118);
    if (local_188 != 0) goto LAB_140312bfb;
    local_184 = '\x01';
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_160 = local_160 & 0xffffffff00000000;
    local_b8 = 0;
    uStack_b0 = 0;
    *(undefined4 *)(param_1 + 6) = local_110;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1402f5480(&local_d8,local_118);
    param_1[5] = (longlong)&local_d8;
  }
  if ((int)param_1[6] != 0) {
    if ((*(int *)(lVar7 + 0x3fc) == 0) && (*(longlong *)(*(longlong *)(lVar7 + 0xd0) + 0x50) == 0))
    {
      local_188 = 8;
      goto LAB_140312bfb;
    }
    local_188 = (**(code **)(lVar7 + 0x2a8))(param_1,param_2,*(int *)(lVar7 + 0x3fc) + iVar11);
    if (local_188 != 0) goto LAB_140312bfb;
    local_188 = (**(code **)(lVar7 + 0x2b8))(param_1);
    (**(code **)(lVar7 + 0x2b0))(param_1);
    if (local_188 != 0) goto LAB_140312bfb;
  }
  if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
    param_1[7] = 0;
    param_1[8] = 0;
  }
  local_140 = (ulonglong *)(param_1 + 5);
  uVar22 = *local_140;
  lVar15 = *param_1;
  local_17c[0] = 0;
  local_170 = local_170 & 0xffff0000;
  local_178 = local_178 & 0xffff0000;
  local_180[0] = 0;
  uVar10 = FUN_1402f54a0(uVar22);
  local_198 = &local_178;
  (**(code **)(*(longlong *)(lVar15 + 0x2d0) + 0x150))(lVar15,0,param_2,local_17c);
  if (*(char *)(lVar15 + 400) == '\0') {
    if (*(short *)(lVar15 + 0x208) == -1) {
      local_170 = CONCAT22(local_170._2_2_,
                           *(short *)(lVar15 + 0x13c) - *(short *)((longlong)param_1 + 0x44));
      sVar3 = *(short *)(lVar15 + 0x13e);
      sVar4 = *(short *)(lVar15 + 0x13c);
      if ((int)sVar4 - (int)sVar3 < 0) {
        local_180[0] = sVar3 - sVar4;
      }
      else {
        local_180[0] = sVar4 - sVar3;
      }
    }
    else {
      local_170 = CONCAT22(local_170._2_2_,
                           *(short *)(lVar15 + 0x24e) - *(short *)((longlong)param_1 + 0x44));
      sVar3 = *(short *)(lVar15 + 0x24e);
      sVar4 = *(short *)(lVar15 + 0x250);
      local_180[0] = sVar4 - sVar3;
      if (-1 < (int)sVar3 - (int)sVar4) {
        local_180[0] = sVar3 - sVar4;
      }
    }
  }
  else {
    local_198 = (uint *)local_180;
    (**(code **)(*(longlong *)(lVar15 + 0x2d0) + 0x150))(lVar15,1,param_2,&local_170);
  }
  local_188 = FUN_1402f5c50(uVar22,uVar10);
  if (local_188 != 0) goto LAB_140312bfb;
  local_150 = (uint *)((longlong)param_1 + 0xf4);
  *(int *)(param_1 + 9) = (int)local_17c[0];
  *(int *)(param_1 + 0x1e) = (int)(short)local_170;
  *local_150 = (uint)local_180[0];
  *(uint *)((longlong)param_1 + 0x4c) = local_178 & 0xffff;
  if ((*(longlong *)(*(longlong *)(lVar15 + 0xd0) + 0x50) == 0) &&
     (*(char *)((longlong)param_1 + 0x54) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x54) = 1;
    *(uint *)(param_1 + 10) = local_178 & 0xffff;
  }
  lVar15 = 0;
  local_188 = 0;
  if (local_174 != '\0') goto LAB_140312bfb;
  plVar9 = *(longlong **)(*(longlong *)(*param_1 + 0xd0) + 0x50);
  if ((plVar9 == (longlong *)0x0) || (*(code **)(*plVar9 + 0x10) == (code *)0x0)) {
LAB_140312386:
    local_150 = (uint *)((longlong)param_1 + 0xf4);
  }
  else {
    local_60 = (ulonglong)*(uint *)(param_1 + 9);
    local_58 = (ulonglong)*(uint *)((longlong)param_1 + 0x4c);
    iVar11 = (**(code **)(*plVar9 + 0x10))(plVar9[1],param_2,0,&local_60);
    if (iVar11 == 0) {
      local_150 = (uint *)((longlong)param_1 + 0xf4);
      *(int *)(param_1 + 9) = (int)(short)local_60;
      *(uint *)((longlong)param_1 + 0x4c) = (uint)(ushort)local_58;
      *(undefined4 *)(param_1 + 0x1e) = 0;
      *local_150 = 0;
      if (*(char *)((longlong)param_1 + 0x54) != '\0') goto LAB_140312386;
      *(undefined1 *)((longlong)param_1 + 0x54) = 1;
      *(uint *)(param_1 + 10) = (uint)(ushort)local_58;
    }
  }
  iVar19 = *(int *)((longlong)param_1 + 0x44) + (int)param_1[0x1e];
  iVar11 = (int)param_1[7] - (int)param_1[9];
  *(int *)(param_1 + 0xb) = iVar11;
  *(int *)((longlong)param_1 + 0xfc) = iVar19;
  *(int *)(param_1 + 0xc) = iVar11 + *(int *)((longlong)param_1 + 0x4c);
  *(int *)((longlong)param_1 + 0x104) = iVar19 - *(int *)((longlong)param_1 + 0xf4);
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) && (param_1[0x1b] != 0)) &&
     (2 < *(int *)(param_1[0x1b] + 0x328) - 2U)) {
    iVar11 = *(int *)((longlong)param_1 + 0x4c) / 2;
    *(int *)(param_1 + 0x1f) = iVar11;
    *(int *)(param_1 + 0x20) = iVar11;
  }
  if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
    if (((*(uint *)(lVar7 + 4) & 0x7fff0000) != 0) || ((*(uint *)(lVar7 + 8) & 0x8000) != 0)) {
      local_60 = param_1[0xb];
      local_58 = param_1[0xc];
      local_50 = param_1[0x1f];
      local_48 = param_1[0x20];
      local_100 = &local_60;
      local_88 = 0;
      lStack_80 = 0;
      local_108[0] = 0;
      local_78 = 0;
      lStack_70 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_188 = FUN_14030f580(param_1,local_108,&local_88);
      if (local_188 != 0) goto LAB_140312bfb;
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar15 = (longlong)local_16c;
      lVar17 = (int)param_1[0xb] * lVar15;
      *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (int)param_1[0xc] * lVar15;
      *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (int)param_1[0x1f] * lVar15;
      *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar17 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)(int)local_168;
      *(int *)((longlong)param_1 + 0xfc) =
           (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
      lVar15 = (int)param_1[0x20] * lVar15;
      *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
      lVar17 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)(int)local_168;
      *(int *)((longlong)param_1 + 0x104) =
           (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10);
    }
    local_188 = 0;
    goto LAB_140312bfb;
  }
  local_188 = (**(code **)(lVar7 + 0x2a8))
                        (param_1,param_2,(uint)local_160 + 10 + *(int *)(lVar7 + 0x3fc),
                         (int)param_1[6] + -10);
  if (local_188 != 0) goto LAB_140312bfb;
  if (*(short *)((longlong)param_1 + 0x34) < 1) {
    if (*(short *)((longlong)param_1 + 0x34) < 0) {
      local_160 = *(ulonglong *)(lVar7 + 0x98);
      plVar9 = param_1 + 0x23;
      *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
      if (plVar9 != (longlong *)0x0) {
        uVar12 = local_158;
        for (lVar15 = *plVar9; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 8)) {
          lVar13 = lVar15;
          if (uVar12 == 0) goto joined_r0x000140312501;
          uVar12 = uVar12 - 1;
        }
        lVar15 = 0;
      }
      goto LAB_1403124d2;
    }
  }
  else {
    local_188 = (**(code **)(lVar7 + 0x2c0))(param_1);
    if (local_188 == 0) {
      (**(code **)(lVar7 + 0x2b0))(param_1);
      local_188 = FUN_14030c9d0(param_1);
      if (local_188 == 0) {
        FUN_1402f0740(lVar17);
      }
      goto LAB_140312bfb;
    }
  }
LAB_1403124ed:
  (**(code **)(lVar7 + 0x2b0))(param_1);
LAB_140312bfb:
  param_1[5] = *(longlong *)(lVar7 + 0xa0);
  if (local_184 != '\0') {
    plVar9 = *(longlong **)(*(longlong *)(lVar7 + 0xd0) + 0x50);
    (**(code **)(*plVar9 + 8))(plVar9[1],&local_118);
  }
  return local_188;
joined_r0x000140312501:
  for (; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 8)) {
    *(undefined8 *)(lVar13 + 0x10) = 0xffffffffffffffff;
  }
LAB_1403124d2:
  lVar13 = FUN_1402f1230(plVar9);
  uVar22 = local_160;
  if (lVar13 == 0) {
    if (lVar15 == 0) {
      lVar15 = FUN_1402f7fa0(local_160,0x18,&local_188);
      if (local_188 != 0) goto LAB_1403124ed;
      *(ulonglong *)(lVar15 + 0x10) = (ulonglong)param_2;
      FUN_1402f1180(plVar9);
    }
    else {
      *(ulonglong *)(lVar15 + 0x10) = (ulonglong)param_2;
    }
    uVar21 = *(ushort *)(lVar17 + 0x1a);
    local_17c[0] = *(short *)(lVar17 + 0x18);
    local_178 = CONCAT22(local_178._2_2_,uVar21);
    local_188 = (**(code **)(lVar7 + 0x2c8))(param_1);
    if (local_188 == 0) {
      local_170 = *(uint *)(param_1 + 0x1c);
      (**(code **)(lVar7 + 0x2b0))(param_1);
      if (((*(uint *)(lVar7 + 4) & 0x7fff0000) != 0) || ((*(uint *)(lVar7 + 8) & 0x8000) != 0)) {
        uVar21 = *(ushort *)(lVar17 + 0x98);
        local_190 = &local_188;
        local_88 = local_88 & 0xffffffff00000000;
        local_68 = 0;
        local_148 = 0;
        local_198 = (uint *)0x0;
        local_78 = 0;
        lStack_70 = 0;
        lVar14 = FUN_1402f7ff0(uVar22,8,0,uVar21 + 4);
        lVar13 = lStack_70;
        lVar15 = local_78;
        lStack_80 = lVar14;
        if (local_188 == 0) {
          local_190 = &local_188;
          local_198 = (uint *)0x0;
          lVar15 = FUN_1402f7ff0(uVar22,1,0,uVar21);
          lVar13 = lStack_70;
          local_78 = lVar15;
          if (local_188 == 0) {
            local_190 = &local_188;
            local_198 = (uint *)0x0;
            lVar13 = FUN_1402f7ff0(uVar22,2,0,uVar21);
            lVar15 = local_78;
            lStack_70 = lVar13;
            if (local_188 == 0) {
              local_190 = &local_188;
              local_198 = (uint *)0x0;
              local_148 = FUN_1402f7ff0(local_160,8,0,uVar21 + 4);
              lVar15 = local_78;
              if (local_188 == 0) {
                lVar20 = *(longlong *)(lVar17 + 0xa0);
                uVar18 = 0;
                lVar16 = 0;
                local_88 = CONCAT62(CONCAT42(local_88._4_4_,uVar21),uVar21);
                if (uVar21 != 0) {
                  do {
                    *(undefined4 *)(lVar14 + lVar16 * 8) = *(undefined4 *)(lVar20 + 8);
                    lVar1 = lVar16 + 1;
                    *(undefined4 *)(lVar14 + -4 + lVar1 * 8) = *(undefined4 *)(lVar20 + 0xc);
                    *(undefined1 *)(lVar16 + local_78) = 1;
                    *(ushort *)(lVar13 + -2 + lVar1 * 2) = uVar18;
                    uVar18 = uVar18 + 1;
                    lVar16 = lVar1;
                    lVar20 = lVar20 + 0x20;
                  } while (uVar18 < uVar21);
                }
                *(longlong *)(lVar14 + (ulonglong)uVar18 * 8) = param_1[0xb];
                *(longlong *)(lVar14 + (ulonglong)(ushort)(uVar18 + 1) * 8) = param_1[0xc];
                *(longlong *)(lVar14 + (ulonglong)(ushort)(uVar18 + 2) * 8) = param_1[0x1f];
                *(longlong *)(lVar14 + (ulonglong)(ushort)(uVar18 + 3) * 8) = param_1[0x20];
                local_188 = FUN_14030f580(param_1,&local_88);
                if (local_188 == 0) {
                  lVar20 = *(longlong *)(lVar17 + 0xa0);
                  uVar18 = 0;
                  if (uVar21 != 0) {
                    do {
                      if ((*(byte *)(lVar20 + 4) & 2) != 0) {
                        *(int *)(lVar20 + 8) = (int)*(short *)(lVar14 + (ulonglong)uVar18 * 8);
                        *(int *)(lVar20 + 0xc) = (int)*(short *)(lVar14 + (ulonglong)uVar18 * 8 + 4)
                        ;
                      }
                      uVar18 = uVar18 + 1;
                      lVar20 = lVar20 + 0x20;
                    } while (uVar18 < uVar21);
                  }
                }
              }
            }
          }
        }
        uVar22 = local_160;
        FUN_1402f7f90(local_160,lVar14);
        FUN_1402f7f90(uVar22,lVar15);
        FUN_1402f7f90(uVar22,lVar13);
        FUN_1402f7f90(uVar22,local_148);
        if (local_188 != 0) goto LAB_140312bfb;
        uVar21 = (ushort)local_178;
      }
      if ((*(uint *)(param_1 + 4) & 1) == 0) {
        lVar13 = (longlong)local_16c;
        lVar15 = (int)param_1[0xb] * lVar13;
        *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
        lVar15 = (int)param_1[0xc] * lVar13;
        *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
        lVar15 = (int)param_1[0x1f] * lVar13;
        *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
        lVar15 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)(int)local_168;
        *(int *)((longlong)param_1 + 0xfc) =
             (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
        lVar13 = (int)param_1[0x20] * lVar13;
        lVar15 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)(int)local_168;
        *(int *)((longlong)param_1 + 0x104) =
             (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
        *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
      }
      if ((*(uint *)(param_1 + 4) >> 10 & 1) == 0) {
        local_60 = param_1[5];
        uVar12 = *(uint *)(lVar17 + 0x98);
        local_178 = *(uint *)(param_1 + 6);
        uVar6 = *(uint *)(lVar17 + 0x50);
        local_168 = uVar12;
        FUN_1402f0740(lVar17);
        uVar22 = 0;
        if (uVar12 == 0) {
          lVar15 = 0;
          uVar18 = uVar21;
        }
        else {
          local_120 = (ulonglong)uVar6;
          local_16c = local_158 + 1;
          do {
            uVar5 = *(ushort *)(lVar17 + 0x1a);
            local_148 = param_1[0xb];
            local_138 = param_1[0xc];
            local_130 = param_1[0x1f];
            local_128 = param_1[0x20];
            local_158 = *(uint *)(param_1 + 10);
            lVar15 = (uVar22 + local_120) * 0x20;
            local_160 = CONCAT44(local_160._4_4_,*(undefined4 *)((longlong)param_1 + 0xf4));
            local_188 = FUN_140311fa0(param_1,*(undefined4 *)(*(longlong *)(lVar17 + 0x58) + lVar15)
                                      ,local_16c,0);
            if (local_188 != 0) goto LAB_140312bfb;
            lVar15 = *(longlong *)(lVar17 + 0x58) + lVar15;
            if ((*(ushort *)(lVar15 + 4) & 0x200) == 0) {
              param_1[0xb] = local_148;
              param_1[0xc] = local_138;
              param_1[0x1f] = local_130;
              param_1[0x20] = local_128;
              *(uint *)(param_1 + 10) = local_158;
              *local_150 = (uint)local_160;
            }
            uVar18 = *(ushort *)(lVar17 + 0x1a);
            if ((uVar18 != uVar5) &&
               (local_188 = FUN_14030c5a0(param_1,lVar15,uVar21), local_188 != 0))
            goto LAB_140312bfb;
            uVar12 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar12;
          } while (uVar12 < local_168);
        }
        bVar2 = *(byte *)(param_1 + 4);
        *local_140 = local_60;
        *(uint *)(param_1 + 6) = local_178;
        *(uint *)(param_1 + 0x1c) = local_170;
        if ((((((bVar2 & 2) != 0) || (lVar15 == 0)) || ((*(ushort *)(lVar15 + 4) & 0x100) == 0)) ||
            ((uVar18 <= uVar21 ||
             (local_188 = FUN_14030c770(param_1,uVar21,local_17c[0]), local_188 == 0)))) &&
           ((*(int *)(lVar17 + 0x50) != 0 &&
            ((*(ushort *)(*(longlong *)(lVar17 + 0x58) + 4) & 0x400) != 0)))) {
          *(uint *)(lVar17 + 0x38) = *(uint *)(lVar17 + 0x38) | 0x40;
        }
      }
      else {
        FUN_1402f0740(lVar17);
        *(undefined4 *)(param_1[2] + 0x60) = 0x636f6d70;
      }
      goto LAB_140312bfb;
    }
  }
  else {
    local_188 = 0x15;
  }
  goto LAB_1403124ed;
}

