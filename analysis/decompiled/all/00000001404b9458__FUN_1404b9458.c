// Function: FUN_1404b9458
// Addr: 1404b9458
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9458(void)

{
  char cVar1;
  uint *in_RAX;
  uint unaff_EBX;
  undefined8 *puVar2;
  undefined8 *unaff_RBP;
  undefined8 uStack_18;
  
  *(uint *)((longlong)unaff_RBP + 0x12) = *(uint *)((longlong)unaff_RBP + 0x12) & unaff_EBX;
  *(char *)(unaff_RBP + -1) = *(char *)(unaff_RBP + -1) + (char)unaff_EBX;
  *in_RAX = *in_RAX | (uint)in_RAX;
  func_0x000118969470();
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

