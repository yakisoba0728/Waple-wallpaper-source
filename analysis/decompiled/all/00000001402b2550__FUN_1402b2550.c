// Function: FUN_1402b2550
// Addr: 1402b2550
// Size: 294 bytes


longlong * FUN_1402b2550(longlong *param_1,ulonglong param_2,ulonglong param_3,undefined2 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_140012940();
  }
  uVar3 = param_1[3];
  if (uVar3 - uVar2 < param_3) {
    plVar5 = (longlong *)FUN_14029cd40(param_1,param_3,local_res8,param_2,param_3,param_4);
    return plVar5;
  }
  uVar1 = uVar2 + param_3;
  if (((uVar2 != uVar1) && (7 < uVar3)) && (DAT_140472230 != '\0')) {
    lVar4 = *param_1;
    uVar6 = uVar3 * 2 + 9 + lVar4 & 0xfffffffffffffff8;
    uVar3 = lVar4 + (uVar2 + 1) * 2;
    uVar8 = lVar4 + 2 + uVar1 * 2;
    uVar9 = uVar6;
    if (uVar8 <= uVar6) {
      uVar9 = uVar8;
    }
    uVar8 = uVar6;
    if (uVar3 <= uVar6) {
      uVar8 = uVar3;
    }
    _guard_check_icall(lVar4,uVar6,uVar8,uVar9);
  }
  param_1[2] = uVar1;
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  puVar7 = (undefined2 *)((longlong)plVar5 + param_2 * 2);
  FUN_1404210f0(puVar7 + param_3,puVar7,(uVar2 - param_2) * 2 + 2);
  if (param_3 != 0) {
    for (param_3 = param_3 & 0x7fffffffffffffff; param_3 != 0; param_3 = param_3 - 1) {
      *puVar7 = param_4;
      puVar7 = puVar7 + 1;
    }
  }
  return param_1;
}

