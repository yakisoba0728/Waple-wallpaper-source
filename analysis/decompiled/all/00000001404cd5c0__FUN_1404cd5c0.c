// Function: FUN_1404cd5c0
// Addr: 1404cd5c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd5c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RBP;
  char unaff_SIL;
  char in_CF;
  
  *(char *)(unaff_RBP + 0x41) = *(char *)(unaff_RBP + 0x41) - in_CF;
  *(char *)(param_3 + 0x21004c5e) = *(char *)(param_3 + 0x21004c5e) + unaff_SIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

