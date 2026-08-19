// Function: FUN_1404d7f48
// Addr: 1404d7f48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7f48(char *param_1,char param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char *unaff_RBX;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *param_1 = *param_1 + (char)param_1;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

