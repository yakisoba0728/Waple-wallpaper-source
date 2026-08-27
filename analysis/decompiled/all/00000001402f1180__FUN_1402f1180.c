// Function: FUN_1402f1180
// Addr: 1402f1180
// Size: 47 bytes


void FUN_1402f1180(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (longlong *)0x0)) {
    lVar1 = param_1[1];
    param_2[1] = 0;
    *param_2 = lVar1;
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 8) = param_2;
      param_1[1] = param_2;
      return;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
  }
  return;
}

