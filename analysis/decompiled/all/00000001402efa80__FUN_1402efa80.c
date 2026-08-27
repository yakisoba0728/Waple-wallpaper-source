// Function: FUN_1402efa80
// Addr: 1402efa80
// Size: 220 bytes


undefined8 FUN_1402efa80(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
    *piVar1 = *piVar1 + -1;
    if (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x60)) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x90);
    puVar2 = (undefined8 *)(lVar3 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar4 = (longlong *)*puVar2; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[1])
      {
        if (plVar4[2] == param_1) {
          lVar5 = *plVar4;
          plVar4 = (longlong *)plVar4[1];
          lVar6 = *(longlong *)(lVar3 + 0x10);
          if (lVar5 == 0) {
            *puVar2 = plVar4;
          }
          else {
            *(longlong **)(lVar5 + 8) = plVar4;
          }
          if (plVar4 == (longlong *)0x0) {
            *(longlong *)(lVar3 + 0x28) = lVar5;
          }
          else {
            *plVar4 = lVar5;
          }
          (**(code **)(lVar6 + 0x10))(lVar6);
          FUN_1402f6a90(lVar6,param_1,lVar3);
          return 0;
        }
      }
    }
    return 0x23;
  }
  return 0x23;
}

