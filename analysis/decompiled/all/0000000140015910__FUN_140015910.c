// Function: FUN_140015910
// Addr: 140015910
// Size: 551 bytes


ulonglong *
FUN_140015910(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong unaff_RDI;
  ulonglong uVar10;
  ulonglong *puVar11;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar9 = auStack_68;
  uVar10 = param_1[3];
  uVar4 = param_1[2];
  if (param_4 <= uVar10 - uVar4) {
    param_1[2] = param_4 + uVar4;
    puVar11 = param_1;
    if (7 < uVar10) {
      puVar11 = (ulonglong *)*param_1;
    }
    uVar10 = param_4;
    if ((puVar11 < (ulonglong *)((longlong)param_3 + param_4 * 2)) &&
       (param_3 <= (ulonglong *)((longlong)puVar11 + uVar4 * 2))) {
      if (param_3 < puVar11) {
        uVar10 = (longlong)puVar11 - (longlong)param_3 >> 1;
      }
      else {
        uVar10 = 0;
      }
    }
    FUN_1404210f0((longlong)puVar11 + param_4 * 2,puVar11,uVar4 * 2 + 2);
    FUN_1404210f0(puVar11,param_3,uVar10 * 2);
    FUN_1404210f0(uVar10 * 2 + (longlong)puVar11,(longlong)param_3 + (uVar10 + param_4) * 2,
                  (param_4 - uVar10) * 2);
    return param_1;
  }
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe - uVar4 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar7 = param_4 + uVar4 | 7;
  if ((uVar7 < 0x7fffffffffffffff) && (uVar10 <= 0x7ffffffffffffffe - (uVar10 >> 1))) {
    uVar2 = (uVar10 >> 1) + uVar10;
    uVar8 = uVar7;
    if (uVar7 < uVar2) {
      uVar8 = uVar2;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_140015b2d;
    uVar7 = (uVar8 + 1) * 2;
    if (uVar7 != 0) goto LAB_140015a4d;
    unaff_RDI = 0;
LAB_140015a8a:
    param_1[2] = param_4 + uVar4;
    param_1[3] = uVar8;
    lVar6 = param_4 * 2 + unaff_RDI;
    lVar3 = uVar4 * 2 + 2;
    if (uVar10 < 8) {
      FUN_1404210f0(unaff_RDI,param_3);
      FUN_1404210f0(lVar6,param_1,lVar3);
      *param_1 = unaff_RDI;
      return param_1;
    }
    uVar8 = *param_1;
    FUN_1404210f0(unaff_RDI,param_3);
    FUN_1404210f0(lVar6,uVar8,lVar3);
    if (uVar10 * 2 + 2 < 0x1000) goto LAB_140015b02;
    plVar1 = (longlong *)(uVar8 - 8);
    uVar8 = (uVar8 - *plVar1) - 8;
    if (uVar8 < 0x20) {
      thunk_FUN_14028af80(*plVar1,uVar10 * 2 + 0x29);
      *param_1 = unaff_RDI;
      return param_1;
    }
  }
  else {
    uVar7 = 0xfffffffffffffffe;
LAB_140015a4d:
    if (uVar7 < 0x1000) {
      unaff_RDI = FUN_14028af20();
      goto LAB_140015a8a;
    }
    if (uVar7 + 0x27 <= uVar7) {
LAB_140015b2d:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar6 = FUN_14028af20(uVar7 + 0x27);
    if (lVar6 != 0) {
      unaff_RDI = lVar6 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(unaff_RDI - 8) = lVar6;
      goto LAB_140015a8a;
    }
  }
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar9 = auStack_60;
LAB_140015b02:
  *(undefined8 *)(puVar9 + -8) = 0x140015b0a;
  thunk_FUN_14028af80(uVar8);
  *param_1 = unaff_RDI;
  return param_1;
}

