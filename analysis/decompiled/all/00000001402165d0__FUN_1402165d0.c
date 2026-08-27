// Function: FUN_1402165d0
// Addr: 1402165d0
// Size: 42 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1402165d0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_140492ff0;
  uVar2 = (uint)*(undefined8 *)(param_2 + 1) ^ DAT_140492ff0;
  uVar3 = (uint)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) ^ _UNK_140492ff4;
  *param_1 = *param_2;
  *(ulonglong *)(param_1 + 1) = CONCAT44(uVar3,uVar2);
  param_1[3] = param_2[3] ^ uVar1;
  return param_1;
}

