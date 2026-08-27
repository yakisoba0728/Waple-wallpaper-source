// Function: FUN_1402ffd60
// Addr: 1402ffd60
// Size: 323 bytes


void FUN_1402ffd60(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    param_1[9] = 0;
    if ((longlong *)param_1[10] != param_1 + 0xe) {
      FUN_1402f7f90(lVar1);
      param_1[10] = 0;
    }
    param_1[0xb] = 0;
    if ((longlong *)param_1[0xc] != param_1 + 0xb0) {
      FUN_1402f7f90(lVar1);
      param_1[0xc] = 0;
    }
    param_1[0x11c] = 0;
    if ((longlong *)param_1[0x11d] != param_1 + 0x121) {
      FUN_1402f7f90(lVar1);
      param_1[0x11d] = 0;
    }
    param_1[0x11e] = 0;
    if ((longlong *)param_1[0x11f] != param_1 + 0x1c3) {
      FUN_1402f7f90(lVar1);
      param_1[0x11f] = 0;
    }
    if ((longlong *)param_1[6] != param_1 + 0x231) {
      FUN_1402f7f90(lVar1);
      param_1[6] = 0;
    }
    if ((longlong *)param_1[7] != param_1 + 0x239) {
      FUN_1402f7f90(lVar1);
      param_1[7] = 0;
    }
    if ((longlong *)param_1[8] != param_1 + 0x23d) {
      FUN_1402f7f90(lVar1);
      param_1[8] = 0;
    }
    param_1[5] = 0;
    if ((longlong *)param_1[4] != param_1 + 0x241) {
      FUN_1402f7f90(lVar1);
      param_1[4] = 0;
    }
    param_1[3] = 0;
    *param_1 = 0;
  }
  return;
}

