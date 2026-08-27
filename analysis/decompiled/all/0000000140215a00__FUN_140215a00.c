// Function: FUN_140215a00
// Addr: 140215a00
// Size: 391 bytes


longlong *
FUN_140215a00(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar7 = auStack_68;
  puVar8 = auStack_68;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 != (undefined8 *)param_1[2]) {
    uVar2 = *param_4;
    puVar10 = param_3;
    if (param_3 == puVar11) {
      *puVar11 = uVar2;
      param_1[1] = param_1[1] + 8;
    }
    else {
      *puVar11 = puVar11[-1];
      param_1[1] = param_1[1] + 8;
      FUN_1404210f0(param_3 + 1,param_3);
      *param_3 = uVar2;
    }
LAB_140215b66:
    *param_2 = (longlong)puVar10;
    return param_2;
  }
  lVar13 = *param_1;
  if ((longlong)puVar11 - lVar13 == -8) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  uVar12 = param_1[2] - lVar13 >> 3;
  if (uVar12 <= 0x1fffffffffffffff - (uVar12 >> 1)) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar1 = ((longlong)puVar11 - lVar13 >> 3) + 1;
    uVar9 = uVar1;
    if (uVar1 <= uVar12) {
      uVar9 = uVar12;
    }
    if (uVar9 < 0x2000000000000000) {
      uVar12 = uVar9 * 8;
      if (uVar12 == 0) {
        puVar11 = (undefined8 *)0x0;
        puVar8 = auStack_68;
      }
      else if (uVar12 < 0x1000) {
        puVar11 = (undefined8 *)FUN_14028af20();
      }
      else {
        if (uVar12 + 0x27 <= uVar12) goto LAB_140215b83;
        lVar5 = FUN_14028af20(uVar12 + 0x27);
        if (lVar5 == 0) {
          pcVar4 = (code *)swi(0x29);
          lVar5 = (*pcVar4)(5);
          puVar7 = auStack_60;
        }
        puVar11 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
        puVar11[-1] = lVar5;
        puVar8 = puVar7;
      }
      puVar10 = (undefined8 *)
                (((longlong)param_3 - lVar13 & 0xfffffffffffffff8U) + (longlong)puVar11);
      *puVar10 = *param_4;
      puVar3 = (undefined8 *)*param_1;
      if (param_3 == (undefined8 *)param_1[1]) {
        lVar13 = param_1[1] - (longlong)puVar3;
        puVar6 = puVar11;
        param_3 = puVar3;
      }
      else {
        *(undefined8 *)(puVar8 + -8) = 0x140215b3f;
        FUN_1404210f0(puVar11,puVar3,(longlong)param_3 - (longlong)puVar3);
        puVar6 = puVar10 + 1;
        lVar13 = param_1[1] - (longlong)param_3;
      }
      *(undefined8 *)(puVar8 + -8) = 0x140215b52;
      FUN_1404210f0(puVar6,param_3,lVar13);
      *(undefined8 *)(puVar8 + -8) = 0x140215b63;
      FUN_1400384c0(param_1,puVar11,uVar1,uVar9);
      goto LAB_140215b66;
    }
  }
LAB_140215b83:
                    /* WARNING: Subroutine does not return */
  FUN_140017370();
}

