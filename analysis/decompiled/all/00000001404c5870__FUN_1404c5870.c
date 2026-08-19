// Function: FUN_1404c5870
// Addr: 1404c5870
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5870(char *param_1,longlong param_2)

{
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char in_R11B;
  char unaff_R12B;
  
  *(byte *)(param_2 + 0x5788002e) = *(byte *)(param_2 + 0x5788002e) | in_AH;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cRam5788002ea208002e = in_AL;
  *param_1 = *param_1 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

