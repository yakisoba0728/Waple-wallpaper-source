// Function: FUN_1404bd498
// Addr: 1404bd498
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd498(longlong param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_1;
  *(char *)(param_1 + -0x58) = *(char *)(param_1 + -0x58) + (char)param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

