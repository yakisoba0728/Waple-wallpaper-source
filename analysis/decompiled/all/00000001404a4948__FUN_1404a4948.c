// Function: FUN_1404a4948
// Addr: 1404a4948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4948(void)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe6) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe6) + (in_AL ^ 0xe6);
  *(byte *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe6) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) ^ 0xe6) + (in_AL ^ 0xe6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

