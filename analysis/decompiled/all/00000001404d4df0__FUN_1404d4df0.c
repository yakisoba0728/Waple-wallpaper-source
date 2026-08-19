// Function: FUN_1404d4df0
// Addr: 1404d4df0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4df0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  
  pbVar1 = (byte *)((CONCAT71(in_register_00000001,in_AL) | 0xd0) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

