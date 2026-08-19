// Function: FUN_1404ae070
// Addr: 1404ae070
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae070(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  bool bVar2;
  
  bVar2 = in_AL < 0xd0 || (byte)(in_AL + 0x30) < in_CF;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,-bVar2) + 0x17);
  *pcVar1 = (*pcVar1 - (char)((ulonglong)param_2 >> 8)) - bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

