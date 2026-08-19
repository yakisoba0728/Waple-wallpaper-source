// Function: FUN_1404ad268
// Addr: 1404ad268
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad268(int param_1)

{
  longlong in_RAX;
  
  *(int *)(in_RAX + 0x8820c00) = *(int *)(in_RAX + 0x8820c00) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

