// Function: common_gmtime_s<__int64>
// Addr: 1402c8ed8
// Size: 5 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl common_gmtime_s<__int64>(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool abStackX_8 [8];
  longlong alStackX_18 [2];
  
  uVar3 = _UNK_1404930d8;
  uVar1 = _DAT_1404930d0;
  if (param_1 != (tm *)0x0) {
    uVar2 = _UNK_1404930d4;
    param_1->tm_sec = _DAT_1404930d0;
    uVar4 = _UNK_1404930d8;
    param_1->tm_min = uVar2;
    _UNK_1404930d8 = (undefined4)uVar3;
    _UNK_1404930dc = SUB84(uVar3,4);
    uVar2 = _UNK_1404930dc;
    param_1->tm_hour = _UNK_1404930d8;
    _UNK_1404930d8 = uVar4;
    uVar4 = _DAT_1404930d0;
    param_1->tm_mday = uVar2;
    _DAT_1404930d0 = (undefined4)uVar1;
    _UNK_1404930d4 = SUB84(uVar1,4);
    uVar2 = _UNK_1404930d4;
    param_1->tm_mon = _DAT_1404930d0;
    _DAT_1404930d0 = uVar4;
    uVar4 = _UNK_1404930d8;
    param_1->tm_year = uVar2;
    _UNK_1404930d8 = (undefined4)uVar3;
    _UNK_1404930dc = SUB84(uVar3,4);
    uVar2 = _UNK_1404930dc;
    param_1->tm_wday = _UNK_1404930d8;
    _UNK_1404930d8 = uVar4;
    param_1->tm_yday = uVar2;
    param_1->tm_isdst = (int)uVar1;
    if (param_2 != (__int64 *)0x0) {
      alStackX_18[0] = *param_2;
      if ((-0xa8c1 < alStackX_18[0]) && (alStackX_18[0] < 0x79358efe0)) {
        abStackX_8[0] = false;
        iVar5 = compute_year(alStackX_18,abStackX_8);
        piVar9 = (int *)&DAT_140430260;
        param_1->tm_year = iVar5;
        iVar8 = 1;
        iVar5 = (int)(alStackX_18[0] / 0x15180);
        param_1->tm_yday = iVar5;
        alStackX_18[0] = alStackX_18[0] + (longlong)iVar5 * -0x15180;
        piVar10 = piVar9;
        if (abStackX_8[0] != false) {
          piVar9 = &DAT_140430298;
          piVar10 = piVar9;
        }
        while (piVar9 = piVar9 + 1, *piVar9 < iVar5) {
          iVar8 = iVar8 + 1;
        }
        param_1->tm_mon = iVar8 + -1;
        param_1->tm_mday = iVar5 - piVar10[(longlong)iVar8 + -1];
        lVar7 = *param_2;
        param_1->tm_isdst = 0;
        param_1->tm_wday = ((int)(lVar7 / 0x15180) + 4) % 7;
        iVar5 = (int)(alStackX_18[0] / 0xe10);
        param_1->tm_hour = iVar5;
        alStackX_18[0] = alStackX_18[0] + (longlong)iVar5 * -0xe10;
        lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(alStackX_18[0]),8) + alStackX_18[0];
        iVar5 = (int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f);
        param_1->tm_min = iVar5;
        param_1->tm_sec = (int)alStackX_18[0] + iVar5 * -0x3c;
        return 0;
      }
      puVar6 = (undefined4 *)FUN_1402caf34();
      *puVar6 = 0x16;
      return 0x16;
    }
  }
  puVar6 = (undefined4 *)FUN_1402caf34();
  *puVar6 = 0x16;
  FUN_1402cad8c();
  return 0x16;
}

