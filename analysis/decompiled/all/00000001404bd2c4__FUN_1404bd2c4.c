// Function: FUN_1404bd2c4
// Addr: 1404bd2c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd2c4(undefined8 param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x14);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8) + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

