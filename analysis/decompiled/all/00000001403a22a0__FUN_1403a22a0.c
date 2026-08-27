// Function: FUN_1403a22a0
// Addr: 1403a22a0
// Size: 591 bytes


longlong FUN_1403a22a0(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  ulonglong uVar10;
  
  if (param_2 != 0) {
    lVar4 = _malloc_base((ulonglong)param_2 * 0x260);
    if (lVar4 != 0) {
      uVar10 = 0;
      if (param_1[1] != 0) {
        do {
          lVar13 = uVar10 * 0x260;
          puVar1 = (undefined1 *)(lVar13 + lVar4);
          FUN_1404217a0(puVar1,0,0x260);
          lVar2 = lVar13 + lVar4;
          *(undefined8 *)(lVar2 + 0x48) = 0;
          puVar7 = (undefined2 *)(lVar4 + 0x60 + lVar13);
          *(undefined8 *)(lVar2 + 0x58) = 0;
          *puVar1 = 1;
          *(undefined1 *)(lVar2 + 0x30) = 1;
          *(undefined8 *)(lVar2 + 0x34) = 0;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          *(undefined8 *)(lVar2 + 0x50) = 0;
          puVar12 = puVar7;
          for (lVar5 = 0x100; puVar3 = puVar7, lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          }
          for (; puVar3 != (undefined2 *)(lVar4 + 0x260 + lVar13); puVar3 = puVar3 + 1) {
            *puVar3 = 0xffff;
          }
          lVar5 = *(longlong *)(param_1 + 2) + lVar13;
          FUN_140397880(puVar1,lVar5);
          FUN_140397880(lVar2 + 0x30);
          uVar6 = 0;
          do {
            puVar7[uVar6] = *(undefined2 *)(lVar5 + 0x60 + uVar6 * 2);
            *(undefined2 *)(lVar5 + 0x60 + uVar6 * 2) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x100);
          lVar2 = *(longlong *)(param_1 + 2);
          puVar8 = (undefined4 *)(lVar2 + 0x54 + lVar13);
          puVar11 = (undefined8 *)(lVar2 + 0x58 + lVar13);
          if (1 < *(int *)(lVar13 + 0x50 + lVar2) + 1U) {
            *puVar8 = 0;
            thunk_FUN_1402d9040(*puVar11);
          }
          *puVar8 = 0;
          *puVar11 = 0;
          puVar8 = (undefined4 *)(lVar2 + 0x44 + lVar13);
          *(undefined4 *)(lVar13 + 0x50 + lVar2) = 0;
          puVar11 = (undefined8 *)(lVar2 + 0x48 + lVar13);
          if (1 < *(int *)(lVar13 + 0x40 + lVar2) + 1U) {
            *puVar8 = 0;
            thunk_FUN_1402d9040(*puVar11);
          }
          *puVar8 = 0;
          *puVar11 = 0;
          puVar8 = (undefined4 *)(lVar2 + 0x24 + lVar13);
          *(undefined4 *)(lVar13 + 0x40 + lVar2) = 0;
          puVar11 = (undefined8 *)(lVar2 + 0x28 + lVar13);
          if (1 < *(int *)(lVar13 + 0x20 + lVar2) + 1U) {
            *puVar8 = 0;
            thunk_FUN_1402d9040(*puVar11);
          }
          *puVar8 = 0;
          *puVar11 = 0;
          puVar8 = (undefined4 *)(lVar2 + 0x14 + lVar13);
          *(undefined4 *)(lVar13 + 0x20 + lVar2) = 0;
          puVar11 = (undefined8 *)(lVar2 + 0x18 + lVar13);
          if (1 < *(int *)(lVar13 + 0x10 + lVar2) + 1U) {
            *puVar8 = 0;
            thunk_FUN_1402d9040(*puVar11);
          }
          *(undefined4 *)(lVar13 + 0x10 + lVar2) = 0;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *puVar8 = 0;
          *puVar11 = 0;
        } while (uVar9 < (uint)param_1[1]);
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

