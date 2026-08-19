// Function: FUN_14019e210
// Addr: 14019e210
// Size: 156 bytes


longlong FUN_14019e210(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)param_1[2]) {
    *puVar1 = *param_2;
    lVar5 = param_1[1];
    param_1[1] = lVar5 + 8;
    return lVar5;
  }
  uVar9 = (longlong)puVar1 - *param_1;
  lVar5 = (longlong)uVar9 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar8 = lVar5 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    if (uVar8 < 0x2000000000000000) {
      uVar8 = uVar8 * 8;
      if (uVar8 == 0) {
        uVar4 = 0;
        puVar7 = auStack_58;
      }
      else if (uVar8 < 0x1000) {
        uVar4 = func_0x00014028aff0();
      }
      else {
        if (uVar8 + 0x27 <= uVar8) goto LAB_14019e35c;
        lVar5 = func_0x00014028aff0(uVar8 + 0x27);
        if (lVar5 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar5 = (*pcVar3)(5);
          puVar6 = auStack_50;
        }
        uVar4 = lVar5 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar4 - 8) = lVar5;
        puVar7 = puVar6;
      }
      *(undefined8 *)((uVar9 & 0xfffffffffffffff8) + uVar4) = *param_2;
      puVar2 = (undefined8 *)param_1[1];
      lVar5 = *param_1;
      if (puVar1 == puVar2) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar7 + -8) = &UNK_14019e333;
        FUN_1404211c0(uVar4,lVar5,(longlong)puVar2 - lVar5);
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_14019e320;
      FUN_1404211c0(uVar4,lVar5,(longlong)puVar1 - lVar5);
    }
  }
LAB_14019e35c:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

