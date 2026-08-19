// Function: FUN_1404d17a4
// Addr: 1404d17a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d17a4(void)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

