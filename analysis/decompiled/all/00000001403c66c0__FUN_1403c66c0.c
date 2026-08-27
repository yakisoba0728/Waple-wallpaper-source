// Function: FUN_1403c66c0
// Addr: 1403c66c0
// Size: 189 bytes


undefined8 * FUN_1403c66c0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar4;
  
  iVar5 = 0;
  lVar6 = (ulonglong)*(byte *)(param_1 + 7) +
          ((ulonglong)*(byte *)(param_1 + 6) +
          (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)) * 0x100) *
          0x100 + param_1;
  iVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar7) {
    do {
      uVar3 = (uint)(iVar7 + iVar5) >> 1;
      uVar4 = (ulonglong)uVar3;
      bVar2 = *(byte *)(lVar6 + uVar4 * 6);
      puVar1 = (undefined8 *)(lVar6 + uVar4 * 6);
      uVar8 = (uint)*(byte *)(lVar6 + 1 + uVar4 * 6) + (uint)bVar2 * 0x100;
      if (param_2 < uVar8) {
        iVar7 = uVar3 - 1;
      }
      else {
        if (param_2 <= uVar8) {
          if (puVar1 == &DAT_14045dd10) {
            return (undefined8 *)0x0;
          }
          if ((puVar1 != (undefined8 *)0x0) &&
             (CONCAT11(bVar2,*(undefined1 *)((longlong)puVar1 + 1)) != param_2)) {
            return (undefined8 *)0x0;
          }
          return puVar1;
        }
        iVar5 = uVar3 + 1;
      }
    } while (iVar5 <= iVar7);
  }
  return (undefined8 *)0x0;
}

