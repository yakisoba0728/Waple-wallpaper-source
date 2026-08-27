// Function: FUN_14000dee0
// Addr: 14000dee0
// Size: 156 bytes


undefined8 * FUN_14000dee0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  *(undefined2 *)param_2 = 0;
  if ((((byte)*(uint *)(param_1 + 0x88) & 0x22) == 2) ||
     (uVar2 = **(ulonglong **)(param_1 + 0x58), uVar2 == 0)) {
    if ((*(uint *)(param_1 + 0x88) & 4) != 0) {
      return param_2;
    }
    if (**(longlong **)(param_1 + 0x50) == 0) {
      return param_2;
    }
    plVar4 = *(longlong **)(param_1 + 0x30);
    lVar1 = *plVar4;
    lVar3 = ((longlong)**(int **)(param_1 + 0x68) * 2 - lVar1) + **(longlong **)(param_1 + 0x50);
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (uVar2 < *(ulonglong *)(param_1 + 0x80)) {
      uVar2 = *(ulonglong *)(param_1 + 0x80);
    }
    lVar1 = *plVar4;
    lVar3 = uVar2 - lVar1;
  }
  if (lVar1 != 0) {
    FUN_140016ae0(param_2,*plVar4,lVar3 >> 1);
  }
  return param_2;
}

