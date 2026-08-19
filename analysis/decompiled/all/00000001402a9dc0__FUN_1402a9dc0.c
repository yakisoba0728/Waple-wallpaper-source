// Function: FUN_1402a9dc0
// Addr: 1402a9dc0
// Size: 1 bytes


longlong * FUN_1402a9dc0(longlong *param_1,ulonglong param_2,undefined2 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 uStackX_8;
  
  lVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar3 - lVar2 < param_2) {
    plVar5 = (longlong *)FUN_14029cbc0(param_1,param_2,uStackX_8,param_2,param_3);
    return plVar5;
  }
  lVar1 = lVar2 + param_2;
  if (((lVar2 != lVar1) && (7 < uVar3)) && (DAT_140472300 != '\0')) {
    lVar4 = *param_1;
    uVar6 = uVar3 * 2 + 9 + lVar4 & 0xfffffffffffffff8;
    uVar3 = lVar4 + (lVar2 + 1) * 2;
    uVar8 = lVar4 + 2 + lVar1 * 2;
    uVar9 = uVar6;
    if (uVar8 <= uVar6) {
      uVar9 = uVar8;
    }
    uVar8 = uVar6;
    if (uVar3 <= uVar6) {
      uVar8 = uVar3;
    }
    func_0x00014000ed00(lVar4,uVar6,uVar8,uVar9);
  }
  param_1[2] = lVar1;
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  puVar7 = (undefined2 *)((longlong)plVar5 + lVar2 * 2);
  if (param_2 != 0) {
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined2 *)((longlong)plVar5 + lVar1 * 2) = 0;
  return param_1;
}

