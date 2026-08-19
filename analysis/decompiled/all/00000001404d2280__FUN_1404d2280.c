// Function: FUN_1404d2280
// Addr: 1404d2280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2280(char *param_1,undefined8 param_2)

{
  char in_AH;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + 0x6004d21) =
       *(char *)(unaff_RBP + 0x6004d21) + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

