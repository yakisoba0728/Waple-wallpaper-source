// Function: FUN_1401251e0
// Addr: 1401251e0
// Size: 434 bytes


ulonglong FUN_1401251e0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_48 [2];
  
  lVar1 = *param_2;
  bVar8 = false;
  *param_3 = 0;
  local_res20 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  uVar4 = (**(code **)(lVar1 + 0x50))(param_2,&local_res20);
  if (-1 < (int)uVar4) {
    iVar5 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
    iVar7 = local_res10[0];
    bVar2 = false;
    if (iVar5 == 0) {
      do {
        local_48[0] = (longlong *)0x0;
        uVar4 = (**(code **)(*local_res18 + 0x30))(local_res18,local_48);
        if ((int)uVar4 < 0) {
          if (uVar4 == 0x80040209) {
            uVar4 = 0;
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 1;
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        if (((int)uVar4 < 0) ||
           ((iVar7 != 0 &&
            ((uVar4 = (**(code **)(*local_res18 + 0x48))(local_res18,local_res10), (int)uVar4 < 0 ||
             (bVar8 = local_res10[0] == 0, (int)uVar4 < 0)))))) {
          (**(code **)(*local_res18 + 0x10))();
          bVar2 = bVar8;
          goto LAB_14012536b;
        }
        plVar3 = local_res18;
        if (bVar8) {
          (**(code **)(*local_res20 + 0x10))();
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
          goto LAB_14012537d;
        }
        (**(code **)(*local_res18 + 0x10))();
        iVar5 = (**(code **)(*local_res20 + 0x18))(local_res20,1,&local_res18,0);
      } while (iVar5 == 0);
      (**(code **)(*local_res20 + 0x10))();
    }
    else {
LAB_14012536b:
      (**(code **)(*local_res20 + 0x10))();
      if (bVar2) {
LAB_14012537d:
        if (-1 < (int)uVar4) {
          return (ulonglong)uVar4;
        }
      }
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  *param_3 = 1;
  return uVar6;
}

