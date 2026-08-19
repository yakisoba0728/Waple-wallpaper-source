// Function: FUN_1404b22fc
// Addr: 1404b22fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b22fc(int param_1)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  int *unaff_RSI;
  int *unaff_RDI;
  
  *unaff_RSI = *unaff_RSI + unaff_ESP;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *unaff_RDI = *unaff_RDI + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

