// Function: FUN_1404d05f4
// Addr: 1404d05f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d05f4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)(param_2 * 2);
  *pbVar1 = *pbVar1 | (byte)param_2;
  if (param_1 == 1 || *pbVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

