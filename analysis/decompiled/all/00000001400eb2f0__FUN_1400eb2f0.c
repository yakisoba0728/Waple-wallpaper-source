// Function: FUN_1400eb2f0
// Addr: 1400eb2f0
// Size: 241 bytes


void FUN_1400eb2f0(longlong *param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  puVar1 = (undefined8 *)param_1[1];
  iVar6 = param_3 * param_4 * param_5;
  if (puVar1 != (undefined8 *)param_1[2]) {
    *puVar1 = param_2;
    *(int *)(puVar1 + 1) = param_3 * param_5;
    *(int *)((longlong)puVar1 + 0xc) = iVar6;
    param_1[1] = param_1[1] + 0x10;
    return;
  }
  uVar7 = (longlong)puVar1 - *param_1;
  lVar4 = (longlong)uVar7 >> 4;
  if (lVar4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar3 = param_1[2] - *param_1 >> 4;
  if (uVar3 <= 0xfffffffffffffff - (uVar3 >> 1)) {
    uVar5 = lVar4 + 1;
    uVar3 = (uVar3 >> 1) + uVar3;
    if (uVar5 <= uVar3) {
      uVar5 = uVar3;
    }
    if (uVar5 < 0x1000000000000000) {
      uVar5 = uVar5 * 0x10;
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        if (0xfff < uVar5) {
          if (uVar5 < uVar5 + 0x27) {
            func_0x00014028aff0();
            return;
          }
          goto LAB_1400eb4c3;
        }
        lVar4 = func_0x00014028aff0(uVar5);
      }
      uVar7 = uVar7 & 0xfffffffffffffff0;
      *(undefined8 *)(uVar7 + lVar4) = param_2;
      *(int *)(uVar7 + 8 + lVar4) = param_3 * param_5;
      *(int *)(uVar7 + 0xc + lVar4) = iVar6;
      lVar2 = *param_1;
      if (puVar1 == (undefined8 *)param_1[1]) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar4,lVar2,param_1[1] - lVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,lVar2,(longlong)puVar1 - lVar2);
    }
  }
LAB_1400eb4c3:
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

