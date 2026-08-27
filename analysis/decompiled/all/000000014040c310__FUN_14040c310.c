// Function: FUN_14040c310
// Addr: 14040c310
// Size: 245 bytes


uint FUN_14040c310(undefined8 param_1,longlong param_2,int param_3,uint *param_4,longlong param_5,
                  longlong param_6)

{
  undefined8 uVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = (uint)*(byte *)(param_2 + 1) * 0x100 + (uint)*(byte *)(param_2 + 2);
  if (param_4 == (uint *)0x0) {
    return uVar4;
  }
  if (param_5 == 0) {
    return uVar4;
  }
  uVar5 = 0;
  uVar1 = *(undefined8 *)(param_6 + 0x48);
  if (*param_4 != 0) {
    do {
      uVar3 = (int)uVar5 + param_3;
      if (uVar4 <= uVar3) break;
      if (uVar3 < (uint)*(byte *)(param_2 + 1) * 0x100 + (uint)*(byte *)(param_2 + 2)) {
        pbVar2 = (byte *)(param_2 + 1) + (ulonglong)uVar3 * 6 + 2;
      }
      else {
        pbVar2 = (byte *)&DAT_14045dd10;
      }
      FUN_1403c6c20(pbVar2,param_6,param_5 + uVar5 * 0xc,0xffffffff,uVar1);
      uVar3 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar3;
    } while (uVar3 < *param_4);
  }
  *param_4 = (uint)uVar5;
  return uVar4;
}

