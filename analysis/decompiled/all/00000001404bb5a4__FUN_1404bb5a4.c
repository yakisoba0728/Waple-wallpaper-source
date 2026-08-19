// Function: FUN_1404bb5a4
// Addr: 1404bb5a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb5a4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EDI;
  
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1 * 8);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x57e0fffb);
  *piVar1 = *piVar1 - unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

