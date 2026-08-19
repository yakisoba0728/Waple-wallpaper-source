// Function: FUN_140294e10
// Addr: 140294e10
// Size: 123 bytes


void FUN_140294e10(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

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
  if (uVar2 < 0x7fffffffffffffff) goto UNWIND_INFO_140294e97_UnwindCodes_9__OffsetInProlog;
  uVar4 = 0xfffffffffffffffe;
  puVar5 = auStack_38;
  uVar2 = 0x7ffffffffffffffe;
  do {
    if (uVar4 < 0x1000) {
      *(undefined8 *)(puVar5 + -8) = 0x140294ef0;
      uVar6 = func_0x00014028aff0();
      goto code_r0x000140294ef3;
    }
    if (uVar4 + 0x27 <= uVar4) {
code_r0x000140294f80:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar5 + -8) = &UNK_140294f85;
      FUN_140017440();
    }
    *(undefined8 *)(puVar5 + -8) = 0x140294ea1;
    lVar3 = func_0x00014028aff0(uVar4 + 0x27);
    if (lVar3 != 0) {
      uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar6 - 8) = lVar3;
      goto code_r0x000140294ef3;
    }
    pcVar1 = (code *)swi(0x29);
    uVar2 = (*pcVar1)(5);
    puVar5 = puVar5 + 8;
UNWIND_INFO_140294e97_UnwindCodes_9__OffsetInProlog:
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto code_r0x000140294f80;
    uVar4 = (uVar2 + 1) * 2;
    if (uVar4 == 0) {
code_r0x000140294ef3:
      param_1[2] = param_3;
      *param_1 = uVar6;
      param_1[3] = uVar2;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar5 + -8) = 0x140294f0f;
      FUN_1404211c0(uVar6,param_2,param_3 * 2);
    }
  } while( true );
}

