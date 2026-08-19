// Function: FUN_1404a5cd4
// Addr: 1404a5cd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5cd4(char *param_1,byte param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | param_2;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

