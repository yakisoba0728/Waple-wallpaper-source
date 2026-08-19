// Function: FUN_1404d66bc
// Addr: 1404d66bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d66bc(uint param_1)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

