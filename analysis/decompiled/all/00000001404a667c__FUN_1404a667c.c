// Function: FUN_1404a667c
// Addr: 1404a667c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a667c(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

