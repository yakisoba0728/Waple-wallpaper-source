// Function: FUN_140089420
// Addr: 140089420
// Size: 160 bytes


void FUN_140089420(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_2 + 0x10);
  if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar2 + 0x19);
    while (cVar1 == '\0') {
      plVar2 = (longlong *)*plVar2;
      cVar1 = *(char *)(*plVar2 + 0x19);
    }
  }
  else {
    cVar1 = *(char *)(*(longlong *)(param_2 + 8) + 0x19);
    lVar4 = *(longlong *)(param_2 + 8);
    while ((lVar3 = lVar4, cVar1 == '\0' && (param_2 == *(longlong *)(lVar3 + 0x10)))) {
      cVar1 = *(char *)(*(longlong *)(lVar3 + 8) + 0x19);
      lVar4 = *(longlong *)(lVar3 + 8);
      param_2 = lVar3;
    }
  }
  lVar4 = FUN_1400894e0();
  func_0x000140086e00(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (*(longlong *)(lVar4 + 0x40) != 0) {
    FUN_140089350();
  }
  if ((*(longlong *)(lVar4 + 0x20) != 0) && (((byte)*(undefined4 *)(lVar4 + 0x28) & 3) == 1)) {
    func_0x0001402bf8e0();
    return;
  }
  func_0x00014028b040(lVar4,0x58);
  return;
}

