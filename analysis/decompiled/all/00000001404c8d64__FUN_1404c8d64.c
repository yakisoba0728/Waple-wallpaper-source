// Function: FUN_1404c8d64
// Addr: 1404c8d64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8d64(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int in_EAX;
  uint uVar2;
  undefined1 *unaff_RDI;
  
  uVar2 = in_EAX + 0xb6000a34;
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 ^ uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

