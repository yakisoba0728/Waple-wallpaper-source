// Function: FUN_1404b11d4
// Addr: 1404b11d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b11d4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  char unaff_SPL;
  byte in_CF;
  char in_ZF;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 == (char *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar1 = in_EAX + 0x4b10f400 + (uint)in_CF;
  *pcVar2 = *pcVar2 + (char)(uVar1 >> 8);
  *param_2 = *param_2 + (char)uVar1;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

