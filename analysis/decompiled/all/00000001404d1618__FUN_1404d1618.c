// Function: FUN_1404d1618
// Addr: 1404d1618
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1618(longlong param_1,undefined8 param_2,char param_3)

{
  uint in_EAX;
  char *pcVar1;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
    *pcVar1 = *pcVar1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001345215ac = uRam00000001345215ac & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

