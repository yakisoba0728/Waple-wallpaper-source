// Function: FUN_1401b4f80
// Addr: 1401b4f80
// Size: 294 bytes


ulonglong * FUN_1401b4f80(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  puVar7 = auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (3 < param_2[3]) {
    param_2 = (ulonglong *)*param_2;
  }
  if (0x3ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  if (uVar1 < 4) {
    param_1[2] = uVar1;
    param_1[3] = 3;
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    return param_1;
  }
  uVar3 = uVar1 | 3;
  if (uVar3 < 0x3fffffffffffffff) goto LAB_1401b502b;
  uVar6 = 0xfffffffffffffffc;
  puVar7 = auStack_48;
  uVar3 = 0x3ffffffffffffffe;
  do {
    if (uVar6 < 0x1000) {
      *(undefined8 *)(puVar7 + -8) = 0x1401b5072;
      uVar5 = FUN_14028af20();
      goto LAB_1401b5072;
    }
    if (uVar6 + 0x27 <= uVar6) {
LAB_1401b50a2:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar7 + -8) = &UNK_1401b50a7;
      FUN_140017370();
    }
    *(undefined8 *)(puVar7 + -8) = 0x1401b501c;
    lVar4 = FUN_14028af20(uVar6 + 0x27);
    if (lVar4 != 0) {
      uVar5 = lVar4 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar5 - 8) = lVar4;
      goto LAB_1401b5072;
    }
    pcVar2 = (code *)swi(0x29);
    uVar3 = (*pcVar2)(5);
    puVar7 = puVar7 + 8;
LAB_1401b502b:
    if (uVar3 < 4) {
      uVar3 = 4;
    }
    if (0x3fffffffffffffff < uVar3 + 1) goto LAB_1401b50a2;
    uVar6 = (uVar3 + 1) * 4;
    if (uVar6 == 0) {
LAB_1401b5072:
      *param_1 = uVar5;
      param_1[2] = uVar1;
      param_1[3] = uVar3;
      *(undefined8 *)(puVar7 + -8) = 0x1401b5090;
      FUN_1404210f0(uVar5,param_2,uVar1 * 4 + 4);
      return param_1;
    }
  } while( true );
}

