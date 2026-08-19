// Function: FUN_1404a3cc0
// Addr: 1404a3cc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3cc0(char *param_1,uint param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESP;
  
  pcVar1 = (char *)(ulonglong)(param_2 | *(uint *)CONCAT71(in_register_00000001,in_AL));
  *param_1 = *param_1 + in_AL;
  *(int *)CONCAT71(unaff_00000019,unaff_BL) = *(int *)CONCAT71(unaff_00000019,unaff_BL) + unaff_ESP;
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

