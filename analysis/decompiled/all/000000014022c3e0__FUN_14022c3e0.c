// Function: FUN_14022c3e0
// Addr: 14022c3e0
// Size: 170 bytes


undefined1 FUN_14022c3e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  for (lVar4 = *(longlong *)(param_1 + 0x480); lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
    cVar3 = FUN_14022c3e0(*(undefined8 *)(lVar4 + 8));
    if (cVar3 != '\0') {
      return 1;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x4a0);
  for (lVar4 = *(longlong *)(param_1 + 0x498); lVar4 != lVar1; lVar4 = lVar4 + 0x38) {
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    for (puVar5 = *(undefined8 **)(lVar4 + 8); puVar5 != puVar2; puVar5 = puVar5 + 1) {
      cVar3 = FUN_14022c3e0(*puVar5);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  if ((*(char *)(param_1 + 0x3f4) == '\0') && (*(int *)(param_1 + 0x344) == 0)) {
    return 0;
  }
  return 1;
}

