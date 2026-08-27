// Function: FUN_140410170
// Addr: 140410170
// Size: 1494 bytes


void FUN_140410170(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [12];
  undefined4 uStack_4c;
  
  uVar10 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar10 & 7) < 4) {
    uVar11 = 0;
    if (7 < uVar10) {
      do {
        auVar6 = *(undefined1 (*) [12])*(undefined1 (*) [16])(param_1 + 0x11c0);
        if (uVar11 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)uVar11 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        stack0xffffffffffffffb0 = SUB168(*(undefined1 (*) [16])(param_1 + 0x11c0),8);
        unique0x10000471 = stack0xffffffffffffffb0 + *pdVar8;
        local_58._0_8_ = auVar6._0_8_;
        if (uVar11 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar8 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar11 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(param_1 + ((ulonglong)(uVar11 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar9 = (double *)&DAT_1404e4f20;
        }
        dVar5 = unique0x10000471 + *pdVar8;
        dVar3 = *pdVar9;
        uStack_70 = dVar5;
        local_78 = (double)local_58._0_8_ + dVar3;
        if (uVar11 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar3 = (double)local_58._0_8_ + dVar3 + *pdVar8;
        local_68 = dVar3;
        dStack_60 = dVar5;
        FUN_1403bc950(param_2,local_58,&local_78,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar3;
        *(double *)(param_1 + 0x11c8) = dVar5;
        if (uVar11 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar3 = dVar3 + *pdVar8;
        local_58._8_4_ = SUB84(dStack_60,0);
        uStack_4c = (undefined4)((ulonglong)dStack_60 >> 0x20);
        local_58._0_8_ = dVar3;
        auVar2._8_4_ = local_58._8_4_;
        auVar2._0_8_ = dVar3;
        auVar2._12_4_ = uStack_4c;
        if (uVar11 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar8 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar11 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(param_1 + ((ulonglong)(uVar11 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar9 = (double *)&DAT_1404e4f20;
        }
        local_68 = dVar3 + *pdVar9;
        uStack_70 = auVar2._8_8_;
        uStack_70 = uStack_70 + *pdVar8;
        local_78 = local_68;
        if (uVar11 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar3 = uStack_70 + *pdVar8;
        uVar10 = *(uint *)(param_1 + 0x1c);
        if ((uVar10 - uVar11 < 0x10) && ((uVar10 & 1) != 0)) {
          if (uVar11 + 8 < uVar10) {
            pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            pdVar8 = (double *)&DAT_1404e4f20;
          }
          local_68 = local_68 + *pdVar8;
        }
        dVar5 = local_68;
        dStack_60 = dVar3;
        FUN_1403bc950(param_2,local_58,&local_78,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar5;
        *(double *)(param_1 + 0x11c8) = dVar3;
        uVar10 = uVar11 + 0x10;
        uVar11 = uVar11 + 8;
      } while (uVar10 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    auVar6 = *(undefined1 (*) [12])*(undefined1 (*) [16])(param_1 + 0x11c0);
    if (uVar10 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x20);
    }
    uStack_70 = SUB168(*(undefined1 (*) [16])(param_1 + 0x11c0),8);
    uStack_70 = uStack_70 + *pdVar8;
    local_78 = auVar6._0_8_;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar8 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar9 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar9 = (double *)(param_1 + 0x30);
    }
    dVar3 = uStack_70 + *pdVar9;
    local_58._0_8_ = local_78 + *pdVar8;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar8 = (double *)&DAT_1404e4f20;
    }
    else {
      pdVar8 = (double *)(param_1 + 0x38);
    }
    dVar5 = (double)local_58._0_8_ + *pdVar8;
    uVar10 = *(uint *)(param_1 + 0x1c);
    uVar11 = 4;
    uVar12 = uVar11;
    if (0xb < uVar10) {
      do {
        local_68 = dVar5;
        dStack_60 = dVar3;
        unique0x1000090a = dVar3;
        FUN_1403bc950(param_2,&local_78,local_58,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar5;
        *(double *)(param_1 + 0x11c8) = dVar3;
        uStack_70 = *(double *)(param_1 + 0x11c8);
        if (uVar11 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)uVar11 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar3 = *(double *)(param_1 + 0x11c0) + *pdVar8;
        local_78 = dVar3;
        auVar2 = _local_78;
        local_78._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        auVar6._4_8_ = stack0xffffffffffffffb0;
        auVar6._0_4_ = local_78._4_4_;
        local_58._0_8_ = auVar6._0_8_ << 0x20;
        local_58._8_4_ = (undefined4)uStack_70;
        uStack_4c = uStack_70._4_4_;
        if (uVar11 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar8 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar11 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(param_1 + ((ulonglong)(uVar11 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar9 = (double *)&DAT_1404e4f20;
        }
        dVar3 = dVar3 + *pdVar9;
        unique0x10000299 = stack0xffffffffffffffb0 + *pdVar8;
        local_58._0_8_ = dVar3;
        if (uVar11 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar5 = unique0x10000299 + *pdVar8;
        _local_78 = auVar2;
        local_68 = dVar3;
        dStack_60 = dVar5;
        FUN_1403bc950(param_2,&local_78,local_58,&local_68);
        *(double *)(param_1 + 0x11c0) = dVar3;
        *(double *)(param_1 + 0x11c8) = dVar5;
        if (uVar11 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        uStack_70 = dVar5 + *pdVar8;
        local_78 = local_68;
        if (uVar11 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar8 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar11 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar9 = (double *)(param_1 + ((ulonglong)(uVar11 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar9 = (double *)&DAT_1404e4f20;
        }
        dVar3 = uStack_70 + *pdVar8;
        local_58._0_8_ = local_68 + *pdVar9;
        if (uVar11 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar8 = (double *)(param_1 + ((ulonglong)(uVar11 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar8 = (double *)&DAT_1404e4f20;
        }
        dVar5 = (double)local_58._0_8_ + *pdVar8;
        uVar10 = *(uint *)(param_1 + 0x1c);
        uVar12 = uVar11 + 8;
        uVar1 = uVar11 + 0x10;
        uVar11 = uVar12;
      } while (uVar1 <= uVar10);
    }
    dStack_60 = dVar3;
    if (uVar12 < uVar10) {
      dStack_60 = dVar3 + *(double *)(param_1 + 0x20 + (ulonglong)uVar12 * 8);
    }
    uVar7 = (ulonglong)dStack_60 >> 0x20;
    uVar13 = SUB84(dStack_60,0);
    local_68 = dVar5;
    unique0x1000091a = dVar3;
    FUN_1403bc950(param_2,&local_78,local_58,&local_68);
    auVar4._8_4_ = uVar13;
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)uVar7;
    *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar4;
  }
  return;
}

