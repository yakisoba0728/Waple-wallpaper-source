// Function: FUN_1400eef70
// Addr: 1400eef70
// Size: 2077 bytes


void FUN_1400eef70(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uVar8;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_138 [144];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48 [4];
  undefined1 uVar9;
  
  *(undefined4 *)(param_1 + 0x30) = 6;
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 6;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 6;
  *(undefined4 *)(param_1 + 0x20) = 6;
  *(undefined4 *)(param_1 + 0x1c) = 9;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 1;
  local_94 = 1;
  local_84 = 0;
  local_8c = 1;
  local_88 = 8;
  uVar3 = FUN_140099980(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0x18),9,
                        *(byte *)(param_1 + 0x10) >> 1 & 1);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  uVar2 = FUN_1400d2a20(*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  local_9c = CONCAT44(uVar2,(undefined4)local_9c);
  uVar6 = uVar7;
  uVar12 = uVar7;
  do {
    iVar11 = (int)uVar12;
    iVar4 = (int)uVar6;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((uVar12 / 6 & 1) != 0) {
      uVar9 = 0xff;
    }
    local_138[iVar4] = uVar9;
    local_138[(longlong)iVar4 + 1] = uVar9;
    local_138[(longlong)iVar4 + 2] = 0;
    local_138[(longlong)iVar4 + 3] = 0xff;
    uVar10 = iVar11 + 1U & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 2;
    uVar9 = uVar8;
    if (((iVar11 + 1U) / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(longlong)iVar4 + 4] = uVar9;
    local_138[(longlong)iVar4 + 5] = uVar9;
    local_138[(longlong)iVar4 + 6] = 0;
    local_138[(longlong)iVar4 + 7] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 3;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 9] = uVar9;
    local_138[(longlong)iVar4 + 10] = 0;
    local_138[(longlong)iVar4 + 0xb] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 4;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar8 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar8;
    local_138[(longlong)iVar4 + 0xd] = uVar8;
    local_138[(longlong)iVar4 + 0xe] = 0;
    local_138[(longlong)iVar4 + 0xf] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 5;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x11] = uVar9;
    local_138[(longlong)iVar4 + 0x12] = 0;
    local_138[(longlong)iVar4 + 0x13] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 6;
    uVar9 = uVar8;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x15] = uVar9;
    local_138[(longlong)iVar4 + 0x16] = 0;
    local_138[(longlong)iVar4 + 0x17] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 7;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x19] = uVar9;
    local_138[(longlong)iVar4 + 0x1a] = 0;
    local_138[(longlong)iVar4 + 0x1b] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 8;
    uVar9 = uVar8;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x1d] = uVar9;
    local_138[(longlong)iVar4 + 0x1e] = 0;
    local_138[(longlong)iVar4 + 0x1f] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 9;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x21] = uVar9;
    local_138[(longlong)iVar4 + 0x22] = 0;
    local_138[(longlong)iVar4 + 0x23] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 10;
    uVar9 = uVar8;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x25] = uVar9;
    local_138[(longlong)iVar4 + 0x26] = 0;
    local_138[(longlong)iVar4 + 0x27] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 0xb;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x29] = uVar9;
    local_138[(longlong)iVar4 + 0x2a] = 0;
    local_138[(longlong)iVar4 + 0x2b] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 0xc;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar8 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar8;
    local_138[(longlong)iVar4 + 0x2d] = uVar8;
    local_138[(longlong)iVar4 + 0x2e] = 0;
    local_138[(longlong)iVar4 + 0x2f] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 0xd;
    uVar8 = 0;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x31] = uVar9;
    local_138[(longlong)iVar4 + 0x32] = 0;
    local_138[(longlong)iVar4 + 0x33] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 0xe;
    uVar9 = uVar8;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x35] = uVar9;
    local_138[(longlong)iVar4 + 0x36] = 0;
    local_138[(longlong)iVar4 + 0x37] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 0xf;
    uVar9 = uVar8;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x39] = uVar9;
    local_138[(longlong)iVar4 + 0x3a] = 0;
    local_138[(longlong)iVar4 + 0x3b] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar13 = iVar11 + 0x10;
    uVar9 = uVar8;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar9 = 0xff;
    }
    local_138[(int)(uVar14 * 4)] = uVar9;
    local_138[(longlong)iVar4 + 0x3d] = uVar9;
    local_138[(longlong)iVar4 + 0x3e] = 0;
    local_138[(longlong)iVar4 + 0x3f] = 0xff;
    uVar10 = uVar13 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar14 = iVar11 + 0x11;
    if ((uVar13 / 6 & 1) != uVar10) {
      uVar8 = 0xff;
    }
    local_138[(int)(uVar13 * 4)] = uVar8;
    local_138[(longlong)iVar4 + 0x41] = uVar8;
    local_138[(longlong)iVar4 + 0x42] = 0;
    local_138[(longlong)iVar4 + 0x43] = 0xff;
    uVar10 = uVar14 & 0x80000001;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
    }
    uVar6 = uVar7;
    if ((uVar14 / 6 & 1) != uVar10) {
      uVar6 = 0xff;
    }
    uVar12 = (ulonglong)(iVar11 + 0x12U);
    local_138[(int)(uVar14 * 4)] = (char)uVar6;
    local_138[(longlong)iVar4 + 0x45] = (char)uVar6;
    local_138[(longlong)iVar4 + 0x46] = 0;
    uVar6 = (ulonglong)(iVar4 + 0x48);
    local_138[(longlong)iVar4 + 0x47] = 0xff;
  } while (iVar11 + 0x12U < 0x24);
  local_68 = 0;
  local_a0 = 1;
  local_78 = 0;
  lStack_70 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_a8 = 0x600000006;
  local_48[2] = 0;
  uVar2 = FUN_1400eb090(uVar2);
  FUN_1400eb220(local_48,local_138,6,6,uVar2);
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x28))
            ((longlong *)**(undefined8 **)(param_1 + 0x138),&local_a8,local_48[0],&local_78);
  local_60 = *(undefined4 *)(param_1 + 0x160);
  if (local_78 == 0) {
    local_5c = 8;
  }
  else {
    local_5c = (*(uint *)(param_1 + 0x1c) & 0x2000000 | 0x4000000) >> 0x18;
  }
  local_54 = local_a0;
  local_58 = 0;
  if ((local_78 != 0) || (lStack_70 != 0)) {
    lVar5 = lStack_70;
    if (local_78 != 0) {
      lVar5 = local_78;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x138) + 0x38))
              ((longlong *)**(undefined8 **)(param_1 + 0x138),lVar5,&local_60,&local_68);
  }
  FUN_1400ef8d0(param_1 + 0x140,&local_78);
  if (local_48[0] != 0) {
    uVar6 = local_48[2] - local_48[0] & 0xfffffffffffffff0;
    lVar5 = local_48[0];
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(local_48[0] + -8);
      if (0x1f < (local_48[0] - lVar5) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 0x27;
    }
    thunk_FUN_14028af80(lVar5,uVar6);
  }
  return;
}

