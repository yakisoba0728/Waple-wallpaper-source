// Function: FUN_1404d09d8
// Addr: 1404d09d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d09d8(char *param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  uint *unaff_RBP;
  char *in_R10;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + param_2;
  *unaff_RBP = *unaff_RBP | (uint)param_1;
  *param_1 = *param_1 - unaff_BL;
  *unaff_RBP = *unaff_RBP | (uint)param_1;
  *in_R10 = *in_R10 + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

