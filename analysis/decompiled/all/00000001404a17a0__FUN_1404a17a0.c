// Function: FUN_1404a17a0
// Addr: 1404a17a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a17a0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | 0xb6) + 1);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

