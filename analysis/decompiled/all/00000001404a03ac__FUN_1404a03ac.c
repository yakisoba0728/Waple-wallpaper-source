// Function: FUN_1404a03ac
// Addr: 1404a03ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a03ac(void)

{
  uint uVar1;
  uint *in_RAX;
  uint *puVar2;
  
  uVar1 = (uint)in_RAX + *in_RAX + 0x7800032a + (uint)CARRY4((uint)in_RAX,*in_RAX);
  puVar2 = (uint *)(ulonglong)uVar1;
  *puVar2 = *puVar2 & uVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

