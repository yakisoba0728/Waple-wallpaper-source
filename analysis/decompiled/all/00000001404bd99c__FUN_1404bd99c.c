// Function: FUN_1404bd99c
// Addr: 1404bd99c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd99c(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  char unaff_retaddr;
  
  *(char *)(unaff_RDI + 0x78) = *(char *)(unaff_RDI + 0x78) + unaff_retaddr;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

