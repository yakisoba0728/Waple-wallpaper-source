// Function: FUN_14039d3e0
// Addr: 14039d3e0
// Size: 328 bytes


undefined8 FUN_14039d3e0(int *param_1,int *param_2,int *param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  plVar1 = param_4 + 2;
  lVar8 = param_4[1];
  lVar9 = *param_4;
  iVar2 = param_3[1];
  iVar3 = *param_3;
  iVar4 = param_2[1];
  iVar5 = *param_2;
  iVar6 = param_1[1];
  iVar7 = *param_1;
  if ((int)param_4[2] == 0) {
    uVar10 = 0;
    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
      uVar10 = **(undefined8 **)(lVar9 + 0x38);
    }
    (**(code **)(lVar9 + 0x10))
              (lVar9,lVar8,plVar1,*(undefined4 *)((longlong)param_4 + 0x1c),(int)param_4[4],uVar10);
    *(undefined4 *)((longlong)param_4 + 0x14) = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(int *)(param_4 + 3) = (int)param_4[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar10 = 0;
  if (*(longlong *)(lVar9 + 0x38) != 0) {
    uVar10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x18);
  }
  (**(code **)(lVar9 + 0x28))
            (lVar9,lVar8,plVar1,(float)iVar7,(float)iVar6,(float)iVar5,(float)iVar4,(float)iVar3,
             (float)iVar2,uVar10);
  *(float *)((longlong)param_4 + 0x1c) = (float)iVar3;
  *(float *)(param_4 + 4) = (float)iVar2;
  return 0;
}

