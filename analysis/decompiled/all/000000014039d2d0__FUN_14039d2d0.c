// Function: FUN_14039d2d0
// Addr: 14039d2d0
// Size: 271 bytes


undefined8 FUN_14039d2d0(int *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  plVar1 = param_3 + 2;
  lVar6 = param_3[1];
  lVar7 = *param_3;
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar4 = param_1[1];
  iVar5 = *param_1;
  if ((int)param_3[2] == 0) {
    uVar8 = 0;
    if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
      uVar8 = **(undefined8 **)(lVar7 + 0x38);
    }
    (**(code **)(lVar7 + 0x10))
              (lVar7,lVar6,plVar1,*(undefined4 *)((longlong)param_3 + 0x1c),(int)param_3[4],uVar8);
    *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(int *)(param_3 + 3) = (int)param_3[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar8 = 0;
  if (*(longlong *)(lVar7 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x10);
  }
  (**(code **)(lVar7 + 0x20))
            (lVar7,lVar6,plVar1,(float)iVar5,(float)iVar4,(float)iVar3,(float)iVar2,uVar8);
  *(float *)((longlong)param_3 + 0x1c) = (float)iVar3;
  *(float *)(param_3 + 4) = (float)iVar2;
  return 0;
}

