// Function: FUN_140347d80
// Addr: 140347d80
// Size: 136 bytes


undefined8 FUN_140347d80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_28 [2];
  undefined8 local_20;
  int local_18 [2];
  undefined8 local_10;
  
  uVar1 = FUN_140346e40(param_1,"CHARSET_REGISTRY",local_18);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_140346e40(param_1,"CHARSET_ENCODING",local_28);
    if ((int)uVar1 == 0) {
      if ((local_18[0] == 1) && (local_28[0] == 1)) {
        *param_2 = local_20;
        *param_3 = local_10;
        return uVar1;
      }
      uVar1 = 6;
    }
  }
  return uVar1;
}

