// Function: FUN_1404befdc
// Addr: 1404befdc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404befdc(undefined8 param_1,longlong param_2)

{
  int in_EAX;
  uint uVar1;
  byte in_CF;
  char *pcVar2;
  
  uVar1 = in_EAX + 0x100026a3 + (uint)in_CF;
  pcVar2 = (char *)(ulonglong)uVar1;
  *pcVar2 = *pcVar2 + (char)uVar1;
  *(char *)(param_2 + -0x5ceaffda) = *(char *)(param_2 + -0x5ceaffda) << 1;
  *pcVar2 = *pcVar2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

