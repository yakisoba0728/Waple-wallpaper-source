// Function: FUN_1404d06f8
// Addr: 1404d06f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d06f8(void)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + -0x48f9ffc6) = *(byte *)(unaff_RSI + -0x48f9ffc6) ^ 0x3a;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

