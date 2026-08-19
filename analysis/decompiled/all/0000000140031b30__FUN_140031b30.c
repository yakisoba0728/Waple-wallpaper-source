// Function: FUN_140031b30
// Addr: 140031b30
// Size: 64 bytes


void FUN_140031b30(undefined8 param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [16];
  
  plVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    plVar8 = (longlong *)*param_2;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  lVar6 = func_0x000140011170(&DAT_1404e8bf0,auStack_18,param_2,uVar10);
  lVar3 = lRam00000001404e8c08;
  uVar5 = DAT_1404e8bf8;
  plVar8 = *(longlong **)(lVar6 + 8);
  if (plVar8 == (longlong *)0x0) {
    if (0xf < (ulonglong)param_2[3]) {
      lVar3 = *param_2;
      puVar9 = auStack_28;
      lVar6 = lVar3;
      if ((0xfff < param_2[3] + 1U) &&
         (lVar6 = *(longlong *)(lVar3 + -8), puVar9 = auStack_28, 0x1f < (lVar3 - lVar6) - 8U)) {
        pcVar4 = (code *)swi(0x29);
        lVar6 = (*pcVar4)(5);
        puVar9 = auStack_20;
      }
      *(undefined8 *)(puVar9 + -8) = 0x14001735c;
      func_0x00014028b040(lVar6);
    }
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    return;
  }
  uVar10 = uRam00000001404e8c20 & uVar10;
  plVar2 = *(longlong **)(lRam00000001404e8c08 + uVar10 * 0x10);
  if (*(longlong **)(lRam00000001404e8c08 + 8 + uVar10 * 0x10) == plVar8) {
    if (plVar2 == plVar8) {
      *(undefined8 *)(lRam00000001404e8c08 + uVar10 * 0x10) = DAT_1404e8bf8;
      *(undefined8 *)(lVar3 + 8 + uVar10 * 0x10) = uVar5;
    }
    else {
      *(longlong *)(lRam00000001404e8c08 + 8 + uVar10 * 0x10) = plVar8[1];
    }
  }
  else if (plVar2 == plVar8) {
    *(longlong *)(lRam00000001404e8c08 + uVar10 * 0x10) = *plVar8;
  }
  lVar3 = *plVar8;
  lRam00000001404e8c00 = lRam00000001404e8c00 + -1;
  *(longlong *)plVar8[1] = lVar3;
  *(longlong *)(lVar3 + 8) = plVar8[1];
                    /* WARNING: Subroutine does not return */
  FUN_140017310(plVar8 + 6);
}

