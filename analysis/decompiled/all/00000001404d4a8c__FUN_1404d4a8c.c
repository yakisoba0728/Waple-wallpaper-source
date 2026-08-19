// Function: FUN_1404d4a8c
// Addr: 1404d4a8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4a8c(void)

{
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char *in_R9;
  char unaff_R12B;
  
  *in_R9 = *in_R9 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

