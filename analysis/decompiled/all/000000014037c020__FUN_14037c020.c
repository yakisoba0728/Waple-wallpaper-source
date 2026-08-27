// Function: FUN_14037c020
// Addr: 14037c020
// Size: 471 bytes


undefined8 FUN_14037c020(byte *param_1,longlong param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  code *local_18;
  byte *local_10;
  
  iVar3 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar3 == 1) {
    pbVar5 = (byte *)&DAT_14045dd10;
    uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar4 == 0) {
      pbVar6 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar6 = param_1 + uVar4;
    }
    iVar3 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
    if (iVar3 == 1) {
      uVar4 = FUN_1403c70f0(pbVar6,**(undefined4 **)(param_2 + 0x10));
    }
    else if (iVar3 == 2) {
      uVar4 = FUN_1403c7170(pbVar6,**(undefined4 **)(param_2 + 0x10));
    }
    else {
      uVar4 = 0xffffffff;
    }
    if (uVar4 < (uint)param_1[5] + (uint)param_1[4] * 0x100) {
      pbVar6 = param_1 + ((ulonglong)uVar4 + 3) * 2;
    }
    else {
      pbVar6 = (byte *)&DAT_14045dd10;
    }
    uVar4 = (uint)pbVar6[1] + (uint)*pbVar6 * 0x100;
    if (uVar4 != 0) {
      pbVar5 = param_1 + uVar4;
    }
    local_10 = (byte *)0x0;
    local_18 = FUN_1403ec1d0;
    uVar1 = FUN_140413830(pbVar5,param_2,&local_18);
    return uVar1;
  }
  if (iVar3 != 2) {
    if (iVar3 == 3) {
      uVar1 = FUN_14038e560(param_2,(uint)param_1[3] + (uint)param_1[2] * 0x100,param_1 + 8,
                            FUN_1403ec150,param_1);
      return uVar1;
    }
    return 0;
  }
  pbVar5 = (byte *)&DAT_14045dd10;
  uVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
  if (uVar4 == 0) {
    pbVar6 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar6 = param_1 + uVar4;
  }
  uVar4 = FUN_1403c6780(pbVar6,**(undefined4 **)(param_2 + 0x10));
  if (uVar4 < (uint)param_1[7] + (uint)param_1[6] * 0x100) {
    pbVar2 = param_1 + ((ulonglong)uVar4 + 4) * 2;
  }
  else {
    pbVar2 = (byte *)&DAT_14045dd10;
  }
  uVar4 = (uint)pbVar2[1] + (uint)*pbVar2 * 0x100;
  if (uVar4 != 0) {
    pbVar5 = param_1 + uVar4;
  }
  local_18 = FUN_1403ec050;
  local_10 = pbVar6;
  uVar1 = FUN_140413830(pbVar5,param_2,&local_18);
  return uVar1;
}

