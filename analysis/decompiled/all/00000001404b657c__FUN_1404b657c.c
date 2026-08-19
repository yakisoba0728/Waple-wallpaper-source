// Function: FUN_1404b657c
// Addr: 1404b657c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b657c(void)

{
  longlong in_R9;
  longlong in_FS_OFFSET;
  
  *(char *)(in_FS_OFFSET + in_R9) = *(char *)(in_FS_OFFSET + in_R9) + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

