// Function: FUN_1404b1888
// Addr: 1404b1888
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1888(char *param_1)

{
  char in_AL;
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  char *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RDI + 'K' + in_CF;
  *param_1 = *param_1 + in_AH;
  *unaff_RSI = *unaff_RSI + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar1 = in(0x10);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

