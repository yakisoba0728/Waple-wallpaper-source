// Function: FUN_140093690
// Addr: 140093690
// Size: 375 bytes


longlong *
FUN_140093690(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined1 *param_5,uint *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [800];
  
  local_340 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  (**(code **)(*local_340 + 8))();
  uVar5 = FUN_1400953e0(local_338,0x300,param_3,param_4,local_348);
  if ((local_340 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*local_340 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar4 = param_6;
  if ((char)uVar5 == '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    piVar7 = (int *)FUN_1402caf34();
    iVar1 = *piVar7;
    *piVar7 = 0;
    uVar8 = FUN_1402d3d68(local_338,&param_5);
    iVar2 = *piVar7;
    *piVar7 = iVar1;
    *param_7 = uVar8;
    if (((param_5 == local_338) || (iVar2 != 0)) || ((char)((ushort)uVar5 >> 8) != '\0')) {
      *puVar4 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_140097500(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_140097500(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1400937ee;
  }
  else if (*param_4 == 0) goto LAB_1400937ee;
  *puVar4 = *puVar4 | 1;
LAB_1400937ee:
  lVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar3;
  return param_2;
}

