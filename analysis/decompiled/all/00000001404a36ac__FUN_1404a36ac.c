// Function: FUN_1404a36ac
// Addr: 1404a36ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a36ac(longlong param_1,char param_2)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(char *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

