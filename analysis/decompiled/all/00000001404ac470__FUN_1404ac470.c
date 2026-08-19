// Function: FUN_1404ac470
// Addr: 1404ac470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac470(char *param_1)

{
  undefined4 *unaff_RSI;
  
  verw();
  *param_1 = *param_1 + (char)*unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

