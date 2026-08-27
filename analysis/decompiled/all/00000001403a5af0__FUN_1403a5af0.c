// Function: FUN_1403a5af0
// Addr: 1403a5af0
// Size: 263 bytes


ulonglong FUN_1403a5af0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  code *local_38;
  code *local_30;
  code *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar4 = &DAT_14045dd10;
  uVar2 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar2 == 0) {
    pbVar3 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar3 = (byte *)((ulonglong)uVar2 + param_1);
  }
  uVar1 = 0;
  iVar5 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
  if (iVar5 == 1) {
    uVar1 = FUN_1403c70f0(pbVar3,*(undefined4 *)
                                  (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x70) +
                                  (ulonglong)*(uint *)(*(longlong *)(param_2 + 0xa0) + 0x5c) * 0x14)
                         );
  }
  else {
    if (iVar5 != 2) goto LAB_1403a5b6a;
    uVar1 = FUN_1403c7170();
  }
  if ((uint)uVar1 != 0xffffffff) {
    if ((uint)uVar1 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
      pbVar3 = (byte *)(param_1 + ((uVar1 & 0xffffffff) + 3) * 2);
    }
    else {
      pbVar3 = (byte *)&DAT_14045dd10;
    }
    uVar2 = (uint)*pbVar3 * 0x100 + (uint)pbVar3[1];
    if (uVar2 != 0) {
      puVar4 = (undefined8 *)((ulonglong)uVar2 + param_1);
    }
    local_10 = 0;
    local_38 = FUN_1403ec1d0;
    local_30 = FUN_1403ec1d0;
    local_28 = FUN_1403ec1d0;
    local_20 = 0;
    uStack_18 = 0;
    uVar1 = FUN_1403a5cc0(puVar4,param_2,&local_38);
    return uVar1;
  }
LAB_1403a5b6a:
  return uVar1 & 0xffffffffffffff00;
}

