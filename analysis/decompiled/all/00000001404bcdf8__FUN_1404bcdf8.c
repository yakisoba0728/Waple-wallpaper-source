// Function: FUN_1404bcdf8
// Addr: 1404bcdf8
// Size: 1 bytes


void FUN_1404bcdf8(void)

{
  char *pcVar1;
  code *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x3fffdb39);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

