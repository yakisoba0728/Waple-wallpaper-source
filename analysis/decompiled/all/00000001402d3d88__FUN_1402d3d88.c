// Function: FUN_1402d3d88
// Addr: 1402d3d88
// Size: 19 bytes


undefined8 FUN_1402d3d88(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uStackX_8;
  longlong lStack_38;
  longlong *plStack_30;
  longlong lStack_28;
  undefined1 auStack_20 [16];
  char cStack_10;
  
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  func_0x0001402bf8e8(&lStack_28,param_3);
  uStackX_8 = 0;
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  lStack_38 = param_1;
  plStack_30 = param_2;
  iVar1 = func_0x0001402cd350(auStack_20,&lStack_38,&uStackX_8);
  if (iVar1 - 2U < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (cStack_10 != '\0') {
    *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return uStackX_8;
}

