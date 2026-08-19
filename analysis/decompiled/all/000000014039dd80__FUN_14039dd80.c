// Function: FUN_14039dd80
// Addr: 14039dd80
// Size: 10 bytes


undefined8 FUN_14039dd80(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  plVar1 = param_2 + 2;
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((int)param_2[2] != 0) {
    lVar4 = param_2[1];
    lVar5 = *param_2;
    uVar7 = 0;
    if ((*(float *)((longlong)param_2 + 0x14) != *(float *)((longlong)param_2 + 0x1c)) ||
       (*(float *)(param_2 + 3) != *(float *)(param_2 + 4))) {
      uVar6 = uVar7;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))
                (lVar5,lVar4,plVar1,*(float *)((longlong)param_2 + 0x14),(int)param_2[3],uVar6);
    }
    if (*(longlong *)(lVar5 + 0x38) != 0) {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x20);
    }
    (**(code **)(lVar5 + 0x30))(lVar5,lVar4,plVar1,uVar7);
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *plVar1 = 0;
  }
  *(float *)((longlong)param_2 + 0x1c) = (float)iVar3;
  *(float *)(param_2 + 4) = (float)iVar2;
  return 0;
}

