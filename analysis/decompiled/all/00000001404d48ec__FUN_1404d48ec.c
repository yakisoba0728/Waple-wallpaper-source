// Function: FUN_1404d48ec
// Addr: 1404d48ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d48ec(longlong param_1,int param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar3;
  longlong unaff_RSI;
  
  bVar3 = (byte)((uint)param_2 >> 8);
  puVar1 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 8);
  *puVar1 = *puVar1 | (uint)&stack0x00000000;
  *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(int *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + param_2;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
  *(char *)(unaff_RSI + param_1) = *(char *)(unaff_RSI + param_1) + bVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_2;
  pbVar2 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL | 0xf0,in_AL)) | 0xf0) + 7
                   );
  *pbVar2 = *pbVar2 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

