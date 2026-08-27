// Function: FUN_14015c290
// Addr: 14015c290
// Size: 466 bytes


bool FUN_14015c290(char *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_98;
  undefined4 uStack_94;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  
  local_78 = 0;
  if (param_2[4] != 0) {
    local_78 = param_2[4];
  }
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0x100;
  local_38 = 2;
  local_48 = 0;
  local_40 = 0;
  local_88 = param_1;
  local_80 = param_1;
  FUN_14004ad80(0,&local_88);
  if (local_48 == 0) {
    if (*local_88 == '\0') {
      local_40 = (longlong)local_88 - (longlong)local_80;
      local_48 = 1;
      local_98 = 1;
      uStack_94 = local_44;
      goto LAB_14015c39a;
    }
    uVar4 = FUN_140117060(&local_78,&local_88,param_2);
    if (local_48 == 0) {
      FUN_14004ad80(uVar4,&local_88);
      if (local_48 == 0) {
        if (*local_88 != '\0') {
          local_40 = (longlong)local_88 - (longlong)local_80;
          local_48 = 2;
          local_98 = 2;
          uStack_94 = local_44;
          goto LAB_14015c39a;
        }
        local_98 = 0;
      }
      else {
        local_98 = local_48;
      }
    }
    else {
      local_98 = local_48;
    }
  }
  else {
    local_98 = local_48;
  }
  uStack_94 = local_44;
LAB_14015c39a:
  uStack_60 = local_68;
  param_2[10] = CONCAT44(uStack_94,local_98);
  param_2[0xb] = local_40;
  if (*(int *)(param_2 + 10) == 0) {
    if (param_2[7] - param_2[6] != 0x10) {
      FID_conflict__assert
                (L"stack_.GetSize() == sizeof(ValueType)",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson/document.h",0xa59);
    }
    if ((ulonglong)(param_2[7] - param_2[6]) < 0x10) {
      FID_conflict__assert
                (L"GetSize() >= count * sizeof(T)",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal/stack.h",0x8b);
    }
    lVar2 = param_2[7];
    puVar1 = (undefined8 *)(lVar2 + -0x10);
    param_2[7] = puVar1;
    if (param_2 != puVar1) {
      uVar3 = *(undefined8 *)(lVar2 + -8);
      *(undefined2 *)(lVar2 + -2) = 0;
      *param_2 = *puVar1;
      param_2[1] = uVar3;
    }
  }
  param_2[7] = param_2[6];
  thunk_FUN_1402d9040();
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  thunk_FUN_1402d9040(local_68);
  thunk_FUN_14028af80(local_70,1);
  return *(int *)(param_2 + 10) == 0;
}

