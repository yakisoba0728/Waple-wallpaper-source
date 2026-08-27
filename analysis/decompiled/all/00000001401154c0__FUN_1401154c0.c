// Function: FUN_1401154c0
// Addr: 1401154c0
// Size: 1481 bytes


void FUN_1401154c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char *_Str;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 *local_88;
  uint local_80;
  undefined8 local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar19 = auStack_c8;
  uVar7 = FUN_140086de0(param_2,&DAT_140476edc,0x140476edf);
  uVar5 = FUN_140085ee0(uVar7);
  *(undefined4 *)(param_1 + 0x18c) = uVar5;
  lVar8 = FUN_140086de0(param_2,"location","");
  uVar7 = FUN_140086de0(param_2,"videoaudiooutput","");
  cVar3 = FUN_140086300(uVar7);
  if (cVar3 == '\0') {
LAB_14011558a:
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40;
  }
  else {
    if ((*(char *)(lVar8 + 8) == '\a') &&
       (lVar9 = FUN_140087490(lVar8,"videoaudiooutput",""), lVar9 != 0)) {
      uVar7 = FUN_140086de0(lVar8,"videoaudiooutput","");
      cVar3 = FUN_140086300(uVar7);
      if (cVar3 == '\0') goto LAB_14011558a;
    }
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffffffbf;
  }
  uVar7 = FUN_140086de0(param_2,"reflection","");
  bVar4 = FUN_140086300(uVar7);
  uVar21 = (uint)bVar4 << 7;
  uVar17 = (uint)(bVar4 ^ 1) << 7;
  plVar10 = (longlong *)FUN_140086de0(param_2,"resolution","");
  puVar18 = (undefined8 *)0x0;
  puVar11 = (undefined8 *)*plVar10;
  puVar14 = puVar18;
  if ((puVar11 != (undefined8 *)0x0) && (puVar14 = puVar11, (*(uint *)(plVar10 + 1) >> 8 & 1) != 0))
  {
    puVar14 = (undefined8 *)((longlong)puVar11 + 4);
  }
  iVar6 = FUN_1402c10d0(puVar14,&DAT_140476e84);
  if (iVar6 == 0) {
    uVar17 = uVar17 | 0x30;
  }
  else {
    iVar6 = FUN_1402c10d0(puVar14,&DAT_1404893a8);
    if (iVar6 == 0) {
      uVar21 = uVar21 | 0x20;
      uVar17 = uVar17 | 0x10;
    }
    else {
      uVar17 = uVar17 | 0x20;
      uVar21 = uVar21 | 0x10;
    }
  }
  FUN_140115a90(param_1,uVar21,uVar17);
  lVar8 = FUN_140086de0(param_2,"language","");
  lStack_a0 = 0;
  local_98 = 7;
  uStack_90 = 0xf;
  local_a8 = (undefined8 *)
             (ulonglong)
             CONCAT16(s_default_140476ef8[6],
                      CONCAT24(s_default_140476ef8._4_2_,s_default_140476ef8._0_4_));
  if (*(char *)(lVar8 + 8) == '\x04') {
    plVar10 = (longlong *)FUN_140085cc0(lVar8,&local_88);
    if (&local_a8 == plVar10) {
LAB_140115714:
      if (0xf < uStack_70) {
        uVar16 = uStack_70 + 1;
        puVar13 = local_88;
        if (0xfff < uVar16) {
          puVar13 = *(undefined4 **)(local_88 + -2);
          if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar13))) goto LAB_140115a64;
          uVar16 = uStack_70 + 0x28;
        }
        thunk_FUN_14028af80(puVar13,uVar16);
      }
      goto LAB_14011574f;
    }
    if (uStack_90 < 0x10) {
LAB_1401156e6:
      local_a8 = (undefined8 *)*plVar10;
      lStack_a0 = plVar10[1];
      local_98 = plVar10[2];
      uStack_90 = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      goto LAB_140115714;
    }
    uVar16 = uStack_90 + 1;
    puVar11 = local_a8;
    if (uVar16 < 0x1000) {
LAB_1401156e1:
      thunk_FUN_14028af80(puVar11,uVar16);
      goto LAB_1401156e6;
    }
    puVar11 = (undefined8 *)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar11)) < 0x20) {
      uVar16 = uStack_90 + 0x28;
      goto LAB_1401156e1;
    }
  }
  else {
LAB_14011574f:
    puVar11 = &local_a8;
    if (0xf < uStack_90) {
      puVar11 = local_a8;
    }
    puVar14 = local_a8;
    if ((local_98 == 7) && (iVar6 = memcmp(puVar11,"default",7), puVar14 = local_a8, iVar6 == 0)) {
      plVar10 = (longlong *)FUN_140086de0(param_2,"steamlanguage","");
      uVar16 = uStack_90;
      if ((char)*(uint *)(plVar10 + 1) == '\x04') {
        puVar11 = (undefined8 *)*plVar10;
        puVar14 = puVar18;
        if ((puVar11 != (undefined8 *)0x0) &&
           (puVar14 = puVar11, (*(uint *)(plVar10 + 1) >> 8 & 1) != 0)) {
          puVar14 = (undefined8 *)((longlong)puVar11 + 4);
        }
        uVar17 = FUN_1400982d0(puVar14);
        puVar11 = (undefined8 *)(ulonglong)uVar17;
        if (0x23 < uVar17) {
          puVar11 = puVar18;
        }
        _Str = (&PTR_DAT_140478d70)[(longlong)puVar11 * 4];
        sVar12 = strlen(_Str);
        FUN_14000f880(&local_a8,_Str,sVar12);
        puVar14 = local_a8;
      }
      else if (uStack_90 < 5) {
        uVar20 = 0x7fffffffffffffff;
        if (0x7fffffffffffffff - (uStack_90 >> 1) < uStack_90) {
          uVar15 = 0x8000000000000027;
LAB_140115853:
          lVar8 = FUN_14028af20(uVar15);
          if (lVar8 == 0) goto LAB_140115a64;
          puVar18 = (undefined8 *)(lVar8 + 0x27U & 0xffffffffffffffe0);
          puVar18[-1] = lVar8;
        }
        else {
          uVar1 = (uStack_90 >> 1) + uStack_90;
          uVar20 = 0xf;
          if (0xf < uVar1) {
            uVar20 = uVar1;
          }
          uVar1 = uVar20 + 1;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar15 = uVar20 + 0x28;
              if (uVar15 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_140115853;
            }
            puVar18 = (undefined8 *)FUN_14028af20(uVar1);
          }
        }
        local_98 = 5;
        *(undefined4 *)puVar18 = DAT_1404856b0;
        *(undefined1 *)((longlong)puVar18 + 4) = DAT_1404856b4;
        *(undefined1 *)((longlong)puVar18 + 5) = 0;
        puVar14 = puVar18;
        uStack_90 = uVar20;
        if (0xf < uVar16) {
          uVar20 = uVar16 + 1;
          puVar11 = local_a8;
          if (0xfff < uVar20) {
            puVar11 = (undefined8 *)local_a8[-1];
            if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar11)))
            goto LAB_140115a64;
            uVar20 = uVar16 + 0x28;
          }
          thunk_FUN_14028af80(puVar11,uVar20);
        }
      }
      else {
        local_98 = 5;
        puVar11 = &local_a8;
        if (0xf < uStack_90) {
          puVar11 = local_a8;
        }
        FUN_1404210f0(puVar11,&DAT_1404856b0,5);
        *(undefined1 *)((longlong)puVar11 + 5) = 0;
        puVar14 = local_a8;
      }
    }
    local_a8 = puVar14;
    uVar16 = local_98;
    uVar5 = (undefined4)local_98;
    uVar20 = local_98 & 0xffffffff;
    local_58 = (local_58 >> 8 & 0xfffffe) << 8;
    local_80 = CONCAT31(local_80._1_3_,4);
    local_80 = local_80 | 0x100;
    local_50 = 0;
    uStack_48 = 0;
    puVar11 = &local_a8;
    if (0xf < uStack_90) {
      puVar11 = local_a8;
    }
    local_40 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    puVar13 = (undefined4 *)_malloc_base(uVar20 + 5);
    if (puVar13 == (undefined4 *)0x0) goto LAB_140115a6b;
    *puVar13 = uVar5;
    FUN_1404210f0(puVar13 + 1,puVar11,uVar16 & 0xffffffff);
    *(undefined1 *)((longlong)puVar13 + uVar20 + 4) = 0;
    local_88 = puVar13;
    uVar7 = FUN_140086de0(local_60,"language","");
    FUN_140085610(uVar7,&local_88);
    FUN_140085440(&local_88);
    uVar7 = FUN_140004d00(&local_88,local_60,0);
    FUN_14000de40(param_1 + 0x4a0,uVar7);
    if (0xf < uStack_70) {
      uVar16 = uStack_70 + 1;
      puVar13 = local_88;
      if (0xfff < uVar16) {
        puVar13 = *(undefined4 **)(local_88 + -2);
        if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)puVar13))) goto LAB_140115a64;
        uVar16 = uStack_70 + 0x28;
      }
      thunk_FUN_14028af80(puVar13,uVar16);
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_140182f90(*(longlong *)(param_1 + 0x180),param_1 + 0x4a0);
    }
    FUN_140085440(local_60);
    if (uStack_90 < 0x10) {
      return;
    }
    uVar16 = uStack_90 + 1;
    puVar11 = local_a8;
    if (uVar16 < 0x1000) {
LAB_140115a4d:
      thunk_FUN_14028af80(puVar11,uVar16);
      return;
    }
    puVar11 = (undefined8 *)local_a8[-1];
    if ((ulonglong)((longlong)local_a8 + (-8 - (longlong)puVar11)) < 0x20) {
      uVar16 = uStack_90 + 0x28;
      goto LAB_140115a4d;
    }
  }
LAB_140115a64:
  pcVar2 = (code *)swi(0x29);
  (*pcVar2)(5);
  puVar19 = auStack_c0;
LAB_140115a6b:
  *(undefined8 *)(puVar19 + -8) = 0x140115a7b;
  FUN_140017170(&local_88,
                "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
               );
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar19 + -8) = &UNK_140115a84;
  FUN_140084bc0(&local_88);
}

