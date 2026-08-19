// Function: FUN_1402f2c10
// Addr: 1402f2c10
// Size: 103 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402f2c10(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 0x14;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 6;
  }
  if ((*(byte *)(param_2 + 4) & 1) != 0) {
    if (param_2[1] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_2[1] = 0;
    if (param_2[2] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    param_2[2] = 0;
    if (param_2[3] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
  }
  uVar4 = _UNK_140436798;
  uVar3 = _DAT_140436790;
  uVar2 = _UNK_140436788;
  *param_2 = _DAT_140436780;
  param_2[1] = uVar2;
  uVar2 = DAT_1404367a0;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  param_2[4] = uVar2;
  return 0;
}

