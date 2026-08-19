// Function: FUN_140013560
// Addr: 140013560
// Size: 108 bytes


ulonglong FUN_140013560(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  local_10 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar2 = (longlong *)FUN_140013e10(local_18);
  uVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
  if (plVar1 != (longlong *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    uVar3 = uVar3 & 0xff;
  }
  return uVar3;
}

