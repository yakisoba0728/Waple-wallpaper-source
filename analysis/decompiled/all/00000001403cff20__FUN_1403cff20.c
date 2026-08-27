// Function: FUN_1403cff20
// Addr: 1403cff20
// Size: 275 bytes


undefined8 FUN_1403cff20(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  iVar6 = 0;
  iVar4 = (*(byte *)(param_1 + 9) - 1) + (uint)*(byte *)(param_1 + 8) * 0x100;
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar4 + iVar6) >> 1;
      lVar7 = (ulonglong)uVar1 *
              (ulonglong)CONCAT11(*(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7));
      uVar2 = (uint)*(byte *)(lVar7 + 0xe + param_1) * 0x100 +
              (uint)*(byte *)(lVar7 + 0xd + param_1) * 0x10000 +
              (uint)*(byte *)(lVar7 + 0xf + param_1) +
              (uint)*(byte *)(lVar7 + 0xc + param_1) * 0x1000000;
      iVar5 = (uint)(uVar2 < param_2) - (uint)(param_2 < uVar2);
      if (iVar5 < 0) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (iVar5 < 1) {
          uVar1 = (uint)*(byte *)(param_1 + 0xb) + (uint)*(byte *)(param_1 + 10) * 0x100;
          if (uVar1 == 0) {
            puVar3 = &DAT_14045dd10;
          }
          else {
            puVar3 = (undefined8 *)((ulonglong)uVar1 + param_1);
          }
          uVar8 = FUN_1403c7460(puVar3,(uint)*(byte *)(lVar7 + 0x13 + param_1) +
                                       (uint)*(byte *)(lVar7 + 0x11 + param_1) * 0x10000 +
                                       (uint)*(byte *)(lVar7 + 0x12 + param_1) * 0x100 +
                                       (uint)*(byte *)(lVar7 + 0x10 + param_1) * 0x1000000,param_3,
                                param_4,0);
          return uVar8;
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar4);
  }
  return 0;
}

