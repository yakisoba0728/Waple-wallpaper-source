// Function: FUN_1404af4bc
// Addr: 1404af4bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af4bc(undefined8 param_1,byte param_2)

{
  uint in_EAX;
  uint uVar1;
  byte *unaff_RBX;
  
  uVar1 = (in_EAX - 0x21004a) - (uint)(in_EAX < 0xa0001413);
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RBX = *unaff_RBX & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

