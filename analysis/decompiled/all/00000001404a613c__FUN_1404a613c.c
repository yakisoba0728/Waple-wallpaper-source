// Function: FUN_1404a613c
// Addr: 1404a613c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a613c(char *param_1,byte *param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 | in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

