// Function: FUN_1400e5e80
// Addr: 1400e5e80
// Size: 493 bytes


void FUN_1400e5e80(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar7 = auStack_68;
  uVar10 = *(ulonglong *)(param_1 + 0x90);
  uVar12 = *(ulonglong *)(param_1 + 0xb0);
  uVar11 = *(longlong *)(param_1 + 0x98) - uVar10;
  if (uVar12 < (ulonglong)((longlong)uVar11 >> 5)) {
    lVar5 = uVar12 * 0x20;
    *(undefined4 *)(lVar5 + uVar10) = param_2;
    *(undefined8 *)(lVar5 + 8 + uVar10) = param_3;
    *(undefined8 *)(lVar5 + 0x10 + uVar10) = *(undefined8 *)(param_1 + 8);
    goto LAB_1400e603b;
  }
  if (*(ulonglong *)(param_1 + 0xb8) <= uVar12) {
LAB_1400e605e:
                    /* WARNING: Subroutine does not return */
    FUN_14028c340(0xc);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar8 = auStack_68;
  if (*(longlong *)(param_1 + 0x98) == *(longlong *)(param_1 + 0xa0)) {
    uVar9 = (longlong)(*(longlong *)(param_1 + 0xa0) - uVar10) >> 5;
    uVar12 = 0x7ffffffffffffff;
    uVar6 = uVar9 >> 1;
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (uVar9 <= 0x7ffffffffffffff - uVar6) {
      uVar12 = uVar6 + uVar9;
    }
    if (uVar12 <= uVar9) goto LAB_1400e605e;
    if (0x7ffffffffffffff < uVar12) {
LAB_1400e6069:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar12 = uVar12 * 0x20;
    if (uVar12 == 0) {
      uVar6 = 0;
LAB_1400e5f74:
      FUN_1404210f0(uVar6,uVar10,uVar11);
      *(ulonglong *)(param_1 + 0x90) = uVar6;
      *(ulonglong *)(param_1 + 0xa0) = uVar12 + uVar6;
      *(ulonglong *)(param_1 + 0x98) = (uVar11 & 0xffffffffffffffe0) + uVar6;
      if (*(char *)(param_1 + 0xa8) == '\0') {
        *(undefined1 *)(param_1 + 0xa8) = 1;
        puVar8 = auStack_68;
        goto LAB_1400e5fe2;
      }
      uVar9 = uVar9 * 0x20;
      if (0xfff < uVar9) {
        puVar1 = (ulonglong *)(uVar10 - 8);
        uVar10 = (uVar10 - *puVar1) - 8;
        if (0x1f < uVar10) goto LAB_1400e5fd0;
        uVar9 = uVar9 + 0x27;
        uVar10 = *puVar1;
        puVar7 = auStack_68;
      }
    }
    else {
      if (uVar12 < 0x1000) {
        uVar6 = FUN_14028af20(uVar12);
        goto LAB_1400e5f74;
      }
      if (uVar12 + 0x27 <= uVar12) goto LAB_1400e6069;
      lVar5 = FUN_14028af20();
      if (lVar5 != 0) {
        uVar6 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar6 - 8) = lVar5;
        goto LAB_1400e5f74;
      }
LAB_1400e5fd0:
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar7 = auStack_60;
    }
    *(undefined8 *)(puVar7 + -8) = 0x1400e5fe2;
    thunk_FUN_14028af80(uVar10,uVar9);
    puVar8 = puVar7;
  }
LAB_1400e5fe2:
  puVar3 = *(undefined4 **)(param_1 + 0x98);
  *puVar3 = *(undefined4 *)(puVar8 + 0x78);
  *(undefined8 *)(puVar3 + 4) = uVar2;
  puVar3[1] = 0;
  *(undefined8 *)(puVar3 + 2) = param_3;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
LAB_1400e603b:
  *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + 1;
  return;
}

