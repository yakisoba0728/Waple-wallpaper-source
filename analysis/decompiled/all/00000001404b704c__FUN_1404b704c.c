// Function: FUN_1404b704c
// Addr: 1404b704c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b704c(longlong param_1)

{
  code *pcVar1;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
    pcVar1 = (code *)swi(0x24);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

