// Function: FUN_1404bd208
// Addr: 1404bd208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd208(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  byte *unaff_RBX;
  
  *unaff_RBX = *unaff_RBX & (byte)param_2;
  pcVar1 = (char *)(param_1 + param_2 * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_4 = *param_4;
  func_0x00011890d22f();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

