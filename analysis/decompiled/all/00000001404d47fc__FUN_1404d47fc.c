// Function: FUN_1404d47fc
// Addr: 1404d47fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d47fc(longlong param_1)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + 0x21004c) = (*(char *)(unaff_RDI + 0x21004c) - in_AH) - in_CF;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  if (param_1 == 1 || *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

