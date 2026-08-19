// Function: FUN_1404ab948
// Addr: 1404ab948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab948(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_10;
  
  func_0x0001188eb951();
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  cVar1 = '\x17';
  do {
    unaff_RBP = unaff_RBP + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

