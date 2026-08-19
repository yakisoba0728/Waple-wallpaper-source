// Function: FUN_1404c0764
// Addr: 1404c0764
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0764(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *in_RAX;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *in_RAX = *in_RAX - param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

