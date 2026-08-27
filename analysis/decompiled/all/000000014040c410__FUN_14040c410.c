// Function: FUN_14040c410
// Addr: 14040c410
// Size: 273 bytes


uint FUN_14040c410(undefined8 param_1,longlong param_2,int param_3,uint *param_4,longlong param_5,
                  longlong param_6)

{
  undefined8 uVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(param_2 + 1) * 0x100 + (uint)*(byte *)(param_2 + 2);
  if (param_4 == (uint *)0x0) {
    return uVar5;
  }
  if (param_5 == 0) {
    return uVar5;
  }
  uVar4 = 0;
  uVar1 = *(undefined8 *)(param_6 + 0x48);
  if (*param_4 != 0) {
    do {
      uVar2 = (int)uVar4 + param_3;
      if (uVar5 <= uVar2) break;
      if (uVar2 < (uint)*(byte *)(param_2 + 1) * 0x100 + (uint)*(byte *)(param_2 + 2)) {
        pbVar3 = (byte *)(param_2 + 1) + (ulonglong)uVar2 * 10 + 2;
      }
      else {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      FUN_1403c6c20(pbVar3,param_6,param_5 + uVar4 * 0xc,
                    (uint)pbVar3[7] * 0x10000 + (uint)pbVar3[8] * 0x100 +
                    (uint)pbVar3[6] * 0x1000000 + (uint)pbVar3[9],uVar1);
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *param_4);
  }
  *param_4 = (uint)uVar4;
  return uVar5;
}

