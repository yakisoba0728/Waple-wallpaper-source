// Function: FUN_1404a9d6c
// Addr: 1404a9d6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9d6c(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char in_AL;
  undefined7 in_register_00000001;
  
  pbVar2 = (byte *)(CONCAT71(in_register_00000001,in_AL) + param_2);
  *pbVar2 = *pbVar2 | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x29fff2c1);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

