// Function: FUN_140013130
// Addr: 140013130
// Size: 203 bytes


undefined8 *
FUN_140013130(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined2 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 local_res8;
  
  uVar1 = param_1[2];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  if (param_1[3] - uVar1 < param_3) {
    puVar2 = (undefined8 *)FUN_1400132e0(param_1,param_3,local_res8,param_2,param_3,param_4);
    return puVar2;
  }
  param_1[2] = uVar1 + param_3;
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  puVar3 = (undefined2 *)((longlong)puVar2 + param_2 * 2);
  FUN_1404210f0((longlong)puVar2 + (param_3 + param_2) * 2,puVar3,(uVar1 - param_2) * 2 + 2);
  if (param_3 != 0) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar3 = param_4;
      puVar3 = puVar3 + 1;
    }
  }
  return param_1;
}

