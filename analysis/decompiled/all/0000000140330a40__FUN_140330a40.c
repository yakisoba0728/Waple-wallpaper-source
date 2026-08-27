// Function: FUN_140330a40
// Addr: 140330a40
// Size: 335 bytes


undefined8
FUN_140330a40(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 *param_4,char param_5
             )

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  pbVar2 = (byte *)param_1[2];
  for (pbVar3 = (byte *)*param_1; pbVar3 < pbVar2; pbVar3 = pbVar3 + 1) {
    bVar1 = *pbVar3;
    if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 != 0x25) break;
      do {
        if ((*pbVar3 == 0xd) || (*pbVar3 == 10)) break;
        pbVar3 = pbVar3 + 1;
      } while (pbVar3 < pbVar2);
    }
  }
  *param_1 = pbVar3;
  if (pbVar3 < pbVar2) {
    if (param_5 != '\0') {
      if (*pbVar3 != 0x3c) {
        return 3;
      }
      pbVar3 = pbVar3 + 1;
    }
    uVar8 = 0;
    uVar7 = 0;
    if (pbVar3 < pbVar2) {
      uVar6 = (ulonglong)(uint)((int)pbVar2 - (int)pbVar3);
      uVar5 = 0;
      uVar4 = 1;
      if ((ulonglong)(param_3 * 2) <= uVar6) {
        uVar6 = param_3 * 2;
      }
      if (uVar6 != 0) {
        do {
          bVar1 = pbVar3[uVar5];
          if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
            if ((0x7f < bVar1) || (0xf < (uint)(int)(char)(&DAT_140441580)[bVar1 & 0x7f])) break;
            uVar4 = uVar4 << 4 | (int)(char)(&DAT_140441580)[bVar1 & 0x7f];
            if ((uVar4 >> 8 & 1) != 0) {
              *(char *)(uVar8 + param_2) = (char)uVar4;
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar4 = 1;
            }
          }
          uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < uVar6);
        if (uVar4 != 1) {
          *(char *)(uVar8 + param_2) = (char)uVar4 << 4;
          uVar8 = (ulonglong)((int)uVar8 + 1);
        }
      }
      uVar7 = (undefined4)uVar8;
      pbVar3 = pbVar3 + uVar5;
    }
    *param_4 = uVar7;
    *param_1 = pbVar3;
    if (param_5 != '\0') {
      if ((pbVar3 < (byte *)param_1[2]) && (*pbVar3 != 0x3e)) {
        return 3;
      }
      *param_1 = pbVar3 + 1;
    }
  }
  return 0;
}

