// Function: FUN_1404b2094
// Addr: 1404b2094
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2094(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar2;
  char in_CF;
  
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + bVar2 + in_CF;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL,in_AL)) + 7);
  *pbVar1 = *pbVar1 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

