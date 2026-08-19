// Function: FUN_140188930
// Addr: 140188930
// Size: 161 bytes


void FUN_140188930(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  float afStack_78 [2];
  undefined8 *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  puVar11 = auStack_98;
  *param_1 = &PTR_UNWIND_INFO_140188816_UnwindCodes_3__OffsetInProlog_14048ec18;
  param_1[9] = &PTR_UNWIND_INFO_1401a37a7_SizeOfProlog_14048eb20;
  param_1[10] = &PTR_UNWIND_INFO_1401966cd_FrameRegister_14048ead8;
  plVar6 = (longlong *)FUN_14014d060(param_1[0x1b] + 0x1520,"_alias_lightCookie",0);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x58))(plVar6,0);
  }
  plVar6 = (longlong *)param_1[0x2c];
  for (plVar8 = (longlong *)param_1[0x2b]; plVar8 != plVar6; plVar8 = plVar8 + 1) {
    puVar9 = (undefined8 *)*plVar8;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  puVar9 = (undefined8 *)param_1[0x89];
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,1);
  }
  lVar10 = param_1[0x84];
  if (lVar10 != 0) {
    lVar1 = param_1[0x1b];
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    if (*(int *)(lVar10 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  lVar10 = param_1[0x85];
  if (lVar10 != 0) {
    lVar1 = param_1[0x1b];
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    if (*(int *)(lVar10 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  lVar10 = param_1[0x86];
  if (lVar10 != 0) {
    lVar1 = param_1[0x1b];
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    if (*(int *)(lVar10 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  lVar10 = param_1[0x87];
  if (lVar10 != 0) {
    lVar1 = param_1[0x1b];
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    if (*(int *)(lVar10 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  lVar10 = param_1[0x88];
  if (lVar10 != 0) {
    lVar1 = param_1[0x1b];
    *(int *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) + -1;
    if (*(int *)(lVar10 + 0x2c) < 1) {
      func_0x0001401ab6c0(lVar1 + 0x16c0);
    }
  }
  FUN_140177040(param_1[0x1b] + 0x1708,param_1,0);
  if (param_1[0x44] != 0) {
    afStack_78[0] = *(float *)(param_1 + 0x42);
    puStack_70 = (undefined8 *)0x0;
    lStack_68 = 0;
    puStack_70 = (undefined8 *)func_0x00014028aff0(0x18);
    *puStack_70 = puStack_70;
    puStack_70[1] = puStack_70;
    uStack_48 = param_1[0x48];
    uStack_40 = param_1[0x49];
    lStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = (undefined *)0x0;
    func_0x0001400376d0(&lStack_60,(longlong)(param_1[0x46] - param_1[0x45]) >> 3,puStack_70);
    puVar9 = (undefined8 *)param_1[0x43];
    uStackX_10 = 0xcbf29ce484222325;
    uStackX_18 = 0x100000001b3;
    for (puVar2 = (undefined8 *)*puVar9; puVar2 != puVar9; puVar2 = (undefined8 *)*puVar2) {
      uVar13 = (((((((((ulonglong)*(byte *)(puVar2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)puVar2 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)puVar2 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar2 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)puVar2 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)puVar2 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)puVar2 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)puVar2 + 0x17)) * 0x100000001b3;
      puVar7 = *(undefined8 **)(lStack_60 + 8 + (uStack_48 & uVar13) * 0x10);
      puVar12 = puStack_70;
      if (puVar7 == puStack_70) {
code_r0x000140188c27:
        if (lStack_68 == 0xaaaaaaaaaaaaaaa) goto code_r0x000140189261;
        puVar7 = (undefined8 *)func_0x00014028aff0(0x18);
        puVar7[2] = puVar2[2];
        if (afStack_78[0] < (float)(lStack_68 + 1) / (float)uStack_40) {
          FUN_1401a28f0(afStack_78);
          puVar3 = *(undefined8 **)(lStack_60 + 8 + (uStack_48 & uVar13) * 0x10);
          puVar12 = puStack_70;
          if (puVar3 != puStack_70) {
            lVar10 = puVar3[2];
            puVar12 = puVar3;
            while (puVar7[2] != lVar10) {
              if (puVar12 == *(undefined8 **)(lStack_60 + (uStack_48 & uVar13) * 0x10))
              goto code_r0x000140188cf6;
              puVar12 = (undefined8 *)puVar12[1];
              lVar10 = puVar12[2];
            }
            puVar12 = (undefined8 *)*puVar12;
          }
        }
code_r0x000140188cf6:
        puVar3 = (undefined8 *)puVar12[1];
        lStack_68 = lStack_68 + 1;
        *puVar7 = puVar12;
        puVar7[1] = puVar3;
        *puVar3 = puVar7;
        puVar12[1] = puVar7;
        uVar13 = uStack_48 & uVar13;
        puVar4 = *(undefined8 **)(lStack_60 + uVar13 * 0x10);
        if (puVar4 == puStack_70) {
          *(undefined8 **)(lStack_60 + uVar13 * 0x10) = puVar7;
code_r0x000140188d4d:
          *(undefined8 **)(lStack_60 + 8 + uVar13 * 0x10) = puVar7;
        }
        else if (puVar4 == puVar12) {
          *(undefined8 **)(lStack_60 + uVar13 * 0x10) = puVar7;
        }
        else if (*(undefined8 **)(lStack_60 + 8 + uVar13 * 0x10) == puVar3)
        goto code_r0x000140188d4d;
      }
      else {
        lVar10 = puVar7[2];
        puVar12 = puVar7;
        while (puVar2[2] != lVar10) {
          if (puVar12 == *(undefined8 **)(lStack_60 + (uStack_48 & uVar13) * 0x10))
          goto code_r0x000140188c27;
          puVar12 = (undefined8 *)puVar12[1];
          lVar10 = puVar12[2];
        }
      }
    }
    FUN_140078020(param_1 + 0x42);
    puVar2 = puStack_70;
    puVar9 = (undefined8 *)*puStack_70;
    if (puVar9 != puStack_70) {
      do {
        puVar7 = (undefined8 *)puVar9[2];
        plVar6 = (longlong *)param_1[0x2b];
        while (plVar8 = plVar6, puStackX_8 = puVar7, plVar8 != (longlong *)param_1[0x2c]) {
          plVar6 = plVar8 + 1;
          if ((undefined8 *)*plVar8 == puVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar6,(longlong)param_1[0x2c] - (longlong)plVar6);
          }
        }
        plVar6 = (longlong *)param_1[0x39];
        while (plVar8 = plVar6, plVar8 != (longlong *)param_1[0x3a]) {
          plVar6 = plVar8 + 1;
          if ((undefined8 *)*plVar8 == puVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar6,(longlong)param_1[0x3a] - (longlong)plVar6);
          }
        }
        plVar6 = (longlong *)param_1[0x2e];
        while (plVar8 = plVar6, plVar8 != (longlong *)param_1[0x2f]) {
          plVar6 = plVar8 + 1;
          if ((undefined8 *)*plVar8 == puVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar6,(longlong)param_1[0x2f] - (longlong)plVar6);
          }
        }
        plVar6 = (longlong *)param_1[0x3c];
        while (plVar8 = plVar6, plVar8 != (longlong *)param_1[0x3d]) {
          plVar6 = plVar8 + 1;
          if ((undefined8 *)*plVar8 == puVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar6,param_1[0x3d] - (longlong)plVar6);
          }
        }
        plVar6 = (longlong *)param_1[0x3f];
        while (plVar8 = plVar6, plVar8 != (longlong *)param_1[0x40]) {
          plVar6 = plVar8 + 1;
          if ((undefined8 *)*plVar8 == puVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(plVar8,plVar6,param_1[0x40] - (longlong)plVar6);
          }
        }
        FUN_14019e370(param_1 + 0x50,&puStackX_8);
        FUN_14019e370(param_1 + 0x58,&puStackX_8);
        FUN_14019e370(param_1 + 0x42,&puStackX_8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
        puVar9 = (undefined8 *)*puVar9;
      } while (puVar9 != puVar2);
    }
    if (lStack_60 != 0) {
      uVar13 = ((longlong)puStack_50 - lStack_60 >> 3) * 8;
      lVar10 = lStack_60;
      if (0xfff < uVar13) {
        lVar10 = *(longlong *)(lStack_60 + -8);
        if (0x1f < (lStack_60 - lVar10) - 8U) {
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
          puVar11 = auStack_90;
code_r0x000140189261:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar11 + -8) = &UNK_14018926d;
          FUN_14028c3b0("unordered_map/set too long");
        }
        uVar13 = uVar13 + 0x27;
      }
      func_0x00014028b040(lVar10,uVar13);
      uStack_58 = 0;
      puStack_50 = (undefined *)0x0;
      lStack_60 = 0;
    }
    *(undefined8 *)puStack_70[1] = 0;
    puVar9 = (undefined8 *)*puStack_70;
    while (puVar9 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar9;
      func_0x00014028b040(puVar9,0x18);
      puVar9 = puVar2;
    }
    func_0x00014028b040(puStack_70,0x18);
  }
  FUN_14017e860(param_1[0x1b]);
  FUN_1402d3ea0(param_1[0x69]);
  func_0x000140186410(param_1[0x8e]);
  func_0x000140186410(param_1[0x8f]);
  func_0x0001401152b0(param_1 + 0x90);
  func_0x00014019ea40(param_1 + 0x81);
  FUN_14019eac0(param_1 + 0x62);
  func_0x00014000dab0(param_1 + 0x5b);
  func_0x000140049410(param_1 + 0x59);
  func_0x00014000dab0(param_1 + 0x53);
  func_0x000140049410(param_1 + 0x51);
  func_0x00014000dab0(param_1 + 0x4d);
  func_0x00014000dab0(param_1 + 0x4a);
  func_0x00014000dab0(param_1 + 0x45);
  func_0x000140049410(param_1 + 0x43);
  func_0x00014000dab0(param_1 + 0x3f);
  func_0x00014000dab0(param_1 + 0x3c);
  func_0x00014000dab0(param_1 + 0x39);
  func_0x00014000dab0(param_1 + 0x34);
  func_0x000140049410(param_1 + 0x32);
  func_0x00014000dab0(param_1 + 0x2e);
  func_0x00014000dab0(param_1 + 0x2b);
  func_0x00014000dab0(param_1 + 0x16);
  func_0x00014015a7d0(param_1 + 0x14);
  func_0x00014000dab0(param_1 + 0xe);
  func_0x00014015a850(param_1 + 0xc);
  param_1[9] = &PTR_PTR_14048ec60;
  *param_1 = &PTR_DAT_14048b830;
  lVar10 = param_1[3];
  lVar1 = param_1[4];
  while( true ) {
    if (lVar10 == lVar1) {
      puStack_50 = (undefined *)0x1401a3c8b;
      func_0x0001400318b0(param_1 + 6);
      puStack_50 = (undefined *)0x1401a3c94;
      func_0x0001400318b0(param_1 + 3);
      *param_1 = &PTR_UNWIND_INFO_140053f43_UnwindCodes_4__UnwindOpCode_1404778c0;
      return;
    }
    plVar6 = *(longlong **)(lVar10 + 0x38);
    puStackX_8 = param_1;
    if (plVar6 == (longlong *)0x0) break;
    puStack_50 = (undefined *)0x1401a3c79;
    (**(code **)(*plVar6 + 0x10))(plVar6,&puStackX_8);
    lVar10 = lVar10 + 0x40;
  }
                    /* WARNING: Subroutine does not return */
  puStack_50 = &UNK_1401a3cad;
  FUN_14028c390();
}

