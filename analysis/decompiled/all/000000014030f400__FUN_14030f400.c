// Function: FUN_14030f400
// Addr: 14030f400
// Size: 564 bytes


void FUN_14030f400(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 uVar8;
  uint uVar9;
  code *pcVar10;
  code *pcVar11;
  uint uVar12;
  code *pcVar13;
  
  uVar12 = *(uint *)(param_1 + 0x3f);
  uVar1 = *(ushort *)(param_1 + 0x1d);
  param_1[8] = param_1[0x1d];
  param_1[9] = param_1[0x1e];
  param_1[10] = param_1[0x1f];
  param_1[0xb] = param_1[0x20];
  param_1[0xc] = param_1[0x21];
  param_1[0xd] = param_1[0x22];
  param_1[0xe] = param_1[0x23];
  param_1[0xf] = param_1[0x1d];
  param_1[0x10] = param_1[0x1e];
  param_1[0x11] = param_1[0x1f];
  param_1[0x12] = param_1[0x20];
  param_1[0x13] = param_1[0x21];
  param_1[0x14] = param_1[0x22];
  param_1[0x15] = param_1[0x23];
  param_1[0x16] = param_1[0x1d];
  param_1[0x17] = param_1[0x1e];
  param_1[0x18] = param_1[0x1f];
  param_1[0x19] = param_1[0x20];
  param_1[0x1a] = param_1[0x21];
  param_1[0x1b] = param_1[0x22];
  param_1[0x1c] = param_1[0x23];
  uVar9 = (uVar1 + uVar12) * 2;
  if (uVar9 < 0x1e) {
    uVar9 = 0x1e;
  }
  if (uVar9 < *(ushort *)(param_1 + 0x24)) {
    uVar8 = (undefined2)uVar9;
    if (0xffff < uVar9) {
      uVar8 = 0xffff;
    }
    *(undefined2 *)(param_1 + 0x24) = uVar8;
  }
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0;
  if (uVar1 == 0) {
    uVar12 = uVar12 * 0x16 + 300;
  }
  else {
    uVar9 = (uint)uVar1 * 10;
    if (uVar9 < 0x32) {
      uVar9 = 0x32;
    }
    uVar12 = uVar12 / 10;
    if (uVar12 < 0x32) {
      uVar12 = 0x32;
    }
    uVar12 = uVar12 + uVar9;
  }
  *(uint *)(param_1 + 0x66) = uVar12;
  uVar9 = *(int *)(*param_1 + 0x10) * 100;
  if (uVar9 < uVar12) {
    *(uint *)(param_1 + 0x66) = uVar9;
    uVar12 = uVar9;
  }
  *(uint *)(param_1 + 0x67) = uVar12;
  if (*(short *)((longlong)param_1 + 0x15c) == *(short *)((longlong)param_1 + 0x15e)) {
    lVar7 = 0x14030b410;
    pcVar10 = (code *)0x1403101b0;
    pcVar11 = (code *)&LAB_14030b500;
    pcVar13 = (code *)&LAB_140309460;
  }
  else {
    lVar7 = 0x14030b450;
    pcVar10 = FUN_1403101f0;
    pcVar11 = FUN_14030b510;
    pcVar13 = FUN_140309470;
  }
  param_1[0x60] = (longlong)pcVar13;
  param_1[0x61] = (longlong)pcVar11;
  param_1[0x62] = (longlong)pcVar10;
  param_1[99] = lVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)((longlong)param_1 + 0x194) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)((longlong)param_1 + 0x19c) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)((longlong)param_1 + 0x1a4) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = uVar6;
  uVar2 = *(undefined4 *)(param_2 + 0xbc);
  uVar3 = *(undefined4 *)(param_2 + 0xc0);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  *(undefined4 *)(param_1 + 0x39) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0xc4);
  uVar3 = *(undefined4 *)(param_2 + 200);
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x59] = (longlong)&LAB_14030b6a0;
  *(undefined4 *)(param_1 + 0x39) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar3;
  *(undefined4 *)(param_1 + 0x3a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar5;
  FUN_1403092f0(param_1);
  *(uint *)((longlong)param_1 + 0x324) = *(uint *)((longlong)param_1 + 0x324) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014030f641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[3])();
  return;
}

