// Function: FUN_1401d4430
// Addr: 1401d4430
// Size: 104 bytes


void FUN_1401d4430(undefined8 param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 auStack_48 [72];
  
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x80) + 3 + (param_3 & 0xffffffff) * 8);
  if (bVar1 != 0xff) {
    lVar5 = (ulonglong)bVar1 * 0x40;
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x4b8);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
       ((ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6) <=
        (ulonglong)bVar1)) {
      puVar6 = &DAT_1404e1180;
    }
    else {
      puVar6 = (undefined *)(*(longlong *)(lVar2 + 0x2c8) + lVar5);
    }
    puVar4 = (undefined8 *)FUN_14005ed80(auStack_48,puVar6,*(longlong *)(param_2 + 0x68) + lVar5);
    uVar3 = puVar4[1];
    *param_4 = *puVar4;
    param_4[1] = uVar3;
    uVar3 = puVar4[3];
    param_4[2] = puVar4[2];
    param_4[3] = uVar3;
    uVar3 = puVar4[5];
    param_4[4] = puVar4[4];
    param_4[5] = uVar3;
    uVar3 = puVar4[7];
    param_4[6] = puVar4[6];
    param_4[7] = uVar3;
  }
  return;
}

