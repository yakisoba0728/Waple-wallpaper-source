// Function: FUN_1404a1fa0
// Addr: 1404a1fa0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1fa0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2);
  *pbVar1 = *pbVar1 | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

