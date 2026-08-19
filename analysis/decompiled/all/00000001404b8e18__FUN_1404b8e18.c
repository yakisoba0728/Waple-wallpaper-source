// Function: FUN_1404b8e18
// Addr: 1404b8e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8e18(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  char unaff_BH;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> 1 | (0xd1fff9cb < in_EAX) << 7;
  pcVar1 = (char *)((ulonglong)(in_EAX + 0x2e000634) + param_2 * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

