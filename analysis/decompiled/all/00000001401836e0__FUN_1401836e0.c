// Function: FUN_1401836e0
// Addr: 1401836e0
// Size: 486 bytes


void FUN_1401836e0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar13 = DAT_140492a88;
  fVar12 = DAT_1404927d4;
  if ((*(uint *)(param_1 + 0x128) & 0x2000) != 0) {
    fVar14 = *(float *)(param_1 + 0x84);
    fVar11 = *(float *)(param_1 + 0x88);
    plVar3 = *(longlong **)(param_1 + 0x30b8);
    lVar5 = plVar3[1];
    fVar15 = DAT_140492a88 / fVar14;
    plVar2 = (longlong *)(lVar5 + 0x50);
    *plVar2 = *plVar2 + 8;
    **(longlong **)(lVar5 + 0x50) = (longlong)plVar3;
    fVar13 = fVar13 / fVar11;
    fVar14 = fVar12 / fVar14;
    fVar12 = fVar12 / fVar11;
    (**(code **)(*plVar3 + 0x48))();
    *(float *)(param_1 + 0xb8) = fVar14;
    *(float *)(param_1 + 0xbc) = fVar12;
    *(float *)(param_1 + 0xc0) = fVar15;
    *(float *)(param_1 + 0xc4) = fVar13;
    *(undefined8 *)(*(longlong *)(param_1 + 0x3190) + 0xd0) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x3098) + 0x20);
    FUN_140156090(*(undefined8 *)(param_1 + 0x3190));
    (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    FUN_140157500(*(undefined8 *)(param_1 + 0x3190));
    iVar8 = 1;
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30b8) + 8) + 0x50);
    *plVar2 = *plVar2 + -8;
    iVar7 = *(int *)(param_1 + 0x3108);
    if (1 < iVar7) {
      do {
        lVar6 = (longlong)iVar8;
        plVar3 = *(longlong **)(param_1 + 0x30b8 + lVar6 * 8);
        lVar5 = plVar3[1];
        plVar2 = (longlong *)(lVar5 + 0x50);
        *plVar2 = *plVar2 + 8;
        **(longlong **)(lVar5 + 0x50) = (longlong)plVar3;
        (**(code **)(*plVar3 + 0x48))();
        fVar11 = (float)(1 << ((byte)iVar8 & 0x1f));
        *(float *)(param_1 + 0xb8) = fVar14 * fVar11;
        *(float *)(param_1 + 0xbc) = fVar12 * fVar11;
        *(float *)(param_1 + 0xc0) = fVar15 * fVar11;
        *(float *)(param_1 + 0xc4) = fVar13 * fVar11;
        *(undefined8 *)(*(longlong *)(param_1 + 0x3198) + 0xd0) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x30b0 + lVar6 * 8) + 0x20);
        FUN_140156090(*(undefined8 *)(param_1 + 0x3198));
        (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
        FUN_140157500(*(undefined8 *)(param_1 + 0x3198));
        iVar8 = iVar8 + 1;
        plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30b8 + lVar6 * 8) + 8) + 0x50)
        ;
        *plVar2 = *plVar2 + -8;
        iVar7 = *(int *)(param_1 + 0x3108);
      } while (iVar8 < iVar7);
    }
    uVar4 = iVar7 - 1;
    while (0 < (int)uVar4) {
      lVar5 = 0x31a8;
      uVar9 = (ulonglong)uVar4;
      if ((int)uVar4 < *(int *)(param_1 + 0x3108) + -2) {
        lVar5 = 0x31a0;
      }
      lVar5 = *(longlong *)(param_1 + lVar5);
      plVar3 = *(longlong **)(param_1 + 0x30b0 + uVar9 * 8);
      lVar6 = plVar3[1];
      plVar2 = (longlong *)(lVar6 + 0x50);
      *plVar2 = *plVar2 + 8;
      **(longlong **)(lVar6 + 0x50) = (longlong)plVar3;
      (**(code **)(*plVar3 + 0x48))();
      uVar1 = uVar4 - 1;
      fVar11 = (float)(2 << ((byte)uVar1 & 0x1f));
      *(float *)(param_1 + 0xb8) = fVar14 * fVar11;
      *(float *)(param_1 + 0xbc) = fVar12 * fVar11;
      *(float *)(param_1 + 0xc0) = fVar15 * fVar11;
      *(float *)(param_1 + 0xc4) = fVar13 * fVar11;
      *(undefined8 *)(lVar5 + 0xd0) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x30b8 + uVar9 * 8) + 0x20);
      FUN_140156090(lVar5);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
      FUN_140157500(lVar5);
      plVar2 = *(longlong **)(param_1 + 0x30b0 + uVar9 * 8);
      *(longlong *)(plVar2[1] + 0x50) = *(longlong *)(plVar2[1] + 0x50) + -8;
      bVar10 = uVar4 == 1;
      uVar4 = uVar1;
      if (bVar10) {
        if ((longlong *)**(longlong **)(plVar2[1] + 0x50) == (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x50))(plVar2);
        }
        else {
          (**(code **)(*(longlong *)**(longlong **)(plVar2[1] + 0x50) + 0x48))();
        }
      }
    }
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x30a0);
  lVar5 = plVar3[1];
  plVar2 = (longlong *)(lVar5 + 0x50);
  *plVar2 = *plVar2 + 8;
  **(longlong **)(lVar5 + 0x50) = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x48))();
  FUN_140156090(*(undefined8 *)(param_1 + 0x3160));
  (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  FUN_140157500(*(undefined8 *)(param_1 + 0x3160));
  plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30a0) + 8) + 0x50);
  *plVar2 = *plVar2 + -8;
  plVar3 = *(longlong **)(param_1 + 0x30a8);
  lVar5 = plVar3[1];
  plVar2 = (longlong *)(lVar5 + 0x50);
  *plVar2 = *plVar2 + 8;
  **(longlong **)(lVar5 + 0x50) = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x48))();
  FUN_140156090(*(undefined8 *)(param_1 + 0x3170));
  (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  FUN_140157500(*(undefined8 *)(param_1 + 0x3170));
  plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30a8) + 8) + 0x50);
  *plVar2 = *plVar2 + -8;
  plVar3 = *(longlong **)(param_1 + 0x30b0);
  lVar5 = plVar3[1];
  plVar2 = (longlong *)(lVar5 + 0x50);
  *plVar2 = *plVar2 + 8;
  **(longlong **)(lVar5 + 0x50) = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x48))();
  FUN_140156090(*(undefined8 *)(param_1 + 0x3178));
  (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
  FUN_140157500(*(undefined8 *)(param_1 + 0x3178));
  plVar2 = *(longlong **)(param_1 + 0x30b0);
  *(longlong *)(plVar2[1] + 0x50) = *(longlong *)(plVar2[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar2[1] + 0x50) == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140183b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x50))(plVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140183b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(longlong **)(plVar2[1] + 0x50) + 0x48))();
  return;
}

