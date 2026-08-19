// Function: FUN_1402f9210
// Addr: 1402f9210
// Size: 24 bytes


longlong * FUN_1402f9210(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 local_res8;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  local_res8 = param_1;
  uVar4 = (**(code **)(param_2 + 0x10))(&local_res8);
  uVar4 = (uVar4 & 0xffffffff) % (ulonglong)*(uint *)(param_2 + 4);
  lVar2 = plVar1[uVar4];
  plVar5 = plVar1 + uVar4;
  while ((lVar2 != 0 && (cVar3 = (**(code **)(param_2 + 0x18))(lVar2,&local_res8), cVar3 == '\0')))
  {
    plVar5 = plVar5 + -1;
    if (plVar5 < plVar1) {
      plVar5 = plVar1 + (*(int *)(param_2 + 4) - 1);
    }
    lVar2 = *plVar5;
  }
  return plVar5;
}

