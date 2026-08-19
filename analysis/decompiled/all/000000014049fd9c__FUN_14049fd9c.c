// Function: FUN_14049fd9c
// Addr: 14049fd9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fd9c(byte param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *in_RAX;
  char unaff_SPL;
  
  *in_RAX = *in_RAX ^ param_1;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

