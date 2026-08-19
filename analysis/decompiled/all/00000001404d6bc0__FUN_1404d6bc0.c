// Function: FUN_1404d6bc0
// Addr: 1404d6bc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6bc0(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBP;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RBP + -0x6a) = *(char *)(unaff_RBP + -0x6a) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

