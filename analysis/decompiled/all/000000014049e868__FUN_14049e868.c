// Function: FUN_14049e868
// Addr: 14049e868
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e868(void)

{
  undefined2 uVar1;
  uint in_EAX;
  
  uVar1 = TaskRegister();
  *(undefined2 *)((ulonglong)(in_EAX | 0x4001064) - 0x70ffff16) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

