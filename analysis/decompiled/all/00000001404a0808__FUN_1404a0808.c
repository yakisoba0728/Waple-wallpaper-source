// Function: FUN_1404a0808
// Addr: 1404a0808
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0808(void)

{
  uint in_EAX;
  
  uRam00000001b44f0810 = uRam00000001b44f0810 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

