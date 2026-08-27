// Function: FUN_1400c2030
// Addr: 1400c2030
// Size: 256 bytes


undefined8 * FUN_1400c2030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_14000f880(param_1,puVar1,param_2[2]);
    plVar2 = param_2 + 4;
    if (0xf < (ulonglong)param_2[7]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 4,plVar2,param_2[6]);
    plVar2 = param_2 + 8;
    if (0xf < (ulonglong)param_2[0xb]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 8,plVar2,param_2[10]);
    plVar2 = param_2 + 0xc;
    if (0xf < (ulonglong)param_2[0xf]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 0xc,plVar2,param_2[0xe]);
    plVar2 = param_2 + 0x10;
    if (0xf < (ulonglong)param_2[0x13]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 0x10,plVar2,param_2[0x12]);
    plVar2 = param_2 + 0x14;
    if (0xf < (ulonglong)param_2[0x17]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 0x14,plVar2,param_2[0x16]);
    plVar2 = param_2 + 0x18;
    if (0xf < (ulonglong)param_2[0x1b]) {
      plVar2 = (longlong *)*plVar2;
    }
    FUN_14000f880(param_1 + 0x18,plVar2,param_2[0x1a]);
  }
  return param_1;
}

