// Function: FUN_140397060
// Addr: 140397060
// Size: 145 bytes


void FUN_140397060(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar1 = param_1 + 2;
  uVar5 = 0;
  if ((int)*plVar1 != 0) {
    lVar2 = param_1[1];
    lVar3 = *param_1;
    if ((*(float *)((longlong)param_1 + 0x14) != *(float *)((longlong)param_1 + 0x1c)) ||
       (*(float *)(param_1 + 3) != *(float *)(param_1 + 4))) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
      }
      (**(code **)(lVar3 + 0x18))
                (lVar3,lVar2,plVar1,*(float *)((longlong)param_1 + 0x14),(int)param_1[3],uVar4);
    }
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    }
    (**(code **)(lVar3 + 0x30))(lVar3,lVar2,plVar1,uVar5);
  }
  *plVar1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}

