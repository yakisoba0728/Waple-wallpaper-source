// Function: FUN_1404d0ba4
// Addr: 1404d0ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0ba4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_ESP;
  int *unaff_RDI;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *unaff_RDI = *unaff_RDI + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

