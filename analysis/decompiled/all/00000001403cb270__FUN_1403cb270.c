// Function: FUN_1403cb270
// Addr: 1403cb270
// Size: 185 bytes


int FUN_1403cb270(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar3;
  
  iVar7 = 0;
  iVar6 = (uint)*(byte *)(param_1 + 8) * 0x100 + (*(byte *)(param_1 + 9) - 1);
  if (-1 < iVar6) {
    do {
      uVar1 = (uint)(iVar6 + iVar7) >> 1;
      uVar3 = (ulonglong)uVar1;
      puVar5 = (undefined8 *)(param_1 + 0x10 + uVar3 * 6);
      uVar4 = (uint)*(byte *)(param_1 + 0x11 + uVar3 * 6) +
              (uint)*(byte *)(param_1 + 0x10 + uVar3 * 6) * 0x100;
      iVar2 = (uint)(uVar4 < param_2) - (uint)(param_2 < uVar4);
      if (iVar2 == 0) {
        uVar4 = (uint)*(byte *)((longlong)puVar5 + 3) +
                (uint)*(byte *)((longlong)puVar5 + 2) * 0x100;
        iVar2 = (uint)(uVar4 < param_3) - (uint)(param_3 < uVar4);
      }
      if (iVar2 < 0) {
        iVar6 = uVar1 - 1;
      }
      else {
        if (iVar2 < 1) goto LAB_1403cb30c;
        iVar7 = uVar1 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  puVar5 = &DAT_14045dd10;
LAB_1403cb30c:
  return (int)(short)((ushort)*(byte *)((longlong)puVar5 + 5) +
                     (ushort)*(byte *)((longlong)puVar5 + 4) * 0x100);
}

