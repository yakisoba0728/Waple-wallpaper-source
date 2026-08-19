// Function: FUN_1404ccb88
// Addr: 1404ccb88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccb88(char *param_1,char param_2,char param_3)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x36);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

