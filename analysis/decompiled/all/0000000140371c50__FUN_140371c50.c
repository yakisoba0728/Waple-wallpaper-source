// Function: FUN_140371c50
// Addr: 140371c50
// Size: 588 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140371c50(byte *param_1,char *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  ulonglong local_80 [9];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  bVar1 = param_1[1];
  bVar2 = param_1[3];
  bVar3 = param_1[2];
  uVar11 = (ulonglong)*param_1 << 0x18;
  iVar4 = (int)uVar11;
  uVar13 = iVar4 + (uint)bVar2 + (uint)bVar3 * 0x100 + (uint)bVar1 * 0x10000;
  if (uVar13 < 0x201) {
    uVar9 = 0;
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    local_80[4] = 0;
    local_80[5] = 0;
    local_80[6] = 0;
    local_80[7] = 0;
    local_88[0] = 0;
    if (uVar13 != 0) {
      lVar5 = (ulonglong)param_1[0xb] +
              ((ulonglong)param_1[10] + (ulonglong)CONCAT11(param_1[8],param_1[9]) * 0x100) * 0x100;
      lVar6 = (ulonglong)param_1[0xf] +
              ((ulonglong)param_1[0xe] + (ulonglong)CONCAT11(param_1[0xc],param_1[0xd]) * 0x100) *
              0x100;
      do {
        uVar8 = (uint)uVar9;
        uVar11 = uVar9;
        if ((uint)CONCAT11(bVar3,bVar2) + (uint)bVar1 * 0x10000 + iVar4 <= uVar8) {
          uVar11 = 1;
        }
        uVar11 = (ulonglong)CONCAT11(param_1[uVar11 * 2 + lVar5],param_1[uVar11 * 2 + lVar5 + 1]);
        lVar7 = uVar11 * 4 + lVar6;
        if ((uint)param_1[uVar11 * 4 + lVar6 + 1] + (uint)param_1[uVar11 * 4 + lVar6] * 0x100 == 0)
        {
          uVar12 = (uint)param_1[lVar7 + 2] * 0x100 + (uint)param_1[lVar7 + 3];
          uVar11 = (ulonglong)uVar12;
          if ((uVar12 >> 0xf != 0) || ((uVar12 & 0xf) != 0)) goto LAB_140371dce;
        }
        else {
LAB_140371dce:
          uVar11 = (ulonglong)(uVar8 & 0x3f);
          local_80[(uint)(uVar9 >> 6) & 7] = local_80[(uint)(uVar9 >> 6) & 7] | 1L << uVar11;
          local_88[0] = 0xffffffff;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
      } while (uVar8 + 1 < uVar13);
    }
    if (((local_80[0] & 4) != 0) && (*param_2 != '\0')) {
      param_2[4] = -1;
      param_2[5] = -1;
      param_2[6] = -1;
      param_2[7] = -1;
      puVar10 = (undefined4 *)FUN_1403ed560(param_2,0xffff,CONCAT71((int7)(uVar11 >> 8),1));
      if (puVar10 != (undefined4 *)0x0) {
        *(ulonglong *)(puVar10 + 0x10) = *(ulonglong *)(puVar10 + 0x10) | 0x8000000000000000;
        *puVar10 = 0xffffffff;
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
                            (ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100) * 0x100,param_2,
                  param_3);
  }
  return;
}

