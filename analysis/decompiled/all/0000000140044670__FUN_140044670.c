// Function: FUN_140044670
// Addr: 140044670
// Size: 599 bytes


void FUN_140044670(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  ulonglong *local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined8 ***local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar3 = FUN_140086de0(param_1 + 0x48,"general","");
  FUN_140088360(param_2,&local_88);
  for (puVar9 = local_88; puVar9 != local_80; puVar9 = puVar9 + 4) {
    uVar10 = puVar9[2];
    ppppuVar5 = (undefined8 ****)0x0;
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined8 ****)0x0;
    uStack_68 = 0;
    puVar13 = puVar9;
    if (0xf < puVar9[3]) {
      puVar13 = (ulonglong *)*puVar9;
    }
    if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_1400172e0();
    }
    puVar14 = local_88;
    if (uVar10 < 0x10) {
      local_58 = 0xf;
      local_70 = (undefined8 ***)*puVar13;
      uStack_68 = puVar13[1];
      local_60 = uVar10;
    }
    else {
      uVar11 = uVar10 | 0xf;
      if (uVar11 < 0x8000000000000000) {
        if (uVar11 < 0x16) {
          uVar11 = 0x16;
        }
        uVar1 = uVar11 + 1;
        if (uVar1 != 0) {
          if (0xfff < uVar1) {
            uVar8 = uVar11 + 0x28;
            if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_140017370();
            }
            goto LAB_140044763;
          }
          ppppuVar5 = (undefined8 ****)FUN_14028af20(uVar1);
        }
      }
      else {
        uVar11 = 0x7fffffffffffffff;
        uVar8 = 0x8000000000000027;
LAB_140044763:
        pppuVar4 = (undefined8 ***)FUN_14028af20(uVar8);
        if (pppuVar4 == (undefined8 ***)0x0) goto LAB_14004489d;
        ppppuVar5 = (undefined8 ****)((longlong)pppuVar4 + 0x27U & 0xffffffffffffffe0);
        ppppuVar5[-1] = pppuVar4;
      }
      local_70 = ppppuVar5;
      local_60 = uVar10;
      local_58 = uVar11;
      FUN_1404210f0(ppppuVar5,puVar13,uVar10 + 1);
    }
    ppppuVar5 = &local_70;
    if (0xf < local_58) {
      ppppuVar5 = (undefined8 ****)local_70;
    }
    lVar6 = FUN_140087490(param_2,ppppuVar5,local_60 + (longlong)ppppuVar5);
    if (lVar6 == 0) {
      lVar6 = FUN_140084ac0();
    }
    ppppuVar5 = &local_70;
    if (0xf < local_58) {
      ppppuVar5 = (undefined8 ****)local_70;
    }
    uVar7 = FUN_140086de0(uVar3,ppppuVar5,local_60 + (longlong)ppppuVar5);
    FUN_140085520(uVar7,lVar6);
    if (0xf < local_58) {
      uVar10 = local_58 + 1;
      ppppuVar5 = (undefined8 ****)local_70;
      if (0xfff < uVar10) {
        ppppuVar5 = (undefined8 ****)local_70[-1];
        if (0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)ppppuVar5))) goto LAB_14004489d;
        uVar10 = local_58 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar5,uVar10);
    }
  }
  puVar9 = local_88;
  if (local_88 != (ulonglong *)0x0) {
    for (; puVar9 != local_80; puVar9 = puVar9 + 4) {
      FUN_140017240(puVar9);
    }
    puVar9 = local_88;
    puVar12 = auStack_a8;
    if (0xfff < (local_78 - (longlong)local_88 & 0xffffffffffffffe0U)) {
      puVar9 = (ulonglong *)local_88[-1];
      puVar14 = (ulonglong *)((longlong)local_88 + (-8 - (longlong)puVar9));
      puVar12 = auStack_a8;
      if ((ulonglong *)0x1f < puVar14) {
LAB_14004489d:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar9 = puVar14;
        puVar12 = auStack_a0;
      }
    }
    *(undefined8 *)(puVar12 + -8) = 0x1400448ac;
    thunk_FUN_14028af80(puVar9);
  }
  return;
}

