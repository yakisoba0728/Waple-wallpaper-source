// Function: FUN_1404cdcb0
// Addr: 1404cdcb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdcb0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 2);
  *pcVar1 = (*pcVar1 - (char)((ulonglong)param_1 >> 8)) - in_CF;
  *param_2 = *param_2 + (char)param_1;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

