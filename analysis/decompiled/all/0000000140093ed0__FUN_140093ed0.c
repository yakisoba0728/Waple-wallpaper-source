// Function: FUN_140093ed0
// Addr: 140093ed0
// Size: 415 bytes


longlong *
FUN_140093ed0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,short *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *local_res10;
  undefined1 local_58 [8];
  longlong *local_50;
  char local_48;
  char local_47 [31];
  
  lVar2 = param_5;
  plVar1 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  local_50 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar4 = FUN_140094550(&local_48,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),local_58);
  if ((plVar1 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  if ((char)uVar4 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    pcVar7 = &local_48;
    if (local_48 == '-') {
      pcVar7 = local_47;
    }
    uVar5 = FUN_140292860(pcVar7,&local_res10,(int)(char)uVar4,&param_5);
    *param_7 = (short)uVar5;
    if (((local_res10 == pcVar7) || ((int)param_5 != 0)) || (0xffff < uVar5)) {
      *param_6 = 2;
      *param_7 = -1;
    }
    else if (local_48 == '-') {
      *param_7 = -(short)uVar5;
    }
    if ((char)((ushort)uVar4 >> 8) != '\0') {
      *param_6 = 2;
    }
  }
  puVar3 = param_6;
  if ((char)param_3[1] == '\0') {
    FUN_140097500(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_140097500(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_14009405d;
  }
  else if (*param_4 == 0) goto LAB_14009405d;
  *puVar3 = *puVar3 | 1;
LAB_14009405d:
  lVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar2;
  return param_2;
}

