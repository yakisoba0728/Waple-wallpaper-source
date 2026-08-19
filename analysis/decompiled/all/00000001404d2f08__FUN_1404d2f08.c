// Function: FUN_1404d2f08
// Addr: 1404d2f08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2f08(char param_1)

{
  longlong in_RAX;
  char in_CF;
  
  *(char *)(in_RAX + 0x780a0001) = *(char *)(in_RAX + 0x780a0001) + param_1 + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

