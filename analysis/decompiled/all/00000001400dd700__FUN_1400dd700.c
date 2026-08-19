// Function: FUN_1400dd700
// Addr: 1400dd700
// Size: 151 bytes


longlong FUN_1400dd700(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar6 = auStack_58;
  puVar7 = auStack_58;
  puVar1 = (undefined2 *)param_1[1];
  if (puVar1 != (undefined2 *)param_1[2]) {
    *puVar1 = *param_2;
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 2;
    return lVar5;
  }
  uVar8 = (longlong)puVar1 - *param_1;
  lVar5 = (longlong)uVar8 >> 1;
  if (lVar5 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = param_1[2] - *param_1 >> 1;
  if (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) {
    uVar9 = lVar5 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    if (uVar9 < 0x8000000000000000) {
      uVar9 = uVar9 * 2;
      if (uVar9 == 0) {
        uVar4 = 0;
        puVar7 = auStack_58;
      }
      else if (uVar9 < 0x1000) {
        uVar4 = func_0x00014028aff0();
      }
      else {
        if (uVar9 + 0x27 <= uVar9) goto LAB_1400dd848;
        lVar5 = func_0x00014028aff0(uVar9 + 0x27);
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar6 = auStack_50;
        }
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
        puVar7 = puVar6;
      }
      *(undefined2 *)((uVar8 & 0xfffffffffffffffe) + uVar4) = *param_2;
      puVar2 = (undefined2 *)param_1[1];
      lVar5 = *param_1;
      if (puVar1 == puVar2) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_1400dd81f;
        FUN_1404211c0(uVar4,lVar5,(longlong)puVar2 - lVar5);
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_1400dd80c;
      FUN_1404211c0(uVar4,lVar5,(longlong)puVar1 - lVar5);
    }
  }
LAB_1400dd848:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

