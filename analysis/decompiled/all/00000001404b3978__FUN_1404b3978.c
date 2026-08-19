// Function: FUN_1404b3978
// Addr: 1404b3978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3978(void)

{
  char unaff_SPL;
  char *in_R9;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *in_R9 = *in_R9 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

