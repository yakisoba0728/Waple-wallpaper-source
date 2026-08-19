// Function: FUN_1404c5cb4
// Addr: 1404c5cb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5cb4(longlong param_1)

{
  int in_EAX;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_RSI;
  
  uVar1 = in_EAX + 0x764;
  if (uVar1 != 0) {
    *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001084c8c12 = cRam00000001084c8c12 + (char)((ulonglong)param_1 >> 8);
  puVar2 = (undefined1 *)(param_1 + -1);
  if (puVar2 == (undefined1 *)0x0 || cRam00000001084c8c12 == '\0') {
    *puVar2 = *puVar2;
    *unaff_RSI = *unaff_RSI;
    if (cRam0000000000000000 != '\0') {
      cRam0000000000000000 = cRam0000000000000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

