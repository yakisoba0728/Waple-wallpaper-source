// Function: FUN_1404cd144
// Addr: 1404cd144
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd144(byte *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_EAX;
  longlong unaff_RSI;
  
  *(byte *)(unaff_RSI + -0x59b0ffcb) =
       *(byte *)(unaff_RSI + -0x59b0ffcb) ^ (byte)((uint)in_EAX >> 8);
  bVar2 = *param_1;
  bVar4 = (byte)in_EAX;
  *param_1 = *param_1 + bVar4;
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar4 + 10 + CARRY1(bVar2,bVar4)) ^ 0x4a3d5400;
  pbVar1 = &stack0x00000000 + unaff_RSI;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3 + (uint)CARRY1(bVar2,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

