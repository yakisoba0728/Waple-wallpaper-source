// Function: FUN_1404a8b54
// Addr: 1404a8b54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8b54(undefined8 param_1,undefined2 param_2)

{
  uint uVar1;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = in(param_2);
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1 |
          *(uint *)(ulonglong)(uVar1 | *(uint *)(ulonglong)uVar1);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

