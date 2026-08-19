// Function: FUN_1404a37ec
// Addr: 1404a37ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a37ec(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBP;
  
  uRam00000000d87737fa = uRam00000000d87737fa & unaff_EBP;
  verr();
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

