// Function: FUN_1404cf17c
// Addr: 1404cf17c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf17c(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *in_RAX;
  char *pcVar1;
  char unaff_SPL;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
    *param_4 = *param_4 + unaff_SPL;
    *param_2 = *param_2 + (char)in_RAX;
    *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

