// Function: FUN_1404c6a48
// Addr: 1404c6a48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6a48(char param_1)

{
  uint in_EAX;
  longlong unaff_RBX;
  int unaff_ESP;
  byte in_CF;
  
  *(int *)(unaff_RBX + 9) = (*(int *)(unaff_RBX + 9) - unaff_ESP) - (uint)in_CF;
  *(char *)(unaff_RBX + 0x34) = *(char *)(unaff_RBX + 0x34) + (char)(in_EAX >> 8);
  *(char *)(ulonglong)(in_EAX & 0x26011400) = *(char *)(ulonglong)(in_EAX & 0x26011400) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

