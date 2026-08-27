// Function: FUN_140229020
// Addr: 140229020
// Size: 162 bytes


void FUN_140229020(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,code *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  
  cVar12 = (*param_4)(param_2,param_1);
  if (cVar12 != '\0') {
    uVar2 = *(undefined4 *)((longlong)param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar9 = *param_2;
    uVar10 = param_2[1];
    uVar1 = param_2[2];
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    param_2[2] = param_1[2];
    *param_1 = uVar9;
    param_1[1] = uVar10;
    param_1[2] = uVar1;
  }
  cVar12 = (*param_4)(param_3,param_2);
  if (cVar12 != '\0') {
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar1 = *(undefined8 *)(param_3 + 4);
    *param_3 = *(undefined4 *)param_2;
    param_3[1] = uVar2;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    *(undefined8 *)(param_3 + 4) = param_2[2];
    *(undefined4 *)param_2 = uVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    param_2[2] = uVar1;
    cVar12 = (*param_4)(param_2,param_1);
    if (cVar12 != '\0') {
      uVar9 = param_1[1];
      uVar10 = *param_2;
      uVar11 = param_2[1];
      uVar1 = param_2[2];
      *param_2 = *param_1;
      param_2[1] = uVar9;
      param_2[2] = param_1[2];
      *param_1 = uVar10;
      param_1[1] = uVar11;
      param_1[2] = uVar1;
    }
  }
  return;
}

