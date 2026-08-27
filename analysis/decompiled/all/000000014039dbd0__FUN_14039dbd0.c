// Function: FUN_14039dbd0
// Addr: 14039dbd0
// Size: 210 bytes


undefined8 FUN_14039dbd0(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar1 = param_2 + 2;
  lVar4 = param_2[1];
  lVar5 = *param_2;
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((int)param_2[2] == 0) {
    uVar6 = 0;
    if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
      uVar6 = **(undefined8 **)(lVar5 + 0x38);
    }
    (**(code **)(lVar5 + 0x10))
              (lVar5,lVar4,plVar1,*(undefined4 *)((longlong)param_2 + 0x1c),(int)param_2[4],uVar6);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_2 + 3) = (int)param_2[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar6 = 0;
  if (*(longlong *)(lVar5 + 0x38) != 0) {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
  }
  (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar1,(float)iVar3,(float)iVar2,uVar6);
  *(float *)((longlong)param_2 + 0x1c) = (float)iVar3;
  *(float *)(param_2 + 4) = (float)iVar2;
  return 0;
}

