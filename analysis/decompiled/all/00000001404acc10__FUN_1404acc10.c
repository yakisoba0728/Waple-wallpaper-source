// Function: FUN_1404acc10
// Addr: 1404acc10
// Size: 1 bytes


void FUN_1404acc10(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_RAX;
  int *piVar6;
  uint *puVar8;
  byte bVar10;
  undefined1 *unaff_RSI;
  byte *pbVar7;
  byte bVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  piVar6 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar9 + bVar10,(char)in_RAX));
  iVar4 = (int)piVar6 + *piVar6 + (uint)CARRY1(bVar9,bVar10);
  bVar9 = (byte)((uint)iVar4 >> 8);
  uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),
                   CONCAT11(bVar9 * '\x02' + (byte)param_2,(char)iVar4 + CARRY1(bVar9,bVar9))) +
          0x16340000 + (uint)CARRY1(bVar9 * '\x02',(byte)param_2);
  pbVar7 = (byte *)(ulonglong)uVar5;
  pbVar1 = pbVar7 + -0x2f;
  bVar9 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  bVar2 = *pbVar7;
  bVar3 = *pbVar7 + (byte)uVar5;
  *pbVar7 = bVar3 + CARRY1(bVar9,bVar10);
  puVar8 = (uint *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),*unaff_RSI);
  *puVar8 = *puVar8 << 1 | (uint)(CARRY1(bVar2,(byte)uVar5) || CARRY1(bVar3,CARRY1(bVar9,bVar10)));
  return;
}

