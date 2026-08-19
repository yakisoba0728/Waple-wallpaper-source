// Function: FUN_14009ca10
// Addr: 14009ca10
// Size: 20 bytes


undefined8
FUN_14009ca10(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 >> 1;
  uVar1 = param_6 >> 1;
  uVar2 = uVar1;
  if (uVar3 < uVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    if (uVar3 < uVar1) {
      param_6 = param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_1,param_5,param_6 & 0xfffffffffffffffe);
  }
  return 0;
}

