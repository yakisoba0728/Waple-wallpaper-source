// Function: FUN_140088360
// Addr: 140088360
// Size: 863 bytes


undefined8 * FUN_140088360(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((char)param_1[1] == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return param_2;
  }
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  FUN_140088f20(&local_68,*(undefined8 *)(*param_1 + 8));
  plVar4 = *(longlong **)*param_1;
  plVar11 = (longlong *)*plVar4;
  do {
    if (plVar11 == plVar4) {
      *param_2 = local_68;
      param_2[1] = puStack_60;
      param_2[2] = local_58;
      return param_2;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_140017480(&local_50,plVar11[4],*(uint *)(plVar11 + 5) >> 2);
    puVar17 = puStack_60;
    if (puStack_60 == local_58) {
      uVar20 = (longlong)puStack_60 - (longlong)local_68;
      lVar15 = (longlong)uVar20 >> 5;
      if (lVar15 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar14 = (longlong)local_58 - (longlong)local_68 >> 5;
      puVar16 = auStack_88;
      if (0x7ffffffffffffff - (uVar14 >> 1) < uVar14) {
LAB_1400886b5:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar16 + -8) = &UNK_1400886ba;
        FUN_140017370();
      }
      uVar14 = (uVar14 >> 1) + uVar14;
      uVar1 = lVar15 + 1;
      uVar19 = uVar1;
      if (uVar1 <= uVar14) {
        uVar19 = uVar14;
      }
      puVar16 = auStack_88;
      if (0x7ffffffffffffff < uVar19) goto LAB_1400886b5;
      uVar14 = uVar19 * 0x20;
      puVar18 = (undefined8 *)0x0;
      if (uVar14 != 0) {
        if (uVar14 < 0x1000) {
          puVar18 = (undefined8 *)FUN_14028af20();
        }
        else {
          puVar16 = auStack_88;
          if (uVar14 + 0x27 <= uVar14) goto LAB_1400886b5;
          lVar15 = FUN_14028af20(uVar14 + 0x27);
          if (lVar15 == 0) {
            pcVar6 = (code *)swi(0x29);
            (*pcVar6)(5);
            puVar16 = auStack_80;
            goto LAB_1400886b5;
          }
          puVar18 = (undefined8 *)(lVar15 + 0x27U & 0xffffffffffffffe0);
          puVar18[-1] = lVar15;
        }
      }
      uVar20 = uVar20 & 0xffffffffffffffe0;
      puVar2 = (undefined4 *)(uVar20 + (longlong)puVar18);
      *puVar2 = (undefined4)local_50;
      puVar2[1] = local_50._4_4_;
      puVar2[2] = (undefined4)uStack_48;
      puVar2[3] = uStack_48._4_4_;
      puVar2 = (undefined4 *)(uVar20 + 0x10 + (longlong)puVar18);
      *puVar2 = (undefined4)local_40;
      puVar2[1] = local_40._4_4_;
      puVar2[2] = (undefined4)uStack_38;
      puVar2[3] = uStack_38._4_4_;
      puVar10 = puVar18;
      puVar12 = local_68;
      if (puVar17 == puStack_60) {
        for (; puVar12 != puStack_60; puVar12 = puVar12 + 4) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar8 = *(undefined4 *)(puVar12 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar7;
          *(undefined4 *)(puVar10 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar9;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uVar8 = *(undefined4 *)(puVar12 + 3);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0x1c);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar7;
          *(undefined4 *)(puVar10 + 3) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar9;
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar10 = puVar10 + 4;
        }
      }
      else {
        for (; puVar12 != puVar17; puVar12 = puVar12 + 4) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 4);
          uVar8 = *(undefined4 *)(puVar12 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar12;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar7;
          *(undefined4 *)(puVar10 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar9;
          uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
          uVar8 = *(undefined4 *)(puVar12 + 3);
          uVar9 = *(undefined4 *)((longlong)puVar12 + 0x1c);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar12 + 2);
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar7;
          *(undefined4 *)(puVar10 + 3) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar9;
          puVar12[2] = 0;
          puVar12[3] = 0xf;
          *(undefined1 *)puVar12 = 0;
          puVar10 = puVar10 + 4;
        }
        puVar10 = (undefined8 *)(uVar20 + 0x20 + (longlong)puVar18);
        for (; puVar17 != puStack_60; puVar17 = puVar17 + 4) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          uVar7 = *(undefined4 *)((longlong)puVar17 + 4);
          uVar8 = *(undefined4 *)(puVar17 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar17 + 0xc);
          *(undefined4 *)puVar10 = *(undefined4 *)puVar17;
          *(undefined4 *)((longlong)puVar10 + 4) = uVar7;
          *(undefined4 *)(puVar10 + 1) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0xc) = uVar9;
          uVar7 = *(undefined4 *)((longlong)puVar17 + 0x14);
          uVar8 = *(undefined4 *)(puVar17 + 3);
          uVar9 = *(undefined4 *)((longlong)puVar17 + 0x1c);
          *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar17 + 2);
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar7;
          *(undefined4 *)(puVar10 + 3) = uVar8;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar9;
          puVar17[2] = 0;
          puVar17[3] = 0xf;
          *(undefined1 *)puVar17 = 0;
          puVar10 = puVar10 + 4;
        }
      }
      FUN_140013070(&local_68,puVar18,uVar1,uVar19);
    }
    else {
      *puStack_60 = local_50;
      puStack_60[1] = uStack_48;
      puStack_60[2] = local_40;
      puStack_60[3] = uStack_38;
      puStack_60 = puStack_60 + 4;
    }
    plVar5 = (longlong *)plVar11[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar3 = *(char *)(*plVar5 + 0x19);
      while (plVar11 = plVar5, cVar3 == '\0') {
        plVar5 = (longlong *)*plVar5;
        cVar3 = *(char *)(*plVar5 + 0x19);
      }
    }
    else {
      cVar3 = *(char *)(plVar11[1] + 0x19);
      plVar13 = (longlong *)plVar11[1];
      plVar5 = plVar11;
      while ((plVar11 = plVar13, cVar3 == '\0' && (plVar5 == (longlong *)plVar11[2]))) {
        cVar3 = *(char *)(plVar11[1] + 0x19);
        plVar13 = (longlong *)plVar11[1];
        plVar5 = plVar11;
      }
    }
  } while( true );
}

