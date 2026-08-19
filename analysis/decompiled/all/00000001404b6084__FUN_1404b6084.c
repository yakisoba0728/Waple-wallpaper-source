// Function: FUN_1404b6084
// Addr: 1404b6084
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6084(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  undefined2 in_DS;
  
  *(undefined2 *)(unaff_RDI + 0x4b) = in_DS;
  *param_1 = *param_1 + in_AH;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

