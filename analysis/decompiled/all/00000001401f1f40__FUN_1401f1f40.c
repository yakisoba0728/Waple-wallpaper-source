// Function: FUN_1401f1f40
// Addr: 1401f1f40
// Size: 235 bytes


undefined8 * FUN_1401f1f40(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_140490980;
  plVar1 = (longlong *)param_1[0x59];
  for (plVar3 = (longlong *)param_1[0x58]; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x58] != param_1[0x59]) {
    param_1[0x59] = param_1[0x58];
  }
  FUN_140031b80(param_1 + 0x65);
  FUN_14000d9e0(param_1 + 0x60);
  FUN_140049340(param_1 + 0x5e);
  FUN_14000d9e0(param_1 + 0x58);
  FUN_14000d9e0(param_1 + 0x53);
  FUN_14015a700(param_1 + 0x51);
  FUN_14000d9e0(param_1 + 0x4b);
  FUN_14015a780(param_1 + 0x49);
  FUN_1401de1e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x360);
  }
  return param_1;
}

