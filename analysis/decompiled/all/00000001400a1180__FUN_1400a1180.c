// Function: FUN_1400a1180
// Addr: 1400a1180
// Size: 146 bytes


void FUN_1400a1180(uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = param_6 >> 1;
  if (param_2 >> 2 < param_6 >> 1) {
    uVar2 = param_2 >> 2;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *param_1 = ((((uVar1 >> 0xb | 0xffffffe0) << 9 | uVar1 >> 5 & 0x3f) << 6 |
                (uVar1 >> 0xb & 0xfffffffc) << 10 | uVar1 >> 5 & 0x30) * 2 | uVar1 & 0x1f) << 3 |
               (uVar1 & 0x1f) >> 2;
    param_1 = param_1 + 1;
  }
  return;
}

