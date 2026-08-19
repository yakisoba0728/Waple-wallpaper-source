// Function: FUN_1404cc824
// Addr: 1404cc824
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc824(undefined8 param_1,int param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  int *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

