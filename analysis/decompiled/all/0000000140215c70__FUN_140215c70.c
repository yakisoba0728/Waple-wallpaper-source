// Function: FUN_140215c70
// Addr: 140215c70
// Size: 267 bytes


void FUN_140215c70(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  lVar5 = param_1[1] - lVar4 >> 4;
  if (param_2 < (ulonglong)(lVar5 * -0x3333333333333333)) {
    param_1[1] = param_2 * 0x50 + lVar4;
    return;
  }
  if (param_2 <= (ulonglong)(lVar5 * -0x3333333333333333)) {
    return;
  }
  uVar2 = (param_1[2] - lVar4 >> 4) * -0x3333333333333333;
  if (param_2 <= uVar2) {
    lVar4 = func_0x0001402194a0(param_1[1],param_2 + lVar5 * 0x3333333333333333);
    param_1[1] = lVar4;
    return;
  }
  if (param_2 < 0x333333333333334) {
    uVar1 = 0x333333333333333 - (uVar2 >> 1);
    if ((uVar2 < uVar1 || uVar2 - uVar1 == 0) &&
       ((uVar2 = (uVar2 >> 1) + uVar2, uVar1 = param_2, uVar2 < param_2 ||
        (uVar1 = uVar2, uVar2 < 0x333333333333334)))) {
      uVar1 = uVar1 * 0x50;
      if (uVar1 == 0) {
        puVar3 = (undefined8 *)(lVar5 * 0x10);
        for (lVar4 = param_2 + lVar5 * 0x3333333333333333; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined2 *)((longlong)puVar3 + 0x4d) = 0;
          *(undefined1 *)((longlong)puVar3 + 0x4f) = 0;
          *puVar3 = 0x3f800000;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined4 *)(puVar3 + 3) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
          puVar3[5] = 0;
          *(undefined4 *)(puVar3 + 6) = 0;
          *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
          puVar3[8] = 0;
          *(undefined4 *)(puVar3 + 9) = 0;
          *(undefined1 *)((longlong)puVar3 + 0x4c) = 0;
          puVar3 = puVar3 + 10;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,*param_1,param_1[1] - *param_1);
      }
      if (uVar1 < 0x1000) {
        func_0x00014028aff0(uVar1);
        return;
      }
      if (uVar1 < uVar1 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017440();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140013120();
}

