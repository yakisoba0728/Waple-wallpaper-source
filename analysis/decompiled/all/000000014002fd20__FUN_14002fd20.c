// Function: FUN_14002fd20
// Addr: 14002fd20
// Size: 549 bytes


void FUN_14002fd20(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  size_t sVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong unaff_R14;
  size_t sVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  
  puVar9 = auStack_68;
  sVar6 = strlen((char *)param_2);
  uVar3 = param_3[3];
  uVar4 = param_3[2];
  if (sVar6 <= uVar3 - uVar4) {
    param_3[2] = uVar4 + sVar6;
    puVar10 = param_3;
    if (0xf < uVar3) {
      puVar10 = (ulonglong *)*param_3;
    }
    sVar12 = sVar6;
    if (((puVar10 < (ulonglong *)(sVar6 + (longlong)param_2)) &&
        (param_2 <= (ulonglong *)((longlong)puVar10 + uVar4))) && (sVar12 = 0, param_2 < puVar10)) {
      sVar12 = (longlong)puVar10 - (longlong)param_2;
    }
    FUN_1404210f0((undefined1 *)((longlong)puVar10 + sVar6),puVar10,uVar4 + 1);
    FUN_1404210f0(puVar10,param_2,sVar12);
    FUN_1404210f0((undefined1 *)(sVar12 + (longlong)puVar10),sVar12 + sVar6 + (longlong)param_2,
                  sVar6 - sVar12);
    puVar9 = auStack_68;
    goto LAB_14002fefa;
  }
  uVar11 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar4 < sVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1400172e0();
  }
  uVar13 = 0;
  uVar8 = uVar4 + sVar6 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar2 = (uVar3 >> 1) + uVar3;
    uVar11 = uVar8;
    if (uVar8 < uVar2) {
      uVar11 = uVar2;
    }
    uVar8 = uVar11 + 1;
    if (uVar8 != 0) {
      if (0xfff < uVar8) {
        uVar13 = uVar11 + 0x28;
        if (uVar13 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        goto LAB_14002fe4d;
      }
      uVar13 = FUN_14028af20(uVar8);
    }
LAB_14002fe70:
    param_3[3] = uVar11;
    param_3[2] = uVar4 + sVar6;
    if (uVar3 < 0x10) {
      FUN_1404210f0(uVar13,param_2,sVar6);
      FUN_1404210f0(uVar13 + sVar6,param_3,uVar4 + 1);
    }
    else {
      uVar11 = *param_3;
      FUN_1404210f0(uVar13,param_2,sVar6);
      FUN_1404210f0(uVar13 + sVar6,uVar11,uVar4 + 1);
      puVar9 = auStack_68;
      if (uVar3 + 1 < 0x1000) goto LAB_14002fed8;
      plVar1 = (longlong *)(uVar11 - 8);
      uVar11 = (uVar11 - *plVar1) - 8;
      if (0x1f < uVar11) goto LAB_14002fed1;
      thunk_FUN_14028af80(*plVar1,uVar3 + 0x28);
      puVar9 = auStack_68;
    }
  }
  else {
    uVar13 = 0x8000000000000027;
LAB_14002fe4d:
    lVar7 = FUN_14028af20(uVar13);
    uVar13 = unaff_R14;
    if (lVar7 != 0) {
      uVar13 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar13 - 8) = lVar7;
      goto LAB_14002fe70;
    }
LAB_14002fed1:
    pcVar5 = (code *)swi(0x29);
    (*pcVar5)(5);
    puVar9 = auStack_60;
LAB_14002fed8:
    *(undefined8 *)(puVar9 + -8) = 0x14002fee0;
    thunk_FUN_14028af80(uVar11);
  }
  *param_3 = uVar13;
LAB_14002fefa:
  puVar10 = *(ulonglong **)(puVar9 + 0x70);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  uVar3 = param_3[1];
  *puVar10 = *param_3;
  puVar10[1] = uVar3;
  uVar3 = param_3[3];
  puVar10[2] = param_3[2];
  puVar10[3] = uVar3;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return;
}

