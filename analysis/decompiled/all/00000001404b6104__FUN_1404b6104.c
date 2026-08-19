// Function: FUN_1404b6104
// Addr: 1404b6104
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6104(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar9;
  uint *in_RAX;
  byte bVar10;
  undefined7 uVar11;
  longlong *unaff_RBP;
  longlong unaff_RSI;
  undefined1 in_CF;
  uint *puVar8;
  
  uVar11 = (undefined7)((ulonglong)param_1 >> 8);
  bVar10 = (byte)param_1;
  uVar7 = *(uint *)(unaff_RSI + 0x1b);
  *(uint *)(unaff_RSI + 0x1b) =
       uVar7 << (bVar10 & 0x1f) | (uint)(CONCAT14(in_CF,uVar7) >> 0x21 - (bVar10 & 0x1f));
  *(char *)in_RAX = (char)*in_RAX + param_2;
  *param_4 = *param_4;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bVar3 = bVar10 * '\x02';
  uVar2 = (uint)in_RAX - *in_RAX;
  uVar5 = uVar2 - CARRY1(bVar10,bVar10);
  puVar8 = (uint *)(ulonglong)uVar5;
  uVar7 = *(uint *)(unaff_RSI + 0x1b);
  *(uint *)(unaff_RSI + 0x1b) =
       uVar7 << (bVar3 & 0x1f) |
       (uint)(CONCAT14((uint)in_RAX < *in_RAX || uVar2 < CARRY1(bVar10,bVar10),uVar7) >>
             0x21 - (bVar3 & 0x1f));
  *(char *)puVar8 = (char)*puVar8 + param_2;
  *param_4 = *param_4 + -8;
  bVar4 = (byte)uVar5;
  *(byte *)puVar8 = (char)*puVar8 + bVar4;
  pbVar1 = (byte *)((longlong)puVar8 + 0x56);
  bVar10 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  uVar7 = *puVar8;
  uVar2 = *puVar8;
  uVar6 = (uVar5 - uVar2) - (uint)CARRY1(bVar10,bVar4);
  *unaff_RBP = unaff_RSI;
  uVar7 = (uVar6 - *(int *)(ulonglong)uVar6) -
          (uint)(uVar5 < uVar7 || uVar5 - uVar2 < (uint)CARRY1(bVar10,bVar4));
  cVar9 = (char)(uVar7 >> 8);
  *(char *)((ulonglong)uVar7 + 0x4b) = *(char *)((ulonglong)uVar7 + 0x4b) + cVar9;
  *(char *)CONCAT71(uVar11,bVar3) = *(char *)CONCAT71(uVar11,bVar3) + cVar9;
  uVar7 = uVar7 + 0x74050002;
  *(byte *)(ulonglong)uVar7 = *(byte *)(ulonglong)uVar7 | (byte)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

