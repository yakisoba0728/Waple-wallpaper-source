// Function: FUN_140036640
// Addr: 140036640
// Size: 950 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036640(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *******pppppppuVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  longlong unaff_RSI;
  ulonglong in_R10;
  ulonglong unaff_R14;
  byte bStackX_11;
  byte bStackX_12;
  byte bStackX_13;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined8 ******local_58;
  undefined8 local_50;
  ulonglong local_40;
  undefined8 ******local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  uVar2 = *(uint *)(param_2 + 0x40);
  lVar4 = FUN_140086de0(&DAT_1404df5e8,"wpropertiesvd","");
  if (*(char *)(lVar4 + 8) != '\a') {
    return;
  }
  lVar4 = FUN_140087490(&DAT_1404df5e8,"general","");
  if ((lVar4 == 0) ||
     (lVar4 = FUN_140086de0(&DAT_1404df5e8,"general",""), *(char *)(lVar4 + 8) != '\a')) {
LAB_14003679a:
    uVar5 = FUN_140086de0(&DAT_1404df5e8,"wpropertiesvd","");
    plVar6 = (longlong *)FUN_140053e40(&local_58,uVar2);
    FUN_14002fd20(local_38,&DAT_140476c08);
    if (0xf < local_40) {
      uVar9 = local_40 + 1;
      pppppppuVar7 = (undefined8 *******)local_58;
      if (0xfff < uVar9) {
        pppppppuVar7 = (undefined8 *******)local_58[-1];
        if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar7)))
        goto LAB_140036901;
        uVar9 = local_40 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar7,uVar9);
    }
    local_58 = local_38;
    if (0xf < local_20) {
      local_58 = local_38[0];
    }
    local_50 = local_28;
    FUN_1400878f0(uVar5,&local_58);
    if (0xf < local_20) {
      uVar9 = local_20 + 1;
      pppppppuVar7 = (undefined8 *******)local_38[0];
      if (0xfff < uVar9) {
        pppppppuVar7 = (undefined8 *******)local_38[0][-1];
        if (0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pppppppuVar7)))
        goto LAB_140036901;
        uVar9 = local_20 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar7,uVar9);
    }
    bStackX_11 = (byte)(uVar2 >> 8);
    unaff_RSI = 0x100000001b3;
    unaff_R14 = 0xcbf29ce484222325;
    bStackX_12 = (byte)(uVar2 >> 0x10);
    bStackX_13 = (byte)(uVar2 >> 0x18);
    uVar9 = (((((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)bStackX_11) * 0x100000001b3 ^ (ulonglong)bStackX_12) * 0x100000001b3 ^
            (ulonglong)bStackX_13) * 0x100000001b3 & DAT_1404df670;
    plVar8 = *(longlong **)(DAT_1404df658 + 8 + uVar9 * 0x10);
    puVar11 = auStack_78;
    plVar6 = DAT_1404df648;
    param_4 = DAT_1404df658;
    in_R10 = DAT_1404df670;
    if (plVar8 != DAT_1404df648) {
      uVar1 = *(uint *)(plVar8 + 2);
      while (puVar11 = auStack_78, uVar2 != uVar1) {
        puVar11 = auStack_78;
        if (plVar8 == *(longlong **)(DAT_1404df658 + uVar9 * 0x10)) goto LAB_140036908;
        plVar8 = (longlong *)plVar8[1];
        uVar1 = *(uint *)(plVar8 + 2);
      }
      goto LAB_14003690a;
    }
  }
  else {
    uVar5 = FUN_140086de0(&DAT_1404df5e8,"general","");
    plVar6 = (longlong *)FUN_140053e40(&local_58,uVar2);
    FUN_14002fd20(local_38,"wallpaperconfigvd");
    if (local_40 < 0x10) {
LAB_140036739:
      local_58 = local_38;
      if (0xf < local_20) {
        local_58 = local_38[0];
      }
      local_50 = local_28;
      FUN_1400878f0(uVar5,&local_58);
      if (0xf < local_20) {
        uVar9 = local_20 + 1;
        pppppppuVar7 = (undefined8 *******)local_38[0];
        if (0xfff < uVar9) {
          pppppppuVar7 = (undefined8 *******)local_38[0][-1];
          if (0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)pppppppuVar7)))
          goto LAB_140036901;
          uVar9 = local_20 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar7,uVar9);
      }
      goto LAB_14003679a;
    }
    uVar9 = local_40 + 1;
    pppppppuVar7 = (undefined8 *******)local_58;
    if (uVar9 < 0x1000) {
LAB_140036734:
      thunk_FUN_14028af80(pppppppuVar7,uVar9);
      goto LAB_140036739;
    }
    pppppppuVar7 = (undefined8 *******)local_58[-1];
    if ((ulonglong)((longlong)local_58 + (-8 - (longlong)pppppppuVar7)) < 0x20) {
      uVar9 = local_40 + 0x28;
      goto LAB_140036734;
    }
LAB_140036901:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)();
    puVar11 = auStack_70;
  }
LAB_140036908:
  plVar8 = (longlong *)0x0;
LAB_14003690a:
  plVar10 = plVar6;
  if (plVar8 != (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 != plVar6) {
    lVar4 = plVar10[3];
    if (lVar4 != 0) {
      *(undefined8 *)(puVar11 + -8) = 0x14003692e;
      FUN_140017240(lVar4);
      *(undefined8 *)(puVar11 + -8) = 0x14003693b;
      thunk_FUN_14028af80(lVar4,0x20);
      plVar6 = DAT_1404df648;
      param_4 = DAT_1404df658;
      in_R10 = DAT_1404df670;
    }
    in_R10 = ((((*(byte *)(plVar10 + 2) ^ unaff_R14) * unaff_RSI ^
               (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * unaff_RSI ^
              (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * unaff_RSI ^
             (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * unaff_RSI & in_R10;
    plVar8 = *(longlong **)(param_4 + in_R10 * 0x10);
    if (*(longlong **)(param_4 + 8 + in_R10 * 0x10) == plVar10) {
      if (plVar8 == plVar10) {
        *(longlong **)(param_4 + in_R10 * 0x10) = plVar6;
        *(longlong **)(param_4 + 8 + in_R10 * 0x10) = plVar6;
      }
      else {
        *(longlong *)(param_4 + 8 + in_R10 * 0x10) = plVar10[1];
      }
    }
    else if (plVar8 == plVar10) {
      *(longlong *)(param_4 + in_R10 * 0x10) = *plVar10;
    }
    lVar4 = *plVar10;
    _DAT_1404df650 = _DAT_1404df650 + -1;
    *(longlong *)plVar10[1] = lVar4;
    *(longlong *)(lVar4 + 8) = plVar10[1];
    *(undefined8 *)(puVar11 + -8) = 0x1400369da;
    thunk_FUN_14028af80(plVar10,0x20);
  }
  return;
}

