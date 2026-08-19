// Function: FUN_1404ac594
// Addr: 1404ac594
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac594(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char *in_RAX;
  char in_CF;
  
  *in_RAX = *in_RAX + (char)in_RAX + in_CF;
  uVar1 = in(param_2);
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + 0x21004a;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

