// Function: FUN_1404bd33c
// Addr: 1404bd33c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd33c(undefined8 param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  ulonglong in_RAX;
  char *pcVar2;
  undefined8 *unaff_RBP;
  undefined1 *unaff_RDI;
  char cVar3;
  undefined8 unaff_retaddr;
  
  cVar3 = (char)((ulonglong)unaff_retaddr >> 8);
  pcVar2 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4;
  *(char *)((ulonglong)*param_2 - 8) = *(char *)((ulonglong)*param_2 - 8) + (char)(in_RAX >> 8);
  *pcVar2 = *pcVar2 + (char)pcVar2;
  func_0x00011899d34f();
  cVar1 = '\x18';
  do {
    unaff_RBP = unaff_RBP + -1;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -8);
    *(undefined8 *)register0x00000020 = *unaff_RBP;
    cVar1 = cVar1 + -1;
  } while ('\0' < cVar1);
  *(char *)param_2 = (char)*param_2 + cVar3;
  *unaff_RDI = 4;
  cRam00000001614bdbe1 = cRam00000001614bdbe1 + '/';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

