// Function: FUN_140416440
// Addr: 140416440
// Size: 316 bytes


void FUN_140416440(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (*(char *)(param_1 + 4) != '\0') {
    lVar2 = FUN_1403c5100(*(longlong *)(param_1 + 0x20) + 0x100);
    uVar6 = (uint)*(byte *)(lVar2 + 8) * 0x100 + (uint)*(byte *)(lVar2 + 9);
    uVar7 = uVar6;
    if (param_3 <= uVar6) {
      uVar7 = param_3;
    }
    if (uVar6 == 0) {
      piVar3 = (int *)0x0;
      uVar5 = 0;
      puVar4 = (undefined4 *)0x0;
    }
    else {
      uVar5 = (ulonglong)uVar6;
      piVar3 = (int *)_calloc_base(uVar6,4);
      puVar4 = (undefined4 *)_calloc_base(uVar6,4);
      if ((piVar3 == (int *)0x0) || (puVar4 == (undefined4 *)0x0)) {
        thunk_FUN_1402d9040(piVar3);
        thunk_FUN_1402d9040(puVar4);
        return;
      }
    }
    if ((uVar7 != 0) && (uVar7 != 0)) {
      FUN_1404210f0(piVar3,param_2);
    }
    puVar8 = puVar4;
    if (uVar6 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = 0x7fc00000;
        puVar8 = puVar8 + 1;
      }
    }
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x80));
    thunk_FUN_1402d9040(*(undefined8 *)(param_1 + 0x88));
    *(int **)(param_1 + 0x80) = piVar3;
    *(undefined4 **)(param_1 + 0x88) = puVar4;
    *(uint *)(param_1 + 0x7c) = uVar6;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (*piVar3 != 0) {
        uVar1 = 1;
        goto LAB_14041654e;
      }
      piVar3 = piVar3 + 1;
    }
    uVar1 = 0;
LAB_14041654e:
    *(undefined1 *)(param_1 + 0x78) = uVar1;
    FUN_1403b2f70(param_1);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

