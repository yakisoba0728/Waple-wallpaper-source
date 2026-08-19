// Function: FUN_1404a08cc
// Addr: 1404a08cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a08cc(void)

{
  longlong in_RAX;
  
  *(undefined1 *)(in_RAX + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

