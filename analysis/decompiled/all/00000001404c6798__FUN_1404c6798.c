// Function: FUN_1404c6798
// Addr: 1404c6798
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6798(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  
  *(byte *)(param_1 + unaff_RBX) = *(byte *)(param_1 + unaff_RBX) | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x9ffd0d9);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

