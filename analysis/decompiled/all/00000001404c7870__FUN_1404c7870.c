// Function: FUN_1404c7870
// Addr: 1404c7870
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7870(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  char *unaff_RDI;
  char in_CF;
  
  *unaff_RDI = *unaff_RDI + unaff_BH + in_CF;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) ^ in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

