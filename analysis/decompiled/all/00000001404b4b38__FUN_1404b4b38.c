// Function: FUN_1404b4b38
// Addr: 1404b4b38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b38(byte param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint *in_RAX;
  byte *pbVar6;
  byte unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uVar5 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + unaff_BL;
  uVar5 = (uint)CARRY1((byte)uVar5,unaff_BL);
  uVar3 = (uint)in_RAX + *in_RAX;
  pbVar6 = (byte *)(ulonglong)(uVar3 + uVar5);
  *(char *)(param_2 * 2) =
       (*(char *)(param_2 * 2) - (char)((ulonglong)param_2 >> 8)) -
       (CARRY4((uint)in_RAX,*in_RAX) || CARRY4(uVar3,uVar5));
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + unaff_BL;
  bVar4 = (param_1 & 0x1f) % 9;
  bVar2 = pbVar6[unaff_RSI * 2];
  pbVar6[unaff_RSI * 2] =
       bVar2 << bVar4 | (byte)(CONCAT11(CARRY1(bVar1,unaff_BL),bVar2) >> 9 - bVar4);
  *(uint *)(&stack0xfffffffffffffff8 + (longlong)pbVar6) =
       *(uint *)(&stack0xfffffffffffffff8 + (longlong)pbVar6) & (uint)param_2;
  pbVar6[unaff_RBP * 2] = pbVar6[unaff_RBP * 2] + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

