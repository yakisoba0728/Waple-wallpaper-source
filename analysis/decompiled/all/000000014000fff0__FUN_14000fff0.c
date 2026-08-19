// Function: FUN_14000fff0
// Addr: 14000fff0
// Size: 40 bytes


void FUN_14000fff0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  *(undefined8 *)plVar1[1] = 0;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(lVar2 + 0x30);
  }
  *(longlong *)*param_1 = *param_1;
  *(longlong *)(*param_1 + 8) = *param_1;
  param_1[1] = 0;
  return;
}

