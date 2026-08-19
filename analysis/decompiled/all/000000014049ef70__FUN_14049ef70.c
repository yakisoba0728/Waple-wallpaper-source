// Function: FUN_14049ef70
// Addr: 14049ef70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ef70(undefined8 param_1,uint param_2)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

