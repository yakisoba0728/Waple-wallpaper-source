// Function: FUN_140081740
// Addr: 140081740
// Size: 185 bytes


void FUN_140081740(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar5 = auStack_28;
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    puVar5 = auStack_28;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x210) - lVar1)) &&
       (lVar4 = *(longlong *)(lVar1 + -8), puVar5 = auStack_28, 0x1f < (lVar1 - lVar4) - 8U)) {
      pcVar3 = (code *)swi(0x29);
      lVar4 = (*pcVar3)(5);
      puVar5 = auStack_20;
    }
    *(undefined8 *)(puVar5 + -8) = 0x140081794;
    thunk_FUN_14028af80(lVar4);
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  *(undefined8 *)(puVar5 + -8) = 0x1400817b5;
  FUN_140082c60(param_1 + 400);
  *(undefined8 *)(puVar5 + -8) = 0x1400817c1;
  FUN_140082d60(param_1 + 0xd0);
  if ((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x68) == 0)) {
    plVar2 = *(longlong **)(param_1 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x20);
      *(undefined8 *)(puVar5 + -8) = 0x1400817e5;
      (*pcVar3)(plVar2,plVar2 != (longlong *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -8) = &UNK_1400817f9;
  FUN_140015110();
}

