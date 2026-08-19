// Function: FUN_1402fb360
// Addr: 1402fb360
// Size: 40 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fb360(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_140436b28;
  uVar2 = _DAT_140436b20;
  uVar1 = _UNK_140436b18;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = _DAT_140436b10;
    param_1[1] = uVar1;
    uVar1 = DAT_140436b30;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar1;
  }
  return;
}

