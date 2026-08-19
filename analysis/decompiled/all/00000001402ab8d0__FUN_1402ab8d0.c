// Function: FUN_1402ab8d0
// Addr: 1402ab8d0
// Size: 294 bytes


void FUN_1402ab8d0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,short *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  int aiStack_88 [2];
  undefined4 *local_80;
  char *local_78;
  longlong local_70;
  char local_68;
  char acStack_67 [31];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_b8;
  local_70 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_80 = param_2;
  (*(code *)PTR_FUN_140426bb8)();
  local_98 = &local_78;
  uVar3 = FUN_14029bb20(&local_68,param_3,param_4,*(undefined4 *)(param_5 + 0x18));
  if ((local_70 != 0) && (lVar5 = (*(code *)PTR_FUN_140426bb8)(), lVar5 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar5,1);
  }
  if ((char)uVar3 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    pcVar6 = &local_68;
    if (local_68 == '-') {
      pcVar6 = acStack_67;
    }
    uVar4 = func_0x000140292930(pcVar6,&local_78,(int)(char)uVar3,aiStack_88);
    *param_7 = (short)uVar4;
    if (((local_78 == pcVar6) || (aiStack_88[0] != 0)) || (0xffff < uVar4)) {
      *param_6 = 2;
      *param_7 = -1;
    }
    else if (local_68 == '-') {
      *param_7 = -(short)uVar4;
    }
    param_2 = local_80;
    if ((char)((ushort)uVar3 >> 8) != '\0') {
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
    if (*param_4 != 0) goto LAB_1402aba4b;
  }
  else if (*param_4 == 0) goto LAB_1402aba4b;
  *param_6 = *param_6 | 1;
LAB_1402aba4b:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar5 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar5;
  param_2[3] = uVar2;
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_b8);
  return;
}

