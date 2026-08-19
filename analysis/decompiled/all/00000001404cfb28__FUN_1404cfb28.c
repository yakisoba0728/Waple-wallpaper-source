// Function: FUN_1404cfb28
// Addr: 1404cfb28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfb28(char *param_1,char *param_2)

{
  byte unaff_BL;
  byte *unaff_RSI;
  char unaff_R12B;
  
  *unaff_RSI = *unaff_RSI & unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

