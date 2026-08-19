// Function: FUN_1404b25d0
// Addr: 1404b25d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b25d0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -6);
  *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

