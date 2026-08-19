// Function: FUN_1404c506c
// Addr: 1404c506c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c506c(longlong param_1,longlong param_2)

{
  int in_EAX;
  int iVar1;
  char *pcVar2;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_ZF;
  
  out(*unaff_RSI,(short)param_2);
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 != (char *)0x0 && in_ZF != '\0') {
    *unaff_RDI = *(undefined1 *)(unaff_RSI + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_RDI[(longlong)pcVar2 * 2 + 0x4c] =
       unaff_RDI[(longlong)pcVar2 * 2 + 0x4c] + (char)((ulonglong)pcVar2 >> 8);
  *pcVar2 = *pcVar2 + (char)((uint)in_EAX >> 8);
  iVar1 = in_EAX + 0x68050002U + *(int *)(ulonglong)(in_EAX + 0x68050002U);
  out(unaff_RSI[1],(short)param_2);
  if (pcVar2 == (char *)0x1 || iVar1 != 0) {
    *(char *)(param_2 + -0x73ffd21f) = *(char *)(param_2 + -0x73ffd21f) + (char)((uint)iVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RDI = *(undefined1 *)(unaff_RSI + 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

