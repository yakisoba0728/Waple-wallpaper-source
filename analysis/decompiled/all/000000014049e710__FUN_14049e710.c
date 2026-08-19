// Function: FUN_14049e710
// Addr: 14049e710
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e710(void)

{
  uint in_EAX;
  
  uRam00000001b44ee718 = uRam00000001b44ee718 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

