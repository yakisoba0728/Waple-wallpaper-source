// Function: FUN_1404b0158
// Addr: 1404b0158
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0158(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + 0x42 + in_CF) + 0xf);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0xbd < in_AL || CARRY1(in_AL + 0x42,in_CF))
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

