// Function: FUN_140121c60
// Addr: 140121c60
// Size: 83 bytes


undefined8 FUN_140121c60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [4];
  longlong *local_res18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  local_res8[0] = 0;
  local_res18[0] = (longlong *)0x0;
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,local_res18);
  if ((-1 < iVar2) &&
     (iVar2 = (**(code **)(*local_res18[0] + 0x108))(local_res18[0],local_res8), -1 < iVar2)) {
    if (local_res8[0] == 0x6a) {
      (*DAT_140426308)(*(undefined8 *)(param_1 + 0x48));
    }
    else {
      lVar3 = param_1;
      if (param_1 == 0x70) {
        lVar3 = 0;
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                        (*(longlong **)(param_1 + 0x18),lVar3,0);
      if (iVar2 < 0) goto LAB_140121d0c;
    }
    if (*(int *)(param_1 + 0x40) != 6) {
      (**(code **)(*local_res18[0] + 8))();
      (*DAT_140426a98)(*(undefined8 *)(param_1 + 0x38),0x8001,local_res18[0],local_res8[0]);
    }
  }
LAB_140121d0c:
  if (local_res18[0] != (longlong *)0x0) {
    (**(code **)(*local_res18[0] + 0x10))();
  }
  return 0;
}

