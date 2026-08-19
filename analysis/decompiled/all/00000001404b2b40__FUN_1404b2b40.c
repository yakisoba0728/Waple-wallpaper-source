// Function: FUN_1404b2b40
// Addr: 1404b2b40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2b40(char *param_1)

{
  int in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX + 0xcbffe86a;
  out(0x49,(char)uVar1);
  *param_1 = *param_1 + (char)(uVar1 >> 8);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

