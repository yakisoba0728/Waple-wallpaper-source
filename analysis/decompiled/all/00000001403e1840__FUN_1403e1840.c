// Function: FUN_1403e1840
// Addr: 1403e1840
// Size: 1304 bytes


void FUN_1403e1840(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_78 [12];
  undefined4 uStack_6c;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar12 & 7) < 4) {
    uVar13 = 0;
    if (7 < uVar12) {
      do {
        uVar7 = *(undefined8 *)(param_1 + 0x11c8);
        if (uVar13 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)uVar13 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = *(double *)(param_1 + 0x11c0) + *pdVar10;
        local_58._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
        uStack_50._0_4_ = (undefined4)uVar7;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        auVar9._4_8_ = stack0xffffffffffffff90;
        auVar9._0_4_ = local_58._4_4_;
        local_78._0_8_ = auVar9._0_8_ << 0x20;
        local_78._8_4_ = (undefined4)uStack_50;
        uStack_6c = uStack_50._4_4_;
        if (uVar13 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar13 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(param_1 + ((ulonglong)(uVar13 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar11 = (double *)&DAT_1404e4ff0;
        }
        dVar6 = dVar4 + *pdVar11;
        unique0x10000309 = stack0xffffffffffffff90 + *pdVar10;
        local_78._0_8_ = dVar6;
        if (uVar13 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar5 = unique0x10000309 + *pdVar10;
        uStack_60 = dVar5;
        local_68 = dVar6;
        local_58 = dVar4;
        uStack_50 = (double)uVar7;
        FUN_1403bca20(param_2,&local_58,local_78,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar6;
        *(double *)(param_1 + 0x11c8) = dVar5;
        local_58 = local_68;
        if (uVar13 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        uStack_50 = dVar5 + *pdVar10;
        if (uVar13 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar13 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(param_1 + ((ulonglong)(uVar13 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar11 = (double *)&DAT_1404e4ff0;
        }
        dVar6 = uStack_50 + *pdVar10;
        dVar4 = *pdVar11;
        stack0xffffffffffffff90 = dVar6;
        local_78._0_8_ = local_58 + dVar4;
        if (uVar13 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = local_58 + dVar4 + *pdVar10;
        uVar12 = *(uint *)(param_1 + 0x1c);
        uStack_60 = dVar6;
        local_68 = dVar4;
        if ((uVar12 - uVar13 < 0x10) && ((uVar12 & 1) != 0)) {
          if (uVar13 + 8 < uVar12) {
            pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4ff0 = DAT_14045dde0;
            pdVar10 = (double *)&DAT_1404e4ff0;
          }
          dVar6 = dVar6 + *pdVar10;
          uStack_60 = dVar6;
        }
        FUN_1403bca20(param_2,&local_58,local_78,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar4;
        *(double *)(param_1 + 0x11c8) = dVar6;
        uVar12 = uVar13 + 0x10;
        uVar13 = uVar13 + 8;
      } while (uVar12 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    unique0x10000741 = *(double *)(param_1 + 0x11c8);
    if (uVar12 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar10 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar10 = (double *)(param_1 + 0x20);
    }
    dVar4 = *(double *)(param_1 + 0x11c0) + *pdVar10;
    local_78._0_8_ = dVar4;
    auVar2 = _local_78;
    local_78._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_6c = (undefined4)((ulonglong)unique0x10000741 >> 0x20);
    auVar8._4_8_ = uStack_60;
    auVar8._0_4_ = local_78._4_4_;
    local_68 = (double)(auVar8._0_8_ << 0x20);
    uStack_60._0_4_ = local_78._8_4_;
    uStack_60._4_4_ = uStack_6c;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar10 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar10 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar11 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar11 = (double *)(param_1 + 0x30);
    }
    dVar4 = dVar4 + *pdVar10;
    uStack_60 = uStack_60 + *pdVar11;
    local_68 = dVar4;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar10 = (double *)&DAT_1404e4ff0;
    }
    else {
      pdVar10 = (double *)(param_1 + 0x38);
    }
    dVar6 = uStack_60 + *pdVar10;
    uVar12 = *(uint *)(param_1 + 0x1c);
    uVar14 = 4;
    uVar13 = uVar14;
    _local_78 = auVar2;
    if (0xb < uVar12) {
      do {
        local_58 = dVar4;
        uStack_50 = dVar6;
        FUN_1403bca20(param_2,local_78,&local_68,&local_58);
        *(double *)(param_1 + 0x11c0) = dVar4;
        *(double *)(param_1 + 0x11c8) = dVar6;
        auVar9 = *(undefined1 (*) [12])*(undefined1 (*) [16])(param_1 + 0x11c0);
        if (uVar13 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)uVar13 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        stack0xffffffffffffff90 = SUB168(*(undefined1 (*) [16])(param_1 + 0x11c0),8);
        unique0x1000046d = stack0xffffffffffffff90 + *pdVar10;
        local_78._0_8_ = auVar9._0_8_;
        if (uVar13 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar13 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(param_1 + ((ulonglong)(uVar13 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar11 = (double *)&DAT_1404e4ff0;
        }
        dVar6 = unique0x1000046d + *pdVar10;
        dVar4 = *pdVar11;
        uStack_60 = dVar6;
        local_68 = (double)local_78._0_8_ + dVar4;
        if (uVar13 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = (double)local_78._0_8_ + dVar4 + *pdVar10;
        local_58 = dVar4;
        uStack_50 = dVar6;
        FUN_1403bca20(param_2,local_78,&local_68,&local_58);
        *(double *)(param_1 + 0x11c0) = dVar4;
        *(double *)(param_1 + 0x11c8) = dVar6;
        if (uVar13 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = dVar4 + *pdVar10;
        local_78._8_4_ = SUB84(uStack_50,0);
        uStack_6c = (undefined4)((ulonglong)uStack_50 >> 0x20);
        local_78._0_8_ = dVar4;
        auVar2._8_4_ = local_78._8_4_;
        auVar2._0_8_ = dVar4;
        auVar2._12_4_ = uStack_6c;
        if (uVar13 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar10 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar13 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(param_1 + ((ulonglong)(uVar13 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar11 = (double *)&DAT_1404e4ff0;
        }
        dVar4 = dVar4 + *pdVar11;
        uStack_60 = auVar2._8_8_;
        uStack_60 = uStack_60 + *pdVar10;
        local_68 = dVar4;
        if (uVar13 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar6 = uStack_60 + *pdVar10;
        uVar12 = *(uint *)(param_1 + 0x1c);
        uVar14 = uVar13 + 8;
        uVar1 = uVar13 + 0x10;
        uVar13 = uVar14;
      } while (uVar1 <= uVar12);
    }
    local_58 = dVar4;
    if (uVar14 < uVar12) {
      local_58 = dVar4 + *(double *)(param_1 + 0x20 + (ulonglong)uVar14 * 8);
    }
    dVar4 = local_58;
    uStack_50 = dVar6;
    FUN_1403bca20(param_2,local_78,&local_68,&local_58);
    auVar3._8_4_ = SUB84(dVar6,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar3;
  }
  return;
}

