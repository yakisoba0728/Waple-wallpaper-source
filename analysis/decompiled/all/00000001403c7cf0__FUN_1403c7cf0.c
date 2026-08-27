// Function: FUN_1403c7cf0
// Addr: 1403c7cf0
// Size: 373 bytes


ulonglong FUN_1403c7cf0(longlong param_1,uint param_2,int *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar5 = 0;
  uVar1 = (ulonglong)*(byte *)(param_1 + 1) << 0x18;
  iVar3 = (*(byte *)(param_1 + 4) - 1) +
          (uint)*(byte *)(param_1 + 2) * 0x10000 + (uint)*(byte *)(param_1 + 3) * 0x100 + (int)uVar1
  ;
  if (-1 < iVar3) {
    do {
      uVar2 = (uint)(iVar3 + iVar5) >> 1;
      uVar1 = (ulonglong)uVar2 * 7;
      if (param_2 < (uint)*(byte *)(uVar1 + 6 + param_1) +
                    (uint)*(byte *)(uVar1 + 5 + param_1) * 0x100) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (param_2 <=
            (uint)*(byte *)(uVar1 + 8 + param_1) + (uint)*(byte *)(uVar1 + 7 + param_1) * 0x100) {
          uVar2 = (uint)*(byte *)(uVar1 + 9 + param_1) * 0x10000 +
                  (uint)*(byte *)(uVar1 + 10 + param_1) * 0x100 +
                  (uint)*(byte *)(uVar1 + 0xb + param_1);
          if (uVar2 == 0) {
            pbVar4 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar4 = (byte *)((ulonglong)uVar2 + param_1);
          }
          uVar2 = *pbVar4 - 1;
          uVar1 = (ulonglong)uVar2;
          if (uVar2 == 0) {
            local_38 = (int)(short)((ushort)pbVar4[2] + (ushort)pbVar4[1] * 0x100);
            local_34 = (int)(short)((ushort)pbVar4[4] + (ushort)pbVar4[3] * 0x100);
            local_30 = (int)(short)((ushort)pbVar4[6] + (ushort)pbVar4[5] * 0x100);
            local_2c = (int)(short)((ushort)pbVar4[7] * 0x100 + (ushort)pbVar4[8]);
          }
          else {
            if (uVar2 != 1) break;
            FUN_1403c6940(pbVar4,&local_38,param_4);
          }
          param_3[1] = local_2c;
          *param_3 = local_38;
          param_3[3] = local_34 - local_2c;
          param_3[2] = local_30 - local_38;
          return CONCAT71((uint7)(uint3)((uint)local_2c >> 8),1);
        }
        iVar5 = uVar2 + 1;
      }
    } while (iVar5 <= iVar3);
  }
  return uVar1 & 0xffffffffffffff00;
}

