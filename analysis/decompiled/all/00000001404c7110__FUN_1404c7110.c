// Function: FUN_1404c7110
// Addr: 1404c7110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7110(void)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

