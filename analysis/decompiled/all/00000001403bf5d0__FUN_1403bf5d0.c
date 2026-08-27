// Function: FUN_1403bf5d0
// Addr: 1403bf5d0
// Size: 330 bytes


int FUN_1403bf5d0(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar1 = (ulonglong *)((longlong)param_1 + (param_2 & 0xfffffffffffffff8));
  uVar6 = param_2 * -0x77fcaa0de192e69b ^ param_3 & 0xffffffff;
  if (param_1 != puVar1) {
    if (((ulonglong)param_1 & 7) == 0) {
      do {
        uVar4 = *param_1;
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (uVar4 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
        uVar6 = (uVar6 ^ uVar4 >> 0x2f ^ uVar4) * -0x77fcaa0de192e69b;
      } while (param_1 != puVar1);
    }
    else {
      do {
        uVar4 = *param_1;
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        uVar4 = (uVar4 >> 0x17 ^ uVar2) * 0x2127599bf4325c37;
        uVar6 = (uVar6 ^ uVar4 >> 0x2f ^ uVar4) * -0x77fcaa0de192e69b;
      } while (param_1 != puVar1);
    }
  }
  uVar4 = 0;
  switch((uint)param_2 & 7) {
  case 7:
    uVar4 = (ulonglong)*(byte *)((longlong)param_1 + 6) << 0x30;
  case 6:
    uVar4 = uVar4 ^ (ulonglong)*(byte *)((longlong)param_1 + 5) << 0x28;
  case 5:
    uVar4 = uVar4 ^ (ulonglong)*(byte *)((longlong)param_1 + 4) << 0x20;
  case 4:
    uVar4 = uVar4 ^ (ulonglong)*(byte *)((longlong)param_1 + 3) << 0x18;
  case 3:
    uVar4 = uVar4 ^ (ulonglong)*(byte *)((longlong)param_1 + 2) << 0x10;
  case 2:
    uVar4 = uVar4 ^ (ulonglong)*(byte *)((longlong)param_1 + 1) << 8;
  case 1:
    uVar4 = (uVar4 >> 0x17 ^ (byte)*param_1 ^ uVar4) * 0x2127599bf4325c37;
    uVar6 = (uVar6 ^ uVar4 >> 0x2f ^ uVar4) * -0x77fcaa0de192e69b;
  default:
    lVar5 = (uVar6 >> 0x17 ^ uVar6) * 0x2127599bf4325c37;
    uVar3 = (uint)((ulonglong)lVar5 >> 0x20);
    return (uVar3 >> 0xf ^ (uint)lVar5) - uVar3;
  }
}

