// Function: FUN_1403709e0
// Addr: 1403709e0
// Size: 612 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403709e0(byte *param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  ulonglong local_80 [9];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  bVar1 = param_1[1];
  bVar2 = param_1[2];
  bVar3 = *param_1;
  bVar4 = param_1[3];
  uVar11 = (uint)bVar3 * 0x1000000 + (uint)bVar4 + (uint)bVar2 * 0x100 + (uint)bVar1 * 0x10000;
  if (uVar11 < 0x201) {
    uVar10 = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[7] = 0;
    local_88[0] = 0;
    if (uVar11 != 0) {
      lVar5 = (ulonglong)param_1[0xb] +
              ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) * 0x100;
      lVar6 = (ulonglong)param_1[0xf] +
              ((ulonglong)param_1[0xe] + (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) *
              0x100;
      do {
        uVar9 = (uint)uVar10;
        uVar8 = uVar10;
        if ((uint)CONCAT11(bVar2,bVar4) + (uint)bVar3 * 0x1000000 + (uint)bVar1 * 0x10000 <= uVar9)
        {
          uVar8 = 1;
        }
        uVar8 = (ulonglong)CONCAT11(param_1[uVar8 * 2 + lVar5],param_1[uVar8 * 2 + lVar5 + 1]);
        if (((((uint)param_1[uVar8 * 8 + lVar6 + 1] + (uint)param_1[uVar8 * 8 + lVar6] * 0x100 != 0)
             || ((param_1[uVar8 * 8 + lVar6 + 2] & 0x80) != 0)) ||
            ((uint)param_1[uVar8 * 8 + lVar6 + 4] * 0x100 + (uint)param_1[uVar8 * 8 + lVar6 + 5] !=
             0xffff)) ||
           ((uint)param_1[uVar8 * 8 + lVar6 + 6] * 0x100 + (uint)param_1[uVar8 * 8 + lVar6 + 7] !=
            0xffff)) {
          local_80[(uint)(uVar10 >> 6) & 7] =
               local_80[(uint)(uVar10 >> 6) & 7] | 1L << (uVar9 & 0x3f);
          local_88[0] = 0xffffffff;
        }
        uVar10 = (ulonglong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar11);
    }
    if (((local_80[0] & 4) != 0) && (*param_2 != '\0')) {
      param_2[4] = -1;
      param_2[5] = -1;
      param_2[6] = -1;
      param_2[7] = -1;
      puVar7 = (undefined4 *)FUN_1403ed560(param_2,0xffff,CONCAT71((int7)(uVar10 >> 8),1));
      if (puVar7 != (undefined4 *)0x0) {
        *(ulonglong *)(puVar7 + 0x10) = *(ulonglong *)(puVar7 + 0x10) | 0x8000000000000000;
        *puVar7 = 0xffffffff;
      }
    }
    FUN_140370360(param_1 + (ulonglong)param_1[7] +
                            ((ulonglong)param_1[6] +
                            (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,param_2,
                  param_3,local_88);
  }
  else {
    FUN_14036fca0(param_1 + (ulonglong)param_1[7] +
                            ((ulonglong)param_1[6] +
                            (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,param_2);
  }
  return;
}

