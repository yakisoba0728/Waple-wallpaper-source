// Function: FUN_140172830
// Addr: 140172830
// Size: 2197 bytes


void FUN_140172830(longlong param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 local_res8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_b8;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  for (plVar11 = *(longlong **)(param_1 + 0x68); plVar11 != plVar4; plVar11 = plVar11 + 1) {
    lVar19 = *plVar11;
    if (*(int *)(lVar19 + 0x100) == 0) {
      *(undefined4 *)(lVar19 + 0x100) = 1;
      *(longlong *)(lVar19 + 0x108) = param_2;
    }
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    lVar19 = 0;
    *(undefined1 *)(param_1 + 0x138) = 0;
    puVar12 = (undefined8 *)FUN_14028af20(0x18);
    *puVar12 = puVar12;
    puVar12[1] = puVar12;
    puVar13 = (undefined8 *)FUN_14028af20(0x18);
    local_res8 = 0;
    *puVar13 = puVar13;
    puVar13[1] = puVar13;
    puVar14 = (undefined8 *)FUN_14028af20(0x18);
    local_e8 = 0;
    *puVar14 = puVar14;
    puVar14[1] = puVar14;
    puVar15 = (undefined8 *)FUN_14028af20(0x18);
    local_e0 = 0;
    *puVar15 = puVar15;
    puVar15[1] = puVar15;
    puVar16 = (undefined8 *)FUN_14028af20(0x18);
    local_d8 = 0;
    *puVar16 = puVar16;
    puVar16[1] = puVar16;
    puVar17 = (undefined8 *)FUN_14028af20(0x18);
    *puVar17 = puVar17;
    puVar17[1] = puVar17;
    puVar5 = *(undefined8 **)(param_1 + 0xd8);
    lVar20 = lVar19;
    for (puVar6 = (undefined8 *)*puVar5; puVar6 != puVar5; puVar6 = (undefined8 *)*puVar6) {
      lVar7 = puVar6[2];
      if (*(int *)(lVar7 + 0x44) == 0) {
        *(longlong *)(lVar7 + 0x48) = param_2;
        *(undefined4 *)(lVar7 + 0x44) = 1;
LAB_140172993:
        if (((*(int *)(param_1 + 0x134) == 0) &&
            ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0xc000000) == 0)) &&
           ((param_2 == 0 || (param_2 == *(longlong *)(lVar7 + 0x48))))) {
          if ((*(byte *)(lVar7 + 0x40) & 1) != 0) {
            if (lVar19 == 0xaaaaaaaaaaaaaaa) goto LAB_1401730b9;
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            lVar19 = lVar19 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar12[1];
            *puVar18 = puVar12;
            puVar18[1] = puVar8;
            puVar12[1] = puVar18;
            *puVar8 = puVar18;
          }
          if ((*(uint *)(lVar7 + 0x40) & 0x10000) != 0) {
            if (lVar20 == 0xaaaaaaaaaaaaaaa) goto LAB_1401730b9;
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            lVar20 = lVar20 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar13[1];
            *puVar18 = puVar13;
            puVar18[1] = puVar8;
            puVar13[1] = puVar18;
            *puVar8 = puVar18;
          }
          if ((*(uint *)(lVar7 + 0x40) & 0x8000) != 0) {
            if (local_res8 == 0xaaaaaaaaaaaaaaa) goto LAB_1401730b9;
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            local_res8 = local_res8 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar14[1];
            *puVar18 = puVar14;
            puVar18[1] = puVar8;
            puVar14[1] = puVar18;
            *puVar8 = puVar18;
          }
          if ((*(uint *)(lVar7 + 0x40) & 0x40000) != 0) {
            if (local_e8 == 0xaaaaaaaaaaaaaaa) goto LAB_1401730b9;
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            local_e8 = local_e8 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar15[1];
            *puVar18 = puVar15;
            puVar18[1] = puVar8;
            puVar15[1] = puVar18;
            *puVar8 = puVar18;
          }
          if ((*(uint *)(lVar7 + 0x40) & 0x4000) != 0) {
            if (local_e0 == 0xaaaaaaaaaaaaaaa) goto LAB_1401730b9;
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            local_e0 = local_e0 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar16[1];
            *puVar18 = puVar16;
            puVar18[1] = puVar8;
            puVar16[1] = puVar18;
            *puVar8 = puVar18;
          }
          if ((*(uint *)(lVar7 + 0x40) & 0x20000) != 0) {
            if (local_d8 == 0xaaaaaaaaaaaaaaa) {
LAB_1401730b9:
                    /* WARNING: Subroutine does not return */
              FUN_14028c2e0("list too long");
            }
            puVar18 = (undefined8 *)FUN_14028af20(0x18);
            local_d8 = local_d8 + 1;
            puVar18[2] = lVar7;
            puVar8 = (undefined8 *)puVar17[1];
            *puVar18 = puVar17;
            puVar18[1] = puVar8;
            puVar17[1] = puVar18;
            *puVar8 = puVar18;
          }
          *(undefined4 *)(lVar7 + 0x44) = 2;
        }
        else {
          *(undefined1 *)(param_1 + 0x138) = 1;
        }
      }
      else if (*(int *)(lVar7 + 0x44) == 1) goto LAB_140172993;
    }
    bVar9 = false;
    for (puVar5 = (undefined8 *)*puVar12; puVar5 != puVar12; puVar5 = (undefined8 *)*puVar5) {
      lVar19 = puVar5[2];
      if (!bVar9) {
        local_b8 = *(longlong **)(param_1 + 0x128);
        (**(code **)(*local_b8 + 0x20))();
        bVar9 = true;
      }
      (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                 *(undefined8 *)(lVar19 + 0x48),0,0,0);
    }
    if (*(longlong *)(param_1 + 0x140) != 0) {
      cVar2 = *(char *)(*(longlong *)(param_1 + 0x140) + 0x1c4);
      if (cVar2 != '\0') {
        uVar10 = (ulonglong)local_res8 >> 8;
        local_res8 = CONCAT71((int7)uVar10,cVar2);
        for (puVar5 = (undefined8 *)*puVar16; puVar5 != puVar16; puVar5 = (undefined8 *)*puVar5) {
          lVar19 = puVar5[2];
          if (!bVar9) {
            local_b8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_b8 + 0x20))();
            bVar9 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                     *(undefined8 *)(lVar19 + 0x48),0xe,&local_res8,0);
        }
      }
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x140) + 0x1b8);
      if (iVar3 != 0) {
        local_res8 = CONCAT44(local_res8._4_4_,iVar3);
        for (puVar5 = (undefined8 *)*puVar14; puVar5 != puVar14; puVar5 = (undefined8 *)*puVar5) {
          lVar19 = puVar5[2];
          if (!bVar9) {
            local_b8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_b8 + 0x20))();
            bVar9 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                     *(undefined8 *)(lVar19 + 0x48),0xf,&local_res8,0);
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(lVar19 + 0x38) != 0) {
        local_70 = lVar19 + 0x28;
        if (0xf < *(ulonglong *)(lVar19 + 0x40)) {
          local_70 = *(longlong *)local_70;
        }
        local_68 = lVar19 + 0x48;
        if (0xf < *(ulonglong *)(lVar19 + 0x60)) {
          local_68 = *(longlong *)local_68;
        }
        local_58 = lVar19 + 0x88;
        if (0xf < *(ulonglong *)(lVar19 + 0xa0)) {
          local_58 = *(longlong *)local_58;
        }
        local_60 = lVar19 + 0x68;
        if (0xf < *(ulonglong *)(lVar19 + 0x80)) {
          local_60 = *(longlong *)local_60;
        }
        local_50 = lVar19 + 0xa8;
        if (0xf < *(ulonglong *)(lVar19 + 0xc0)) {
          local_50 = *(longlong *)local_50;
        }
        local_48 = lVar19 + 200;
        if (0xf < *(ulonglong *)(lVar19 + 0xe0)) {
          local_48 = *(longlong *)local_48;
        }
        local_40 = lVar19 + 0xe8;
        if (0xf < *(ulonglong *)(lVar19 + 0x100)) {
          local_40 = *(longlong *)local_40;
        }
        for (puVar5 = (undefined8 *)*puVar13; puVar5 != puVar13; puVar5 = (undefined8 *)*puVar5) {
          lVar19 = puVar5[2];
          if (!bVar9) {
            local_b8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_b8 + 0x20))();
            bVar9 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                     *(undefined8 *)(lVar19 + 0x48),0x10,&local_70,0);
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(lVar19 + 0x108) != *(longlong *)(lVar19 + 0x110)) {
        local_9c = *(undefined4 *)(lVar19 + 0x148);
        local_98 = *(undefined4 *)(lVar19 + 0x14c);
        local_94 = *(undefined4 *)(lVar19 + 0x150);
        local_90 = *(undefined4 *)(lVar19 + 0x154);
        local_8c = *(undefined4 *)(lVar19 + 0x158);
        local_a0[0] = 1;
        for (puVar5 = (undefined8 *)*puVar17; puVar5 != puVar17; puVar5 = (undefined8 *)*puVar5) {
          lVar19 = puVar5[2];
          if (!bVar9) {
            local_b8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_b8 + 0x20))();
            bVar9 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                     *(undefined8 *)(lVar19 + 0x48),0x11,local_a0,0);
        }
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x140) + 0x1c0);
      if (fVar1 != 0.0) {
        local_res8 = CONCAT44(fVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x1bc));
        for (puVar5 = (undefined8 *)*puVar15; puVar5 != puVar15; puVar5 = (undefined8 *)*puVar5) {
          lVar19 = puVar5[2];
          if (!bVar9) {
            local_b8 = *(longlong **)(param_1 + 0x128);
            (**(code **)(*local_b8 + 0x20))();
            bVar9 = true;
          }
          (**(code **)(**(longlong **)(param_1 + 0x128) + 0x40))
                    (*(longlong **)(param_1 + 0x128),*(undefined8 *)(lVar19 + 0x38),
                     *(undefined8 *)(lVar19 + 0x48),0x12,&local_res8,0);
        }
      }
    }
    if (bVar9) {
      (**(code **)(*local_b8 + 0x28))();
    }
    *(undefined8 *)puVar17[1] = 0;
    puVar5 = (undefined8 *)*puVar17;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar17,0x18);
    *(undefined8 *)puVar16[1] = 0;
    puVar5 = (undefined8 *)*puVar16;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar16,0x18);
    *(undefined8 *)puVar15[1] = 0;
    puVar5 = (undefined8 *)*puVar15;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar15,0x18);
    *(undefined8 *)puVar14[1] = 0;
    puVar5 = (undefined8 *)*puVar14;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar14,0x18);
    *(undefined8 *)puVar13[1] = 0;
    puVar5 = (undefined8 *)*puVar13;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar13,0x18);
    *(undefined8 *)puVar12[1] = 0;
    puVar5 = (undefined8 *)*puVar12;
    while (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
      thunk_FUN_14028af80(puVar5,0x18);
      puVar5 = puVar6;
    }
    thunk_FUN_14028af80(puVar12,0x18);
  }
  return;
}

