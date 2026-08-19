// Function: FUN_1404aa0b8
// Addr: 1404aa0b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa0b8(longlong param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESP;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 0x21004a) = *(undefined1 *)(unaff_RDI + 0x21004a);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x5cfff240);
  *pcVar1 = *pcVar1 + in_AL;
  *(int *)(param_1 * 2) = *(int *)(param_1 * 2) + unaff_ESP;
  pcVar1 = (char *)(param_1 + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

