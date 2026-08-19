// Function: FUN_1404b2800
// Addr: 1404b2800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2800(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  param_1 = in_AL + param_1;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,param_1) =
       *(char *)CONCAT71(in_register_00000001,param_1) + param_1;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,param_1) + 0x14);
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

