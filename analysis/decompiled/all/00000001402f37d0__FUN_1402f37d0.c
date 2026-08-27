// Function: FUN_1402f37d0
// Addr: 1402f37d0
// Size: 102 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402f37d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_1404367e0;
  uVar2 = _DAT_1404367d8;
  uVar1 = _UNK_1404367d0;
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  if ((*(byte *)(param_1 + 8) & 8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x378);
    *param_2 = *(undefined8 *)(param_1 + 0x370);
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x388);
    param_2[2] = *(undefined8 *)(param_1 + 0x380);
    param_2[3] = uVar1;
    param_2[4] = *(undefined8 *)(param_1 + 0x390);
    return 0;
  }
  *param_2 = _DAT_1404367c8;
  param_2[1] = uVar1;
  uVar1 = DAT_1404367e8;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar1;
  return 0;
}

