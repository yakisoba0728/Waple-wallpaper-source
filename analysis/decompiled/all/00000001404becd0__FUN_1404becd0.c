// Function: FUN_1404becd0
// Addr: 1404becd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404becd0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *unaff_retaddr;
  undefined8 auStack_10 [2];
  
  puVar2 = auStack_10 + 1;
  cVar1 = '\x05';
  do {
    unaff_retaddr = unaff_retaddr + -1;
    puVar2 = puVar2 + -1;
    *puVar2 = *unaff_retaddr;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

