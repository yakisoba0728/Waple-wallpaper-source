// Function: FUN_140424790
// Addr: 140424790
// Size: 210 bytes


void FUN_140424790(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar4 = DAT_1404e8d50;
  plVar3 = DAT_1404e8d48;
  if (DAT_1404e8d48 != (longlong *)0x0) {
    for (; plVar3 != plVar4; plVar3 = plVar3 + 9) {
      plVar1 = (longlong *)plVar3[7];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar3);
        plVar3[7] = 0;
      }
    }
    plVar3 = DAT_1404e8d48;
    puVar5 = auStack_28;
    if (0xfff < (ulonglong)((DAT_1404e8d58 - (longlong)DAT_1404e8d48 >> 3) * 8)) {
      plVar3 = (longlong *)DAT_1404e8d48[-1];
      plVar4 = (longlong *)((longlong)DAT_1404e8d48 + (-8 - (longlong)plVar3));
      puVar5 = auStack_28;
      if ((longlong *)0x1f < plVar4) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        plVar3 = plVar4;
        puVar5 = auStack_20;
      }
    }
    *(undefined8 *)(puVar5 + -8) = 0x140424845;
    thunk_FUN_14028af80(plVar3);
    DAT_1404e8d58 = 0;
    DAT_1404e8d48 = (longlong *)0x0;
    DAT_1404e8d50 = (longlong *)0x0;
  }
  return;
}

