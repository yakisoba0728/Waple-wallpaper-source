// Function: FUN_1404adaa4
// Addr: 1404adaa4
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404adaf9) overlaps instruction at (ram,0x0001404adaf8)
    */

void FUN_1404adaa4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar10;
  longlong unaff_RBX;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  byte in_CF;
  char *pcVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  iVar6 = in_EAX + 0x21701172 + (uint)in_CF;
  uVar2 = (undefined3)((uint)iVar6 >> 8);
  bVar3 = (char)iVar6 + 2;
  bVar3 = bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  *(char *)(unaff_RBX + 0x12) = *(char *)(unaff_RBX + 0x12) + bVar3;
  pbVar1 = (byte *)((char *)(ulonglong)CONCAT31(uVar2,bVar3) + 0x43);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar3 = bVar3 + *(char *)(ulonglong)CONCAT31(uVar2,bVar3) + CARRY1(bVar4,bVar10);
  puVar8 = (uint *)(ulonglong)CONCAT31(uVar2,bVar3);
  *puVar8 = *puVar8 & CONCAT31(uVar2,bVar3);
  uVar7 = *puVar8;
  *(byte *)puVar8 = (byte)*puVar8 + bVar3;
  *(char *)(unaff_RBX + 0x12) = *(char *)(unaff_RBX + 0x12) + bVar3 + CARRY1((byte)uVar7,bVar3);
  pbVar1 = (byte *)((longlong)puVar8 + 0x43);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar4 = bVar3 + (byte)*puVar8 + CARRY1(bVar4,bVar10);
  uRam00000001b487dad8 = uRam00000001b487dad8 & unaff_EDI;
  uVar7 = CONCAT31(uVar2,(bVar4 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar4)) + 100);
  uVar7 = (uVar7 | *(uint *)(ulonglong)uVar7) + 0xa0000f54;
  pcVar9 = (char *)(ulonglong)uVar7;
  *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  *param_4 = *param_4 + '>';
  cVar5 = (char)uVar7;
  *unaff_RSI = *unaff_RSI + cVar5;
  *pcVar9 = *pcVar9 + cVar5;
  if (*pcVar9 == '\0') {
    *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
  }
  *pcVar9 = *pcVar9 + cVar5;
  pcVar9 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + param_1);
  *pcVar9 = *pcVar9 + (char)param_2;
  *param_4 = *param_4 + cRam50001244c0001244;
  sysret();
  return;
}

