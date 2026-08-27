// Function: FUN_14024f4b0
// Addr: 14024f4b0
// Size: 49 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14024f4b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = _DAT_140492fc0;
  uVar1 = param_2[2];
  *param_1 = *param_2 & _DAT_140492fc0;
  uVar2 = param_2[1];
  param_1[2] = uVar1 & uVar3;
  param_1[1] = uVar2 & uVar3;
  return param_1;
}

