// Function: FUN_1404b64d8
// Addr: 1404b64d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b64d8(uint param_1)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

