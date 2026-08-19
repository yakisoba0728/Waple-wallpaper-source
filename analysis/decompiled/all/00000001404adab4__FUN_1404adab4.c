// Function: FUN_1404adab4
// Addr: 1404adab4
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404adaf9) overlaps instruction at (ram,0x0001404adaf8)
    */

void FUN_1404adab4(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  char *in_RAX;
  undefined7 uVar9;
  longlong unaff_RBX;
  char *unaff_RSI;
  uint unaff_EDI;
  undefined4 unaff_0000003c;
  char in_CF;
  bool in_OF;
  uint *puVar8;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  if (!in_OF) {
    uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar4 = (char)in_RAX + *in_RAX + in_CF;
    puVar8 = (uint *)CONCAT71(uVar9,bVar4);
    *puVar8 = *puVar8 & (uint)puVar8;
    uVar7 = *puVar8;
    *(byte *)puVar8 = (byte)*puVar8 + bVar4;
    *(char *)(unaff_RBX + 0x12) = *(char *)(unaff_RBX + 0x12) + bVar4 + CARRY1((byte)uVar7,bVar4);
    pbVar1 = (byte *)((longlong)puVar8 + 0x43);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar5;
    bVar5 = bVar4 + (byte)*puVar8 + CARRY1(bVar3,bVar5);
    uRam00000001b487dad8 = uRam00000001b487dad8 & unaff_EDI;
    puVar8 = (uint *)CONCAT71(uVar9,(bVar5 | *(byte *)CONCAT71(uVar9,bVar5)) + 100);
    uVar7 = ((uint)puVar8 | *puVar8) + 0xa0000f54;
    in_RAX = (char *)(ulonglong)uVar7;
    *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
    *param_4 = *param_4 + '>';
    cVar6 = (char)uVar7;
    *unaff_RSI = *unaff_RSI + cVar6;
    *in_RAX = *in_RAX + cVar6;
    if (*in_RAX != '\0') goto code_r0x0001404adaef;
  }
  *(undefined1 *)(param_2 * 2) = *(undefined1 *)(param_2 * 2);
code_r0x0001404adaef:
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar2 = (char *)(CONCAT44(unaff_0000003c,unaff_EDI) + param_1);
  *pcVar2 = *pcVar2 + (char)param_2;
  *param_4 = *param_4 + cRam50001244c0001244;
  sysret();
  return;
}

