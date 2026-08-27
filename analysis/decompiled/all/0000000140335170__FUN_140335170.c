// Function: FUN_140335170
// Addr: 140335170
// Size: 123 bytes


ulonglong FUN_140335170(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong local_18;
  uint local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
    local_18 = *(longlong *)(*(longlong *)(lVar1 + 0x250) + (param_2 & 0xffffffff) * 8);
    local_10 = *(uint *)(*(longlong *)(lVar1 + 600) + (param_2 & 0xffffffff) * 4);
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2[1],param_2,&local_18);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  *param_3 = 0;
  param_3[2] = (ulonglong)local_10 + local_18;
  param_3[3] = local_18;
  param_3[1] = local_18;
  return uVar4;
}

