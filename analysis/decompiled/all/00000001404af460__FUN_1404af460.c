// Function: FUN_1404af460
// Addr: 1404af460
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af460(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI & unaff_EBX;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

