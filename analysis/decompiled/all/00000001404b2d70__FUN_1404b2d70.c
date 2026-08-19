// Function: FUN_1404b2d70
// Addr: 1404b2d70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2d70(char *param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

