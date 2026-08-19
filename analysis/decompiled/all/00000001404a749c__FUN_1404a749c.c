// Function: FUN_1404a749c
// Addr: 1404a749c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a749c(void)

{
  int *in_RAX;
  
  uRam00000001144f74a4 = uRam00000001144f74a4 & (uint)in_RAX;
  *in_RAX = *in_RAX + (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

