// Function: FUN_1404c5b20
// Addr: 1404c5b20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5b20(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

