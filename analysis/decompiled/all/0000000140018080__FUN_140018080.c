// Function: FUN_140018080
// Addr: 140018080
// Size: 81 bytes


undefined8 FUN_140018080(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_48 [48];
  
  if ((*(char *)(param_3 + 1) == '\a') && (*(char *)(param_2 + 8) == '\a')) {
    func_0x000140085160(local_48);
    plVar1 = (longlong *)**(longlong **)*param_3;
    if (plVar1 != *(longlong **)*param_3) {
      lVar3 = plVar1[4];
      lVar2 = func_0x000140421ed0(lVar3);
      lVar3 = func_0x000140087560(param_3,lVar3,lVar2 + lVar3);
      if (lVar3 == 0) {
        FUN_140084b90();
      }
      lVar3 = plVar1[4];
      lVar2 = func_0x000140421ed0(lVar3);
                    /* WARNING: Subroutine does not return */
      FUN_140086eb0(local_48,lVar3,lVar2 + lVar3);
    }
    FUN_140085420(param_1,local_48);
    func_0x000140085510(local_48);
    return param_1;
  }
  func_0x000140085160();
  return param_1;
}

