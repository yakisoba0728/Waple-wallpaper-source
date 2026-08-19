// Function: FUN_1404b31b8
// Addr: 1404b31b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b31b8(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar5;
  undefined4 uVar3;
  uint uVar4;
  longlong unaff_RSI;
  
  uVar3 = in(0x49);
  bVar2 = *param_1;
  bVar5 = (byte)((uint)uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + '\x06' + CARRY1(bVar2,bVar5));
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)((ulonglong)uVar4 - 0x44);
  *pcVar1 = *pcVar1 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

