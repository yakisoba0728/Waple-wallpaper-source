// Function: FUN_1404d5cf8
// Addr: 1404d5cf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5cf8(undefined8 param_1,int param_2)

{
  int *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

