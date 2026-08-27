// Function: FUN_140260190
// Addr: 140260190
// Size: 1526 bytes


/* WARNING: Removing unreachable block (ram,0x00014026033c) */

void FUN_140260190(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong _Size;
  size_t _Size_00;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  undefined8 in_stack_fffffffffffffe80;
  undefined8 uVar18;
  float local_158;
  float fStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  undefined4 local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  
  fVar17 = *(float *)(param_1 + 0x5e);
  uVar12 = (ulonglong)*(float *)((longlong)param_1 + 0x2f4);
  uVar18 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe80 >> 0x20),(int)fVar17);
  local_res8 = param_1;
  (**(code **)(*param_1 + 0xb0))
            (fVar17,DAT_140492704,uVar12,(longlong)fVar17,uVar12 & 0xffffffff,uVar18,
             (int)*(float *)((longlong)param_1 + 0x2f4));
  (**(code **)(*param_1 + 0xb8))(param_1);
  uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
  if ((longlong *)param_1[0x61] == (longlong *)param_1[0x62]) goto LAB_14026072d;
  local_res10 = 0x3f800000;
  local_res18 = 1.0;
  local_res1c = 1.0;
  local_res20 = 0.0;
  local_res24 = 1.0;
  lVar9 = *(longlong *)(*(longlong *)(*(longlong *)param_1[0x61] + 0xd0) + 8);
  if (lVar9 == 0) goto LAB_14026072d;
  lVar1 = *(longlong *)(lVar9 + 0x1e0);
  puStack_130 = (undefined8 *)0x0;
  puVar13 = *(undefined8 **)(lVar1 + 0x20);
  local_138 = (undefined8 *)(ulonglong)CONCAT24(DAT_140491cf0,DAT_140491cec);
  local_128 = 6;
  local_120 = 0xf;
  if (*(char *)((longlong)puVar13[1] + 0x19) == '\0') {
    puVar11 = (undefined8 *)puVar13[1];
    do {
      puVar10 = puVar11 + 4;
      uVar12 = puVar11[6];
      if (0xf < (ulonglong)puVar11[7]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      _Size = uVar12;
      if (6 < uVar12) {
        _Size = 6;
      }
      iVar7 = memcmp(puVar10,&local_138,_Size);
      uVar14 = (undefined4)((ulonglong)uVar18 >> 0x20);
      if (iVar7 == 0) {
        if (uVar12 < 6) {
          cVar6 = -1;
          goto LAB_1402602ef;
        }
        if (6 < uVar12) goto LAB_1402602ed;
LAB_1402602f9:
        puVar10 = (undefined8 *)*puVar11;
        puVar13 = puVar11;
      }
      else {
        if (iVar7 < 0) {
          cVar6 = -1;
        }
        else {
LAB_1402602ed:
          cVar6 = '\x01';
        }
LAB_1402602ef:
        if (-1 < cVar6) goto LAB_1402602f9;
        puVar10 = (undefined8 *)puVar11[2];
      }
      puVar11 = puVar10;
      param_1 = local_res8;
    } while (*(char *)((longlong)puVar10 + 0x19) == '\0');
  }
  if (*(char *)((longlong)puVar13 + 0x19) == '\0') {
    puVar11 = puVar13 + 4;
    uVar12 = puVar13[6];
    if (0xf < (ulonglong)puVar13[7]) {
      puVar11 = (undefined8 *)*puVar11;
    }
    _Size_00 = 6;
    if (uVar12 < 6) {
      _Size_00 = uVar12;
    }
    iVar7 = memcmp(&local_138,puVar11,_Size_00);
    if (iVar7 == 0) {
      if (6 < uVar12) {
        cVar6 = -1;
        goto LAB_140260363;
      }
      if (uVar12 < 6) goto LAB_140260361;
    }
    else {
      if (iVar7 < 0) {
        cVar6 = -1;
      }
      else {
LAB_140260361:
        cVar6 = '\x01';
      }
LAB_140260363:
      if (cVar6 < '\0') goto LAB_140260367;
    }
  }
  else {
LAB_140260367:
    puVar13 = *(undefined8 **)(lVar1 + 0x20);
  }
  if (puVar13 != *(undefined8 **)(lVar1 + 0x20)) {
    uVar18 = *(undefined8 *)(lVar9 + 0x120 + (longlong)*(char *)((longlong)puVar13 + 0x45) * 4);
    cVar6 = FUN_14025f8a0(lVar9,"point1",&local_res10);
    if (((cVar6 != '\0') && (cVar6 = FUN_14025f8a0(lVar9,"point2",&local_res18), cVar6 != '\0')) &&
       (cVar6 = FUN_14025f8a0(lVar9,"point3",&local_res20), cVar6 != '\0')) {
      puVar13 = (undefined8 *)param_1[0x5d];
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
      fVar5 = local_res20;
      fVar4 = local_res18;
      fVar17 = DAT_1404926c0;
      local_158 = (float)uVar18;
      fVar3 = (float)local_res10;
      param_1[0x5d] = 0;
      local_138 = &local_res8;
      local_res8._0_4_ = (float)param_1[0x5e];
      fVar15 = (float)local_res8;
      local_res8._4_4_ = (float)((ulonglong)param_1[0x5e] >> 0x20);
      fVar2 = local_res8._4_4_;
      puStack_130 = &local_res10;
      fVar16 = (float)local_res8 * fVar17;
      fVar17 = local_res8._4_4_ * fVar17;
      local_res8 = (longlong *)0x700000000;
      uVar8 = FUN_140098c30(&local_138);
      fStack_154 = (float)((ulonglong)uVar18 >> 0x20);
      local_110 = 0;
      local_fc = 0;
      local_e8 = 0;
      local_118 = fVar15 * local_158 - fVar16;
      local_108 = fStack_154;
      local_f4 = local_res10._4_4_;
      local_10c = local_158;
      local_f8 = fVar3;
      local_e4 = fVar4;
      local_114 = fVar2 * (float)(DAT_140492778 - (double)fStack_154) - fVar17;
      local_104 = fVar15 * fVar3 - fVar16;
      local_e0 = local_res1c;
      local_dc = fVar15 * fVar5 - fVar16;
      local_f0 = fVar15 * fVar4 - fVar16;
      local_100 = fVar2 * (float)(DAT_140492778 - (double)local_res10._4_4_) - fVar17;
      local_ec = fVar2 * (float)(DAT_140492778 - (double)local_res1c) - fVar17;
      local_d8 = fVar2 * (float)(DAT_140492778 - (double)local_res24) - fVar17;
      local_d0 = fVar5;
      local_cc = local_res24;
      local_d4 = 0;
      local_150 = 0x20000;
      local_14c = 1;
      local_148 = 0x20003;
      lVar9 = (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x40))
                        (*(longlong **)(param_1[0x19] + 0x1518),uVar8,&local_118,4,&local_150,
                         CONCAT44(uVar14,6),0,0,0);
      param_1[0x5d] = lVar9;
      fVar17 = local_114 * local_114 + local_118 * local_118;
      if (fVar17 <= DAT_140492704) {
        fVar17 = DAT_140492704;
      }
      fVar15 = local_100 * local_100 + local_104 * local_104;
      if (fVar15 <= fVar17) {
        fVar15 = fVar17;
      }
      fVar17 = local_ec * local_ec + local_f0 * local_f0;
      if (fVar17 <= fVar15) {
        fVar17 = fVar15;
      }
      fVar15 = local_d8 * local_d8 + local_dc * local_dc;
      if (fVar15 <= fVar17) {
        fVar15 = fVar17;
      }
      if (0.0 <= fVar15) {
        *(float *)(param_1 + 0x8a) = SQRT(fVar15);
        return;
      }
      uVar14 = FUN_14041ad10(fVar15);
      *(undefined4 *)(param_1 + 0x8a) = uVar14;
      return;
    }
  }
LAB_14026072d:
  local_res8 = (longlong *)0x3f8000003f800000;
  FUN_1401ede30(param_1[0x19],param_1[0x5e],param_1[0x5e],0x3f8000003f800000,1,param_1 + 0x5d);
  return;
}

