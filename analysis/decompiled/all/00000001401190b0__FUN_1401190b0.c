// Function: FUN_1401190b0
// Addr: 1401190b0
// Size: 215 bytes


void FUN_1401190b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x9e) != '\0') {
    *(undefined1 *)(param_1 + 0x9e) = 0;
    FUN_14011aee0();
  }
  if (*(int *)(param_1 + 0x9f) != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x160))();
  }
  local_28 = 3;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_1400182d0(param_1 + 0x2b,&local_28);
  cVar1 = FUN_1400844b0(param_1 + 0x2b,3000);
  if ((cVar1 == '\0') && ((HANDLE)param_1[0x2b] != (HANDLE)0xffffffffffffffff)) {
    TerminateProcess((HANDLE)param_1[0x2b],0xffffffff);
  }
  FUN_140084700(param_1 + 0x2b);
  FUN_140084130(param_1 + 0x2b);
  FUN_14010b870(param_1);
  (**(code **)*param_1)(param_1,1);
  thunk_FUN_14028af80(0);
  return;
}

