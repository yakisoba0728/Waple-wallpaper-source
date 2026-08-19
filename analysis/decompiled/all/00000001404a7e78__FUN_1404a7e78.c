// Function: FUN_1404a7e78
// Addr: 1404a7e78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7e78(byte *param_1)

{
  int *piVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  int unaff_ESP;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x10);
  *piVar1 = *piVar1 + unaff_ESP + (uint)in_CF;
  *param_1 = *param_1 ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

