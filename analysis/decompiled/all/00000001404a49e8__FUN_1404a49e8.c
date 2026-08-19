// Function: FUN_1404a49e8
// Addr: 1404a49e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a49e8(uint *param_1,uint param_2)

{
  *param_1 = *param_1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

