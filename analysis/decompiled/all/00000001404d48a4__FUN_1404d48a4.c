// Function: FUN_1404d48a4
// Addr: 1404d48a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d48a4(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  uint *unaff_RDI;
  
  *(byte *)(CONCAT71(in_register_00000001,in_AL) | 0x50) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x50) + (in_AL | 0x50);
  *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

