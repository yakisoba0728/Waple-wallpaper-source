// Function: FUN_1404b647c
// Addr: 1404b647c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b647c(longlong param_1,undefined2 param_2)

{
  uint uVar1;
  uint *in_RAX;
  uint *puVar2;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  param_1 = param_1 + -1;
  if (param_1 != 0 && (char)*in_RAX != '\0') {
    uVar1 = (uint)in_RAX + 0x74050002;
    *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 | (byte)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while (param_1 != 0) {
    param_1 = param_1 + -1;
    out(*unaff_RSI,param_2);
    unaff_RSI = unaff_RSI + 1;
  }
  *unaff_RDI = *(undefined1 *)unaff_RSI;
  puVar2 = (uint *)func_0x00014b4c64d7();
  *puVar2 = *puVar2 | (uint)puVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

