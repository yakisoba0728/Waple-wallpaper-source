// Function: FUN_1404d5100
// Addr: 1404d5100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5100(uint param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RDI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI & param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

