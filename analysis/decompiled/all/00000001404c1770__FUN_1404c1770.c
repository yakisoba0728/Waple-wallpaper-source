// Function: FUN_1404c1770
// Addr: 1404c1770
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c1770(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)func_0x0001404c638b();
  *pcVar1 = *pcVar1 + (char)pcVar1;
  uRam0000000194511780 = uRam0000000194511780 & (uint)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

