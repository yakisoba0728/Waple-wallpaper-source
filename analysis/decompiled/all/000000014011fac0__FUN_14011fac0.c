// Function: FUN_14011fac0
// Addr: 14011fac0
// Size: 232 bytes


bool FUN_14011fac0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  undefined8 local_34;
  
  iVar2 = FUN_140290d80(param_1 + 0xe50);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  plVar4 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0xe30) != 0) {
    lVar3 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,"materials/background.json");
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else if (*(longlong *)(lVar3 + 0xd0) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0xd8);
    }
  }
  local_48[0] = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,local_48);
  if (cVar1 != '\0') {
    *param_2 = (undefined4)local_44;
    *param_3 = local_44._4_4_;
  }
  FUN_140290ea0(param_1 + 0xe50);
  return cVar1 != '\0';
}

