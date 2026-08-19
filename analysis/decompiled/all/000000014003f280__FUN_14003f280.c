// Function: FUN_14003f280
// Addr: 14003f280
// Size: 84 bytes


undefined8 FUN_14003f280(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (*param_1 == lVar1) {
    func_0x0001400856e0(param_1 + 6);
    return 1;
  }
  if (*(char *)(lVar1 + -0x20) == '\x06') {
    FUN_140087760(lVar1 + -0x28);
    return 1;
  }
  lVar2 = *(longlong *)(param_1[4] + -0x10);
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(lVar1 + -0x28,lVar2,(ulonglong)*(uint *)(param_1[4] + -8) + lVar2);
}

