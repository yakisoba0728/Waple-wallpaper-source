// Function: FUN_140057630
// Addr: 140057630
// Size: 153 bytes


void FUN_140057630(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = (undefined8 *)*param_1;
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      FUN_14028fdf0(*puVar5);
    }
    lVar2 = *param_1;
    lVar4 = lVar2;
    puVar6 = auStack_28;
    if ((0xfff < (ulonglong)((param_1[2] - lVar2 >> 3) * 8)) &&
       (lVar4 = *(longlong *)(lVar2 + -8), puVar6 = auStack_28, 0x1f < (lVar2 - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar6 = auStack_20;
    }
    *(undefined8 *)(puVar6 + -8) = 0x1400576b1;
    thunk_FUN_14028af80(lVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

