// Function: FUN_140119180
// Addr: 140119180
// Size: 6 bytes


/* WARNING: Removing unreachable block (ram,0x0001402d9115) */
/* WARNING: Removing unreachable block (ram,0x0001402d9130) */
/* WARNING: Removing unreachable block (ram,0x0001402d9146) */

void FUN_140119180(undefined8 *param_1)

{
  char cVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x9e) != '\0') {
    *(undefined1 *)(param_1 + 0x9e) = 0;
    func_0x00014011afb0();
  }
  if (*(int *)(param_1 + 0x9f) != 0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x160))();
  }
  uStack_28 = 3;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  FUN_1400183a0(param_1 + 0x2b,&uStack_28);
  cVar1 = FUN_140084580(param_1 + 0x2b,3000);
  if ((cVar1 == '\0') && (param_1[0x2b] != -1)) {
    (*DAT_140426220)(param_1[0x2b],0xffffffff);
  }
  FUN_1400847d0(param_1 + 0x2b);
  FUN_140084200(param_1 + 0x2b);
  func_0x00014010b940(param_1);
  (**(code **)*param_1)(param_1,1);
  return;
}

