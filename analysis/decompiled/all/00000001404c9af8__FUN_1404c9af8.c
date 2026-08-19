// Function: FUN_1404c9af8
// Addr: 1404c9af8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9af8(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RDI = *unaff_RDI + -0x32;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

