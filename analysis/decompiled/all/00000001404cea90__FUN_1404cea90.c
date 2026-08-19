// Function: FUN_1404cea90
// Addr: 1404cea90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cea90(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11((byte)((ulonglong)param_2 >> 8) | (&stack0x00000000)[param_1],
                                     (char)param_2));
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

