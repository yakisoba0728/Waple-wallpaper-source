// Function: FUN_14007ba90
// Addr: 14007ba90
// Size: 61 bytes


void FUN_14007ba90(longlong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = param_1[1] + 4;
    return;
  }
  uVar7 = (longlong)puVar2 - *param_1;
  lVar3 = (longlong)uVar7 >> 2;
  if (lVar3 != 0x3fffffffffffffff) {
    uVar5 = param_1[2] - *param_1 >> 2;
    uVar1 = lVar3 + 1;
    uVar6 = 0x3fffffffffffffff;
    if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
       (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1)) {
      uVar6 = uVar1;
    }
    lVar4 = func_0x000140039ac0(uVar5,uVar6);
    *(undefined4 *)((uVar7 & 0xfffffffffffffffc) + lVar4) = *param_2;
    lVar3 = *param_1;
    if (puVar2 == (undefined4 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,lVar3,param_1[1] - lVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar4,lVar3,(longlong)puVar2 - lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

