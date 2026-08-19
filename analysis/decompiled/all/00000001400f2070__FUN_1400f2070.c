// Function: FUN_1400f2070
// Addr: 1400f2070
// Size: 780 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f2070(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 local_res20 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  ulonglong *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong *local_c0;
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60 [3];
  ulonglong local_48;
  
  puVar12 = auStack_f8;
  puVar13 = auStack_f8;
  lVar3 = param_1 + 0xd8;
  local_a8 = lVar3;
  iVar5 = func_0x000140290e50(lVar3);
  uVar9 = _UNK_140492d78;
  uVar11 = _DAT_140492d70;
  if (iVar5 != 0) {
UNWIND_INFO_1400f254b_UnwindCodes_64__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x124) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x124) = 0x7ffffffe;
UNWIND_INFO_1400f254b_UnwindCodes_58__UnwindOpCode:
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  puVar14 = auStack_f8;
  if (*(longlong *)(param_1 + 0x58) != 0) goto code_r0x0001400f2595;
  local_b8 = local_res20;
  *(undefined8 *)(param_1 + 0x88) = param_3;
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x18);
  local_d8 = &local_80;
  local_c8 = 7;
  local_d0 = 4;
  *plVar1 = 0;
  *plVar2 = 0;
  local_80 = uVar11;
  uStack_78 = uVar9;
  local_c0 = plVar1;
  local_b0 = plVar2;
  iVar5 = (*DAT_140426b40)(0,1,0,0x800);
  if (iVar5 < 0) {
    if ((longlong *)*plVar2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar2 + 0x10))();
      *plVar2 = 0;
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x10))();
      *plVar1 = 0;
    }
  }
  puVar14 = auStack_f8;
  if (*plVar1 == 0) goto code_r0x0001400f2595;
  local_98 = (longlong *)0x0;
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = (longlong *)0x0;
  *(byte *)(param_1 + 0x21) = (byte)(*(uint *)(*(longlong *)(param_1 + 0x50) + 0x118) >> 0x11) & 1;
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar5 = func_0x000140290e50(&DAT_1404dfcd0);
    if (iVar5 != 0) goto UNWIND_INFO_1400f254b_UnwindCodes_64__OffsetInProlog;
    if (DAT_1404dfd1c == 0x7fffffff) {
      DAT_1404dfd1c = 0x7ffffffe;
      goto UNWIND_INFO_1400f254b_UnwindCodes_58__UnwindOpCode;
    }
    puVar13 = auStack_f8;
    if (DAT_1404e9049 == '\0') {
      DAT_1404e9049 = '\x01';
      lVar6 = (*DAT_140426738)(L"mfplat.dll");
      if (lVar6 == 0) {
        DAT_1404e9048 = '\x01';
        puVar7 = (undefined8 *)FUN_140097710(&DAT_1404e6e50,local_60,"core_msgboxtitle_error");
        if (7 < (ulonglong)puVar7[3]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        puVar8 = (undefined8 *)
                 FUN_140097710(&DAT_1404e6e50,&local_80,"core_msgbox_media_feature_pack_missing");
        if (7 < (ulonglong)puVar8[3]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        (*DAT_140426828)(0,puVar8,puVar7,0x10);
        if (local_68 < 8) {
          local_70 = 0;
          local_80 = local_80 & 0xffffffffffff0000;
          local_68 = 7;
          puVar13 = auStack_f8;
          if (local_48 < 8) goto LAB_1400f22f7;
          uVar11 = local_48 * 2 + 2;
          lVar6 = local_60[0];
          if (uVar11 < 0x1000) {
LAB_1400f22e0:
            uVar9 = func_0x00014028b040(lVar6,uVar11);
            return uVar9;
          }
          lVar6 = *(longlong *)(local_60[0] + -8);
          if ((local_60[0] - lVar6) - 8U < 0x20) {
            uVar11 = local_48 * 2 + 0x29;
            goto LAB_1400f22e0;
          }
        }
        else {
          uVar11 = local_68 * 2 + 2;
          uVar10 = local_80;
          if (uVar11 < 0x1000) {
LAB_1400f228a:
            uVar9 = func_0x00014028b040(uVar10,uVar11);
            return uVar9;
          }
          uVar10 = *(ulonglong *)(local_80 - 8);
          if ((local_80 - uVar10) - 8 < 0x20) {
            uVar11 = local_68 * 2 + 0x29;
            goto LAB_1400f228a;
          }
        }
        pcVar4 = (code *)swi(0x29);
        lVar6 = (*pcVar4)(5);
        puVar12 = auStack_f0;
      }
      *(undefined8 *)(puVar12 + -8) = 0x1400f22f7;
      (*DAT_140426728)(lVar6);
      puVar13 = puVar12;
    }
LAB_1400f22f7:
    *(undefined8 *)(puVar13 + -8) = 0x1400f2303;
    FUN_140290f70(&DAT_1404dfcd0);
    puVar14 = puVar13;
    if (DAT_1404e9048 != '\0') goto code_r0x0001400f2595;
    *(undefined8 *)(puVar13 + -8) = 0x1400f2320;
    iVar5 = (*(code *)PTR_FUN_1404e3ab8)(0x20070,1);
    *(bool *)(param_1 + 0x20) = iVar5 == 0;
    if (-1 < iVar5) goto LAB_1400f2330;
  }
  else {
LAB_1400f2330:
    *(longlong ***)(puVar13 + 0x20) = &local_90;
    *(undefined8 *)(puVar13 + -8) = 0x1400f2355;
    iVar5 = (*DAT_140426b78)(&DAT_140486218,0,0x17,&DAT_140487278);
    if (-1 < iVar5) {
      *(undefined8 *)(puVar13 + -8) = 0x1400f236c;
      iVar5 = (*(code *)PTR_FUN_1404e3ac0)(&local_a0,1);
      if (-1 < iVar5) {
        *(undefined **)(puVar13 + -8) = &UNK_1400f237e;
        uVar9 = func_0x00014028aff0(0x18);
        return uVar9;
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    pcVar4 = *(code **)(*local_98 + 0x10);
    *(undefined8 *)(puVar13 + -8) = 0x1400f2560;
    (*pcVar4)();
    local_98 = (longlong *)0x0;
  }
  if (local_a0 != (longlong *)0x0) {
    pcVar4 = *(code **)(*local_a0 + 0x10);
    *(undefined8 *)(puVar13 + -8) = 0x1400f2579;
    (*pcVar4)();
    local_a0 = (longlong *)0x0;
  }
  puVar14 = puVar13;
  if (local_90 != (longlong *)0x0) {
    pcVar4 = *(code **)(*local_90 + 0x10);
    *(undefined8 *)(puVar13 + -8) = 0x1400f258c;
    (*pcVar4)();
    local_90 = (longlong *)0x0;
  }
code_r0x0001400f2595:
  *(undefined8 *)(puVar14 + -8) = 0x1400f259d;
  FUN_140290f70(lVar3);
  return 0;
}

