// Function: FUN_1404a5e9c
// Addr: 1404a5e9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5e9c(byte *param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte in_AL;
  undefined7 in_register_00000001;
  byte bVar5;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  bool bVar6;
  
  bVar5 = (byte)param_2;
  param_1[unaff_RSI] = param_1[unaff_RSI] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x42);
  *pcVar1 = *pcVar1 + in_AL;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  bVar3 = *param_1;
  *param_1 = *param_1 + in_AL;
  cRam000000005d900008 = cRam000000005d900008 + in_AL + CARRY1(bVar3,in_AL);
  bVar6 = CARRY1(*(byte *)CONCAT71(in_register_00000001,in_AL),bVar5);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + bVar5;
  pbVar2 = (byte *)(in_FS_OFFSET + CONCAT71(in_register_00000001,in_AL));
  bVar3 = *pbVar2;
  bVar4 = *pbVar2;
  *pbVar2 = bVar4 + in_AL + bVar6;
  *(char *)(param_2 + 0x7007f009) =
       *(char *)(param_2 + 0x7007f009) + bVar5 +
       (CARRY1(bVar3,in_AL) || CARRY1(bVar4 + in_AL,bVar6));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

