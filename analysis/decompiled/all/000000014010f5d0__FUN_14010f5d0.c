// Function: FUN_14010f5d0
// Addr: 14010f5d0
// Size: 16 bytes


void FUN_14010f5d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uStackX_8;
  
  iVar1 = (*DAT_140426af0)();
  if (iVar1 != 0) {
    uStackX_8 = 0;
    (*DAT_1404267f0)(*(undefined8 *)(param_1 + 0x1c8),0x40b,param_2,0,1,0,&uStackX_8);
    return;
  }
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

