// Function: FUN_14037bd90
// Addr: 14037bd90
// Size: 645 bytes


undefined8 FUN_14037bd90(byte *param_1,longlong param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  code *local_48;
  code *local_40;
  code *local_38;
  byte *local_30;
  byte *pbStack_28;
  byte *local_20;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 1) {
    pbVar9 = (byte *)&DAT_14045dd10;
    uVar5 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
    if (uVar5 == 0) {
      pbVar7 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar7 = param_1 + uVar5;
    }
    iVar4 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
    if (iVar4 == 1) {
      uVar5 = FUN_1403c70f0(pbVar7,**(undefined4 **)(param_2 + 0x10));
    }
    else if (iVar4 == 2) {
      uVar5 = FUN_1403c7170(pbVar7,**(undefined4 **)(param_2 + 0x10));
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (uVar5 < (uint)param_1[4] * 0x100 + (uint)param_1[5]) {
      pbVar7 = param_1 + ((ulonglong)uVar5 + 3) * 2;
    }
    else {
      pbVar7 = (byte *)&DAT_14045dd10;
    }
    uVar5 = (uint)pbVar7[1] + (uint)*pbVar7 * 0x100;
    if (uVar5 != 0) {
      pbVar9 = param_1 + uVar5;
    }
    local_20 = (byte *)0x0;
    local_48 = FUN_1403ec1d0;
    local_40 = FUN_1403ec1d0;
    local_38 = FUN_1403ec1d0;
    local_30 = (byte *)0x0;
    pbStack_28 = (byte *)0x0;
    uVar3 = FUN_1404135a0(pbVar9,param_2,&local_48);
    return uVar3;
  }
  if (iVar4 != 2) {
    if (iVar4 == 3) {
      iVar4 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      uVar5 = iVar4 * 2 + 2;
      if (((*(char *)(param_2 + 0x1c) == '\0') ||
          ((iVar4 == 0 &&
           (uVar6 = (ulonglong)CONCAT11(param_1[(ulonglong)uVar5 + 2],param_1[(ulonglong)uVar5 + 3])
           , (uint)param_1[uVar6 * 2 + 6] * 0x100 + (uint)param_1[uVar6 * 2 + 7] == 0)))) &&
         (cVar1 = FUN_14038e560(param_2,(uint)param_1[(ulonglong)uVar5 + 2] * 0x100 +
                                        (uint)param_1[(ulonglong)uVar5 + 3],
                                param_1 + (ulonglong)uVar5 + 6,FUN_1403ec150,param_1), cVar1 != '\0'
         )) {
        return 1;
      }
    }
    return 0;
  }
  pbVar9 = (byte *)&DAT_14045dd10;
  uVar5 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
  if (uVar5 == 0) {
    pbVar7 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar7 = param_1 + uVar5;
  }
  uVar5 = (uint)param_1[7] + (uint)param_1[6] * 0x100;
  if (uVar5 == 0) {
    pbVar8 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar8 = param_1 + uVar5;
  }
  uVar5 = (uint)param_1[8] * 0x100 + (uint)param_1[9];
  if (uVar5 == 0) {
    pbVar10 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar10 = param_1 + uVar5;
  }
  uVar5 = FUN_1403c6780(pbVar8,**(undefined4 **)(param_2 + 0x10));
  if (uVar5 < (uint)param_1[0xb] + (uint)param_1[10] * 0x100) {
    pbVar2 = param_1 + ((ulonglong)uVar5 + 6) * 2;
  }
  else {
    pbVar2 = (byte *)&DAT_14045dd10;
  }
  uVar5 = (uint)pbVar2[1] + (uint)*pbVar2 * 0x100;
  if (uVar5 != 0) {
    pbVar9 = param_1 + uVar5;
  }
  local_48 = FUN_1403ec050;
  local_40 = FUN_1403ec050;
  local_38 = FUN_1403ec050;
  local_30 = pbVar7;
  pbStack_28 = pbVar8;
  local_20 = pbVar10;
  uVar3 = FUN_1404135a0(pbVar9,param_2,&local_48);
  return uVar3;
}

