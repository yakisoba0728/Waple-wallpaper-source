// Function: FUN_1404b872c
// Addr: 1404b872c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b872c(char *param_1)

{
  uint in_EAX;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & in_EAX;
  *param_1 = *param_1 + (char)(in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

