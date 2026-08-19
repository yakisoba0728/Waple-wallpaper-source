// Function: FUN_1404af91c
// Addr: 1404af91c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af91c(byte *param_1,byte param_2)

{
  *param_1 = *param_1 | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

