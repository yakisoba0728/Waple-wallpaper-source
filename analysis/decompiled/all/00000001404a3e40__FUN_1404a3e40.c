// Function: FUN_1404a3e40
// Addr: 1404a3e40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3e40(longlong param_1,undefined2 param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
  in(param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

