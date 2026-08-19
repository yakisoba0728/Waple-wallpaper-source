// Function: FUN_1404d2214
// Addr: 1404d2214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2214(byte *param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte in_AL;
  char in_AH;
  byte bVar4;
  undefined6 in_register_00000002;
  byte bVar5;
  char *unaff_RSI;
  longlong in_R10;
  
  bVar5 = (byte)param_2;
  param_1[0x21] = param_1[0x21] + (char)param_1;
  pcVar2 = (char *)(in_R10 + (longlong)unaff_RSI * 2);
  *pcVar2 = *pcVar2 + param_3;
  bVar4 = in_AH + *unaff_RSI;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) + in_AL;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar5;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) + (char)param_1 +
       CARRY1(bVar3,bVar5);
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) + bVar5;
  *(byte *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) ^ 0xc) =
       *(char *)(CONCAT62(in_register_00000002,CONCAT11(bVar4,in_AL)) ^ 0xc) + bVar5;
  pbVar1 = (byte *)((CONCAT62(in_register_00000002,CONCAT11(bVar4 | in_AL ^ 0xc,in_AL)) ^ 0xc) + 7);
  *pbVar1 = *pbVar1 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

