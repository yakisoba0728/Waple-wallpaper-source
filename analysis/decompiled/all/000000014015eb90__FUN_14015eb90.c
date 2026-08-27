// Function: FUN_14015eb90
// Addr: 14015eb90
// Size: 513 bytes


undefined8 * FUN_14015eb90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [32];
  
  param_1[1] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14048b810;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[5] = 1;
  FUN_14000d970(param_1 + 7);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar3 = FUN_14028af20(0x58);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  param_1[0x1f] = lVar3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 7;
  param_1[0x25] = 8;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  puVar4 = (undefined8 *)param_1[0x22];
  puVar9 = (undefined8 *)param_1[0x21];
  uVar1 = param_1[0x1f];
  if ((ulonglong)((longlong)puVar4 - (longlong)puVar9) < 0x80) {
    puVar4 = (undefined8 *)FUN_14028af20(0x80);
    lVar3 = param_1[0x21];
    if (7 < (ulonglong)(param_1[0x23] - lVar3)) {
      lVar5 = lVar3;
      puVar8 = auStack_48;
      if ((0xfff < (ulonglong)((param_1[0x23] - lVar3 >> 3) * 8)) &&
         (lVar5 = *(longlong *)(lVar3 + -8), puVar8 = auStack_48, 0x1f < (lVar3 - lVar5) - 8U)) {
        pcVar2 = (code *)swi(0x29);
        lVar5 = (*pcVar2)(5);
        puVar8 = auStack_40;
      }
      *(undefined8 *)(puVar8 + -8) = 0x14015ed16;
      thunk_FUN_14028af80(lVar5);
    }
    puVar9 = puVar4 + 0x10;
    param_1[0x21] = puVar4;
    param_1[0x22] = puVar9;
    param_1[0x23] = puVar9;
    for (; puVar4 != puVar9; puVar4 = puVar4 + 1) {
      *puVar4 = uVar1;
    }
  }
  else {
    uVar6 = ((longlong)puVar4 - (longlong)puVar9) + 7;
    uVar7 = uVar6 >> 3;
    if (puVar4 < puVar9) {
      uVar7 = 0;
    }
    if (uVar7 != 0) {
      uVar7 = uVar6 & 0xfffffffffffffff8;
      if (puVar4 < puVar9) {
        uVar7 = 0;
      }
      for (uVar7 = uVar7 / 8; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
      }
    }
  }
  param_1[0x26] = 0;
  return param_1;
}

