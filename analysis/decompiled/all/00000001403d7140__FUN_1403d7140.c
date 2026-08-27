// Function: FUN_1403d7140
// Addr: 1403d7140
// Size: 275 bytes


undefined1
FUN_1403d7140(undefined8 param_1,longlong *param_2,undefined4 param_3,uint param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  
  lVar3 = FUN_1403986a0(*param_2 + 0x18);
  puVar7 = &DAT_14045dd10;
  if (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(lVar3 + 8);
  }
  iVar2 = 0;
  iVar9 = (*(byte *)((longlong)puVar7 + 9) - 1) +
          (uint)*(byte *)((longlong)puVar7 + 7) * 0x10000 + (uint)*(byte *)(puVar7 + 1) * 0x100 +
          (uint)*(byte *)((longlong)puVar7 + 6) * 0x1000000;
  if (-1 < iVar9) {
    do {
      uVar6 = (uint)(iVar9 + iVar2) >> 1;
      lVar4 = (ulonglong)uVar6 * 0xb;
      pbVar10 = (byte *)((longlong)puVar7 + lVar4 + 10);
      uVar5 = (uint)*(byte *)(lVar4 + 0xb + (longlong)puVar7) * 0x100 +
              (uint)*(byte *)(lVar4 + 0xc + (longlong)puVar7) + (uint)*pbVar10 * 0x10000;
      iVar8 = (uint)(uVar5 < param_4) - (uint)(param_4 < uVar5);
      if (iVar8 < 0) {
        iVar9 = uVar6 - 1;
      }
      else {
        if (iVar8 < 1) goto LAB_1403d71f9;
        iVar2 = uVar6 + 1;
      }
    } while (iVar2 <= iVar9);
  }
  pbVar10 = (byte *)&DAT_14045dd10;
LAB_1403d71f9:
  iVar2 = FUN_1403c96a0(pbVar10,param_3,param_5,puVar7);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      return 1;
    }
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      uVar1 = FUN_14039a880(lVar3,param_3,param_5);
      return uVar1;
    }
  }
  return 0;
}

