// Function: FUN_1404ab988
// Addr: 1404ab988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab988(uint param_1)

{
  undefined4 uVar1;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & param_1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = LocalDescriptorTableRegister();
  *(undefined4 *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'd') = uVar1;
  verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

