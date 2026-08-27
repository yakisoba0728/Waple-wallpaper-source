// Function: FUN_1402d073c
// Addr: 1402d073c
// Size: 764 bytes


/* WARNING: Removing unreachable block (ram,0x0001402d082e) */
/* WARNING: Removing unreachable block (ram,0x0001402d083e) */
/* WARNING: Removing unreachable block (ram,0x0001402d085a) */
/* WARNING: Removing unreachable block (ram,0x0001402d0881) */
/* WARNING: Removing unreachable block (ram,0x0001402d088d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402d073c(tm *param_1,__int64 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28 [2];
  
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
      if ((*param_2 < 0) || (0x793582aff < *param_2)) {
        puVar6 = (undefined4 *)FUN_1402caf34();
        *puVar6 = 0x16;
        return 0x16;
      }
      __tzset();
      iVar5 = FUN_1402e15fc();
      if ((iVar5 == 0) &&
         ((iVar5 = FUN_1402e162c(), iVar5 == 0 && (iVar5 = FUN_1402e165c(), iVar5 == 0)))) {
        local_28[0] = *param_2;
        if (local_28[0] - 0x3f481U < 0x7935041fe) {
          iVar5 = common_gmtime_s<__int64>(param_1,local_28);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        else {
          iVar5 = common_gmtime_s<__int64>(param_1,param_2);
          if (iVar5 != 0) {
            return iVar5;
          }
          lVar9 = (longlong)param_1->tm_sec;
          lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
          iVar5 = param_1->tm_sec + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
          param_1->tm_sec = iVar5;
          if (iVar5 < 0) {
            lVar9 = lVar9 + -0x3c;
            param_1->tm_sec = iVar5 + 0x3c;
          }
          lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
          lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_min;
          lVar8 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
          iVar5 = (int)lVar9 + ((int)(lVar8 >> 5) - (int)(lVar8 >> 0x3f)) * -0x3c;
          param_1->tm_min = iVar5;
          if (iVar5 < 0) {
            lVar9 = lVar9 + -0x3c;
            param_1->tm_min = iVar5 + 0x3c;
          }
          lVar9 = lVar9 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8);
          lVar9 = ((lVar9 >> 5) - (lVar9 >> 0x3f)) + (longlong)param_1->tm_hour;
          iVar5 = (int)lVar9 + (int)(lVar9 / 0x18) * -0x18;
          param_1->tm_hour = iVar5;
          if (iVar5 < 0) {
            lVar9 = lVar9 + -0x18;
            param_1->tm_hour = iVar5 + 0x18;
          }
          lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
          lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
          iVar5 = (int)lVar9;
          if (lVar9 < 1) {
            if (lVar9 < 0) {
              iVar7 = param_1->tm_mday + iVar5;
              param_1->tm_mday = iVar7;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVar5) % 7;
              iVar5 = param_1->tm_yday + iVar5;
              if (iVar7 < 1) {
                param_1->tm_year = param_1->tm_year + -1;
                param_1->tm_mday = iVar7 + 0x1f;
                param_1->tm_yday = iVar5 + 0x16d;
                param_1->tm_mon = 0xb;
              }
              else {
                param_1->tm_yday = iVar5;
              }
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVar5;
            param_1->tm_yday = param_1->tm_yday + iVar5;
            param_1->tm_wday = (param_1->tm_wday + iVar5) % 7;
          }
        }
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  puVar6 = (undefined4 *)FUN_1402caf34();
  *puVar6 = 0x16;
  FUN_1402cad8c();
  return 0x16;
}

