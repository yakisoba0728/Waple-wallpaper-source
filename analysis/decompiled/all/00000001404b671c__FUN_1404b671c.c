// Function: FUN_1404b671c
// Addr: 1404b671c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b671c(undefined8 param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  char unaff_SPL;
  char *unaff_RSI;
  bool in_PF;
  
  if (!in_PF) {
    *unaff_RSI = *unaff_RSI + (char)((uint)param_2 >> 8);
    *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

