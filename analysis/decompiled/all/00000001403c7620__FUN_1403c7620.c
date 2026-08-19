// Function: FUN_1403c7620
// Addr: 1403c7620
// Size: 32 bytes


void FUN_1403c7620(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uVar3 = param_2 >> 0x10;
  if (uVar3 < (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100) {
    puVar5 = &DAT_14045dde0;
    uStack_28 = *param_4;
    uStack_24 = param_4[1];
    uStack_20 = param_4[2];
    uStack_1c = param_4[3];
    uStack_18 = *(undefined8 *)(param_4 + 4);
    uVar2 = (uint)*(byte *)(param_1 + 3) * 0x10000 + (uint)*(byte *)(param_1 + 4) * 0x100 +
            (uint)*(byte *)(param_1 + 2) * 0x1000000 + (uint)*(byte *)(param_1 + 5);
    if (uVar2 == 0) {
      puVar4 = &DAT_14045dde0;
    }
    else {
      puVar4 = (undefined8 *)((ulonglong)uVar2 + param_1);
    }
    lVar1 = param_1 + (ulonglong)uVar3 * 4;
    uVar3 = (uint)*(byte *)(lVar1 + 0xb) +
            (uint)*(byte *)(param_1 + 9 + (ulonglong)uVar3 * 4) * 0x10000 +
            (uint)*(byte *)(lVar1 + 10) * 0x100 + (uint)*(byte *)(lVar1 + 8) * 0x1000000;
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)((ulonglong)uVar3 + param_1);
    }
    func_0x0001403c7720(puVar5,param_2 & 0xffff,*(undefined8 *)(param_3 + 8),
                        *(undefined4 *)(param_3 + 0x10),puVar4,&uStack_28,param_5);
  }
  return;
}

