// Function: FUN_1404a5290
// Addr: 1404a5290
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5290(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  bool in_OF;
  
  if (in_OF) {
    *param_1 = *param_1 + -8;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -9);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

