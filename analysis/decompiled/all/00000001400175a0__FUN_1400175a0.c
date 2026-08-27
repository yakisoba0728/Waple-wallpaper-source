// Function: FUN_1400175a0
// Addr: 1400175a0
// Size: 83 bytes


longlong * FUN_1400175a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar4 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar4 + 0x10)))) {
      *param_1 = lVar4;
      cVar1 = *(char *)(*(longlong *)(lVar4 + 8) + 0x19);
      lVar2 = lVar4;
      lVar4 = *(longlong *)(lVar4 + 8);
    }
    *param_1 = lVar4;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  while (cVar1 == '\0') {
    plVar3 = (longlong *)*plVar3;
    cVar1 = *(char *)(*plVar3 + 0x19);
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}

