// Function: FUN_1404a055c
// Addr: 1404a055c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a055c(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 4);
  *pcVar1 = *pcVar1 + in_AH;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

