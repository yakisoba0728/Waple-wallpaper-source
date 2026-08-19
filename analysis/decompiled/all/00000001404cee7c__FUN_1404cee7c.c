// Function: FUN_1404cee7c
// Addr: 1404cee7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cee7c(undefined8 param_1,char *param_2,char param_3)

{
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *param_2 = *param_2 + param_3;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

