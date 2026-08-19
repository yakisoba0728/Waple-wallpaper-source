// Function: FUN_1400324d0
// Addr: 1400324d0
// Size: 63 bytes


void FUN_1400324d0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)param_1[2]) {
    *puVar2 = *param_2;
    param_1[1] = param_1[1] + 8;
    return;
  }
  uVar7 = (longlong)puVar2 - *param_1;
  lVar3 = (longlong)uVar7 >> 3;
  if (lVar3 != 0x1fffffffffffffff) {
    uVar5 = param_1[2] - *param_1 >> 3;
    uVar1 = lVar3 + 1;
    uVar6 = 0x1fffffffffffffff;
    if ((uVar5 <= 0x1fffffffffffffff - (uVar5 >> 1)) &&
       (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1)) {
      uVar6 = uVar1;
    }
    lVar4 = FUN_140038610(uVar5,uVar6);
    *(undefined8 *)((uVar7 & 0xfffffffffffffff8) + lVar4) = *param_2;
    lVar3 = *param_1;
    if (puVar2 == (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,lVar3,param_1[1] - lVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(lVar4,lVar3,(longlong)puVar2 - lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

