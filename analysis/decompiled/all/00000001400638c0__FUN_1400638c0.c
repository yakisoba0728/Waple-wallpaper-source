// Function: FUN_1400638c0
// Addr: 1400638c0
// Size: 949 bytes


void FUN_1400638c0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  
  iVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  plVar16 = (longlong *)0x0;
  local_58 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  if ((iVar5 == 1) || (iVar5 == 4)) {
    plVar16 = param_3 + 0x2b;
  }
  uVar6 = (**(code **)(*param_3 + 0x20))(param_3);
  iVar5 = FUN_140290d80(param_1 + 0x28);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  cVar2 = *(char *)(**(longlong **)(param_1 + 8) + 0x19);
  plVar4 = (longlong *)**(longlong **)(param_1 + 8);
  while (cVar2 == '\0') {
    plVar13 = (longlong *)plVar4[9];
    if ((plVar13 != (longlong *)0x0) &&
       (lVar7 = (**(code **)(*plVar13 + 0x48))(plVar13,param_2,uVar6,plVar16), lVar7 != 0)) {
      plVar13 = plVar4 + 4;
      plVar8 = (longlong *)FUN_14028af20(0x30);
      if (0xf < (ulonglong)plVar4[7]) {
        plVar13 = (longlong *)*plVar13;
      }
      *plVar8 = plVar4[9];
      plVar8[1] = lVar7;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      sVar9 = strlen((char *)plVar13);
      FUN_140017480(plVar8 + 2,plVar13,sVar9);
      puVar12 = puStack_60;
      if (puStack_60 == local_58) {
        uVar18 = (longlong)puStack_60 - (longlong)local_68;
        lVar7 = (longlong)uVar18 >> 3;
        if (lVar7 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar10 = (longlong)local_58 - (longlong)local_68 >> 3;
        if (0x1fffffffffffffff - (uVar10 >> 1) < uVar10) {
LAB_140063c73:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar10 = (uVar10 >> 1) + uVar10;
        uVar1 = lVar7 + 1;
        uVar15 = uVar1;
        if (uVar1 <= uVar10) {
          uVar15 = uVar10;
        }
        if (0x1fffffffffffffff < uVar15) goto LAB_140063c73;
        uVar10 = uVar15 * 8;
        if (uVar10 == 0) {
          puVar17 = (undefined8 *)0x0;
        }
        else if (uVar10 < 0x1000) {
          puVar17 = (undefined8 *)FUN_14028af20(uVar10);
        }
        else {
          if (uVar10 + 0x27 <= uVar10) goto LAB_140063c73;
          lVar7 = FUN_14028af20();
          if (lVar7 == 0) goto LAB_140063c29;
          puVar17 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
          puVar17[-1] = lVar7;
        }
        uVar18 = uVar18 & 0xfffffffffffffff8;
        *(longlong **)(uVar18 + (longlong)puVar17) = plVar8;
        if (puVar12 == puStack_60) {
          lVar7 = (longlong)puStack_60 - (longlong)local_68;
          puVar11 = puVar17;
          puVar12 = local_68;
        }
        else {
          FUN_1404210f0(puVar17,local_68,(longlong)puVar12 - (longlong)local_68);
          lVar7 = (longlong)puStack_60 - (longlong)puVar12;
          puVar11 = (undefined8 *)(uVar18 + 8 + (longlong)puVar17);
        }
        FUN_1404210f0(puVar11,puVar12,lVar7);
        if (local_68 != (undefined8 *)0x0) {
          uVar18 = ((longlong)local_58 - (longlong)local_68 >> 3) * 8;
          puVar12 = local_68;
          if (0xfff < uVar18) {
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)local_68 + (-8 - (longlong)local_68[-1])))
            goto LAB_140063c29;
            uVar18 = uVar18 + 0x27;
            puVar12 = (undefined8 *)local_68[-1];
          }
          thunk_FUN_14028af80(puVar12,uVar18);
        }
        puStack_60 = puVar17 + uVar1;
        local_58 = puVar17 + uVar15;
        local_68 = puVar17;
      }
      else {
        *puStack_60 = plVar8;
        puStack_60 = puStack_60 + 1;
      }
    }
    plVar13 = (longlong *)plVar4[2];
    if (*(char *)((longlong)plVar13 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar13 + 0x19);
      while (cVar2 == '\0') {
        plVar13 = (longlong *)*plVar13;
        cVar2 = *(char *)(*plVar13 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar4[1] + 0x19);
      plVar8 = (longlong *)plVar4[1];
      while ((plVar13 = plVar8, cVar2 == '\0' && (plVar4 == (longlong *)plVar13[2]))) {
        cVar2 = *(char *)(plVar13[1] + 0x19);
        plVar8 = (longlong *)plVar13[1];
        plVar4 = plVar13;
      }
    }
    plVar4 = plVar13;
    cVar2 = *(char *)((longlong)plVar13 + 0x19);
  }
  FUN_140290ea0(param_1 + 0x28);
  (**(code **)(*param_3 + 0x38))(param_3,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    puVar12 = local_68;
    puVar14 = auStack_88;
    if ((0xfff < (ulonglong)(((longlong)local_58 - (longlong)local_68 >> 3) * 8)) &&
       (puVar12 = (undefined8 *)local_68[-1], puVar14 = auStack_88,
       (undefined1 *)0x1f < (undefined1 *)((longlong)local_68 + (-8 - (longlong)puVar12)))) {
LAB_140063c29:
      puVar12 = (undefined8 *)&DAT_00000005;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar14 = auStack_80;
    }
    *(undefined8 *)(puVar14 + -8) = 0x140063c3b;
    thunk_FUN_14028af80(puVar12);
  }
  return;
}

