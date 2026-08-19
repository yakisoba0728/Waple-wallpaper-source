// Function: FUN_1404c67d4
// Addr: 1404c67d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c67d4(uint param_1,uint *param_2)

{
  *param_2 = *param_2 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

