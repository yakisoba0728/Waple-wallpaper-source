// Function: FUN_140371100
// Addr: 140371100
// Size: 566 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140371100(byte *param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  ulonglong local_80 [9];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  bVar1 = param_1[1];
  bVar2 = *param_1;
  uVar10 = (uint)bVar2 * 0x100 + (uint)bVar1;
  if (uVar10 < 0x201) {
    uVar8 = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[7] = 0;
    local_88[0] = 0;
    if (uVar10 != 0) {
      bVar3 = param_1[4];
      bVar4 = param_1[5];
      lVar5 = (ulonglong)param_1[7] + (ulonglong)param_1[6] * 0x100;
      do {
        uVar7 = (ulonglong)param_1[uVar8 + (ulonglong)bVar4 + (ulonglong)bVar3 * 0x100];
        if ((((int)(((uint)param_1[uVar7 * 8 + lVar5 + 1] + (uint)param_1[uVar7 * 8 + lVar5] * 0x100
                    + (uint)bVar3 * -0x100) - (uint)bVar4) /
              (int)((uint)bVar2 * 0x100 + (uint)bVar1) != 0) ||
            (uVar9 = (uint)param_1[uVar7 * 8 + lVar5 + 3] +
                     (uint)param_1[uVar7 * 8 + lVar5 + 2] * 0x100, uVar9 >> 0xf != 0)) ||
           (((uVar9 & 0x3ff) != 0 &&
            (((uint)param_1[uVar7 * 8 + lVar5 + 4] * 0x100 + (uint)param_1[uVar7 * 8 + lVar5 + 5] !=
              0xffff ||
             ((uint)param_1[uVar7 * 8 + lVar5 + 6] * 0x100 + (uint)param_1[uVar7 * 8 + lVar5 + 7] !=
              0xffff)))))) {
          local_80[(uint)(uVar8 >> 6) & 7] =
               local_80[(uint)(uVar8 >> 6) & 7] | 1L << ((uint)uVar8 & 0x3f);
          local_88[0] = 0xffffffff;
        }
        uVar9 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
      } while (uVar9 < uVar10);
    }
    if (((local_80[0] & 4) != 0) && (*param_2 != '\0')) {
      param_2[4] = -1;
      param_2[5] = -1;
      param_2[6] = -1;
      param_2[7] = -1;
      puVar6 = (undefined4 *)FUN_1403ed560(param_2,0xffff,CONCAT71((int7)(uVar8 >> 8),1));
      if (puVar6 != (undefined4 *)0x0) {
        *(ulonglong *)(puVar6 + 0x10) = *(ulonglong *)(puVar6 + 0x10) | 0x8000000000000000;
        *puVar6 = 0xffffffff;
      }
    }
    FUN_140370270(param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100,param_2,param_3,
                  local_88);
  }
  else {
    FUN_14036fb10(param_1 + (ulonglong)param_1[3] + (ulonglong)param_1[2] * 0x100);
  }
  return;
}

