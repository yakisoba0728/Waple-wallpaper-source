// Function: FUN_1404d02bc
// Addr: 1404d02bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d02bc(undefined8 param_1,byte param_2)

{
  byte *in_RAX;
  char *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + param_2;
  *in_RAX = *in_RAX | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

