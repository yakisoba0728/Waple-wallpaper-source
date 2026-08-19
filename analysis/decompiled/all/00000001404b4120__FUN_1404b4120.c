// Function: FUN_1404b4120
// Addr: 1404b4120
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4120(char *param_1)

{
  char in_AL;
  undefined1 *unaff_RSI;
  undefined1 in_CF;
  
  *unaff_RSI = (char)(CONCAT11(in_CF,*unaff_RSI) >> 1);
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

