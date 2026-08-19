// Function: FUN_140082e30
// Addr: 140082e30
// Size: 10 bytes


/* WARNING: Possible PIC construction at 0x000140082e99: Changing call to branch */

void FUN_140082e30(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  puVar6 = auStack_28;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    do {
      lVar4 = lVar4 + -1;
      param_1[4] = lVar4;
    } while (lVar4 != 0);
    param_1[3] = 0;
  }
  if (param_1[1] == 0) {
code_r0x000140082ef2:
    lVar5 = *param_1;
    *param_1 = 0;
    param_1 = *(longlong **)(puVar6 + 0x38);
    puVar7 = (undefined8 *)(puVar6 + 0x28);
  }
  else {
    lVar4 = param_1[2];
    do {
      if (lVar4 < 1) {
        lVar4 = param_1[1];
        lVar5 = lVar4;
        puVar6 = auStack_28;
        if ((0xfff < (ulonglong)(param_1[2] * 8)) &&
           (lVar5 = *(longlong *)(lVar4 + -8), puVar6 = auStack_28, 0x1f < (lVar4 - lVar5) - 8U)) {
          lVar5 = 5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar6 = auStack_20;
        }
        *(undefined **)(puVar6 + -8) = &UNK_140082eea;
        func_0x00014028b040(lVar5);
        param_1[1] = 0;
        param_1[2] = 0;
        goto code_r0x000140082ef2;
      }
      lVar5 = *(longlong *)(param_1[1] + -8 + lVar4 * 8);
      lVar4 = lVar4 + -1;
    } while (lVar5 == 0);
    puVar7 = &uStack_30;
    uStack_30 = 0x140082e9e;
  }
  if (lVar5 != 0) {
    *(longlong **)((longlong)puVar7 + -8) = param_1;
    *(undefined8 *)((longlong)puVar7 + -0x30) = 0x1402d912c;
    iVar2 = (*DAT_1404264b8)(DAT_1404e4fa0,0,lVar5);
    if (iVar2 == 0) {
      *(undefined8 *)((longlong)puVar7 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)puVar7 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)puVar7 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

