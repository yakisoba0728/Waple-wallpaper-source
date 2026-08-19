// Function: FUN_1404bd408
// Addr: 1404bd408
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd408(char *param_1,undefined8 param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) |
       (byte)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

