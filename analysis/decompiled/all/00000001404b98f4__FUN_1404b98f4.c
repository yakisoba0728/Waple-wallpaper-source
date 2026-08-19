// Function: FUN_1404b98f4
// Addr: 1404b98f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b98f4(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  byte in_CF;
  
  *(byte *)(unaff_RDI + 0x21004b) = *(byte *)(unaff_RDI + 0x21004b) << 1 | in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

