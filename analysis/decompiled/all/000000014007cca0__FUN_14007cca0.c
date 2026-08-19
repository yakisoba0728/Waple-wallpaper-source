// Function: FUN_14007cca0
// Addr: 14007cca0
// Size: 15 bytes


longlong * FUN_14007cca0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  param_4 = *(ulonglong *)(param_1 + 0x30) & param_4;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + param_4 * 0x10);
  if (plVar5 == *(longlong **)(param_1 + 8)) {
    *param_2 = (longlong)*(longlong **)(param_1 + 8);
    param_2[1] = 0;
    return param_2;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + param_4 * 0x10);
  while( true ) {
    plVar4 = plVar5 + 2;
    if (7 < (ulonglong)plVar5[5]) {
      plVar4 = (longlong *)*plVar4;
    }
    puVar3 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar3 = (undefined8 *)*param_3;
    }
    if (param_3[2] == plVar5[4]) {
      if (param_3[2] == 0) {
        bVar6 = false;
      }
      else {
        iVar2 = FUN_140015980(puVar3,plVar4);
        bVar6 = iVar2 != 0;
      }
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    if (plVar5 == plVar1) {
      *param_2 = (longlong)plVar5;
      param_2[1] = 0;
      return param_2;
    }
    plVar5 = (longlong *)plVar5[1];
  }
  *param_2 = *plVar5;
  param_2[1] = (longlong)plVar5;
  return param_2;
}

