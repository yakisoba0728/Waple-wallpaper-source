// Function: FUN_1400173d0
// Addr: 1400173d0
// Size: 23 bytes


void FUN_1400173d0(longlong *param_1)

{
  code *pcVar1;
  
  if (DAT_1404e3b88 != (code *)0x0) {
    (*DAT_1404e3b88)();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

