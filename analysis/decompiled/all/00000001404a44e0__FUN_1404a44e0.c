// Function: FUN_1404a44e0
// Addr: 1404a44e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a44e0(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x7f);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

