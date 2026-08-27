// Function: FUN_1401b02c0
// Addr: 1401b02c0
// Size: 119 bytes


void FUN_1401b02c0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  lVar2 = FUN_14028af20(0x20);
  param_1[1] = lVar2;
  *(undefined1 **)(lVar2 + 8) = &LAB_1401ab990;
  *(undefined1 **)(param_1[1] + 0x10) = &LAB_1401ab9a0;
  *(undefined1 **)(param_1[1] + 0x18) = &LAB_1401ab9b0;
  *(undefined8 *)param_1[1] = 0;
  iVar1 = FUN_1402f2440(param_1[1],param_1 + 2);
  if (iVar1 == 0) {
    FUN_1402fa410(param_1[2]);
  }
  return;
}

