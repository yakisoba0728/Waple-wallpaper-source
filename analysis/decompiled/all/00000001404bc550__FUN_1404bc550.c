// Function: FUN_1404bc550
// Addr: 1404bc550
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc550(undefined8 param_1,char param_2)

{
  char *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

