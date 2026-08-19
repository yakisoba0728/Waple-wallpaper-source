// Function: FUN_1404d3748
// Addr: 1404d3748
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3748(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  char unaff_R12B;
  
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RBX + -0x60ffc09c) = *(char *)(unaff_RBX + -0x60ffc09c) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

