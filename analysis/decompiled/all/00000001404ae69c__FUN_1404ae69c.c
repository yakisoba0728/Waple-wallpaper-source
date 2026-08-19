// Function: FUN_1404ae69c
// Addr: 1404ae69c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae69c(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  uint *unaff_RDI;
  char in_CF;
  
  cVar1 = in_AL + '\x01' + in_CF;
  cRam0000000142aaea85 = cRam0000000142aaea85 + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

