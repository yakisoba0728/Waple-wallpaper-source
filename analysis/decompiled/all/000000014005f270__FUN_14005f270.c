// Function: FUN_14005f270
// Addr: 14005f270
// Size: 334 bytes


undefined4 * FUN_14005f270(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar8 = auStack_58;
  puVar9 = auStack_58;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    puVar13 = (undefined4 *)param_1[1];
    *puVar7 = *param_2;
    param_1[1] = (longlong)(puVar13 + 1);
    return puVar13;
  }
  uVar11 = (longlong)puVar7 - *param_1;
  lVar6 = (longlong)uVar11 >> 2;
  if (lVar6 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 2;
  if (uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (uVar10 < 0x4000000000000000) {
      uVar4 = uVar10 * 4;
      if (uVar4 == 0) {
        puVar13 = (undefined4 *)0x0;
        puVar9 = auStack_58;
      }
      else if (uVar4 < 0x1000) {
        puVar13 = (undefined4 *)FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_14005f3ba;
        lVar6 = FUN_14028af20(uVar4 + 0x27);
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar8 = auStack_50;
        }
        puVar13 = (undefined4 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar13 + -2) = lVar6;
        puVar9 = puVar8;
      }
      puVar12 = (undefined4 *)((uVar11 & 0xfffffffffffffffc) + (longlong)puVar13);
      *puVar12 = *param_2;
      puVar2 = (undefined4 *)*param_1;
      if (puVar7 == (undefined4 *)param_1[1]) {
        lVar6 = param_1[1] - (longlong)puVar2;
        puVar5 = puVar13;
        puVar7 = puVar2;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x14005f37e;
        FUN_1404210f0(puVar13,puVar2,(longlong)puVar7 - (longlong)puVar2);
        puVar5 = puVar12 + 1;
        lVar6 = param_1[1] - (longlong)puVar7;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14005f391;
      FUN_1404210f0(puVar5,puVar7,lVar6);
      *(undefined8 *)(puVar9 + -8) = 0x14005f3a2;
      FUN_140038af0(param_1,puVar13,uVar1,uVar10);
      return puVar12;
    }
  }
LAB_14005f3ba:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

