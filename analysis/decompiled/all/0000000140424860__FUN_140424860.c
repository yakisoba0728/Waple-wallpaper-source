// Function: FUN_140424860
// Addr: 140424860
// Size: 2 bytes


void FUN_140424860(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = plRam00000001404e8e20;
  plVar3 = plRam00000001404e8e18;
  if (plRam00000001404e8e18 != (longlong *)0x0) {
    for (; plVar3 != plVar4; plVar3 = plVar3 + 9) {
      plVar1 = (longlong *)plVar3[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar3);
        plVar3[7] = 0;
      }
    }
    plVar3 = plRam00000001404e8e18;
    puVar5 = auStack_28;
    if (0xfff < (ulonglong)((lRam00000001404e8e28 - (longlong)plRam00000001404e8e18 >> 3) * 8)) {
      plVar3 = (longlong *)plRam00000001404e8e18[-1];
      plVar4 = (longlong *)((longlong)plRam00000001404e8e18 + (-8 - (longlong)plVar3));
      puVar5 = auStack_28;
      if ((longlong *)0x1f < plVar4) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        plVar3 = plVar4;
        puVar5 = auStack_20;
      }
    }
    *(undefined **)(puVar5 + -8) = &UNK_140424915;
    func_0x00014028b040(plVar3);
    lRam00000001404e8e28 = 0;
    plRam00000001404e8e18 = (longlong *)0x0;
    plRam00000001404e8e20 = (longlong *)0x0;
  }
  return;
}

