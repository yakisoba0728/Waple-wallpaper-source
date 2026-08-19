// Function: FUN_1404a9da0
// Addr: 1404a9da0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9da0(char *param_1)

{
  char cVar1;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char *unaff_RSI;
  
  cVar1 = *unaff_RSI;
  *param_1 = *param_1 + -8;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

