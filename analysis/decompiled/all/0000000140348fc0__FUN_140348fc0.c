// Function: FUN_140348fc0
// Addr: 140348fc0
// Size: 481 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_140348fc0(uint param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte local_18 [8];
  ulonglong local_10;
  
  pbVar5 = local_18;
  local_10 = DAT_1404dc040 ^ (ulonglong)local_18;
  if (param_1 == 0) {
    *param_2 = 0x30;
    return param_2 + 1;
  }
  pbVar6 = param_2;
  if ((int)param_1 < 0) {
    pbVar6 = param_2 + 1;
    *param_2 = 0x2d;
    param_1 = -param_1;
  }
  uVar7 = (int)param_1 >> 0x10 & 0xffff;
  if (uVar7 != 0) {
    do {
      uVar3 = (int)uVar7 / 10;
      *pbVar5 = (char)uVar7 + (char)uVar3 * -10 + '0';
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar3;
    } while (0 < (int)uVar3);
    if (local_18 < pbVar5) {
      do {
        pbVar1 = pbVar5 + -1;
        pbVar5 = pbVar5 + -1;
        *pbVar6 = *pbVar1;
        pbVar6 = pbVar6 + 1;
      } while (local_18 < pbVar5);
    }
  }
  if ((param_1 & 0xffff) == 0) {
    return pbVar6;
  }
  *pbVar6 = 0x2e;
  uVar7 = (param_1 & 0xffff) * 10 + 5;
  pbVar6[1] = (char)(uVar7 >> 0x10) + 0x30;
  pbVar5 = pbVar6 + 3;
  uVar7 = (uVar7 & 0xffff) * 10;
  uVar3 = uVar7 & 0xffff;
  pbVar6[2] = (char)(uVar7 >> 0x10) + 0x30;
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar3 = uVar3 * 10;
    uVar4 = uVar3 & 0xffff;
    *pbVar5 = (char)(uVar3 >> 0x10) + 0x30;
    pbVar5 = pbVar6 + 4;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar4 = uVar4 * 10;
      uVar3 = uVar4 & 0xffff;
      *pbVar5 = (char)(uVar4 >> 0x10) + 0x30;
      pbVar5 = pbVar6 + 5;
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar3 = uVar3 * 10;
        uVar4 = uVar3 & 0xffff;
        *pbVar5 = (char)(uVar3 >> 0x10) + 0x30;
        pbVar5 = pbVar6 + 6;
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar4 * 10;
        }
      }
    }
  }
  pbVar5 = pbVar5 + -1;
  if (((longlong)pbVar5 - (longlong)pbVar6 == 5) && (uVar7 < 0x542e0)) {
    bVar2 = *pbVar5;
    if (bVar2 == 0x31) {
      *pbVar5 = 0x30;
    }
    else {
      if (uVar7 == 0x2a120) {
        if ((bVar2 & 1) == 0) goto LAB_140349179;
      }
      else if ((0x2a11f < uVar7) || (bVar2 == 0x30)) goto LAB_140349179;
      *pbVar5 = bVar2 - 1;
    }
  }
LAB_140349179:
  bVar2 = *pbVar5;
  while (bVar2 == 0x30) {
    *pbVar5 = 0;
    pbVar5 = pbVar5 + -1;
    bVar2 = *pbVar5;
  }
  return pbVar5 + 1;
}

