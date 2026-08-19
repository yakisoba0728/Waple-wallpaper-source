// Function: FUN_14049fe88
// Addr: 14049fe88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fe88(void)

{
  undefined4 *in_RAX;
  char *in_R9;
  bool in_CF;
  
  if (in_CF) {
    *in_R9 = *in_R9 + ((char)in_RAX + (char)*in_RAX ^ 0xe6U);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

