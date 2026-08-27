// Function: FUN_140116d90
// Addr: 140116d90
// Size: 433 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140116d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  
  local_78 = param_1[4];
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = _DAT_140492b20;
  uStack_50 = _UNK_140492b28;
  local_48 = 0;
  local_40 = 0;
  local_38 = 2;
  FUN_14004ad80();
  if (local_48 == 0) {
    if (*(char *)*param_2 == '\0') {
      local_40 = (longlong)*param_2 - param_2[1];
      uStack_60 = local_68;
      *(undefined4 *)((longlong)param_1 + 0x54) = local_44;
      local_48 = 1;
      *(undefined4 *)(param_1 + 10) = 1;
      param_1[0xb] = local_40;
      goto LAB_140116f05;
    }
    FUN_140117060(&local_78,param_2,param_1);
    if ((local_48 != 0) || (FUN_14004ad80(0,param_2), local_48 != 0)) goto LAB_140116e39;
    uStack_60 = local_68;
    if (*(char *)*param_2 != '\0') {
      local_40 = (longlong)*param_2 - param_2[1];
      param_1[0xb] = local_40;
      local_48 = 2;
      *(undefined4 *)(param_1 + 10) = 2;
      *(undefined4 *)((longlong)param_1 + 0x54) = local_44;
      goto LAB_140116f05;
    }
    param_1[0xb] = local_40;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_44;
  }
  else {
LAB_140116e39:
    uStack_60 = local_68;
    *(undefined4 *)((longlong)param_1 + 0x54) = local_44;
    *(int *)(param_1 + 10) = local_48;
    param_1[0xb] = local_40;
    if (local_48 != 0) goto LAB_140116f05;
  }
  uStack_60 = local_68;
  if (param_1[7] - param_1[6] != 0x10) {
    FID_conflict__assert
              (L"stack_.GetSize() == sizeof(ValueType)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xa59);
  }
  if ((ulonglong)(param_1[7] - param_1[6]) < 0x10) {
    FID_conflict__assert
              (L"GetSize() >= count * sizeof(T)",
               L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x8b);
  }
  lVar2 = param_1[7];
  puVar1 = (undefined8 *)(lVar2 + -0x10);
  param_1[7] = puVar1;
  if (param_1 != puVar1) {
    uVar3 = *(undefined8 *)(lVar2 + -8);
    *(undefined2 *)(lVar2 + -2) = 0;
    *param_1 = *puVar1;
    param_1[1] = uVar3;
  }
LAB_140116f05:
  param_1[7] = param_1[6];
  thunk_FUN_1402d9040();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  thunk_FUN_1402d9040(local_68);
  thunk_FUN_14028af80(local_70,1);
  return param_1;
}

