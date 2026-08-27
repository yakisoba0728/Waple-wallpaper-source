// Function: FUN_1402f9b80
// Addr: 1402f9b80
// Size: 313 bytes


undefined8
FUN_1402f9b80(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,char *param_5
             ,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint local_88 [8];
  longlong *local_68;
  longlong *local_60;
  
  plVar5 = (longlong *)0x0;
  lVar2 = *param_1;
  local_60 = (longlong *)0x0;
  local_88[0] = 0;
  if (param_5 == (char *)0x0) {
LAB_1402f9c24:
    if (param_2 == 0) {
      uVar4 = 6;
    }
    else {
      local_68 = (longlong *)0x0;
      plVar5 = (longlong *)(**(code **)(lVar2 + 8))(lVar2,0x48);
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(lVar2 + 0x10))(lVar2,param_2);
        uVar4 = 0x40;
      }
      else {
        plVar5[3] = 0;
        plVar5[6] = 0;
        plVar5[8] = 0;
        plVar5[5] = (longlong)FUN_1402f9760;
        *plVar5 = param_2;
        *(undefined4 *)(plVar5 + 1) = param_3;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
        plVar5[7] = 0;
        plVar5[4] = 0;
        plVar5[2] = lVar2;
        local_88[0] = local_88[0] | 2;
        local_68 = plVar5;
        uVar4 = FUN_1402f82a0(param_1,local_88,param_4,param_6,0);
      }
    }
  }
  else {
    plVar6 = param_1 + 3;
    plVar1 = plVar6 + *(uint *)((longlong)param_1 + 0x14);
    if (plVar6 < plVar1) {
      do {
        plVar5 = (longlong *)*plVar6;
        iVar3 = strcmp(*(char **)(*plVar5 + 8),param_5);
        if (iVar3 == 0) goto LAB_1402f9bf1;
        plVar6 = plVar6 + 1;
      } while (plVar6 < plVar1);
    }
    else {
LAB_1402f9bf1:
      local_60 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        local_88[0] = 8;
        goto LAB_1402f9c24;
      }
    }
    if (param_2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2);
    }
    uVar4 = 0xb;
  }
  return uVar4;
}

