// Function: FUN_1404ad2c0
// Addr: 1404ad2c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad2c0(void)

{
  uint in_EAX;
  uint unaff_ESI;
  
  *(uint *)((ulonglong)in_EAX + 8) = *(uint *)((ulonglong)in_EAX + 8) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

