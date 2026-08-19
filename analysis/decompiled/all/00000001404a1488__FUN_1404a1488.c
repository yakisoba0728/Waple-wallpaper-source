// Function: FUN_1404a1488
// Addr: 1404a1488
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1488(void)

{
  short sVar1;
  undefined4 *in_RAX;
  uint *puVar2;
  
  sVar1 = (short)in_RAX + (short)*in_RAX;
  puVar2 = (uint *)(ulonglong)(uint)(int)sVar1;
  *puVar2 = *puVar2 & (int)sVar1;
  *(char *)puVar2 = (char)*puVar2 + (char)sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

