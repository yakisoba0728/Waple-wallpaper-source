// Function: FUN_140413e60
// Addr: 140413e60
// Size: 67 bytes


undefined8 *
FUN_140413e60(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(param_4);
    }
    return &DAT_14045dd10;
  }
  puVar1 = (undefined8 *)FUN_140413eb0();
  puVar2 = &DAT_14045dd10;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  return puVar2;
}

