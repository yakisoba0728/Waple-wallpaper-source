// Function: FUN_1404c16bc
// Addr: 1404c16bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c16bc(int param_1,int *param_2)

{
  byte in_CF;
  
  *param_2 = (*param_2 - param_1) - (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

