// Function: FUN_1401668f0
// Addr: 1401668f0
// Size: 174 bytes


undefined8 FUN_1401668f0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(uint *)(lVar1 + 0x180) & 1) == 0) {
    *(uint *)(lVar1 + 0x180) = *(uint *)(lVar1 + 0x180) | 1;
    FUN_140017610(0x180,lVar1 + 0x150);
    FUN_14028b030(&LAB_140424110);
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x150) + 8))();
  cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_1,param_2,param_3,0);
  if ((cVar2 == '\0') || (1 < *(byte *)(param_3 + 8) - 6)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)*plVar3)(plVar3,1);
  }
  return uVar4;
}

