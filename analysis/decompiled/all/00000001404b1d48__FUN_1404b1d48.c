// Function: FUN_1404b1d48
// Addr: 1404b1d48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1d48(char *param_1)

{
  char in_AL;
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - in_AL;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar1 = in(7);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

