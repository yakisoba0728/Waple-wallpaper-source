// Function: FUN_1404c71ac
// Addr: 1404c71ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c71ac(char *param_1)

{
  undefined7 in_register_00000001;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,0x70) = *(char *)CONCAT71(in_register_00000001,0x70) + 'p';
  param_1[-0xc] = param_1[-0xc] + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

