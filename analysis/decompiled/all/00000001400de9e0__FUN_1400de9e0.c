// Function: FUN_1400de9e0
// Addr: 1400de9e0
// Size: 304 bytes


void FUN_1400de9e0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_14;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  local_88 = param_2;
  local_80 = param_3;
  local_50 = (undefined8 *)FUN_14028af20(0x30);
  *local_50 = &PTR_FUN_140486dc8;
  local_50[1] = 0x14;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_40 = 1;
  local_20 = 1;
  local_14 = 0;
  local_28 = 0x43baefb;
  local_48 = local_50;
  local_38 = param_1 + 1;
  local_30 = param_1 + 1;
  FUN_1400e1430(&local_88);
  lVar2 = FUN_1400dfc00(&local_88);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
    UNLOCK();
  }
  FUN_1400df680(param_1);
  *param_1 = lVar2;
  if (local_70 != 0) {
    lVar2 = local_70;
    puVar3 = auStack_a8;
    if ((0xfff < (ulonglong)((lStack_60 - local_70 >> 2) * 4)) &&
       (lVar2 = *(longlong *)(local_70 + -8), puVar3 = auStack_a8, 0x1f < (local_70 - lVar2) - 8U))
    {
      lVar2 = 5;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar3 = auStack_a0;
    }
    *(undefined8 *)(puVar3 + -8) = 0x1400deafb;
    thunk_FUN_14028af80(lVar2);
  }
  return;
}

