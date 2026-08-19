// Function: FUN_1404b28c4
// Addr: 1404b28c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b28c4(void)

{
  char *in_RAX;
  
  *in_RAX = *in_RAX << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

