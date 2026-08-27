// Function: FUN_14009b160
// Addr: 14009b160
// Size: 138 bytes


void FUN_14009b160(longlong param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != '\0') {
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x28) + 0x48);
    if (lVar1 != 0) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
      (**(code **)(*plVar2 + 400))(plVar2,lVar1,param_1 + 0x10);
    }
  }
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0x20;
    if (*(char *)(*(longlong *)(lVar1 + 0x28) + 0x58) == '\0') {
      lVar3 = 0x28;
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + lVar1) + 0x50);
    if (lVar3 != 0) {
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x1a8))
                (*(longlong **)(lVar1 + 8),lVar3,1,*(undefined4 *)(param_1 + 0x20),0);
    }
  }
  return;
}

