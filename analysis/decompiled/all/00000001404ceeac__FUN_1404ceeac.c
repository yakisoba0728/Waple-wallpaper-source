// Function: FUN_1404ceeac
// Addr: 1404ceeac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ceeac(undefined8 param_1,undefined2 param_2,char param_3)

{
  char *unaff_RSI;
  
  in(param_2);
  *unaff_RSI = *unaff_RSI + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

