// Function: FUN_1404d14b4
// Addr: 1404d14b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d14b4(longlong param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  char unaff_BH;
  char *unaff_RSI;
  
  unaff_RSI[param_1] = unaff_RSI[param_1] + (char)((uint)param_2 >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RSI = *unaff_RSI + unaff_BH;
  *param_4 = *param_4 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

