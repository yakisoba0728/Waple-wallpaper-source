// Function: FUN_1404bc00c
// Addr: 1404bc00c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bc00c(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  undefined8 uStack_10;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  func_0x00011881c03b();
  *unaff_RSI = *unaff_RSI + cVar1;
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x05';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  iRam00000000a81e0028 = iRam00000000a81e0028 + 0x57e1ffd8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

