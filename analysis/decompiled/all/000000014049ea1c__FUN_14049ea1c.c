// Function: FUN_14049ea1c
// Addr: 14049ea1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ea1c(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL | 0xf0,in_AL)) | 0xf0) + 7
                   );
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

