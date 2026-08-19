// Function: FUN_1404a6cbc
// Addr: 1404a6cbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6cbc(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_RAX;
  char *unaff_RBX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = *param_2;
  uVar2 = (uint)uRam0000000145ae77d7 >> 8;
  *unaff_RBX = *unaff_RBX + (char)uVar1;
  *unaff_RBX = *unaff_RBX + (char)uVar1;
  *(char *)(ulonglong)uVar1 =
       *(char *)(ulonglong)uVar1 + ((byte)((ulonglong)in_RAX >> 8) | (byte)uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

