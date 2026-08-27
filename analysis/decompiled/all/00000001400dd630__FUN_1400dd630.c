// Function: FUN_1400dd630
// Addr: 1400dd630
// Size: 332 bytes


undefined2 * FUN_1400dd630(longlong *param_1,undefined2 *param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar8 = auStack_58;
  puVar9 = auStack_58;
  puVar7 = (undefined2 *)param_1[1];
  if (puVar7 != (undefined2 *)param_1[2]) {
    *puVar7 = *param_2;
    puVar7 = (undefined2 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 1);
    return puVar7;
  }
  uVar10 = (longlong)puVar7 - *param_1;
  lVar6 = (longlong)uVar10 >> 1;
  if (lVar6 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 1;
  if (uVar4 <= 0x7fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar13 = uVar1;
    if (uVar1 <= uVar4) {
      uVar13 = uVar4;
    }
    if (uVar13 < 0x8000000000000000) {
      uVar4 = uVar13 * 2;
      if (uVar4 == 0) {
        puVar12 = (undefined2 *)0x0;
        puVar9 = auStack_58;
      }
      else if (uVar4 < 0x1000) {
        puVar12 = (undefined2 *)FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_1400dd778;
        lVar6 = FUN_14028af20(uVar4 + 0x27);
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar8 = auStack_50;
        }
        puVar12 = (undefined2 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar12 + -4) = lVar6;
        puVar9 = puVar8;
      }
      puVar11 = (undefined2 *)((uVar10 & 0xfffffffffffffffe) + (longlong)puVar12);
      *puVar11 = *param_2;
      puVar2 = (undefined2 *)*param_1;
      if (puVar7 == (undefined2 *)param_1[1]) {
        lVar6 = param_1[1] - (longlong)puVar2;
        puVar5 = puVar12;
        puVar7 = puVar2;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x1400dd73c;
        FUN_1404210f0(puVar12,puVar2,(longlong)puVar7 - (longlong)puVar2);
        puVar5 = puVar11 + 1;
        lVar6 = param_1[1] - (longlong)puVar7;
      }
      *(undefined8 *)(puVar9 + -8) = 0x1400dd74f;
      FUN_1404210f0(puVar5,puVar7,lVar6);
      *(undefined8 *)(puVar9 + -8) = 0x1400dd760;
      FUN_1400e4750(param_1,puVar12,uVar1,uVar13);
      return puVar11;
    }
  }
LAB_1400dd778:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

