// Function: FUN_1404ab470
// Addr: 1404ab470
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab470(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  pcVar2 = (char *)func_0x0001456bb4bf();
  cVar1 = *pcVar2;
  *(int *)(unaff_RSI + 1) = *(int *)(unaff_RSI + 1) + -1;
  *(char *)(param_2 + -1) = *(char *)(param_2 + -1) + (char)pcVar2 + cVar1 + '4';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

