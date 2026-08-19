// Function: FUN_1404aa434
// Addr: 1404aa434
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa434(void)

{
  int *piVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0x10);
  *piVar1 = *piVar1 + (int)&stack0x00000000 + (uint)in_CF;
  uRam00000001b44fa440 = uRam00000001b44fa440 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

