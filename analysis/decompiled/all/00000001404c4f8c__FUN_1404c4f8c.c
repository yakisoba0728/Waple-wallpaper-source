// Function: FUN_1404c4f8c
// Addr: 1404c4f8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4f8c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + 0x92 + in_CF) + 1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0x6d < in_AL || CARRY1(in_AL + 0x92,in_CF))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

