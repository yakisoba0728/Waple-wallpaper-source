// Function: FUN_140089390
// Addr: 140089390
// Size: 112 bytes


longlong * FUN_140089390(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar2 = (longlong *)*param_1;
  if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
    *param_1 = plVar2[2];
    return param_1;
  }
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
    while (cVar1 == '\0') {
      lVar3 = *(longlong *)(lVar3 + 0x10);
      cVar1 = *(char *)(*(longlong *)(lVar3 + 0x10) + 0x19);
    }
    *param_1 = lVar3;
  }
  else {
    cVar1 = *(char *)(plVar2[1] + 0x19);
    plVar4 = (longlong *)plVar2[1];
    while ((cVar1 == '\0' && (plVar2 == (longlong *)*plVar4))) {
      *param_1 = (longlong)plVar4;
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = plVar4;
      plVar4 = (longlong *)plVar4[1];
    }
    if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
      *param_1 = (longlong)plVar4;
      return param_1;
    }
  }
  return param_1;
}

