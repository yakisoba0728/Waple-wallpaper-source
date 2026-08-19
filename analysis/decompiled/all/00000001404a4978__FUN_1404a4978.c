// Function: FUN_1404a4978
// Addr: 1404a4978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4978(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint *unaff_RSI;
  uint unaff_EDI;
  
  *unaff_RSI = *unaff_RSI & unaff_EDI;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

