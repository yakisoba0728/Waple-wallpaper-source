// Function: FUN_1402f69c0
// Addr: 1402f69c0
// Size: 199 bytes


void FUN_1402f69c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        lVar3 = (longlong)iVar4;
        plVar1 = *(longlong **)(lVar3 * 8 + *(longlong *)(param_1 + 0x40));
        lVar2 = *(longlong *)(*plVar1 + 0x98);
        if (*(code **)(plVar1[2] + 0x10) != (code *)0x0) {
          (**(code **)(plVar1[2] + 0x10))(plVar1);
        }
        (**(code **)(lVar2 + 0x10))(lVar2,plVar1);
        iVar4 = iVar4 + 1;
        *(undefined8 *)(lVar3 * 8 + *(longlong *)(param_1 + 0x40)) = 0;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (**(code **)(param_2 + 0x10))(param_2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}

