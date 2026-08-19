// Function: FUN_1404a23fc
// Addr: 1404a23fc
// Size: 1 bytes


void FUN_1404a23fc(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AH;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

