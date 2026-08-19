// Function: FUN_1404a62cc
// Addr: 1404a62cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a62cc(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 >> 9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

