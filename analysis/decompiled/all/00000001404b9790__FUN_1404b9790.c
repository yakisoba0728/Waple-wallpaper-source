// Function: FUN_1404b9790
// Addr: 1404b9790
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9790(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int unaff_EBX;
  int *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI + unaff_EBX;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

