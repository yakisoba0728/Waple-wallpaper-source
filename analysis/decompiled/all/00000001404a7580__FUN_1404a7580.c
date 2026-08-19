// Function: FUN_1404a7580
// Addr: 1404a7580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7580(undefined8 param_1,byte param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(unaff_RSI + CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *pbVar1 = *pbVar1 | param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

