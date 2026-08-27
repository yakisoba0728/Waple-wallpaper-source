// Function: FUN_140398d30
// Addr: 140398d30
// Size: 79 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140398d30(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    puVar1 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
    _DAT_1404e4f28 = DAT_14045dd18;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 0x38);
  }
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[2] = *(undefined4 *)(param_1 + 0x24);
  param_2[3] = local_14;
  *(undefined8 **)(param_2 + 4) = puVar1;
  return param_2;
}

