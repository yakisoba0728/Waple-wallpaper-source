// Function: FUN_1404c7d84
// Addr: 1404c7d84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7d84(char param_1,byte *param_2)

{
  char *pcVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  
  bVar2 = in_AL & (byte)param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,bVar2) + 0x21000000);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 | bVar2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

