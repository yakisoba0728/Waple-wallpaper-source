// Function: FUN_1404c0d74
// Addr: 1404c0d74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0d74(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  char in_R11B;
  char in_CF;
  
  param_1[-0x56bfffd8] = param_1[-0x56bfffd8] + (char)((ulonglong)param_1 >> 8) + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

