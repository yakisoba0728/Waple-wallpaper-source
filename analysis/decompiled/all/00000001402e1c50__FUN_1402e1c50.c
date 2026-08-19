// Function: FUN_1402e1c50
// Addr: 1402e1c50
// Size: 15 bytes


void FUN_1402e1c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lStack_28;
  longlong lStack_20;
  char cStack_10;
  
  iVar1 = FUN_1402d9bf0();
  if (iVar1 == 0) {
    func_0x0001402bf8e8(&lStack_28);
    uVar2 = 0xfde9;
    if (*(int *)(lStack_20 + 0xc) == 0xfde9) {
      if (cStack_10 != '\0') {
        *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = func_0x0001402dc004();
      if (iVar1 == 0) {
        if (cStack_10 != '\0') {
          *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
        }
        uVar2 = 1;
      }
      else {
        if (cStack_10 != '\0') {
          *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
        }
        uVar2 = 0;
      }
    }
    FUN_1402dccd8(uVar2,0,param_2,param_4,param_3,0x3f,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

