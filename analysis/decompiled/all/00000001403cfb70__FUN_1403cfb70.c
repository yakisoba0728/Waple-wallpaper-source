// Function: FUN_1403cfb70
// Addr: 1403cfb70
// Size: 427 bytes


void FUN_1403cfb70(undefined8 param_1,float param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  uVar1 = *(uint *)(param_4 + 2);
  if (uVar1 == 0) {
    return;
  }
  if ((uVar1 != 1) && (uVar1 != 0)) {
    uVar6 = 0;
    do {
      lVar2 = param_4[1];
      iVar4 = (((uint)*(byte *)(lVar2 + 1 + uVar6 * 4) + (uint)*(byte *)(lVar2 + uVar6 * 4) * 0x100)
               * 0x100 + (uint)*(byte *)(lVar2 + 2 + uVar6 * 4)) * 0x100 +
              (uint)*(byte *)(lVar2 + 3 + uVar6 * 4);
      if (param_2 <= ((float)iVar4 + 0.0) * DAT_1404925f0) break;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar1);
    uVar5 = (uint)uVar6;
    if ((uVar5 != 0) && (uVar5 != uVar1)) {
      pbVar3 = (byte *)&DAT_14045dd10;
      if (uVar5 < uVar1) {
        pbVar3 = (byte *)(lVar2 + uVar6 * 4);
      }
      if (((float)(int)((((uint)pbVar3[1] + (uint)*pbVar3 * 0x100) * 0x100 + (uint)pbVar3[2]) *
                        0x100 + (uint)pbVar3[3]) + 0.0) * DAT_1404925f0 != param_2) {
        local_28 = *param_4;
        uStack_20 = param_4[1];
        local_18 = param_4[2];
        FUN_1403e50e0(param_1,uVar5 - 1,iVar4,param_3,&local_28);
        return;
      }
    }
  }
  return;
}

