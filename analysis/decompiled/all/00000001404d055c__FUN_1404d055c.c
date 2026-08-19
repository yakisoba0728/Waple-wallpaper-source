// Function: FUN_1404d055c
// Addr: 1404d055c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d055c(undefined8 param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + 'M') + 0x31);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

