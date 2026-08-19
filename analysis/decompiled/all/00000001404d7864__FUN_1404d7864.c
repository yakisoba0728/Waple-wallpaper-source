// Function: FUN_1404d7864
// Addr: 1404d7864
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7864(void)

{
  char in_AH;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

