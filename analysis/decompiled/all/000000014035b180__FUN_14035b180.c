// Function: FUN_14035b180
// Addr: 14035b180
// Size: 160 bytes


longlong FUN_14035b180(void)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_1403bec00();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar3 + 8))(plVar3);
  lVar4 = FUN_140415600(FUN_14039bf70,plVar3,&LAB_14039bd20);
  uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(char *)(lVar4 + 4) != '\0') {
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
  }
  uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3);
  if (*(char *)(lVar4 + 4) != '\0') {
    *(uint *)(lVar4 + 0x18) = (uint)uVar1;
  }
  if (*(char *)(lVar4 + 4) != '\0') {
    LOCK();
    if (*(longlong *)(lVar4 + 0x60) == 0) {
      *(longlong *)(lVar4 + 0x60) = (longlong)plVar3;
    }
    UNLOCK();
    return lVar4;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return lVar4;
}

