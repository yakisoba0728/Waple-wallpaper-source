// Function: FUN_1404b3f68
// Addr: 1404b3f68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3f68(void)

{
  longlong in_RAX;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  *(uint *)(in_RAX + 0x12) = *(uint *)(in_RAX + 0x12) & unaff_EBX;
  *(char *)(in_RAX + -0x28) = *(char *)(in_RAX + -0x28) + (char)unaff_EBX;
  *(int *)(unaff_RSI + -0x48) = *(int *)(unaff_RSI + -0x48) + (int)in_RAX + 0x6c84f01;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

