// Function: FUN_1404a4394
// Addr: 1404a4394
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4394(undefined8 param_1,char *param_2)

{
  int *piVar1;
  char *pcVar2;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  int unaff_ESI;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + 7);
  *piVar1 = *piVar1 + unaff_ESI + (uint)in_CF;
  pcVar2 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x1004a11);
  *pcVar2 = *pcVar2 + in_AL;
  *param_2 = *param_2 + unaff_BL;
  cRamc010d012e014f016 = in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

