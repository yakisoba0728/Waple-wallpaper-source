// Function: FUN_1404a3204
// Addr: 1404a3204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3204(char *param_1,int *param_2)

{
  int *piVar1;
  char *pcVar2;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  int unaff_EDI;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + 0x11);
  *piVar1 = *piVar1 + (int)param_2;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x18);
  *pcVar2 = *pcVar2 + (char)param_2;
  cRam00000001674a4e81 = cRam00000001674a4e81 + (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + unaff_EDI;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

