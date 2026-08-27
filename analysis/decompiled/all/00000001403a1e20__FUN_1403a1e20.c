// Function: FUN_1403a1e20
// Addr: 1403a1e20
// Size: 382 bytes


longlong FUN_1403a1e20(int *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar7;
  
  if (param_2 != 0) {
    lVar4 = _malloc_base((ulonglong)param_2 * 0x30);
    if (lVar4 != 0) {
      uVar7 = 0;
      if (param_1[1] != 0) {
        do {
          lVar8 = uVar7 * 0x30;
          *(undefined8 *)(lVar8 + lVar4) = 0;
          *(undefined8 *)(lVar8 + 0x18 + lVar4) = 0;
          *(undefined8 *)(lVar8 + 0x20 + lVar4) = 0;
          *(undefined8 *)(lVar8 + 0x28 + lVar4) = 0;
          *(undefined8 *)(lVar8 + 8 + lVar4) = 0;
          *(undefined8 *)(lVar8 + 0x10 + lVar4) = 0;
          puVar5 = (undefined4 *)(*(longlong *)(param_1 + 2) + lVar8);
          *(undefined4 *)(lVar8 + lVar4) = *puVar5;
          uVar1 = *(undefined4 *)(lVar8 + 8 + lVar4);
          *(undefined4 *)(lVar8 + 8 + lVar4) = puVar5[2];
          puVar5[2] = uVar1;
          uVar1 = *(undefined4 *)(lVar8 + 0xc + lVar4);
          *(undefined4 *)(lVar8 + 0xc + lVar4) = puVar5[3];
          puVar5[3] = uVar1;
          uVar2 = *(undefined8 *)(lVar8 + 0x10 + lVar4);
          *(undefined8 *)(lVar8 + 0x10 + lVar4) = *(undefined8 *)(puVar5 + 4);
          *(undefined8 *)(puVar5 + 4) = uVar2;
          *(undefined4 *)(lVar8 + 0x18 + lVar4) = puVar5[6];
          *(undefined8 *)(lVar8 + 0x20 + lVar4) = *(undefined8 *)(puVar5 + 8);
          *(undefined4 *)(lVar8 + 0x28 + lVar4) = puVar5[10];
          lVar3 = *(longlong *)(param_1 + 2);
          puVar5 = (undefined4 *)(lVar3 + 0xc + lVar8);
          puVar9 = (undefined8 *)(lVar3 + 0x10 + lVar8);
          if (1 < *(int *)(lVar3 + 8 + lVar8) + 1U) {
            *puVar5 = 0;
            thunk_FUN_1402d9040(*puVar9);
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          *puVar5 = 0;
          *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
          *puVar9 = 0;
        } while (uVar6 < (uint)param_1[1]);
      }
      if (1 < *param_1 + 1U) {
        thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
      }
    }
    return lVar4;
  }
  if (1 < *param_1 + 1U) {
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
  }
  return 0;
}

