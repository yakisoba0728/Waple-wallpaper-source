// Function: FUN_1400168b0
// Addr: 1400168b0
// Size: 120 bytes


void FUN_1400168b0(undefined8 *param_1,undefined2 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar6 = auStack_48;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
    if (param_3 != 0) {
      puVar7 = param_1;
      for (uVar2 = (param_3 * 2) / 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar7 = param_2;
        puVar7 = (undefined8 *)((longlong)puVar7 + 2);
      }
    }
    *(undefined2 *)(param_3 * 2 + (longlong)param_1) = 0;
    return;
  }
  puVar5 = (undefined2 *)0x0;
  uVar2 = param_3 | 7;
  uVar9 = param_3;
  if (uVar2 < 0x7fffffffffffffff) goto code_r0x00014001696a;
  uVar4 = 0xfffffffffffffffe;
  puVar6 = auStack_48;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar6 + -8) = 0x1400169b6;
      puVar5 = (undefined2 *)func_0x00014028aff0();
      uVar9 = param_3;
      goto code_r0x0001400169c2;
    }
    if (uVar4 + 0x27 <= uVar4) {
code_r0x0001400169f3:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar6 + -8) = &UNK_1400169f8;
      FUN_140017440();
    }
    *(undefined8 *)(puVar6 + -8) = 0x14001695e;
    lVar3 = func_0x00014028aff0(uVar4 + 0x27);
    if (lVar3 != 0) {
      puVar5 = (undefined2 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(puVar5 + -4) = lVar3;
      uVar9 = param_3;
      goto code_r0x0001400169c2;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar6 = puVar6 + 8;
code_r0x00014001696a:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto code_r0x0001400169f3;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
code_r0x0001400169c2:
      *param_1 = puVar5;
      param_1[2] = uVar9;
      param_1[3] = uVar2;
      puVar8 = puVar5;
      for (uVar2 = param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = param_2;
        puVar8 = puVar8 + 1;
      }
      puVar5[param_3] = 0;
      return;
    }
  } while( true );
}

