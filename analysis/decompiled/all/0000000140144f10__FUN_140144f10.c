// Function: FUN_140144f10
// Addr: 140144f10
// Size: 750 bytes


void FUN_140144f10(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_88 [72];
  
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x54);
  lVar10 = param_1[10];
  lVar11 = param_1[0xb];
  uVar8 = *(undefined4 *)((longlong)param_1 + 0x5c);
  lVar12 = param_1[0xc];
  local_98 = *(undefined4 *)((longlong)param_1 + 100);
  local_94 = (undefined4)param_1[0xd];
  local_90 = *(undefined4 *)((longlong)param_1 + 0x6c);
  uVar14 = param_1[1];
  lVar13 = 0x1c0;
  if (0x1c0 < ((uint)(uVar14 * 8) & 0x1ff | 1)) {
    lVar13 = 0x3c0;
  }
  uVar15 = (uVar14 * 8 & 0xfffffffffffffe00) + lVar13 >> 3;
  if (uVar14 < 0x40) {
    *(undefined1 *)(uVar14 + 0x10 + (longlong)param_1) = 0x80;
  }
  else {
    local_88[0] = 0x80;
  }
  lVar13 = param_1[1];
  uVar14 = lVar13 + 1;
  if (uVar14 < 0x40) {
    uStack_c0 = 0x140144fd8;
    FUN_1404217a0((longlong)param_1 + lVar13 + 0x11,0,0x3f - lVar13);
    uVar14 = 0x40;
  }
  if (uVar14 < uVar15) {
    uStack_c0 = 0x140144ff4;
    FUN_1404217a0((longlong)&uStack_c8 + uVar14,0,uVar15 - uVar14);
  }
  uVar14 = param_1[1] + *param_1;
  if (uVar15 < 0x40) {
    plVar9 = param_1 + 2;
    lVar13 = (longlong)param_1 + 0x11;
    lVar1 = (longlong)param_1 + 0x12;
    lVar2 = (longlong)param_1 + 0x13;
    lVar3 = (longlong)param_1 + 0x14;
    lVar4 = (longlong)param_1 + 0x15;
    lVar5 = (longlong)param_1 + 0x16;
    lVar6 = (longlong)param_1 + 0x17;
  }
  else {
    plVar9 = &uStack_c8;
    lVar13 = (longlong)&uStack_c8 + 1;
    lVar1 = (longlong)&uStack_c8 + 2;
    lVar2 = (longlong)&uStack_c8 + 3;
    lVar3 = (longlong)&uStack_c8 + 4;
    lVar4 = (longlong)&uStack_c8 + 5;
    lVar5 = (longlong)&uStack_c8 + 6;
    lVar6 = (longlong)&uStack_c8 + 7;
  }
  *(char *)((longlong)plVar9 + uVar15) = (char)(uVar14 >> 0x35);
  *(char *)(lVar13 + uVar15) = (char)(uVar14 >> 0x2d);
  *(char *)(lVar1 + uVar15) = (char)(uVar14 >> 0x25);
  *(char *)(lVar2 + uVar15) = (char)(uVar14 >> 0x1d);
  *(char *)(lVar3 + uVar15) = (char)(uVar14 >> 0x15);
  *(char *)(lVar4 + uVar15) = (char)(uVar14 >> 0xd);
  *(char *)(lVar6 + uVar15) = (char)uVar14 << 3;
  *(char *)(lVar5 + uVar15) = (char)(uVar14 >> 5);
  uStack_c0 = 0x1401450ba;
  FUN_140141a80(param_1,param_1 + 2);
  if (0x40 < uVar15) {
    uStack_c0 = 0x1401450cd;
    FUN_140141a80(param_1,local_88);
  }
  *param_2 = *(undefined1 *)((longlong)param_1 + 0x53);
  param_2[1] = *(undefined1 *)((longlong)param_1 + 0x52);
  param_2[2] = *(undefined1 *)((longlong)param_1 + 0x51);
  param_2[3] = (char)param_1[10];
  *(int *)(param_1 + 10) = (int)lVar10;
  param_2[4] = *(undefined1 *)((longlong)param_1 + 0x57);
  param_2[5] = *(undefined1 *)((longlong)param_1 + 0x56);
  param_2[6] = *(undefined1 *)((longlong)param_1 + 0x55);
  param_2[7] = *(undefined1 *)((longlong)param_1 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar7;
  param_2[8] = *(undefined1 *)((longlong)param_1 + 0x5b);
  param_2[9] = *(undefined1 *)((longlong)param_1 + 0x5a);
  param_2[10] = *(undefined1 *)((longlong)param_1 + 0x59);
  param_2[0xb] = (char)param_1[0xb];
  *(int *)(param_1 + 0xb) = (int)lVar11;
  param_2[0xc] = *(undefined1 *)((longlong)param_1 + 0x5f);
  param_2[0xd] = *(undefined1 *)((longlong)param_1 + 0x5e);
  param_2[0xe] = *(undefined1 *)((longlong)param_1 + 0x5d);
  param_2[0xf] = *(undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar8;
  param_2[0x10] = *(undefined1 *)((longlong)param_1 + 99);
  param_2[0x11] = *(undefined1 *)((longlong)param_1 + 0x62);
  param_2[0x12] = *(undefined1 *)((longlong)param_1 + 0x61);
  param_2[0x13] = (char)param_1[0xc];
  *(int *)(param_1 + 0xc) = (int)lVar12;
  param_2[0x14] = *(undefined1 *)((longlong)param_1 + 0x67);
  param_2[0x15] = *(undefined1 *)((longlong)param_1 + 0x66);
  param_2[0x16] = *(undefined1 *)((longlong)param_1 + 0x65);
  param_2[0x17] = *(undefined1 *)((longlong)param_1 + 100);
  *(undefined4 *)((longlong)param_1 + 100) = local_98;
  param_2[0x18] = *(undefined1 *)((longlong)param_1 + 0x6b);
  param_2[0x19] = *(undefined1 *)((longlong)param_1 + 0x6a);
  param_2[0x1a] = *(undefined1 *)((longlong)param_1 + 0x69);
  param_2[0x1b] = (char)param_1[0xd];
  *(undefined4 *)(param_1 + 0xd) = local_94;
  param_2[0x1c] = *(undefined1 *)((longlong)param_1 + 0x6f);
  param_2[0x1d] = *(undefined1 *)((longlong)param_1 + 0x6e);
  param_2[0x1e] = *(undefined1 *)((longlong)param_1 + 0x6d);
  param_2[0x1f] = *(undefined1 *)((longlong)param_1 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_90;
  return;
}

