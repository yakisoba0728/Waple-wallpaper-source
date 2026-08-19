// Function: FUN_1404ba270
// Addr: 1404ba270
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba270(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  char *unaff_RDI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *unaff_RDI = *unaff_RDI + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

