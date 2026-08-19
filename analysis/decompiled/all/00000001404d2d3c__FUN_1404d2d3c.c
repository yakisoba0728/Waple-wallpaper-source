// Function: FUN_1404d2d3c
// Addr: 1404d2d3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2d3c(longlong param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  char unaff_R13B;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x2c);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_3 = *param_3 + unaff_R13B;
  piVar2 = (int *)(param_1 * 2 + 0x4d1f0500);
  *piVar2 = *piVar2 + -0x10083a00;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

