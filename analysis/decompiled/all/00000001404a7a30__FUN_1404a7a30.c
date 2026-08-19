// Function: FUN_1404a7a30
// Addr: 1404a7a30
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7a30(char *param_1)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  param_1[10] = param_1[10] + (char)((ulonglong)param_1 >> 8);
  cRam00000001484a84a2 = cRam00000001484a84a2 + (char)param_1;
  if (cRam00000001484a84a2 < '\0') {
    *param_1 = *param_1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

