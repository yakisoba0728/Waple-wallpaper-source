// Function: FUN_1402caad8
// Addr: 1402caad8
// Size: 106 bytes


longlong FUN_1402caad8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 == 0) {
    local_res8[0] = (*DAT_1404266a8)();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    lVar1 = FUN_1402d9a54(local_res8,lVar2);
    *param_1 = lVar1;
    (*DAT_1404266a0)(local_res8[0]);
  }
  return lVar1;
}

