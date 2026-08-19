// Function: FUN_1404adfac
// Addr: 1404adfac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404adfac(longlong param_1,byte *param_2)

{
  char *in_RAX;
  char *pcVar1;
  char unaff_BL;
  char unaff_SPL;
  int unaff_EBP;
  int *unaff_RSI;
  char in_ZF;
  
  pcVar1 = (char *)(param_1 + -1);
  if (pcVar1 == (char *)0x0 || in_ZF != '\0') {
    *pcVar1 = *pcVar1 + (byte)in_RAX;
    *(byte *)unaff_RSI =
         (char)*unaff_RSI +
         ((byte)((ulonglong)in_RAX >> 8) | (byte)((uint)*(undefined4 *)in_RAX >> 8));
    *unaff_RSI = *unaff_RSI + unaff_EBP;
    *param_2 = *param_2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar1 = *pcVar1 + unaff_SPL;
  *param_2 = *param_2 | (byte)in_RAX;
  *in_RAX = *in_RAX + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

