// Function: FUN_140056c40
// Addr: 140056c40
// Size: 167 bytes


ulonglong FUN_140056c40(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  longlong *plVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  undefined4 local_res8 [8];
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18 [3];
  
  plVar1 = *(longlong **)(param_1 + 0xf8);
  if (plVar1 != (longlong *)0x0) {
    local_20 = param_5;
    local_res8[0] = param_3;
    local_28[0] = param_2;
    local_18[0] = param_4;
    uVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,local_28,local_res8,local_18,&local_20,param_6,param_7,param_8,param_9
                       ,param_10,param_11);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}

