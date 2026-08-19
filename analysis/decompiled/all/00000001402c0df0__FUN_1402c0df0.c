// Function: FUN_1402c0df0
// Addr: 1402c0df0
// Size: 29 bytes


longlong FUN_1402c0df0(longlong *param_1)

{
  longlong lVar1;
  undefined4 auStackX_8 [2];
  
  if (*param_1 == 0) {
    auStackX_8[0] = (*DAT_1404266a8)();
    if ((char)param_1[2] == '\0') {
      lVar1 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      param_1[1] = 0;
    }
    else {
      lVar1 = param_1[1];
    }
    lVar1 = FUN_1402d9a54(auStackX_8,lVar1);
    *param_1 = lVar1;
    (*DAT_1404266a0)(auStackX_8[0]);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402c98b4();
    }
  }
  return *param_1;
}

