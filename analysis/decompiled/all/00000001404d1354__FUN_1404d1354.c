// Function: FUN_1404d1354
// Addr: 1404d1354
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1354(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  byte bVar4;
  uint uVar3;
  longlong unaff_RSI;
  
  uVar3 = param_2 + *(int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 2);
  *param_1 = *param_1 ^ in_AH;
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)));
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + in_AL;
  bVar4 = (byte)(uVar3 >> 8);
  param_1[unaff_RSI] = param_1[unaff_RSI] + bVar4 + CARRY1(bVar2,in_AL);
  pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (ulonglong)uVar3);
  *pbVar1 = *pbVar1 | bVar4;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

