// Function: FUN_1404b749c
// Addr: 1404b749c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b749c(uint *param_1)

{
  *param_1 = *param_1 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

