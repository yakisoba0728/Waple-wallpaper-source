// Function: FUN_140129080
// Addr: 140129080
// Size: 85 bytes


void FUN_140129080(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_DAT_14048a7c8;
  (**(code **)(*(longlong *)param_1[0x13] + 0x28))();
  iVar1 = (*DAT_140426af0)(param_1[0x2b]);
  if (iVar1 != 0) {
    (*DAT_140426838)(param_1[0x2b],100);
  }
  func_0x00014028b040(param_1[0x2f]);
  return;
}

