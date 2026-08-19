// Function: FUN_1404bdfd8
// Addr: 1404bdfd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdfd8(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x5777ffdb);
  *pcVar1 = *pcVar1 + -0x25;
  pcVar1 = (char *)(unaff_RBP + 0x2221004b + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

