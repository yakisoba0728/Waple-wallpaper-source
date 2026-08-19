// Function: FUN_1404c4fe0
// Addr: 1404c4fe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4fe0(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

