// Function: FUN_1403c83f0
// Addr: 1403c83f0
// Size: 78 bytes


undefined1 FUN_1403c83f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  local_58 = 0.0;
  dStack_50 = 0.0;
  local_48 = 0.0;
  dStack_40 = 0.0;
  cVar6 = FUN_14039ae70(0,param_3,&local_58,0);
  dVar5 = dStack_40;
  dVar1 = local_48;
  dVar4 = dStack_50;
  dVar2 = DAT_140492828;
  if (cVar6 == '\0') {
    return 0;
  }
  if (local_58 < local_48) {
    dVar3 = (double)FUN_14041a5d0(SUB84(local_58 + DAT_140492828,0));
    *param_4 = (int)dVar3;
    dVar1 = (double)FUN_14041a5d0(SUB84((dVar1 - (double)(int)dVar3) + dVar2,0));
    iVar7 = (int)dVar1;
  }
  else {
    *param_4 = 0;
    iVar7 = 0;
  }
  param_4[2] = iVar7;
  if (dVar4 < dVar5) {
    dVar1 = (double)FUN_14041a5d0(SUB84(dVar5 + dVar2,0));
    param_4[1] = (int)dVar1;
    dVar2 = (double)FUN_14041a5d0(SUB84((dVar4 - (double)(int)dVar1) + dVar2,0));
    iVar7 = (int)dVar2;
  }
  else {
    param_4[1] = 0;
    iVar7 = 0;
  }
  param_4[3] = iVar7;
  func_0x00014040a1c0(param_2,param_4);
  return 1;
}

