// Function: FUN_140093bf0
// Addr: 140093bf0
// Size: 320 bytes


longlong *
FUN_140093bf0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  uint *puVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 *local_res10;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [32];
  
  lVar2 = param_5;
  plVar1 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  local_40 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  uVar4 = FUN_140094550(local_38,param_3,param_4,*(undefined4 *)(lVar2 + 0x18),local_48);
  if ((plVar1 != (longlong *)0x0) &&
     (puVar6 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)(puVar6,1);
  }
  puVar3 = param_6;
  if ((char)uVar4 < '\0') {
    *param_6 = 2;
    *param_7 = 0;
  }
  else {
    uVar5 = FUN_140292770(local_38,&local_res10,(int)(char)uVar4,&param_5);
    *param_7 = uVar5;
    if (((local_res10 == local_38) || ((int)param_5 != 0)) || ((char)((ushort)uVar4 >> 8) != '\0'))
    {
      *puVar3 = 2;
    }
  }
  if ((char)param_3[1] == '\0') {
    FUN_140097500(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_140097500(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_140093d11;
  }
  else if (*param_4 == 0) goto LAB_140093d11;
  *puVar3 = *puVar3 | 1;
LAB_140093d11:
  lVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar2;
  return param_2;
}

