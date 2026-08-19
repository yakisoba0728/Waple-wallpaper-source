// Function: FUN_1404b5a3c
// Addr: 1404b5a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5a3c(void)

{
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char *in_R9;
  
  *in_R9 = *in_R9 + '\b';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

