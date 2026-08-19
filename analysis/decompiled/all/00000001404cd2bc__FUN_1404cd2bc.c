// Function: FUN_1404cd2bc
// Addr: 1404cd2bc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd2bc(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar6;
  int *piVar7;
  char unaff_BH;
  byte *unaff_RSI;
  char in_R10B;
  uint *puStack_10;
  uint *puStack_8;
  uint *puVar5;
  
  uVar4 = (int)(int *)(in_RAX | 1) + *(int *)(in_RAX | 1) + 0x3600470;
  puVar5 = (uint *)(ulonglong)uVar4;
  puStack_8 = puVar5;
  puStack_10 = puVar5;
  uVar6 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2));
  bVar3 = (byte)uVar4;
  *(byte *)puVar5 = (byte)*puVar5 + bVar3;
  pbVar1 = (byte *)((longlong)puVar5 * 2 + 0x28);
  *pbVar1 = *pbVar1 >> (param_1 & 7) | *pbVar1 << 8 - (param_1 & 7);
  piVar7 = (int *)(uVar6 & 0xffffffff);
  *(byte *)puVar5 = (byte)*puVar5 + in_R10B;
  pbVar1 = (byte *)((longlong)puVar5 * 2 + 4);
  *pbVar1 = *pbVar1 >> (param_1 & 7) | *pbVar1 << 8 - (param_1 & 7);
  *unaff_RSI = *unaff_RSI | (byte)piVar7;
  *(byte *)((longlong)puVar5 + 0x5904002b) = *(byte *)((longlong)puVar5 + 0x5904002b) - 6;
  *(byte *)((longlong)&puStack_10 + (longlong)puVar5) =
       *(byte *)((longlong)&puStack_10 + (longlong)puVar5) + unaff_BH;
  uVar2 = *puVar5;
  *(byte *)puVar5 = (byte)*puVar5 + bVar3;
  *piVar7 = *piVar7 + (int)uVar6 + (uint)CARRY1((byte)uVar2,bVar3);
  *puVar5 = *puVar5 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

