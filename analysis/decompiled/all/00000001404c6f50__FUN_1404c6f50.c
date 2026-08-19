// Function: FUN_1404c6f50
// Addr: 1404c6f50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6f50(char *param_1,undefined2 param_2,char param_3)

{
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

