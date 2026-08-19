// Function: FUN_14049fc4c
// Addr: 14049fc4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fc4c(char *param_1,undefined2 param_2)

{
  int *piVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_EDI;
  
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x75);
  *piVar1 = *piVar1 - unaff_EDI;
  *param_1 = *param_1 + in_AH;
  out(param_2,in_AL);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

