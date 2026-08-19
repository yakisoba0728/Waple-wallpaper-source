// Function: FUN_1404d1344
// Addr: 1404d1344
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1344(int param_1)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_1;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

