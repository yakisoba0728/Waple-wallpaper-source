// Function: FUN_1404acbe8
// Addr: 1404acbe8
// Size: 1 bytes


void FUN_1404acbe8(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte *pbVar6;
  uint *puVar7;
  byte bVar8;
  undefined1 *unaff_RSI;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  uVar5 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | (byte)param_2,(char)in_RAX)) +
          0x16340400;
  pbVar6 = (byte *)(ulonglong)uVar5;
  pbVar1 = pbVar6 + -0x2f;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  bVar3 = *pbVar6;
  bVar4 = *pbVar6 + (byte)uVar5;
  *pbVar6 = bVar4 + CARRY1(bVar2,bVar8);
  puVar7 = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),*unaff_RSI);
  *puVar7 = *puVar7 << 1 | (uint)(CARRY1(bVar3,(byte)uVar5) || CARRY1(bVar4,CARRY1(bVar2,bVar8)));
  return;
}

