// Function: FUN_1400786b0
// Addr: 1400786b0
// Size: 301 bytes


undefined4 * FUN_1400786b0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = FUN_14028af20(0x18);
  *(longlong *)lVar4 = lVar4;
  *(longlong *)(lVar4 + 8) = lVar4;
  *(longlong *)(param_1 + 2) = lVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  uVar2 = *(undefined8 *)(param_1 + 2);
  if (*(ulonglong *)(param_1 + 8) < 0x80) {
    puVar5 = (undefined8 *)FUN_14028af20(0x80);
    lVar4 = *(longlong *)(param_1 + 6);
    if (7 < (ulonglong)(*(longlong *)(param_1 + 10) - lVar4)) {
      lVar6 = lVar4;
      puVar8 = auStack_28;
      if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 10) - lVar4 >> 3) * 8)) &&
         (lVar6 = *(longlong *)(lVar4 + -8), puVar8 = auStack_28, 0x1f < (lVar4 - lVar6) - 8U)) {
        pcVar3 = (code *)swi(0x29);
        lVar6 = (*pcVar3)(5);
        puVar8 = auStack_20;
      }
      *(undefined8 *)(puVar8 + -8) = 0x140078773;
      thunk_FUN_14028af80(lVar6);
    }
    puVar1 = puVar5 + 0x10;
    *(undefined8 **)(param_1 + 6) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar1;
    *(undefined8 **)(param_1 + 10) = puVar1;
    if (puVar5 != puVar1) {
      do {
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar1);
      return param_1;
    }
  }
  else {
    uVar7 = *(ulonglong *)(param_1 + 8) + 7;
    if (7 < uVar7) {
      puVar5 = (undefined8 *)0x0;
      for (uVar7 = (uVar7 & 0xfffffffffffffff8) / 8; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return param_1;
}

