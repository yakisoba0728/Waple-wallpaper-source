// Function: FUN_1404cc6d4
// Addr: 1404cc6d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc6d4(char *param_1)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(undefined1 *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

