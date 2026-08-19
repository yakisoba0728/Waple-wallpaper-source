// Function: FUN_1404c8ba4
// Addr: 1404c8ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8ba4(byte *param_1,undefined8 param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar3;
  
  cVar3 = (char)param_2;
  param_1[0x31] = param_1[0x31] ^ in_AH;
  param_1[-0x7563ffcf] = param_1[-0x7563ffcf] + cVar3;
  bVar2 = *param_1;
  *param_1 = *param_1 + param_3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + (char)param_1 +
       CARRY1(bVar2,param_3);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + cVar3;
  *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ 0xc) + cVar3;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(in_AH | in_AL ^ 0xc,in_AL)) ^ 0xc) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

