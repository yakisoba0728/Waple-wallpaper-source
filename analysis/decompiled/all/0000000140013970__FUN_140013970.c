// Function: FUN_140013970
// Addr: 140013970
// Size: 188 bytes


undefined8 * FUN_140013970(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_38 [6];
  
  uVar2 = *param_3;
  uVar3 = param_3[1];
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  sVar4 = strlen(param_2);
  FUN_140017480(local_38,param_2,sVar4);
  param_1[1] = "system error";
  *param_1 = std::_System_error::vftable;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (0xf < (ulonglong)local_38[3]) {
    uVar7 = local_38[3] + 1;
    lVar6 = local_38[0];
    if (0xfff < uVar7) {
      lVar6 = *(longlong *)(local_38[0] + -8);
      if (0x1f < (local_38[0] - lVar6) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar5 = (undefined8 *)(*pcVar1)();
        return puVar5;
      }
      uVar7 = local_38[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar6,uVar7);
  }
  *param_1 = std::ios_base::failure::vftable;
  return param_1;
}

