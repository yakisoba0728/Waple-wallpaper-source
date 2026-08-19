// Function: FUN_140290cc0
// Addr: 140290cc0
// Size: 92 bytes


void FUN_140290cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_4 + lVar1) != '\0');
  local_48 = param_1;
  func_0x000140017550(&local_38,param_4);
  return;
}

