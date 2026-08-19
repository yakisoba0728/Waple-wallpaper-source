// Function: FUN_1404a3810
// Addr: 1404a3810
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3810(int *param_1,int param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESI;
  byte *unaff_RDI;
  
  uRam000000001c012100 = uRam000000001c012100 & unaff_ESI;
  cRam00000001522a4c0d = cRam00000001522a4c0d + (char)param_2;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

