// Function: FUN_1404ada90
// Addr: 1404ada90
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404adaf9) overlaps instruction at (ram,0x0001404adaf8)
    */

void FUN_1404ada90(byte *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  byte bVar10;
  longlong unaff_RBX;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar4 = *param_1;
  bVar3 = (byte)(in_EAX ^ 0xd9640012);
  *param_1 = *param_1 + bVar3;
  iVar6 = (in_EAX ^ 0xd9640012) + 0x64150006 + (uint)CARRY1(bVar4,bVar3);
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  cRam0000000161baec1b = cRam0000000161baec1b + (char)param_2;
  bVar3 = (char)iVar6 + 2;
  bVar3 = bVar3 | *(byte *)(ulonglong)(CONCAT31(uVar2,bVar3) | 0xc341500);
  pcVar8 = (char *)(ulonglong)(CONCAT31(uVar2,bVar3) | 0xc341500);
  *(char *)(unaff_RBX + 0x12) = *(char *)(unaff_RBX + 0x12) + bVar3;
  pbVar1 = (byte *)(pcVar8 + 0x43);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar3 = bVar3 + *pcVar8 + CARRY1(bVar4,bVar10);
  uVar7 = CONCAT31(uVar2,bVar3) | 0xc341500;
  puVar9 = (uint *)(ulonglong)uVar7;
  *puVar9 = *puVar9 & uVar7;
  uVar7 = *puVar9;
  *(byte *)puVar9 = (byte)*puVar9 + bVar3;
  *(char *)(unaff_RBX + 0x12) = *(char *)(unaff_RBX + 0x12) + bVar3 + CARRY1((byte)uVar7,bVar3);
  pbVar1 = (byte *)((longlong)puVar9 + 0x43);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar4 = bVar3 + (byte)*puVar9 + CARRY1(bVar4,bVar10);
  uRam00000001b487dad8 = uRam00000001b487dad8 & unaff_EDI;
  uVar7 = CONCAT31(uVar2,(bVar4 | *(byte *)(ulonglong)(CONCAT31(uVar2,bVar4) | 0xc341500)) + 100) |
          0xc341500;
  uVar7 = (uVar7 | *(uint *)(ulonglong)uVar7) + 0xa0000f54;
  pcVar8 = (char *)(ulonglong)uVar7;
  *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  *param_4 = *param_4 + '>';
  cVar5 = (char)uVar7;
  *unaff_RSI = *unaff_RSI + cVar5;
  *pcVar8 = *pcVar8 + cVar5;
  if (*pcVar8 == '\0') {
    *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  }
  *pcVar8 = *pcVar8 + cVar5;
  param_1[CONCAT44(unaff_0000003c,unaff_EDI)] =
       param_1[CONCAT44(unaff_0000003c,unaff_EDI)] + (char)param_2;
  *param_4 = *param_4 + cRam50001244c0001244;
  sysret();
  return;
}

