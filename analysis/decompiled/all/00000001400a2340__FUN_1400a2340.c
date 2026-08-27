// Function: FUN_1400a2340
// Addr: 1400a2340
// Size: 113 bytes


void FUN_1400a2340(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  ushort *param_5,ulonglong param_6)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = param_6 >> 1;
  if (param_2 >> 3 < param_6 >> 1) {
    uVar2 = param_2 >> 3;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *param_1 = (ulonglong)(ushort)(uVar1 >> 8 | uVar1 << 8) * 0x100010001 | 0xffff000000000000;
    param_1 = param_1 + 1;
  }
  return;
}

