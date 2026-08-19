// Function: FUN_1404b26a0
// Addr: 1404b26a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b26a0(longlong param_1)

{
  uint in_EAX;
  char unaff_BL;
  
  uRam00000001245026a8 = uRam00000001245026a8 & in_EAX;
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

