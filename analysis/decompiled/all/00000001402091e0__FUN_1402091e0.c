// Function: FUN_1402091e0
// Addr: 1402091e0
// Size: 377 bytes


void FUN_1402091e0(longlong param_1,byte *param_2,float *param_3,int *param_4,undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0xd0);
  if (lVar2 == 0) {
    *param_3 = 1.0;
    param_3[1] = 1.0;
    fVar5 = (float)FUN_1402edef0(*(undefined4 *)(param_1 + 0x2f0));
    *param_4 = (int)fVar5;
    fVar5 = (float)FUN_1402edef0(*(undefined4 *)(param_1 + 0x2f4));
    param_4[1] = (int)fVar5;
    *param_5 = *(undefined8 *)param_4;
    *param_2 = 0;
    return;
  }
  if (((*(uint *)(param_1 + 0x304) & 2) == 0) && ((*(uint *)(param_1 + 0x304) & 0x220) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  *param_2 = *(byte *)(lVar2 + 0x1c) & 1;
  *param_3 = (float)*(uint *)(lVar2 + 0x2c) / (float)*(uint *)(lVar2 + 0x20);
  param_3[1] = (float)*(uint *)(lVar2 + 0x30) / (float)*(uint *)(lVar2 + 0x24);
  *param_4 = *(int *)(lVar2 + 0x2c);
  iVar4 = *(int *)(lVar2 + 0x30);
  param_4[1] = iVar4;
  if ((*(byte *)(lVar2 + 0x1c) & 4) == 0) {
    if ((!bVar3) || ((*(uint *)(param_1 + 0x304) & 0x800) != 0)) goto LAB_140209310;
    fVar5 = (float)FUN_1402edef0(*(undefined4 *)(param_1 + 0x2f0));
    *param_4 = (int)fVar5;
    fVar5 = (float)FUN_1402edef0(*(undefined4 *)(param_1 + 0x2f4));
    iVar4 = (int)fVar5;
  }
  else {
    *param_4 = *(int *)(lVar2 + 0xb0);
    iVar4 = *(int *)(lVar2 + 0xb4);
  }
  param_4[1] = iVar4;
LAB_140209310:
  if (((*(byte *)(param_1 + 0x304) & 2) == 0) || ((*(byte *)(lVar2 + 0x1c) & 4) != 0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 200) + 0x1218);
    *param_4 = *param_4 / iVar1;
    param_4[1] = iVar4 / iVar1;
  }
  *(undefined4 *)param_5 = *(undefined4 *)(lVar2 + 0x20);
  *(undefined4 *)((longlong)param_5 + 4) = *(undefined4 *)(lVar2 + 0x24);
  return;
}

