// Function: FUN_140089350
// Addr: 140089350
// Size: 179 bytes


longlong * FUN_140089350(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_2[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    while (cVar1 == '\0') {
      plVar4 = (longlong *)*plVar4;
      cVar1 = *(char *)(*plVar4 + 0x19);
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar2 = (longlong *)param_2[1];
    while ((plVar4 = plVar2, cVar1 == '\0' && (param_2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = (longlong *)plVar4[1];
      param_2 = plVar4;
    }
  }
  lVar3 = FUN_140089410();
  FUN_140086d30(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x30) = 0;
  if (*(longlong *)(lVar3 + 0x40) != 0) {
    FUN_140089280();
  }
  if ((*(longlong *)(lVar3 + 0x20) != 0) && (((byte)*(undefined4 *)(lVar3 + 0x28) & 3) == 1)) {
    thunk_FUN_1402d9040();
  }
  thunk_FUN_14028af80(lVar3,0x58);
  return plVar4;
}

