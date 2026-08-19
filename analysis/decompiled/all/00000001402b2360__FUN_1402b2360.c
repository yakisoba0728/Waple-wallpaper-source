// Function: FUN_1402b2360
// Addr: 1402b2360
// Size: 243 bytes


/* WARNING: Removing unreachable block (ram,0x0001402b23c5) */
/* WARNING: Removing unreachable block (ram,0x0001402b23cf) */
/* WARNING: Removing unreachable block (ram,0x0001402b23d7) */
/* WARNING: Removing unreachable block (ram,0x0001402b23fe) */
/* WARNING: Removing unreachable block (ram,0x0001402b2402) */
/* WARNING: Removing unreachable block (ram,0x0001402b2408) */
/* WARNING: Removing unreachable block (ram,0x0001402b240c) */

longlong * FUN_1402b2360(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  uVar2 = 0;
  *(undefined2 *)param_2 = 0;
  uVar7 = param_4 - param_3 >> 1;
  uVar3 = 0;
  if (uVar7 != 0) {
    uVar3 = uVar7;
    if (uVar7 != 0) goto LAB_1402b242a;
    param_2[2] = 0;
    plVar4 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      plVar4 = (longlong *)*param_2;
    }
    *(undefined2 *)plVar4 = 0;
    while( true ) {
      if ((ulonglong)param_2[3] < 8) {
        puVar5 = (undefined2 *)((longlong)param_2 + param_2[2] * 2);
        plVar4 = param_2;
      }
      else {
        puVar5 = (undefined2 *)(*param_2 + param_2[2] * 2);
        plVar4 = (longlong *)*param_2;
      }
      uVar3 = func_0x0001402ba040(plVar4,puVar5,param_3,param_4,param_1 + 0x10);
      if (uVar3 == 0xffffffffffffffff) break;
      uVar2 = param_2[2];
      if (uVar3 <= uVar2) goto UNWIND_INFO_1402b2454_UnwindCodes_21__UnwindOpCode;
LAB_1402b242a:
      FUN_140015900(param_2,uVar3 - uVar2,0);
    }
    uVar3 = 0;
  }
UNWIND_INFO_1402b2454_UnwindCodes_21__UnwindOpCode:
  uVar2 = param_2[2];
  if (uVar2 < uVar3) {
    FUN_140015900(param_2,uVar3 - uVar2,0);
  }
  else {
    if (((uVar3 != uVar2) && (7 < (ulonglong)param_2[3])) && (DAT_140472300 != '\0')) {
      lVar1 = *param_2;
      uVar2 = lVar1 + (uVar2 + 1) * 2;
      uVar7 = lVar1 + 2 + uVar3 * 2;
      uVar6 = param_2[3] * 2 + 9 + lVar1 & 0xfffffffffffffff8;
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = uVar7;
      }
      uVar7 = uVar6;
      if (uVar2 <= uVar6) {
        uVar7 = uVar2;
      }
      func_0x00014000ed00(lVar1,uVar6,uVar7,uVar8);
    }
    param_2[2] = uVar3;
    if ((ulonglong)param_2[3] < 8) {
      *(undefined2 *)((longlong)param_2 + uVar3 * 2) = 0;
    }
    else {
      *(undefined2 *)(*param_2 + uVar3 * 2) = 0;
    }
  }
  return param_2;
}

