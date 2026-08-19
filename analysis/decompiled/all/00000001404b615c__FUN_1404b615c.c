// Function: FUN_1404b615c
// Addr: 1404b615c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b615c(void)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

