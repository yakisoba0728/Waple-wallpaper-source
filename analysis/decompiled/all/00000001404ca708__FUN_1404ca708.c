// Function: FUN_1404ca708
// Addr: 1404ca708
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca708(char *param_1,undefined8 param_2,char param_3)

{
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

