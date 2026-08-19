// Function: FUN_1403d0180
// Addr: 1403d0180
// Size: 152 bytes


ulonglong FUN_1403d0180(byte *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
  if (((iVar2 != 1) && (iVar2 != 2)) && (iVar2 != 3)) {
    if ((iVar2 == 0x8000) && (*(char *)(param_2 + 0x78) != '\0')) {
      fVar3 = (float)FUN_1403c7530(param_3,(uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 +
                                           (uint)*param_1 * 0x1000000 + (uint)param_1[3],
                                   *(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x7c),
                                   param_4);
      fVar3 = (float)FUN_14041a690(fVar3 * *(float *)(param_2 + 0x50) + DAT_140492790);
      return (ulonglong)(uint)(int)fVar3;
    }
    return 0;
  }
  uVar1 = FUN_1403c7410(param_1,*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x28));
  return uVar1;
}

