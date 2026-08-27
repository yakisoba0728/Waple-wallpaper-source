// Function: FUN_140088ca0
// Addr: 140088ca0
// Size: 400 bytes


longlong * FUN_140088ca0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar11 = auStack_68;
  *param_1 = 0;
  if (*param_2 != 0) {
    puVar7 = (ulonglong *)FUN_14028af20(0x60);
    puVar12 = (undefined8 *)*param_2;
    lVar15 = 3;
    puVar13 = puVar7;
    do {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      uVar2 = puVar12[2];
      puVar14 = puVar12;
      if (0xf < (ulonglong)puVar12[3]) {
        puVar14 = (undefined8 *)*puVar12;
      }
      if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      if (uVar2 < 0x10) {
        puVar13[2] = uVar2;
        puVar13[3] = 0xf;
        uVar4 = *(undefined4 *)((longlong)puVar14 + 4);
        uVar5 = *(undefined4 *)(puVar14 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar14 + 0xc);
        *(undefined4 *)puVar13 = *(undefined4 *)puVar14;
        *(undefined4 *)((longlong)puVar13 + 4) = uVar4;
        *(undefined4 *)(puVar13 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uVar6;
      }
      else {
        uVar10 = uVar2 | 0xf;
        if (uVar10 < 0x8000000000000000) {
          if (uVar10 < 0x16) {
            uVar10 = 0x16;
          }
          uVar1 = uVar10 + 1;
          uVar9 = 0;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar9 = uVar10 + 0x28;
              if (uVar9 <= uVar1) goto LAB_140088e26;
              goto LAB_140088d73;
            }
            uVar9 = FUN_14028af20(uVar1);
          }
        }
        else {
          uVar10 = 0x7fffffffffffffff;
          uVar9 = 0x8000000000000027;
LAB_140088d73:
          lVar8 = FUN_14028af20(uVar9);
          if (lVar8 == 0) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            puVar11 = auStack_60;
LAB_140088e26:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar11 + -8) = &UNK_140088e2b;
            FUN_140017370();
          }
          uVar9 = lVar8 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar9 - 8) = lVar8;
        }
        *puVar13 = uVar9;
        puVar13[2] = uVar2;
        puVar13[3] = uVar10;
        FUN_1404210f0(uVar9,puVar14,uVar2 + 1);
      }
      puVar13 = puVar13 + 4;
      puVar12 = puVar12 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = *param_1;
    *param_1 = (longlong)puVar7;
    if (lVar15 != 0) {
      FUN_140017240(lVar15 + 0x40);
      FUN_140017240(lVar15 + 0x20);
      FUN_140017240(lVar15);
      thunk_FUN_14028af80(lVar15,0x60);
    }
  }
  return param_1;
}

