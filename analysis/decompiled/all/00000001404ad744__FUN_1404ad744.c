// Function: FUN_1404ad744
// Addr: 1404ad744
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad744(uint param_1,uint *param_2)

{
  *param_2 = *param_2 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

