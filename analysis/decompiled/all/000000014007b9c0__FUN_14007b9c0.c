// Function: FUN_14007b9c0
// Addr: 14007b9c0
// Size: 275 bytes


undefined4 * FUN_14007b9c0(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    *puVar7 = *param_2;
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 1);
    return puVar7;
  }
  uVar9 = (longlong)puVar7 - *param_1;
  lVar3 = (longlong)uVar9 >> 2;
  if (lVar3 != 0x3fffffffffffffff) {
    uVar5 = param_1[2] - *param_1 >> 2;
    uVar1 = lVar3 + 1;
    uVar8 = 0x3fffffffffffffff;
    if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
       (uVar8 = (uVar5 >> 1) + uVar5, uVar8 < uVar1)) {
      uVar8 = uVar1;
    }
    puVar4 = (undefined4 *)FUN_1400399f0(uVar5,uVar8);
    puVar10 = (undefined4 *)((uVar9 & 0xfffffffffffffffc) + (longlong)puVar4);
    *puVar10 = *param_2;
    puVar2 = (undefined4 *)*param_1;
    if (puVar7 == (undefined4 *)param_1[1]) {
      lVar3 = param_1[1] - (longlong)puVar2;
      puVar6 = puVar4;
      puVar7 = puVar2;
    }
    else {
      FUN_1404210f0(puVar4,puVar2,(longlong)puVar7 - (longlong)puVar2);
      puVar6 = puVar10 + 1;
      lVar3 = param_1[1] - (longlong)puVar7;
    }
    FUN_1404210f0(puVar6,puVar7,lVar3);
    FUN_140038af0(param_1,puVar4,uVar1,uVar8);
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013050();
}

