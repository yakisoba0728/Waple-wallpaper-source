// Function: FUN_1404d0800
// Addr: 1404d0800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0800(uint param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  uint *unaff_RDI;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RDI & param_1;
  cRam00000000d04d1571 = cRam00000000d04d1571 + in_AL;
  pcVar1 = (char *)((longlong)unaff_RDI +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH + in_AL,in_AL)));
  *pcVar1 = *pcVar1 + in_AH + in_AL;
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

