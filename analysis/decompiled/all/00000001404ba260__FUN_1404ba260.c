// Function: FUN_1404ba260
// Addr: 1404ba260
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba260(uint param_1,byte param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & param_1;
  *(byte *)(unaff_RSI + unaff_RBP) = *(byte *)(unaff_RSI + unaff_RBP) | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

