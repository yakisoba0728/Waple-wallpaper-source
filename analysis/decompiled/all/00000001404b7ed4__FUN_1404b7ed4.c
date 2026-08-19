// Function: FUN_1404b7ed4
// Addr: 1404b7ed4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7ed4(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

