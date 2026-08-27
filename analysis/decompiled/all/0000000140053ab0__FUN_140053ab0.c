// Function: FUN_140053ab0
// Addr: 140053ab0
// Size: 262 bytes


undefined8 *
FUN_140053ab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *local_38;
  size_t local_30;
  longlong local_28 [4];
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  param_1[1] = "system error";
  *param_1 = &PTR_FUN_140474318;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  FUN_140016600(param_1 + 4,param_3);
  local_28[3] = 7;
  local_28[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  local_28[1] = 0;
  local_38 = "unknown exception";
  if ((char *)param_1[1] != (char *)0x0) {
    local_38 = (char *)param_1[1];
  }
  local_28[0] = 0;
  local_30 = strlen(local_38);
  FUN_140053670(param_1 + 0xc,&local_38,param_3,local_28);
  if (7 < (ulonglong)local_28[3]) {
    uVar8 = local_28[3] * 2 + 2;
    lVar7 = local_28[0];
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar7) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar6 = (undefined8 *)(*pcVar1)();
        return puVar6;
      }
      uVar8 = local_28[3] * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar7,uVar8);
  }
  return param_1;
}

