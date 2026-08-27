// Function: FUN_1402fb230
// Addr: 1402fb230
// Size: 95 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402fb230(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  FUN_1402f7f90(*param_1,param_2[2]);
  uVar3 = _UNK_140436a58;
  uVar2 = _DAT_140436a50;
  uVar1 = _UNK_140436a48;
  *param_2 = _DAT_140436a40;
  param_2[1] = uVar1;
  uVar1 = DAT_140436a60;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar1;
  return 0;
}

