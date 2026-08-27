// Function: FUN_1401dda60
// Addr: 1401dda60
// Size: 225 bytes


void FUN_1401dda60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong local_res8;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1510);
  iVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x180),param_1);
  lVar2 = *(longlong *)(param_1 + 0x180);
  plVar1 = *(longlong **)(lVar2 + 0x1a0);
  lVar3 = *(longlong *)(lVar2 + 0x198);
  local_res8 = param_1;
  if ((ulonglong)(longlong)iVar4 < (ulonglong)((longlong)plVar1 - lVar3 >> 3)) {
    plVar5 = (longlong *)(lVar3 + (longlong)iVar4 * 8);
    if (plVar1 == *(longlong **)(lVar2 + 0x1a8)) {
LAB_1401ddb12:
      FUN_1401a2430((longlong *)(lVar2 + 0x198),plVar5,&local_res8);
      goto LAB_1401ddb1f;
    }
    if (plVar5 != plVar1) {
      *plVar1 = plVar1[-1];
      *(longlong *)(lVar2 + 0x1a0) = *(longlong *)(lVar2 + 0x1a0) + 8;
      FUN_1404210f0(plVar5 + 1,plVar5);
      *plVar5 = param_1;
      goto LAB_1401ddb1f;
    }
  }
  else {
    plVar5 = plVar1;
    if (plVar1 == *(longlong **)(lVar2 + 0x1a8)) goto LAB_1401ddb12;
  }
  *plVar1 = param_1;
  *(longlong *)(lVar2 + 0x1a0) = *(longlong *)(lVar2 + 0x1a0) + 8;
LAB_1401ddb1f:
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x98))();
  FUN_1401dd9a0(param_1);
  return;
}

