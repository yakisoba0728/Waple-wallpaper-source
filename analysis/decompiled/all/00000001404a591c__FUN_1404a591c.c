// Function: FUN_1404a591c
// Addr: 1404a591c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a591c(char *param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x4a);
  *pcVar1 = *pcVar1 - unaff_BL;
  *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

