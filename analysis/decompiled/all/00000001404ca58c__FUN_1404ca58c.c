// Function: FUN_1404ca58c
// Addr: 1404ca58c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca58c(undefined8 param_1,int param_2)

{
  byte *pbVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  byte in_CF;
  
  pbVar1 = (byte *)((CONCAT71(in_register_00000001,in_AL) | 0xe0) + 7);
  *pbVar1 = *pbVar1 | (byte)(param_2 * 2 + (uint)in_CF >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

