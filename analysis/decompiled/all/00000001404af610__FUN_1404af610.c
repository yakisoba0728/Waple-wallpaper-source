// Function: FUN_1404af610
// Addr: 1404af610
// Size: 1 bytes


void FUN_1404af610(undefined8 param_1,char param_2)

{
  code *pcVar1;
  char in_AH;
  longlong unaff_RSI;
  char in_CF;
  
  *(char *)(unaff_RSI + 0x14) = *(char *)(unaff_RSI + 0x14) + param_2 + in_CF;
  *(char *)(unaff_RSI + 0x56) = *(char *)(unaff_RSI + 0x56) + in_AH;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

