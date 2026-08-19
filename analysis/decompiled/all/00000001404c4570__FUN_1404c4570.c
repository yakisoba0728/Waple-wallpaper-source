// Function: FUN_1404c4570
// Addr: 1404c4570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4570(void)

{
  uint in_EAX;
  uint unaff_ESI;
  
  *(uint *)((ulonglong)in_EAX + 8) = *(uint *)((ulonglong)in_EAX + 8) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

