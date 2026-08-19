// Function: FUN_140398e00
// Addr: 140398e00
// Size: 10 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140398e00(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = &DAT_1404e4ff0;
    DAT_1404e4ff0 = DAT_14045dde0;
    DAT_1404e4ff8 = _DAT_14045dde8;
    DAT_1404e5000 = (undefined4)DAT_14045ddf0;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 0x24);
  param_2[3] = uStack_14;
  *(undefined8 **)(param_2 + 4) = puVar1;
  return param_2;
}

