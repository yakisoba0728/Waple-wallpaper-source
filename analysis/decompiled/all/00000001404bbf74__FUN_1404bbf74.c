// Function: FUN_1404bbf74
// Addr: 1404bbf74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbf74(char param_1,char *param_2)

{
  int in_EAX;
  char unaff_BH;
  char *unaff_RSI;
  
  if (in_EAX != 0x160008c4) {
    *unaff_RSI = *unaff_RSI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RSI[0x21004b] = unaff_BH;
  *param_2 = *param_2 + (char)param_2;
  unaff_RSI[0x21004b] = unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

