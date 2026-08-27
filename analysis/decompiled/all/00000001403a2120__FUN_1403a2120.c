// Function: FUN_1403a2120
// Addr: 1403a2120
// Size: 376 bytes


longlong FUN_1403a2120(int *param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 *puVar9;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    lVar5 = _malloc_base((ulonglong)param_2 * 0x28);
    if (lVar5 != 0) {
      uVar8 = 0;
      if (param_1[1] != 0) {
        do {
          lVar1 = uVar8 * 0x28;
          *(undefined8 *)(lVar1 + lVar5) = 0;
          *(undefined8 *)(lVar1 + 0x18 + lVar5) = 0;
          *(undefined8 *)(lVar1 + 0x20 + lVar5) = 0;
          *(undefined8 *)(lVar1 + 8 + lVar5) = 0;
          *(undefined8 *)(lVar1 + 0x10 + lVar5) = 0;
          puVar6 = (undefined4 *)(*(longlong *)(param_1 + 2) + lVar1);
          *(undefined4 *)(lVar1 + lVar5) = *puVar6;
          uVar2 = *(undefined4 *)(lVar1 + 8 + lVar5);
          *(undefined4 *)(lVar1 + 8 + lVar5) = puVar6[2];
          puVar6[2] = uVar2;
          uVar2 = *(undefined4 *)(lVar1 + 0xc + lVar5);
          *(undefined4 *)(lVar1 + 0xc + lVar5) = puVar6[3];
          puVar6[3] = uVar2;
          uVar3 = *(undefined8 *)(lVar1 + 0x10 + lVar5);
          *(undefined8 *)(lVar1 + 0x10 + lVar5) = *(undefined8 *)(puVar6 + 4);
          *(undefined8 *)(puVar6 + 4) = uVar3;
          *(undefined8 *)(lVar1 + 0x18 + lVar5) = *(undefined8 *)(puVar6 + 6);
          *(undefined4 *)(lVar1 + 0x20 + lVar5) = puVar6[8];
          lVar4 = *(longlong *)(param_1 + 2);
          puVar6 = (undefined4 *)(lVar4 + 0xc + lVar1);
          puVar9 = (undefined8 *)(lVar4 + 0x10 + lVar1);
          if (1 < *(int *)(lVar1 + 8 + lVar4) + 1U) {
            *puVar6 = 0;
            thunk_FUN_1402d9040(*puVar9);
          }
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
          *puVar6 = 0;
          *(undefined4 *)(lVar1 + 8 + lVar4) = 0;
          *puVar9 = 0;
        } while (uVar7 < (uint)param_1[1]);
      }
      if (1 < *param_1 + 1U) {
        thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
      }
    }
    return lVar5;
  }
  if (1 < *param_1 + 1U) {
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 2));
  }
  return 0;
}

