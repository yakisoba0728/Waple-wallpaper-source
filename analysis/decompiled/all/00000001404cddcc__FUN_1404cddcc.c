// Function: FUN_1404cddcc
// Addr: 1404cddcc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cddcc(char *param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AH;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

