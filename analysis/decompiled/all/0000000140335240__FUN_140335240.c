// Function: FUN_140335240
// Addr: 140335240
// Size: 32 bytes


ulonglong FUN_140335240(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lStack_18;
  uint uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 0xd0) + 0x50);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0;
    lStack_18 = *(longlong *)(*(longlong *)(lVar1 + 0x250) + (param_2 & 0xffffffff) * 8);
    uStack_10 = *(uint *)(*(longlong *)(lVar1 + 600) + (param_2 & 0xffffffff) * 4);
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2[1],param_2,&lStack_18);
    uVar4 = uVar3 & 0xffffffff;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  *param_3 = 0;
  param_3[2] = (ulonglong)uStack_10 + lStack_18;
  param_3[3] = lStack_18;
  param_3[1] = lStack_18;
  return uVar4;
}

