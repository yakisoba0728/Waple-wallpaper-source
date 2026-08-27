// Function: FUN_1402fb290
// Addr: 1402fb290
// Size: 40 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402fb290(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_140436a58;
  uVar2 = _DAT_140436a50;
  uVar1 = _UNK_140436a48;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = _DAT_140436a40;
    param_1[1] = uVar1;
    uVar1 = DAT_140436a60;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar1;
  }
  return;
}

