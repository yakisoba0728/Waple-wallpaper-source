// Function: FUN_1404a4190
// Addr: 1404a4190
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4190(uint param_1)

{
  uint in_EAX;
  uint *puVar1;
  
  puVar1 = (uint *)(ulonglong)(in_EAX | 0xb300c60);
  *(char *)puVar1 = (char)*puVar1 + (char)(in_EAX | 0xb300c60);
  *puVar1 = *puVar1 & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

