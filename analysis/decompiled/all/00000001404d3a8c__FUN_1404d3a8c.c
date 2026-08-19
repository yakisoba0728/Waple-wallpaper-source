// Function: FUN_1404d3a8c
// Addr: 1404d3a8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3a8c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  char cVar1;
  byte unaff_BH;
  byte *unaff_RSI;
  char unaff_R12B;
  char in_CF;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (char)param_1 + in_CF;
  *param_1 = *param_1 + cVar1;
  *unaff_RSI = *unaff_RSI | unaff_BH;
  in_RAX[0x39] = in_RAX[0x39] + cVar1;
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

