// Function: FUN_14049fc20
// Addr: 14049fc20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fc20(void)

{
  char in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  char *in_R9;
  char in_CF;
  
  cVar1 = (in_AL + '\x05') - in_CF;
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

