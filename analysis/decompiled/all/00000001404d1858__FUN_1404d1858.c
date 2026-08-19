// Function: FUN_1404d1858
// Addr: 1404d1858
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1858(void)

{
  char in_AH;
  char unaff_DIL;
  undefined7 unaff_00000039;
  
  *(char *)CONCAT71(unaff_00000039,unaff_DIL) = *(char *)CONCAT71(unaff_00000039,unaff_DIL) + in_AH;
  cRam00000001984d5889 = cRam00000001984d5889 + unaff_DIL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

