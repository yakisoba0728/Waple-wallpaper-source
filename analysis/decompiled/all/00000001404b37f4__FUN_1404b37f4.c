// Function: FUN_1404b37f4
// Addr: 1404b37f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b37f4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *in_RAX;
  char unaff_SPL;
  char in_ZF;
  char *pcVar2;
  
  if (param_1 + -1 == 0 || in_ZF != '\0') {
    *param_4 = *param_4 + unaff_SPL;
    *in_RAX = *in_RAX + (char)(param_1 + -1);
    *in_RAX = *in_RAX + (char)in_RAX;
    cVar1 = in(0x2c);
    pcVar2 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    *pcVar2 = *pcVar2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

