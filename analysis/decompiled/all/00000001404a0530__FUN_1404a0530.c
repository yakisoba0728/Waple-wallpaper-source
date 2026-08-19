// Function: FUN_1404a0530
// Addr: 1404a0530
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0530(undefined8 param_1,int param_2)

{
  int *in_RAX;
  
  *in_RAX = *in_RAX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

