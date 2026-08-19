// Function: FUN_1403c6c00
// Addr: 1403c6c00
// Size: 22 bytes


uint FUN_1403c6c00(longlong param_1,uint param_2,float param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  uint auStackX_10 [2];
  
  auStackX_10[0] = *(uint *)(param_1 + 0x40);
  *param_4 = 1;
  if (param_2 != 0xffff) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar3 = 0;
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x80);
    }
    iVar2 = (**(code **)(lVar1 + 0x90))
                      (lVar1,*(undefined8 *)(param_1 + 0x18),param_2,auStackX_10,uVar3);
    if (iVar2 == 0) {
      if (param_2 < *(uint *)(param_1 + 0x38)) {
        pbVar4 = (byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)param_2 * 4);
      }
      else {
        pbVar4 = (byte *)&DAT_14045dde0;
      }
      auStackX_10[0] =
           (uint)pbVar4[1] * 0x10000 + (uint)pbVar4[2] * 0x100 + (uint)*pbVar4 * 0x1000000 +
           (uint)pbVar4[3];
    }
    *param_4 = 0;
  }
  return (uint)(longlong)((float)(auStackX_10[0] & 0xff) * param_3) & 0xff |
         auStackX_10[0] & 0xffffff00;
}

