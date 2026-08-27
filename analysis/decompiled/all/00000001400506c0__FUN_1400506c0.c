// Function: FUN_1400506c0
// Addr: 1400506c0
// Size: 184 bytes


void FUN_1400506c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  
  cVar9 = FUN_140038c30(param_2,param_1);
  if ((cVar9 < '\0') && (param_2 != param_1)) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 1);
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    uVar8 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar8;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  cVar9 = FUN_140038c30(param_3,param_2);
  if (cVar9 < '\0') {
    if (param_3 != param_2) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_3 + 4) = uVar1;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
      uVar8 = param_2[3];
      param_3[2] = param_2[2];
      param_3[3] = uVar8;
      *param_2 = uVar4;
      param_2[1] = uVar5;
      param_2[2] = uVar6;
      param_2[3] = uVar7;
    }
    cVar9 = FUN_140038c30(param_2,param_1);
    if ((cVar9 < '\0') && (param_2 != param_1)) {
      uVar4 = param_1[1];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      uVar7 = param_2[2];
      uVar8 = param_2[3];
      *param_2 = *param_1;
      param_2[1] = uVar4;
      uVar4 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar4;
      *param_1 = uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
    }
  }
  return;
}

