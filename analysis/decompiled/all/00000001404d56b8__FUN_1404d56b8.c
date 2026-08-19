// Function: FUN_1404d56b8
// Addr: 1404d56b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d56b8(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(unaff_RBP + 0x1601004d + param_2 * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

