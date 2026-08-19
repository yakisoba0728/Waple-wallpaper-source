// Function: FUN_1404b6b94
// Addr: 1404b6b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6b94(char *param_1,undefined8 param_2)

{
  char in_AL;
  char *pcVar1;
  longlong unaff_RDI;
  
  *param_1 = *param_1 + in_AL;
  pcVar1 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | param_1[unaff_RDI],
                                     (char)param_2));
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

