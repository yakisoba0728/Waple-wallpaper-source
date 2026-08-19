// Function: FUN_1404b4ef8
// Addr: 1404b4ef8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4ef8(undefined8 param_1,undefined8 param_2)

{
  int in_EAX;
  uint uVar1;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = in_EAX + 0x21004a + (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

