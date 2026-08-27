// Function: FUN_140093510
// Addr: 140093510
// Size: 376 bytes


longlong *
FUN_140093510(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined1 *param_5,uint *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [800];
  
  local_340 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  (**(code **)(*local_340 + 8))();
  uVar6 = FUN_1400953e0(local_338,0x300,param_3,param_4,local_348);
  if ((local_340 != (longlong *)0x0) &&
     (puVar7 = (undefined8 *)(**(code **)(*local_340 + 0x10))(), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar5 = param_6;
  if ((char)uVar6 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar8 = (int *)FUN_1402caf34();
    iVar1 = *piVar8;
    *piVar8 = 0;
    uVar3 = FUN_1402d3d60(local_338,&param_5);
    iVar2 = *piVar8;
    *piVar8 = iVar1;
    *param_7 = uVar3;
    if (((param_5 == local_338) || (iVar2 != 0)) || ((char)((ushort)uVar6 >> 8) != '\0')) {
      *puVar5 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_140097500(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_140097500(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_14009366f;
  }
  else if (*param_4 == 0) goto LAB_14009366f;
  *puVar5 = *puVar5 | 1;
LAB_14009366f:
  lVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar4;
  return param_2;
}

