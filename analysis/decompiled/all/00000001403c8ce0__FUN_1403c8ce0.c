// Function: FUN_1403c8ce0
// Addr: 1403c8ce0
// Size: 175 bytes


undefined1 FUN_1403c8ce0(ushort *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  ushort *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  puVar4 = &DAT_14045dd10;
  puVar3 = (ushort *)&DAT_14045dd10;
  uVar5 = (*param_1 & 0xff) * 0x100 + (uint)(*param_1 >> 8);
  if (uVar5 != 0) {
    puVar3 = param_1 + 1;
  }
  iVar7 = 0;
  iVar6 = uVar5 - 2;
  if (-1 < iVar6) {
    do {
      uVar2 = (uint)(iVar6 + iVar7) >> 1;
      lVar1 = (ulonglong)uVar2 * 3;
      if (param_2 < (uint)*(byte *)(lVar1 + 1 + (longlong)puVar3) +
                    (uint)*(byte *)(lVar1 + (longlong)puVar3) * 0x100) {
        iVar6 = uVar2 - 1;
      }
      else {
        if (param_2 < (uint)*(byte *)((longlong)puVar3 + lVar1 + 3) * 0x100 +
                      (uint)*(byte *)((longlong)puVar3 + lVar1 + 4)) {
          return *(undefined1 *)((longlong)puVar3 + lVar1 + 2);
        }
        iVar7 = uVar2 + 1;
      }
    } while (iVar7 <= iVar6);
  }
  uVar2 = uVar5 - 1;
  if (uVar2 < uVar5) {
    puVar4 = (undefined8 *)((longlong)param_1 + (ulonglong)uVar2 + (ulonglong)uVar2 * 2 + 2);
  }
  return *(undefined1 *)((longlong)puVar4 + 2);
}

