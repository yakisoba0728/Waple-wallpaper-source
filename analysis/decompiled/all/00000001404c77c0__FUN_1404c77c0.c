// Function: FUN_1404c77c0
// Addr: 1404c77c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c77c0(char *param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)(param_2 + 0x4a) = *(char *)(param_2 + 0x4a) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AL;
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) ^ (uint)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

