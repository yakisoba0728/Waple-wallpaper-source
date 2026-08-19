// Function: FUN_1404c5ff4
// Addr: 1404c5ff4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5ff4(uint param_1)

{
  longlong in_RAX;
  
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

