// Function: FUN_140396680
// Addr: 140396680
// Size: 285 bytes


void FUN_140396680(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar4 = 0;
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar5 = 0;
      lVar2 = uVar4 * 8;
      if ((*(longlong *)(*plVar1 + lVar2) != 0) &&
         (puVar3 = *(uint **)(*plVar1 + lVar2), *puVar3 != 0)) {
        do {
          puVar7 = puVar3 + uVar5 * 0x8c + 8;
          if (1 < puVar3[uVar5 * 0x8c + 6] + 1) {
            puVar3[uVar5 * 0x8c + 7] = 0;
            thunk_FUN_1402d9040(*(undefined8 *)puVar7);
          }
          puVar3[uVar5 * 0x8c + 7] = 0;
          puVar3[uVar5 * 0x8c + 6] = 0;
          puVar7[0] = 0;
          puVar7[1] = 0;
          puVar7 = puVar3 + uVar5 * 0x8c + 0xc;
          if (1 < puVar3[uVar5 * 0x8c + 10] + 1) {
            puVar3[uVar5 * 0x8c + 0xb] = 0;
            thunk_FUN_1402d9040(*(undefined8 *)puVar7);
          }
          puVar3[uVar5 * 0x8c + 0xb] = 0;
          puVar3[uVar5 * 0x8c + 10] = 0;
          puVar7[0] = 0;
          puVar7[1] = 0;
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
        } while (uVar6 < *puVar3);
      }
      thunk_FUN_1402d9040(*(undefined8 *)(*plVar1 + lVar2));
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  thunk_FUN_1402d9040(*plVar1);
  FUN_1403bde80(param_1);
  FUN_140396fb0(param_1 + 0x18);
  return;
}

