// Function: FUN_140035e80
// Addr: 140035e80
// Size: 259 bytes


undefined8 *
FUN_140035e80(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  if (param_1[3] - uVar2 < param_4) {
    puVar3 = (undefined8 *)FUN_1400380d0(param_1,param_4,uVar2,param_2,param_3,param_4);
    return puVar3;
  }
  param_1[2] = uVar2 + param_4;
  puVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  uVar1 = (longlong)puVar3 + param_2;
  uVar4 = param_4;
  if ((uVar1 < param_3 + param_4) && (param_3 <= uVar2 + (longlong)puVar3)) {
    if (param_3 < uVar1) {
      uVar4 = uVar1 - param_3;
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_1404210f0(uVar1 + param_4,uVar1,(uVar2 - param_2) + 1);
  FUN_1404210f0(uVar1,param_3,uVar4);
  FUN_1404210f0(uVar4 + uVar1,uVar4 + param_3 + param_4,param_4 - uVar4);
  return param_1;
}

