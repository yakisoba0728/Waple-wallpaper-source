// Function: FUN_1402ee7c0
// Addr: 1402ee7c0
// Size: 296 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ee7c0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1404dc040 ^ (ulonglong)auStack_68;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)&local_40;
    local_40 = _DAT_1404366a0;
    uStack_38 = _UNK_1404366a8;
  }
  if (param_3 == (int *)0x0) {
    local_48[0] = 0;
    local_48[1] = 0;
  }
  local_30 = *(undefined8 *)(param_1 + 0x54);
  uStack_28 = *(undefined8 *)(param_1 + 0x5c);
  local_20 = *param_2;
  iStack_1c = param_2[1];
  iStack_18 = param_2[2];
  iStack_14 = param_2[3];
  piVar3 = local_48;
  if (param_3 != (int *)0x0) {
    piVar3 = param_3;
  }
  FUN_1402f1e30(&local_20,&local_30);
  lVar4 = (longlong)param_2[2] * (longlong)*(int *)(param_1 + 100);
  lVar5 = (longlong)param_2[1] * (longlong)*(int *)(param_1 + 0x68);
  lVar6 = (longlong)*param_2 * (longlong)*(int *)(param_1 + 100);
  lVar2 = (longlong)param_2[3] * (longlong)*(int *)(param_1 + 0x68);
  iVar1 = piVar3[1];
  *(int *)(param_1 + 100) =
       (int)((ulonglong)((lVar5 >> 0x3f) + 0x8000 + lVar5) >> 0x10) +
       (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + *piVar3;
  *(int *)(param_1 + 0x68) =
       (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10) +
       (int)((ulonglong)(lVar2 + 0x8000 + (lVar2 >> 0x3f)) >> 0x10) + iVar1;
  *(undefined8 *)(param_1 + 0x54) = local_30;
  *(undefined8 *)(param_1 + 0x5c) = uStack_28;
  return;
}

