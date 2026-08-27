// Function: FUN_14019e140
// Addr: 14019e140
// Size: 336 bytes


undefined8 * FUN_14019e140(longlong *param_1,undefined8 *param_2)

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
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  
  puVar8 = auStack_58;
  puVar9 = auStack_58;
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    *puVar7 = *param_2;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 1);
    return puVar7;
  }
  uVar11 = (longlong)puVar7 - *param_1;
  lVar6 = (longlong)uVar11 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar4 = param_1[2] - *param_1 >> 3;
  if (uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) {
    uVar1 = lVar6 + 1;
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar10 = uVar1;
    if (uVar1 <= uVar4) {
      uVar10 = uVar4;
    }
    if (uVar10 < 0x2000000000000000) {
      uVar4 = uVar10 * 8;
      if (uVar4 == 0) {
        puVar13 = (undefined8 *)0x0;
        puVar9 = auStack_58;
      }
      else if (uVar4 < 0x1000) {
        puVar13 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar4 + 0x27 <= uVar4) goto LAB_14019e28c;
        lVar6 = FUN_14028af20(uVar4 + 0x27);
        if (lVar6 == 0) {
          pcVar3 = (code *)swi(0x29);
          lVar6 = (*pcVar3)(5);
          puVar8 = auStack_50;
        }
        puVar13 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
        puVar13[-1] = lVar6;
        puVar9 = puVar8;
      }
      puVar12 = (undefined8 *)((uVar11 & 0xfffffffffffffff8) + (longlong)puVar13);
      *puVar12 = *param_2;
      puVar2 = (undefined8 *)*param_1;
      if (puVar7 == (undefined8 *)param_1[1]) {
        lVar6 = param_1[1] - (longlong)puVar2;
        puVar5 = puVar13;
        puVar7 = puVar2;
      }
      else {
        *(undefined8 *)(puVar9 + -8) = 0x14019e250;
        FUN_1404210f0(puVar13,puVar2,(longlong)puVar7 - (longlong)puVar2);
        puVar5 = puVar12 + 1;
        lVar6 = param_1[1] - (longlong)puVar7;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14019e263;
      FUN_1404210f0(puVar5,puVar7,lVar6);
      *(undefined8 *)(puVar9 + -8) = 0x14019e274;
      FUN_1400384c0(param_1,puVar13,uVar1,uVar10);
      return puVar12;
    }
  }
LAB_14019e28c:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

