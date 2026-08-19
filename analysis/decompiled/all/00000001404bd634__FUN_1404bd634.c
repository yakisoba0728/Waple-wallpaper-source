// Function: FUN_1404bd634
// Addr: 1404bd634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd634(undefined8 param_1,undefined8 param_2)

{
  char in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  cRam21004bd520002530 = in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_2 >> 8);
  bRam00000001657c7847 = bRam00000001657c7847 ^ in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

