// Function: FUN_1404b98cc
// Addr: 1404b98cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b98cc(void)

{
  longlong in_RAX;
  int unaff_EBX;
  byte in_CF;
  
  *(int *)(in_RAX + -0x77ecfffc) = (*(int *)(in_RAX + -0x77ecfffc) - unaff_EBX) - (uint)in_CF;
  cRam00000000e84ba045 = cRam00000000e84ba045 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

