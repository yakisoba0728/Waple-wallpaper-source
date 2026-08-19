// Function: FUN_1404ad808
// Addr: 1404ad808
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad808(int *param_1,uint *param_2)

{
  uint unaff_ESI;
  
  *param_1 = *param_1 + (int)param_1;
  *param_2 = *param_2 | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

