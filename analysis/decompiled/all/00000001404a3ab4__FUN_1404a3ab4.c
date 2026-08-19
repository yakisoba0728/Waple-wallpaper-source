// Function: FUN_1404a3ab4
// Addr: 1404a3ab4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3ab4(char *param_1)

{
  undefined7 in_register_00000001;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RSI;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,0x39) = *(char *)CONCAT71(in_register_00000001,0x39) + '9';
  *unaff_RSI = *unaff_RSI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

