// Function: FUN_1404ad85c
// Addr: 1404ad85c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad85c(char *param_1)

{
  longlong in_RAX;
  char unaff_BL;
  char *unaff_RSI;
  char *unaff_RDI;
  
  *param_1 = *param_1 + (byte)in_RAX;
  *unaff_RSI = *unaff_RSI + ((byte)in_RAX | (byte)*(undefined4 *)(in_RAX * 2));
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

