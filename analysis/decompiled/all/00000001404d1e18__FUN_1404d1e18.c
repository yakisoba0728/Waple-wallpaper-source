// Function: FUN_1404d1e18
// Addr: 1404d1e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1e18(char param_1,undefined2 param_2)

{
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  
  out(*unaff_RSI,param_2);
  *(char *)(unaff_RBX + 0x1b19004d) = *(char *)(unaff_RBX + 0x1b19004d) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

