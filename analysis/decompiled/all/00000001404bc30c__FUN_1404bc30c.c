// Function: FUN_1404bc30c
// Addr: 1404bc30c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc30c(char *param_1,longlong param_2)

{
  char in_AL;
  
  *(undefined1 *)(param_2 + 0x228d0f00) = *(undefined1 *)(param_2 + 0x228d0f00);
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

