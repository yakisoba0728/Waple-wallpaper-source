// Function: FUN_1404c0fa8
// Addr: 1404c0fa8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0fa8(char *param_1,undefined8 param_2)

{
  byte in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  
  bVar1 = in_AL & (byte)param_2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) +
       (char)((ulonglong)param_2 >> 8);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) + bVar1;
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

