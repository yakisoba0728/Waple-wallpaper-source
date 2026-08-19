// Function: FUN_1404c671c
// Addr: 1404c671c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c671c(undefined8 param_1,int param_2)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

