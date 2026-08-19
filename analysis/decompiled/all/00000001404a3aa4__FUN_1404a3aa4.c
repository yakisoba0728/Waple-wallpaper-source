// Function: FUN_1404a3aa4
// Addr: 1404a3aa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3aa4(char *param_1)

{
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,0x39) = *(char *)CONCAT71(in_register_00000001,0x39) + '9';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

