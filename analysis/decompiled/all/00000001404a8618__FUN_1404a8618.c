// Function: FUN_1404a8618
// Addr: 1404a8618
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8618(char param_1)

{
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  char *unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RBP + 0xf01004a) = *(char *)(unaff_RBP + 0xf01004a) + in_AL + in_CF;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

