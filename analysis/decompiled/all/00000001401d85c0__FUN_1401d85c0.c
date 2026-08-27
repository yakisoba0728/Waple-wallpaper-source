// Function: FUN_1401d85c0
// Addr: 1401d85c0
// Size: 398 bytes


longlong FUN_1401d85c0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar7 = auStack_58;
  puVar8 = auStack_58;
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)param_1[2]) {
    *puVar6 = *param_2;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
    lVar4 = param_1[1];
    param_1[1] = lVar4 + 0xc;
    return lVar4;
  }
  lVar4 = (longlong)puVar6 - *param_1;
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  lVar4 = (lVar4 >> 1) - (lVar4 >> 0x3f);
  if (lVar4 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar10 = (param_1[2] - *param_1 >> 2) * -0x5555555555555555;
  uVar3 = 0x1555555555555555 - (uVar10 >> 1);
  if (uVar10 < uVar3 || uVar10 - uVar3 == 0) {
    uVar3 = lVar4 + 1;
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar9 = uVar3;
    if (uVar3 <= uVar10) {
      uVar9 = uVar10;
    }
    if (uVar9 < 0x1555555555555556) {
      uVar10 = uVar9 * 0xc;
      if (uVar10 == 0) {
        uVar10 = 0;
        puVar8 = auStack_58;
      }
      else if (uVar10 < 0x1000) {
        uVar10 = FUN_14028af20();
      }
      else {
        if (uVar10 + 0x27 <= uVar10) goto LAB_1401d874a;
        lVar11 = FUN_14028af20(uVar10 + 0x27);
        if (lVar11 == 0) {
          pcVar2 = (code *)swi(0x29);
          lVar11 = (*pcVar2)(5);
          puVar7 = auStack_50;
        }
        uVar10 = lVar11 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar11;
        puVar8 = puVar7;
      }
      *(undefined8 *)(uVar10 + lVar4 * 0xc) = *param_2;
      lVar4 = uVar10 + lVar4 * 0xc;
      *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 1);
      puVar1 = (undefined8 *)*param_1;
      if (puVar6 == (undefined8 *)param_1[1]) {
        lVar11 = param_1[1] - (longlong)puVar1;
        uVar5 = uVar10;
        puVar6 = puVar1;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x1401d870e;
        FUN_1404210f0(uVar10,puVar1,(longlong)puVar6 - (longlong)puVar1);
        uVar5 = lVar4 + 0xc;
        lVar11 = param_1[1] - (longlong)puVar6;
      }
      *(undefined8 *)(puVar8 + -8) = 0x1401d8721;
      FUN_1404210f0(uVar5,puVar6,lVar11);
      *(undefined8 *)(puVar8 + -8) = 0x1401d8732;
      FUN_1401dc9c0(param_1,uVar10,uVar3,uVar9);
      return lVar4;
    }
  }
LAB_1401d874a:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

