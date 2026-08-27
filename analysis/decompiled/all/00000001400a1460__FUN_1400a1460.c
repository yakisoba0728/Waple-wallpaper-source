// Function: FUN_1400a1460
// Addr: 1400a1460
// Size: 224 bytes


void FUN_1400a1460(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = param_6 >> 1;
  if (param_2 >> 3 < param_6 >> 1) {
    uVar3 = param_2 >> 3;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = (((uVar1 >> 0xb | 0xffffffe0) << 9 | uVar1 >> 5 & 0x3f) << 6 |
            (uVar1 >> 0xb & 0xfffffffc) << 10 | uVar1 >> 5 & 0x30) * 2;
    *param_1 = (((ulonglong)(((uVar2 & 0x1fe000) >> 0xd) * 0x101) |
                (ulonglong)(((uVar2 & 0x1fffffff) >> 0x15) * 0x101) << 0x10) << 0x10 |
               (ulonglong)(((uVar2 & 0x1fe0) >> 5) * 0x101)) << 0x10 |
               (ulonglong)(((uVar1 & 0x1f) << 3 | (uVar1 & 0x1f) >> 2) * 0x101);
    param_1 = param_1 + 1;
  }
  return;
}

