// Function: FUN_1403cafb0
// Addr: 1403cafb0
// Size: 514 bytes


int FUN_1403cafb0(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar5 = FUN_1403caf20();
  fVar3 = DAT_1404925f0;
  if (lVar5 != 0) {
    if ((param_3 != (uint *)0x0) && (uVar1 = *param_3, uVar1 != 0)) {
      uVar6 = (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
      if (uVar6 <= uVar1) {
        uVar1 = uVar6;
      }
      uVar8 = 0;
      *param_3 = uVar1;
      if (3 < uVar1) {
        do {
          iVar2 = (int)uVar8;
          uVar6 = iVar2 + 1;
          uVar7 = (ulonglong)uVar6;
          *(float *)(param_4 + uVar8 * 4) =
               ((float)(int)((((uint)*(byte *)(lVar5 + 5 + uVar8 * 4) +
                              (uint)*(byte *)(lVar5 + 4 + uVar8 * 4) * 0x100) * 0x100 +
                             (uint)*(byte *)(lVar5 + 6 + uVar8 * 4)) * 0x100 +
                            (uint)*(byte *)(lVar5 + 7 + uVar8 * 4)) + 0.0) * fVar3;
          uVar4 = iVar2 + 2;
          *(float *)(param_4 + uVar7 * 4) =
               ((float)(int)((((uint)*(byte *)(lVar5 + 5 + (ulonglong)uVar6 * 4) +
                              (uint)*(byte *)(lVar5 + 4 + (ulonglong)uVar6 * 4) * 0x100) * 0x100 +
                             (uint)*(byte *)(lVar5 + 6 + uVar7 * 4)) * 0x100 +
                            (uint)*(byte *)(lVar5 + 7 + uVar7 * 4)) + 0.0) * fVar3;
          uVar7 = (ulonglong)uVar4;
          uVar6 = iVar2 + 3;
          uVar8 = (ulonglong)(iVar2 + 4U);
          *(float *)(param_4 + uVar7 * 4) =
               ((float)(int)((((uint)*(byte *)(lVar5 + 5 + (ulonglong)uVar4 * 4) +
                              (uint)*(byte *)(lVar5 + 4 + (ulonglong)uVar4 * 4) * 0x100) * 0x100 +
                             (uint)*(byte *)(lVar5 + 6 + uVar7 * 4)) * 0x100 +
                            (uint)*(byte *)(lVar5 + 7 + uVar7 * 4)) + 0.0) * fVar3;
          uVar7 = (ulonglong)uVar6;
          *(float *)(param_4 + uVar7 * 4) =
               ((float)(int)((((uint)*(byte *)(lVar5 + 5 + (ulonglong)uVar6 * 4) +
                              (uint)*(byte *)(lVar5 + 4 + (ulonglong)uVar6 * 4) * 0x100) * 0x100 +
                             (uint)*(byte *)(lVar5 + 6 + uVar7 * 4)) * 0x100 +
                            (uint)*(byte *)(lVar5 + 7 + uVar7 * 4)) + 0.0) * fVar3;
        } while (iVar2 + 4U < uVar1 - 3);
      }
      uVar6 = (uint)uVar8;
      while (uVar6 < uVar1) {
        *(float *)(param_4 + uVar8 * 4) =
             ((float)(int)((((uint)*(byte *)(lVar5 + 5 + uVar8 * 4) +
                            (uint)*(byte *)(lVar5 + 4 + uVar8 * 4) * 0x100) * 0x100 +
                           (uint)*(byte *)(lVar5 + 6 + uVar8 * 4)) * 0x100 +
                          (uint)*(byte *)(lVar5 + 7 + uVar8 * 4)) + 0.0) * fVar3;
        uVar6 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar6;
      }
    }
    return (uint)*(byte *)(param_1 + 9) + (uint)*(byte *)(param_1 + 8) * 0x100;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  return 0;
}

