// Function: FUN_1404cfc10
// Addr: 1404cfc10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfc10(int *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte in_CF;
  
  *param_1 = (*param_1 - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) - (uint)in_CF;
  pbVar1 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH | in_AL,in_AL))) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

