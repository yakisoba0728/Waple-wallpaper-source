// Function: FUN_14035b0a0
// Addr: 14035b0a0
// Size: 212 bytes


longlong FUN_14035b0a0(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14039bac0();
  if ((lVar3 == 0) && (lVar3 = FUN_14039b930(param_1), lVar3 == 0)) {
    return 0;
  }
  plVar4 = (longlong *)FUN_1403bec00(lVar3,param_2);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar4 + 8))(plVar4);
  lVar3 = FUN_140415600(FUN_14039bf70,plVar4,&LAB_14039bd20);
  uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined4 *)(lVar3 + 0x10) = uVar2;
  }
  uVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
  if (*(char *)(lVar3 + 4) != '\0') {
    *(uint *)(lVar3 + 0x18) = (uint)uVar1;
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    LOCK();
    if (*(longlong *)(lVar3 + 0x60) == 0) {
      *(longlong *)(lVar3 + 0x60) = (longlong)plVar4;
    }
    UNLOCK();
    return lVar3;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  return lVar3;
}

