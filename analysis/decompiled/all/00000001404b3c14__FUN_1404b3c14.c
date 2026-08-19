// Function: FUN_1404b3c14
// Addr: 1404b3c14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3c14(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)CONCAT62(in_register_00000002,
                            CONCAT11(in_AH + (char)((ulonglong)param_2 >> 8),in_AL));
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

