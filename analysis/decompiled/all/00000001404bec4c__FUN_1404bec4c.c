// Function: FUN_1404bec4c
// Addr: 1404bec4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bec4c(void)

{
  char cVar1;
  uint *in_RAX;
  longlong unaff_RBX;
  undefined8 *puVar2;
  longlong unaff_RBP;
  undefined8 *unaff_retaddr;
  undefined8 auStack_10 [2];
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(undefined1 *)(unaff_RBP + 0x26) = *(undefined1 *)(unaff_RBP + 0x26);
  *(char *)(unaff_RBX + -0x18) = *(char *)(unaff_RBX + -0x18) + (char)((ulonglong)in_RAX >> 8);
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

