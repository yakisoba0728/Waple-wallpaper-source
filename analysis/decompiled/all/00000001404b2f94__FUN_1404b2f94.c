// Function: FUN_1404b2f94
// Addr: 1404b2f94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2f94(longlong param_1,char param_2)

{
  longlong in_RAX;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + param_2;
  *(char *)(in_RAX + -0x4efcffe9) = *(char *)(in_RAX + -0x4efcffe9) << 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

