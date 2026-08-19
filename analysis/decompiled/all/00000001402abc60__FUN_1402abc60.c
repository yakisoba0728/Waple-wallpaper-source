// Function: FUN_1402abc60
// Addr: 1402abc60
// Size: 292 bytes


void FUN_1402abc60(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  int local_68 [2];
  undefined1 *local_60;
  longlong local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_1404dc110 ^ (ulonglong)auStack_98;
  local_58 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR_FUN_140426bb8)();
  local_78 = &local_60;
  uVar2 = FUN_14029bb20(local_50,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_58 != 0) && (lVar4 = (*(code *)PTR_FUN_140426bb8)(), lVar4 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar4,1);
  }
  if ((char)uVar2 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar3 = FUN_140292840(local_50,&local_60,(int)(char)uVar2,local_68);
    *param_7 = uVar3;
    if (((local_60 == local_50) || (local_68[0] != 0)) || ((char)((ushort)uVar2 >> 8) != '\0')) {
      *param_6 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402abd90;
  }
  else if (*param_4 == 0) goto LAB_1402abd90;
  *param_6 = *param_6 | 1;
LAB_1402abd90:
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar4 = param_3[1];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar3;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar1;
  func_0x0001402ed2f0(local_30 ^ (ulonglong)auStack_98);
  return;
}

