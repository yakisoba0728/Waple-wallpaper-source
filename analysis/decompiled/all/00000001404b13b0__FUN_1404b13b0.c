// Function: FUN_1404b13b0
// Addr: 1404b13b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b13b0(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar5;
  int in_EAX;
  uint uVar2;
  int iVar3;
  byte bVar6;
  longlong unaff_RSI;
  byte *pbVar4;
  
  bVar6 = (byte)param_2;
  iVar3 = in_EAX + 0x4b12c400;
  bVar1 = *param_1;
  bVar5 = (byte)((uint)iVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + '\x06' + CARRY1(bVar1,bVar5));
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + bVar6;
  uVar2 = uVar2 | *(uint *)(ulonglong)uVar2;
  pbVar4 = (byte *)(ulonglong)uVar2;
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar6;
  iVar3 = uVar2 + 0x49e56400 + (uint)CARRY1(bVar1,bVar6);
  *param_1 = *param_1 + (char)((uint)iVar3 >> 8);
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)iVar3 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

