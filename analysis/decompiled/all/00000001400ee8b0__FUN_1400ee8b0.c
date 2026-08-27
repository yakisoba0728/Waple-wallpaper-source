// Function: FUN_1400ee8b0
// Addr: 1400ee8b0
// Size: 195 bytes


void FUN_1400ee8b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x168);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,0,1000);
  }
  uVar3 = param_2 & 0xf;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
  lVar2 = *plVar1;
  if ((param_2 & 0x40) == 0) {
    (**(code **)(lVar2 + 0x40))();
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001400ee93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1,uVar3,1,param_1 + 0x158);
    return;
  }
  (**(code **)(lVar2 + 200))
            (plVar1,uVar3,1,
             *(longlong *)(param_1 + 0x140) + ((longlong)*(int *)(param_1 + 0x98) * 3 + 2) * 8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x138) + 8);
                    /* WARNING: Could not recover jumptable at 0x0001400ee96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd0))(plVar1,uVar3,1,param_1 + 0x158);
  return;
}

