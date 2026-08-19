// Function: FUN_1404a31e4
// Addr: 1404a31e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a31e4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,
                             CONCAT11(in_AH | (byte)((ulonglong)param_2 >> 8),in_AL)) + -0x48fffa3d)
  ;
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

