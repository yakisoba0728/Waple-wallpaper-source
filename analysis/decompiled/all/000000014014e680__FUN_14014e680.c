// Function: FUN_14014e680
// Addr: 14014e680
// Size: 20 bytes


void FUN_14014e680(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  longlong lStack_40;
  undefined8 uStack_38;
  longlong alStack_30 [5];
  
  puVar6 = auStack_78;
  auStack_48[0] = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_40 = func_0x00014028aff0(0x38);
  *(longlong *)lStack_40 = lStack_40;
  *(longlong *)(lStack_40 + 8) = lStack_40;
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  alStack_30[2] = 0;
  alStack_30[3] = 7;
  alStack_30[4] = 8;
  auStack_48[0] = 0x3f800000;
  func_0x0001400376d0(alStack_30,0x10,lStack_40);
  plVar5 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar5 != *(longlong **)(param_1 + 8)) {
    do {
      puVar1 = (undefined8 *)plVar5[6];
      if ((*(byte *)(puVar1 + 2) & 1) == 0) {
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      else {
        plVar3 = (longlong *)func_0x00014014ec20(auStack_48,auStack_58,plVar5 + 2);
        *(undefined8 **)(*plVar3 + 0x30) = puVar1;
      }
      plVar5 = (longlong *)*plVar5;
    } while (plVar5 != (longlong *)*(longlong *)(param_1 + 8));
  }
  func_0x00014014ee60(param_1,auStack_48);
  if (alStack_30[0] != 0) {
    lVar4 = alStack_30[0];
    puVar6 = auStack_78;
    if ((0xfff < (ulonglong)((alStack_30[2] - alStack_30[0] >> 3) * 8)) &&
       (lVar4 = *(longlong *)(alStack_30[0] + -8), puVar6 = auStack_78,
       0x1f < (alStack_30[0] - lVar4) - 8U)) {
      lVar4 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)(5);
      puVar6 = auStack_70;
    }
    *(undefined **)(puVar6 + -8) = &UNK_14014e7aa;
    func_0x00014028b040(lVar4);
    *(undefined8 *)(puVar6 + 0x48) = 0;
    *(undefined8 *)(puVar6 + 0x50) = 0;
    *(undefined8 *)(puVar6 + 0x58) = 0;
  }
  plVar5 = *(longlong **)(puVar6 + 0x38);
  *(undefined8 *)plVar5[1] = 0;
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    *(undefined8 *)(puVar6 + -8) = 0x14014e800;
    func_0x00014028b040(*(undefined8 *)(puVar6 + 0x38),0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar6 + -8) = 0x14014e7dc;
  FUN_140017310(lVar4 + 0x10);
}

