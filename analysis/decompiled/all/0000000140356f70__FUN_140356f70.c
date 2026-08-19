// Function: FUN_140356f70
// Addr: 140356f70
// Size: 91 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140356f70(undefined8 param_1,longlong param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1404dc110 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0xe8);
  if (param_3 == (int *)0x0) {
    param_3 = (int *)&local_40;
    local_40 = _DAT_140436770;
    uStack_38 = _UNK_140436778;
  }
  if (param_4 == (int *)0x0) {
    local_48[0] = 0;
    local_48[1] = 0;
  }
  uStack_30 = *(undefined8 *)(lVar2 + 0x30);
  uStack_28 = *(undefined8 *)(lVar2 + 0x38);
  iStack_20 = *param_3;
  iStack_1c = param_3[1];
  iStack_18 = param_3[2];
  iStack_14 = param_3[3];
  piVar4 = local_48;
  if (param_4 != (int *)0x0) {
    piVar4 = param_4;
  }
  func_0x0001402f1f00(&iStack_20,&uStack_30);
  lVar5 = (longlong)param_3[2] * (longlong)*(int *)(lVar2 + 0x40);
  lVar6 = (longlong)param_3[1] * (longlong)*(int *)(lVar2 + 0x44);
  lVar7 = (longlong)*param_3 * (longlong)*(int *)(lVar2 + 0x40);
  lVar3 = (longlong)param_3[3] * (longlong)*(int *)(lVar2 + 0x44);
  iVar1 = piVar4[1];
  *(int *)(lVar2 + 0x40) =
       (int)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10) +
       (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + *piVar4;
  *(int *)(lVar2 + 0x44) =
       (int)((ulonglong)(lVar5 + (lVar5 >> 0x3f) + 0x8000) >> 0x10) +
       (int)((ulonglong)(lVar3 + 0x8000 + (lVar3 >> 0x3f)) >> 0x10) + iVar1;
  *(undefined8 *)(lVar2 + 0x30) = uStack_30;
  *(undefined8 *)(lVar2 + 0x38) = uStack_28;
  func_0x0001402ed2f0(local_10 ^ (ulonglong)auStack_68);
  return;
}

