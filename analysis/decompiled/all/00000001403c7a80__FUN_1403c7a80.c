// Function: FUN_1403c7a80
// Addr: 1403c7a80
// Size: 183 bytes


byte * FUN_1403c7a80(byte *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  uVar1 = 1;
  if (param_3 < uVar2) {
    uVar1 = param_3;
  }
  return param_1 + (ulonglong)param_1[0xf] +
                   (ulonglong)
                   (param_1 +
                   (((ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100 + (ulonglong)param_1[10]) *
                    0x80 + (ulonglong)(uVar1 + uVar2 * param_2)) * 2 + (ulonglong)param_1[0xb])[1] *
                   6 + ((ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100 +
                        (ulonglong)param_1[0xe] +
                       (ulonglong)
                       param_1[(((ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100 +
                                (ulonglong)param_1[10]) * 0x80 +
                               (ulonglong)(uVar1 + uVar2 * param_2)) * 2 + (ulonglong)param_1[0xb]]
                       * 6) * 0x100;
}

