// Function: FUN_14004ac00
// Addr: 14004ac00
// Size: 367 bytes


undefined8 * FUN_14004ac00(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  
  puVar9 = auStack_38;
  puVar8 = auStack_38;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 2);
    return puVar7;
  }
  uVar12 = (longlong)puVar7 - *param_1;
  lVar6 = (longlong)uVar12 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 4;
  if (uVar4 <= 0xfffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar11 = uVar1;
    if (uVar1 <= uVar4) {
      uVar11 = uVar4;
    }
    if (uVar11 < 0x1000000000000000) {
      puVar10 = (undefined8 *)0x0;
      uVar4 = uVar11 * 0x10;
      if (uVar4 != 0) {
        if (uVar4 < 0x1000) {
          puVar10 = (undefined8 *)FUN_14028af20();
          puVar9 = auStack_38;
        }
        else {
          if (uVar4 + 0x27 <= uVar4) goto LAB_14004ad6b;
          lVar6 = FUN_14028af20(uVar4 + 0x27);
          if (lVar6 == 0) {
            pcVar3 = (code *)swi(0x29);
            lVar6 = (*pcVar3)(5);
            puVar8 = auStack_30;
          }
          puVar10 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
          puVar10[-1] = lVar6;
          puVar9 = puVar8;
        }
      }
      puVar13 = (undefined8 *)((uVar12 & 0xfffffffffffffff0) + (longlong)puVar10);
      puVar13[1] = 0;
      *puVar13 = 0;
      puVar2 = (undefined8 *)*param_1;
      if (puVar7 == (undefined8 *)param_1[1]) {
        lVar6 = param_1[1] - (longlong)puVar2;
        puVar5 = puVar10;
        puVar7 = puVar2;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x14004ad22;
        FUN_1404210f0(puVar10,puVar2,(longlong)puVar7 - (longlong)puVar2);
        puVar5 = puVar13 + 2;
        lVar6 = param_1[1] - (longlong)puVar7;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14004ad35;
      FUN_1404210f0(puVar5,puVar7,lVar6);
      *(undefined8 *)(puVar9 + -8) = 0x14004ad46;
      FUN_14004f2e0(param_1,puVar10,uVar1,uVar11);
      return puVar13;
    }
  }
LAB_14004ad6b:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

