// Function: FUN_1404bfe58
// Addr: 1404bfe58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfe58(char param_1)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_BL;
  unkbyte10 *unaff_RDI;
  
  bVar1 = in_AL + unaff_BL | *(byte *)CONCAT71(in_register_00000001,in_AL + unaff_BL);
  from_bcd(*unaff_RDI);
  *(char *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

