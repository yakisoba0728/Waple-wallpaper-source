// Function: FUN_140123830
// Addr: 140123830
// Size: 252 bytes


void FUN_140123830(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_UNWIND_INFO_14012388f_SizeOfProlog_14048a3b0;
  plVar1 = (longlong *)param_1[0x14];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0,0,0);
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
    param_1[0x11] = 0;
  }
  if ((longlong *)param_1[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
    param_1[0x12] = 0;
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
    param_1[0x14] = 0;
  }
  if ((longlong *)param_1[0x13] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    param_1[0x13] = 0;
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    param_1[0x17] = 0;
  }
  if ((longlong *)param_1[0x15] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    param_1[0x15] = 0;
  }
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  (*DAT_140426b70)();
  *param_1 = &PTR_DAT_140489f18;
                    /* WARNING: Subroutine does not return */
  FUN_140016840(param_1 + 8);
}

