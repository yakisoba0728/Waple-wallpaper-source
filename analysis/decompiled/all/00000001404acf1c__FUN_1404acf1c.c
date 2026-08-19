// Function: FUN_1404acf1c
// Addr: 1404acf1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acf1c(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_18;
  
  func_0x00011895cf5a();
  puVar2 = (undefined8 *)&stack0xfffffffffffffff0;
  cVar1 = '\x18';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

