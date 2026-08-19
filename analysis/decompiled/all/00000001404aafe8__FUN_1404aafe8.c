// Function: FUN_1404aafe8
// Addr: 1404aafe8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aafe8(longlong param_1)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) - (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

