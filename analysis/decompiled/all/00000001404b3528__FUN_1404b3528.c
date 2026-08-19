// Function: FUN_1404b3528
// Addr: 1404b3528
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3528(longlong param_1)

{
  undefined8 in_RAX;
  char *pcVar1;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(0x49,(char)in_RAX);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

