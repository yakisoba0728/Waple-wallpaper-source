// Function: FUN_14010d580
// Addr: 14010d580
// Size: 709 bytes


void FUN_14010d580(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  ulonglong *local_68;
  ulonglong *local_60;
  longlong local_58;
  undefined8 ***local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  ulonglong local_38;
  
  lVar3 = FUN_140087490(param_1 + 0x10,"presetproperties","");
  if (lVar3 != 0) {
    uVar4 = FUN_140086de0(param_1 + 0x10,"presetproperties","");
    FUN_140088360(param_2,&local_68);
    for (puVar10 = local_68; puVar10 != local_60; puVar10 = puVar10 + 4) {
      uVar11 = puVar10[2];
      ppppuVar6 = (undefined8 ****)0x0;
      local_40 = 0;
      local_38 = 0;
      local_50 = (undefined8 ****)0x0;
      uStack_48 = 0;
      puVar14 = puVar10;
      if (0xf < puVar10[3]) {
        puVar14 = (ulonglong *)*puVar10;
      }
      if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      puVar15 = local_68;
      if (uVar11 < 0x10) {
        local_38 = 0xf;
        local_50 = (undefined8 ***)*puVar14;
        uStack_48 = puVar14[1];
        local_40 = uVar11;
      }
      else {
        uVar12 = uVar11 | 0xf;
        if (uVar12 < 0x8000000000000000) {
          if (uVar12 < 0x16) {
            uVar12 = 0x16;
          }
          uVar1 = uVar12 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar9 = uVar12 + 0x28;
              if (uVar9 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14010d6ac;
            }
            ppppuVar6 = (undefined8 ****)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar12 = 0x7fffffffffffffff;
          uVar9 = 0x8000000000000027;
LAB_14010d6ac:
          pppuVar5 = (undefined8 ***)FUN_14028af20(uVar9);
          if (pppuVar5 == (undefined8 ***)0x0) goto LAB_14010d802;
          ppppuVar6 = (undefined8 ****)((longlong)pppuVar5 + 0x27U & 0xffffffffffffffe0);
          ppppuVar6[-1] = pppuVar5;
        }
        local_50 = ppppuVar6;
        local_40 = uVar11;
        local_38 = uVar12;
        FUN_1404210f0(ppppuVar6,puVar14,uVar11 + 1);
      }
      ppppuVar6 = &local_50;
      if (0xf < local_38) {
        ppppuVar6 = (undefined8 ****)local_50;
      }
      uVar7 = FUN_140086de0(param_2,ppppuVar6,local_40 + (longlong)ppppuVar6);
      ppppuVar6 = &local_50;
      if (0xf < local_38) {
        ppppuVar6 = (undefined8 ****)local_50;
      }
      lVar3 = FUN_140087490(uVar4,ppppuVar6,local_40 + (longlong)ppppuVar6);
      if (lVar3 != 0) {
        ppppuVar6 = &local_50;
        if (0xf < local_38) {
          ppppuVar6 = (undefined8 ****)local_50;
        }
        uVar8 = FUN_140086de0(uVar4,ppppuVar6,local_40 + (longlong)ppppuVar6);
        uVar7 = FUN_140086de0(uVar7,"value","");
        FUN_140085520(uVar7,uVar8);
      }
      if (0xf < local_38) {
        uVar11 = local_38 + 1;
        ppppuVar6 = (undefined8 ****)local_50;
        if (0xfff < uVar11) {
          ppppuVar6 = (undefined8 ****)local_50[-1];
          if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)ppppuVar6)))
          goto LAB_14010d802;
          uVar11 = local_38 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar6,uVar11);
      }
    }
    puVar10 = local_68;
    if (local_68 != (ulonglong *)0x0) {
      for (; puVar10 != local_60; puVar10 = puVar10 + 4) {
        FUN_140017240(puVar10);
      }
      puVar10 = local_68;
      puVar13 = auStack_88;
      if (0xfff < (local_58 - (longlong)local_68 & 0xffffffffffffffe0U)) {
        puVar10 = (ulonglong *)local_68[-1];
        puVar15 = (ulonglong *)((longlong)local_68 + (-8 - (longlong)puVar10));
        puVar13 = auStack_88;
        if ((ulonglong *)0x1f < puVar15) {
LAB_14010d802:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar10 = puVar15;
          puVar13 = auStack_80;
        }
      }
      *(undefined8 *)(puVar13 + -8) = 0x14010d811;
      thunk_FUN_14028af80(puVar10);
    }
  }
  return;
}

