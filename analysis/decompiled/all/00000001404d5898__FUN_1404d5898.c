// Function: FUN_1404d5898
// Addr: 1404d5898
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5898(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char *in_R9;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RSI;
  *in_R9 = *in_R9 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  unaff_RDI[0x7d] = unaff_RDI[0x7d] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

