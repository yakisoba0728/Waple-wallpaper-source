// Function: FUN_1401706a0
// Addr: 1401706a0
// Size: 148 bytes


void FUN_1401706a0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      lVar4 = lVar2;
      puVar5 = auStack_28;
      if ((0xfff < (ulonglong)((plVar1[2] - lVar2 >> 3) * 8)) &&
         (lVar4 = *(longlong *)(lVar2 + -8), puVar5 = auStack_28, 0x1f < (lVar2 - lVar4) - 8U)) {
        lVar4 = 5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar5 = auStack_20;
      }
      *(undefined8 *)(puVar5 + -8) = 0x140170709;
      thunk_FUN_14028af80(lVar4);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
    *(undefined8 *)(puVar5 + -8) = 0x140170721;
    thunk_FUN_14028af80(plVar1,0x18);
  }
  *param_2 = 0;
  return;
}

