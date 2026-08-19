// Function: FUN_1400c3420
// Addr: 1400c3420
// Size: 37 bytes


undefined8 FUN_1400c3420(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_res8 [2];
  undefined1 auStack_18 [16];
  
  local_res8[0] = func_0x000140291210();
  iVar2 = func_0x000140290e50(param_1 + 0x310);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x35c) != 0x7fffffff) {
    if (param_2 == '\0') {
      FUN_1400ca850(param_1 + 0x278,local_res8);
    }
    else {
      func_0x0001400ca950(param_1 + 0x278,auStack_18,local_res8);
    }
    FUN_140290fa0(param_1 + 0x360);
    piVar1 = (int *)(param_1 + 0x35c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
      (*DAT_140426298)(param_1 + 800);
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

