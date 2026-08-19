// Function: FUN_1404c2c10
// Addr: 1404c2c10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2c10(char param_1,char *param_2,char param_3)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x2b) = *(char *)(unaff_RBP + 0x2b) + param_1;
  *param_2 = *param_2 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

