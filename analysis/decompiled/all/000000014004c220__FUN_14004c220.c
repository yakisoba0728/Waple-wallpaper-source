// Function: FUN_14004c220
// Addr: 14004c220
// Size: 208 bytes


bool FUN_14004c220(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 local_28 [32];
  
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    return true;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar1 == -1) {
    return false;
  }
  iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                    ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_28,
                     &stack0xfffffffffffffff8,&local_res8);
  if (iVar1 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 3) {
      return false;
    }
    *(undefined1 *)((longlong)param_1 + 0x71) = 0;
    return true;
  }
  lVar3 = local_res8 - (longlong)local_28;
  if ((lVar3 != 0) && (lVar2 = FUN_1402cc8b0(local_28,1,lVar3,param_1[0x10]), lVar3 != lVar2)) {
    return false;
  }
  return *(char *)((longlong)param_1 + 0x71) == '\0';
}

