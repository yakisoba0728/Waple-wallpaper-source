// Function: FUN_1403de550
// Addr: 1403de550
// Size: 386 bytes


undefined8 FUN_1403de550(undefined8 param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = param_2 - 0xac00;
  if (((uVar2 < 0x2ba4) && (param_3 - 0x11a8 < 0x1b)) && (uVar2 == (uVar2 / 0x1c) * 0x1c)) {
    *param_4 = (param_3 - 0x11a7) + param_2;
    return 1;
  }
  if ((param_2 - 0x1100 < 0x13) && (param_3 - 0x1161 < 0x15)) {
    *param_4 = (param_2 * 0x15 + param_3) * 0x1c - 0x28469c;
    return 1;
  }
  if (((param_2 & 0xfffff800) == 0) && ((param_3 & 0xffffff80) == 0x300)) {
    uVar2 = (param_3 & 0x7f | param_2 << 7) << 0xe;
    iVar6 = 0x27d;
    iVar3 = 0;
    do {
      uVar1 = (uint)(iVar6 + iVar3) >> 1;
      uVar4 = *(uint *)(&DAT_14045b620 + (ulonglong)uVar1 * 4) & 0xffffc000;
      if (uVar2 < uVar4) {
        iVar6 = uVar1 - 1;
      }
      else {
        if (uVar2 <= uVar4) {
          uVar2 = *(uint *)(&DAT_14045b620 + (ulonglong)uVar1 * 4) & 0x3fff;
LAB_1403de6b9:
          if (uVar2 == 0) {
            return 0;
          }
          *param_4 = uVar2;
          return 1;
        }
        iVar3 = uVar1 + 1;
      }
      if (iVar6 < iVar3) {
        return 0;
      }
    } while( true );
  }
  iVar6 = 0x197;
  uVar7 = ((ulonglong)param_2 << 0x15 | (ulonglong)param_3) * 0x200000;
  iVar3 = 0;
  do {
    uVar2 = (uint)(iVar6 + iVar3) >> 1;
    uVar5 = *(ulonglong *)(&DAT_1404614e0 + (ulonglong)uVar2 * 8) & 0x7fffffffffe00000;
    if (uVar7 < uVar5) {
      iVar6 = uVar2 - 1;
    }
    else {
      if (uVar7 <= uVar5) {
        uVar2 = (uint)*(ulonglong *)(&DAT_1404614e0 + (ulonglong)uVar2 * 8) & 0x1fffff;
        goto LAB_1403de6b9;
      }
      iVar3 = uVar2 + 1;
    }
    if (iVar6 < iVar3) {
      return 0;
    }
  } while( true );
}

