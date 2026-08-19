// Function: FUN_1404c5198
// Addr: 1404c5198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5198(char *param_1,char param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *param_1 = *param_1 + param_2 + *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

