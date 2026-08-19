// Function: FUN_1404c05f8
// Addr: 1404c05f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c05f8(longlong param_1,undefined8 param_2,char param_3)

{
  char *in_RAX;
  char *pcVar1;
  
  *in_RAX = *in_RAX - (char)in_RAX;
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || *in_RAX == '\0') {
    *pcVar1 = *pcVar1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

