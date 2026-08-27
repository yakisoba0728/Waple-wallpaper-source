// Function: FUN_140056eb0
// Addr: 140056eb0
// Size: 138 bytes


undefined8 FUN_140056eb0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  pcVar1 = (code *)param_1[4];
  local_18 = 0;
  local_10 = 0;
  lVar2 = FUN_14028af20(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  local_18 = *param_1;
  *param_1 = lVar2;
  lVar2 = param_1[1];
  param_1[1] = local_10;
  local_10 = lVar2;
  (*pcVar1)(param_1[3],(int)param_1[2],&local_18);
  FUN_140292030();
  FUN_140056cf0(param_1);
  thunk_FUN_14028af80(param_1,0x28);
  return 0;
}

