// Function: FUN_1401a8a70
// Addr: 1401a8a70
// Size: 224 bytes


void FUN_1401a8a70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((char)param_2[1] == '\x06') {
    param_2 = (longlong *)*param_2;
    lVar1 = 0;
    lVar2 = lVar1;
    if (param_2 != (longlong *)0x0) {
      lVar1 = *(longlong *)*param_2;
      lVar2 = *param_2;
    }
    if (param_2 != (longlong *)0x0 && lVar1 != lVar2) {
      func_0x000140087560(lVar1 + 0x30,"value","");
      return;
    }
  }
  return;
}

