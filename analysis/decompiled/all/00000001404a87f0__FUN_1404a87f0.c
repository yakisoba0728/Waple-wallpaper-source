// Function: FUN_1404a87f0
// Addr: 1404a87f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a87f0(undefined8 param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RDI;
  
  param_2[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       param_2[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] +
       (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *param_2 = *param_2 + in_AH;
  *(char *)(unaff_RDI + 0x4021004a) = *(char *)(unaff_RDI + 0x4021004a) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

