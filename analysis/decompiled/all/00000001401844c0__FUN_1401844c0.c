// Function: FUN_1401844c0
// Addr: 1401844c0
// Size: 36 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401844c0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = DAT_140492ff0;
  *param_1 = CONCAT44((uint)((ulonglong)*param_2 >> 0x20) ^ _UNK_140492ff4,
                      (uint)*param_2 ^ DAT_140492ff0);
  *(uint *)(param_1 + 1) = *(uint *)(param_2 + 1) ^ uVar1;
  return param_1;
}

