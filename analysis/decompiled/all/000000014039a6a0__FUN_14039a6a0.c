// Function: FUN_14039a6a0
// Addr: 14039a6a0
// Size: 466 bytes


ulonglong FUN_14039a6a0(longlong param_1,longlong param_2,char param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  code *local_38;
  undefined8 *local_30;
  
  puVar7 = &DAT_14045dd10;
  uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar4 == 0) {
    pbVar8 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar8 = (byte *)((ulonglong)uVar4 + param_1);
  }
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14);
  if (param_4 != 0) {
    bVar6 = *(byte *)((ulonglong)(uVar4 & 0xff) + param_4);
    if (((uVar4 >> 7 ^ (uint)bVar6) & 0xfffffffe) == 0) {
      uVar3 = 0xffffffff;
      if ((bVar6 & 1) == 0) {
        uVar3 = (ulonglong)(uint)bVar6 & 0xffffffff00000001;
      }
      goto LAB_14039a788;
    }
  }
  iVar5 = (uint)pbVar8[1] + (uint)*pbVar8 * 0x100;
  if (iVar5 == 1) {
    uVar3 = FUN_1403c70f0(pbVar8,uVar4);
  }
  else if (iVar5 == 2) {
    uVar3 = FUN_1403c7170(pbVar8,uVar4);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (param_4 != 0) {
    bVar6 = (byte)(uVar4 >> 7);
    if ((int)uVar3 == -1) {
      bVar6 = bVar6 | 1;
    }
    else {
      bVar6 = bVar6 & 0xfe;
    }
    *(byte *)(param_4 + ((ulonglong)uVar4 & 0xff)) = bVar6;
  }
LAB_14039a788:
  if ((int)uVar3 != -1) {
    uVar4 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
    if (uVar4 == 0) {
      local_30 = &DAT_14045dd10;
    }
    else {
      local_30 = (undefined8 *)((ulonglong)uVar4 + param_1);
    }
    local_38 = FUN_1403ec050;
    if (param_3 != '\0') {
      local_38 = FUN_1403ec110;
    }
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c);
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70);
    if (param_3 == '\0') {
      uVar4 = FUN_1403c6780(local_30,*(undefined4 *)(lVar2 + uVar3 * 0x14));
    }
    else {
      bVar6 = *(byte *)(lVar2 + 0xf + uVar3 * 0x14);
      uVar4 = (uint)bVar6;
      puVar1 = (undefined4 *)(lVar2 + uVar3 * 0x14);
      if ((bVar6 == 0xff) && (uVar4 = FUN_1403c6780(local_30,*puVar1), uVar4 < 0xff)) {
        *(char *)((longlong)puVar1 + 0xf) = (char)uVar4;
      }
    }
    if (uVar4 < (uint)*(byte *)(param_1 + 7) + (uint)*(byte *)(param_1 + 6) * 0x100) {
      pbVar8 = (byte *)(param_1 + ((ulonglong)uVar4 + 4) * 2);
    }
    else {
      pbVar8 = (byte *)&DAT_14045dd10;
    }
    uVar4 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
    if (uVar4 != 0) {
      puVar7 = (undefined8 *)((ulonglong)uVar4 + param_1);
    }
    uVar3 = FUN_1403aa440(puVar7,param_2,&local_38);
    return uVar3;
  }
  return uVar3 & 0xffffffffffffff00;
}

