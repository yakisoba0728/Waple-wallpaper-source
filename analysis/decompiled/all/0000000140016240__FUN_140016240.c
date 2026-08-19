// Function: FUN_140016240
// Addr: 140016240
// Size: 67 bytes


void FUN_140016240(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  puVar5 = auStack_38;
  if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1400173b0();
  }
  if (param_3 < 8) {
    param_1[2] = param_3;
    param_1[3] = 7;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(param_1,param_2,param_3 * 2);
  }
  uVar2 = param_3 | 7;
  uVar6 = 0;
  if (uVar2 < 0x7fffffffffffffff) goto code_r0x0001400162e3;
  uVar4 = 0xfffffffffffffffe;
  puVar5 = auStack_38;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined **)(puVar5 + -8) = &UNK_140016326;
      uVar6 = func_0x00014028aff0();
      goto code_r0x000140016329;
    }
    if (uVar4 + 0x27 <= uVar4) {
code_r0x000140016362:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_140016367;
      FUN_140017440();
    }
    *(undefined **)(puVar5 + -8) = &UNK_1400162d7;
    lVar3 = func_0x00014028aff0(uVar4 + 0x27);
    if (lVar3 != 0) {
      uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar3;
      goto code_r0x000140016329;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
code_r0x0001400162e3:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto code_r0x000140016362;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
code_r0x000140016329:
      param_1[2] = param_3;
      *param_1 = uVar6;
      param_1[3] = uVar2;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -8) = 0x140016345;
      FUN_1404211c0(uVar6,param_2,param_3 * 2);
    }
  } while( true );
}

