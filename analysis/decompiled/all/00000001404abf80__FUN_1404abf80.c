// Function: FUN_1404abf80
// Addr: 1404abf80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abf80(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong unaff_RSI;
  char acStack_8 [8];
  
  uVar2 = uRambe64000fa177000f;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)acStack_8;
  uRam04210049e564000f =
       CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar2 + '\x06' + CARRY1(bVar1,(byte)acStack_8));
  acStack_8[unaff_RSI * 2] = acStack_8[unaff_RSI * 2] + (char)param_2;
  uRam04210049e564000f = uRam04210049e564000f | *(uint *)(ulonglong)uRam04210049e564000f;
  param_1[0x8e40400] = param_1[0x8e40400] + (char)((ulonglong)param_2 >> 8);
  *(char *)((ulonglong)uRam04210049e564000f - 0x3afff05d) =
       *(char *)((ulonglong)uRam04210049e564000f - 0x3afff05d) + (char)(uRam04210049e564000f >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

