// Function: FUN_140119ca0
// Addr: 140119ca0
// Size: 1100 bytes


undefined8 FUN_140119ca0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong *puVar16;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  ulonglong *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined8 ******local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  FUN_14010c650();
  lVar4 = FUN_140086de0(param_2,"schemecolor","");
  if (((*(char *)(lVar4 + 8) == '\a') &&
      (puVar5 = (ulonglong *)FUN_140086de0(lVar4,"order",""), (byte)puVar5[1] - 1 < 3)) &&
     (iVar3 = FUN_140085ee0(puVar5), iVar3 == 0)) {
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    uVar13 = (uint)uStack_48 & 0xfffffeff;
    iVar3 = FUN_140085ee0(puVar5);
    uVar12 = puVar5[1];
    *(uint *)(puVar5 + 1) = uVar13;
    uStack_48 = CONCAT44(uStack_48._4_4_,(int)uVar12);
    local_50 = (undefined8 ******)*puVar5;
    *puVar5 = (longlong)(iVar3 + -0x14);
    uVar12 = puVar5[2];
    puVar5[2] = 0;
    uStack_38 = puVar5[3];
    local_30 = puVar5[4];
    puVar5[3] = 0;
    puVar5[4] = 0;
    local_40 = uVar12;
    FUN_140086d30(&local_50);
    if (uVar12 != 0) {
      FUN_140017240(uVar12 + 0x40);
      FUN_140017240(uVar12 + 0x20);
      FUN_140017240(uVar12);
      thunk_FUN_14028af80(uVar12,0x60);
    }
  }
  lVar4 = FUN_140087490(param_2,"audioprocessing","");
  if (((lVar4 != 0) &&
      (lVar4 = FUN_140086de0(param_2,"audioprocessing",""), *(char *)(lVar4 + 8) == '\a')) &&
     ((lVar4 = FUN_140086de0(lVar4,"order",""), *(byte *)(lVar4 + 8) - 1 < 3 &&
      (iVar3 = FUN_140085ee0(lVar4), uVar12 = uStack_48, iVar3 == -1)))) {
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    uStack_48._4_4_ = SUB84(uVar12,4);
    uStack_48 = CONCAT44(uStack_48._4_4_,(uint)uStack_48) & 0xfffffffffffffeff;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    iVar3 = FUN_140085ee0(lVar4);
    local_50 = (undefined8 ******)(longlong)(iVar3 + -0x14);
    FUN_140085610(lVar4,&local_50);
    FUN_140085440(&local_50);
  }
  lVar4 = FUN_140087490(param_1 + 0x10,"presetproperties","");
  if (lVar4 != 0) {
    uVar6 = FUN_140086de0(param_1 + 0x10,"presetproperties","");
    FUN_140088360(param_2,&local_68);
    for (puVar5 = local_68; puVar5 != local_60; puVar5 = puVar5 + 4) {
      uVar12 = puVar5[2];
      local_50 = (undefined8 *******)0x0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      puVar16 = puVar5;
      if (0xf < puVar5[3]) {
        puVar16 = (ulonglong *)*puVar5;
      }
      if (0x7fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      if (uVar12 < 0x10) {
        uStack_38 = 0xf;
        local_50 = (undefined8 ******)*puVar16;
        uStack_48 = puVar16[1];
        local_40 = uVar12;
      }
      else {
        uVar14 = uVar12 | 0xf;
        if (uVar14 < 0x8000000000000000) {
          if (uVar14 < 0x16) {
            uVar14 = 0x16;
          }
          uVar1 = uVar14 + 1;
          pppppppuVar8 = (undefined8 *******)0x0;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar11 = uVar14 + 0x28;
              if (uVar11 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_140119f4a;
            }
            pppppppuVar8 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar14 = 0x7fffffffffffffff;
          uVar11 = 0x8000000000000027;
LAB_140119f4a:
          ppppppuVar7 = (undefined8 ******)FUN_14028af20(uVar11);
          if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_14011a0ac;
          pppppppuVar8 = (undefined8 *******)((longlong)ppppppuVar7 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar8[-1] = ppppppuVar7;
        }
        local_50 = pppppppuVar8;
        local_40 = uVar12;
        uStack_38 = uVar14;
        FUN_1404210f0(pppppppuVar8,puVar16,uVar12 + 1);
      }
      pppppppuVar8 = &local_50;
      if (0xf < uStack_38) {
        pppppppuVar8 = (undefined8 *******)local_50;
      }
      uVar9 = FUN_140086de0(param_2,pppppppuVar8,local_40 + (longlong)pppppppuVar8);
      pppppppuVar8 = &local_50;
      if (0xf < uStack_38) {
        pppppppuVar8 = (undefined8 *******)local_50;
      }
      lVar4 = FUN_140087490(uVar6,pppppppuVar8,local_40 + (longlong)pppppppuVar8);
      if (lVar4 != 0) {
        pppppppuVar8 = &local_50;
        if (0xf < uStack_38) {
          pppppppuVar8 = (undefined8 *******)local_50;
        }
        uVar10 = FUN_140086de0(uVar6,pppppppuVar8,local_40 + (longlong)pppppppuVar8);
        uVar9 = FUN_140086de0(uVar9,"value","");
        FUN_140085520(uVar9,uVar10);
      }
      if (0xf < uStack_38) {
        uVar12 = uStack_38 + 1;
        pppppppuVar8 = (undefined8 *******)local_50;
        if (0xfff < uVar12) {
          pppppppuVar8 = (undefined8 *******)local_50[-1];
          if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pppppppuVar8)))
          goto LAB_14011a0ac;
          uVar12 = uStack_38 + 0x28;
        }
        thunk_FUN_14028af80(pppppppuVar8,uVar12);
      }
    }
    puVar5 = local_68;
    if (local_68 != (ulonglong *)0x0) {
      for (; puVar5 != local_60; puVar5 = puVar5 + 4) {
        FUN_140017240(puVar5);
      }
      puVar5 = local_68;
      puVar15 = auStack_88;
      if (0xfff < (local_58 - (longlong)local_68 & 0xffffffffffffffe0U)) {
        puVar5 = (ulonglong *)local_68[-1];
        local_68 = (ulonglong *)((longlong)local_68 + (-8 - (longlong)puVar5));
        puVar15 = auStack_88;
        if ((ulonglong *)0x1f < local_68) {
LAB_14011a0ac:
          puVar5 = local_68;
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar15 = auStack_80;
        }
      }
      *(undefined8 *)(puVar15 + -8) = 0x14011a0bb;
      thunk_FUN_14028af80(puVar5);
    }
  }
  return param_2;
}

