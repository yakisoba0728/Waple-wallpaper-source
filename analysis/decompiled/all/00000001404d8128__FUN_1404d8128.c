// Function: FUN_1404d8128
// Addr: 1404d8128
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d8128(undefined8 param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong in_R11;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 5);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)(in_R11 + -0x7ffbe05) = *(char *)(in_R11 + -0x7ffbe05) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

