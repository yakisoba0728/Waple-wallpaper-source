// Function: FUN_140017300
// Addr: 140017300
// Size: 40 bytes


void FUN_140017300(longlong *param_1)

{
  code *pcVar1;
  
  if (DAT_1404e3ab8 != (code *)0x0) {
    (*DAT_1404e3ab8)();
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

