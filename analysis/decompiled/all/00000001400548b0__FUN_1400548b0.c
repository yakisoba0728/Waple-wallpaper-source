// Function: FUN_1400548b0
// Addr: 1400548b0
// Size: 1042 bytes


/* WARNING: Possible PIC construction at 0x0001400549ca: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140054a54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001400549ca) */
/* WARNING: Removing unreachable block (ram,0x000140054a54) */

void FUN_1400548b0(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  char *pcVar7;
  undefined8 *****pppppuVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined4 local_res10 [2];
  longlong *local_res18;
  longlong local_res20;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined8 ****local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 ****local_58 [3];
  ulonglong local_40;
  
  local_res18 = param_3;
  puVar12 = auStack_98;
  puVar13 = auStack_98;
  iVar10 = 0;
  if (0 < param_2) {
    do {
      puVar14 = auStack_98;
      plVar9 = param_3;
      if (DAT_1404e7f5b != '\0') goto UNWIND_INFO_140054f79_UnwindCodes_69__UnwindOpCode;
      uStack_a0 = 0x1400548fa;
      (*DAT_140426240)(100);
      iVar10 = iVar10 + 100;
    } while (iVar10 < param_2);
  }
  cVar2 = *(char *)((longlong)*(longlong **)*param_3 + 0x19);
  plVar11 = *(longlong **)*param_3;
  plVar9 = local_res18;
  while (local_res18 = plVar9, cVar2 == '\0') {
    puVar14 = auStack_98;
    if (DAT_1404e7f5b != '\0') goto UNWIND_INFO_140054f79_UnwindCodes_69__UnwindOpCode;
    if ((char)plVar11[0xe] == '\0') goto LAB_140054b46;
    local_res10[0] = 0;
    uStack_a0 = 0x140054945;
    (*DAT_140426288)(1,local_res10);
    plVar9 = plVar11 + 10;
    uStack_a0 = 0x140054956;
    plVar4 = (longlong *)FUN_140005950(local_58,plVar9);
    local_78 = (undefined8 ****)*plVar4;
    lStack_70 = plVar4[1];
    local_68 = plVar4[2];
    uStack_60 = plVar4[3];
    plVar4[2] = 0;
    plVar4[3] = 7;
    *(undefined2 *)plVar4 = 0;
    if (7 < local_40) {
      pppppuVar8 = (undefined8 *****)local_58[0];
      if ((0xfff < local_40 * 2 + 2) &&
         (pppppuVar8 = (undefined8 *****)local_58[0][-1],
         0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)pppppuVar8)))) {
LAB_140054c1c:
        pcVar6 = (code *)swi(0x29);
        (*pcVar6)(5);
        puVar12 = auStack_90;
        goto LAB_140054c23;
      }
      puVar15 = &uStack_a0;
      uStack_a0 = 0x1400549cf;
      goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    }
    pppppuVar8 = &local_78;
    if (7 < uStack_60) {
      pppppuVar8 = (undefined8 *****)local_78;
    }
    uStack_a0 = 0x1400549f1;
    lVar5 = (*DAT_140426708)(pppppuVar8,0,0x1000);
    if (lVar5 == 0) {
      uStack_a0 = 0x1400549ff;
      uVar3 = (*DAT_1404266a8)();
      uStack_a0 = 0x140054a11;
      FUN_140098830("Error loading library %S (%i).\n",pppppuVar8,uVar3);
    }
    if (7 < uStack_60) {
      pppppuVar8 = (undefined8 *****)local_78;
      if ((0xfff < uStack_60 * 2 + 2) &&
         (pppppuVar8 = (undefined8 *****)local_78[-1],
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppuVar8)))) goto LAB_140054c1c;
      puVar15 = &uStack_a0;
      uStack_a0 = 0x140054a59;
      goto UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog;
    }
    local_68 = 0;
    uStack_60 = 7;
    local_78 = (undefined8 ****)((ulonglong)local_78 & 0xffffffffffff0000);
    uStack_a0 = 0x140054a73;
    uVar3 = (*DAT_1404266a8)();
    uStack_a0 = 0x140054a84;
    (*DAT_140426288)(local_res10[0],0);
    if (lVar5 == 0) {
      if (0xf < (ulonglong)plVar11[0xd]) {
        plVar9 = (longlong *)*plVar9;
      }
      uStack_a0 = 0x140054aa5;
      FUN_140098830("Cannot load plugin %s, %i.\n",plVar9,uVar3);
    }
    else {
      plVar11[8] = lVar5;
      uStack_a0 = 0x140054abe;
      pcVar6 = (code *)(*DAT_140426730)(lVar5,"GetWPExtPluginVersion");
      if (pcVar6 != (code *)0x0) {
        uStack_a0 = 0x140054ac9;
        pcVar7 = (char *)(*pcVar6)();
        if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
          uStack_a0 = 0x140054ae2;
          iVar10 = FUN_1402c11a0(pcVar7,"pluginAlphaDev0007");
          if (iVar10 == 0) {
            uStack_a0 = 0x140054af6;
            pcVar6 = (code *)(*DAT_140426730)(lVar5,"CreateWPExtPlugin");
            if (pcVar6 != (code *)0x0) {
              uStack_a0 = 0x140054b00;
              plVar4 = (longlong *)(*pcVar6)(param_1);
              plVar11[9] = (longlong)plVar4;
              if (plVar4 != (longlong *)0x0) {
                uStack_a0 = 0x140054b12;
                (**(code **)(*plVar4 + 8))(plVar4);
                if (0xf < (ulonglong)plVar11[0xd]) {
                  plVar9 = (longlong *)*plVar9;
                }
                uStack_a0 = 0x140054b2b;
                FUN_140098bd0("Loaded plugin %s.\n",plVar9);
              }
            }
            goto LAB_140054b46;
          }
        }
        if (0xf < (ulonglong)plVar11[0xd]) {
          plVar9 = (longlong *)*plVar9;
        }
        uStack_a0 = 0x140054b46;
        FUN_140098830("Wrong plugin version %s.\n",plVar9);
      }
    }
LAB_140054b46:
    plVar9 = (longlong *)plVar11[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar9 + 0x19);
      while (cVar2 == '\0') {
        plVar9 = (longlong *)*plVar9;
        cVar2 = *(char *)(*plVar9 + 0x19);
      }
    }
    else {
      cVar2 = *(char *)(plVar11[1] + 0x19);
      plVar4 = (longlong *)plVar11[1];
      while ((plVar9 = plVar4, cVar2 == '\0' && (plVar11 == (longlong *)plVar9[2]))) {
        cVar2 = *(char *)(plVar9[1] + 0x19);
        plVar4 = (longlong *)plVar9[1];
        plVar11 = plVar9;
      }
    }
    cVar2 = *(char *)((longlong)plVar9 + 0x19);
    plVar11 = plVar9;
    param_3 = local_res18;
    plVar9 = local_res18;
  }
  local_res20 = param_1 + 0x28;
  uStack_a0 = 0x140054bb6;
  iVar10 = func_0x000140290e50(local_res20);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    uStack_a0 = 0x140055037;
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    uStack_a0 = 0x140055048;
    FUN_140290e00(6);
  }
  plVar4 = *(longlong **)*param_3;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    do {
      plVar16 = *(longlong **)(param_1 + 8);
      cVar2 = *(char *)(plVar16[1] + 0x19);
      plVar9 = (longlong *)plVar16[1];
      plVar11 = plVar4;
      while (cVar2 == '\0') {
        *(undefined8 *)(puVar12 + -8) = 0x140054c10;
        cVar2 = func_0x000140038d00(plVar9 + 4,plVar11 + 4);
        if (cVar2 < '\0') {
          plVar4 = (longlong *)plVar9[2];
        }
        else {
LAB_140054c23:
          plVar4 = (longlong *)*plVar9;
          plVar16 = plVar9;
        }
        plVar9 = plVar4;
        cVar2 = *(char *)((longlong)plVar4 + 0x19);
      }
      if (*(char *)((longlong)plVar16 + 0x19) != '\0') {
LAB_140054c5a:
        if (*(longlong *)(param_1 + 0x10) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar12 + -8) = 0x14005502c;
          FUN_14003a820();
        }
        *(undefined **)(puVar12 + -8) = &UNK_140054c78;
        func_0x00014028aff0(0x78);
        return;
      }
      *(undefined8 *)(puVar12 + -8) = 0x140054c52;
      cVar2 = func_0x000140038d00(plVar11 + 4,plVar16 + 4);
      if (cVar2 < '\0') goto LAB_140054c5a;
      plVar16[8] = plVar11[8];
      plVar16[9] = plVar11[9];
      if (plVar16 != plVar11) {
        plVar9 = plVar11 + 10;
        if (0xf < (ulonglong)plVar11[0xd]) {
          plVar9 = (longlong *)*plVar9;
        }
        lVar5 = plVar11[0xc];
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar12 + -8) = 0x140054f60;
        FUN_14000f950(plVar16 + 10,plVar9,lVar5);
      }
      *(char *)(plVar16 + 0xe) = (char)plVar11[0xe];
      plVar4 = (longlong *)plVar11[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x19);
        while (cVar2 == '\0') {
          plVar4 = (longlong *)*plVar4;
          cVar2 = *(char *)(*plVar4 + 0x19);
        }
      }
      else {
        cVar2 = *(char *)(plVar11[1] + 0x19);
        plVar9 = (longlong *)plVar11[1];
        while ((plVar4 = plVar9, cVar2 == '\0' && (plVar11 == (longlong *)plVar4[2]))) {
          cVar2 = *(char *)(plVar4[1] + 0x19);
          plVar9 = (longlong *)plVar4[1];
          plVar11 = plVar4;
        }
      }
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
    param_3 = *(longlong **)(puVar12 + 0xb0);
    puVar13 = puVar12;
  }
  *(undefined8 *)(puVar13 + -8) = 0x140054fd5;
  FUN_140290f70(*(undefined8 *)(puVar13 + 0xb8));
  *(undefined8 *)(puVar13 + -8) = 0x140054fe2;
  iVar10 = (*DAT_140426af0)(DAT_1404e5350);
  puVar14 = puVar13;
  plVar9 = param_3;
  if (iVar10 != 0) {
    *(undefined8 *)(puVar13 + -8) = 0x140054ffe;
    (*DAT_140426a98)(DAT_1404e5350,0x40f,0,0);
  }
UNWIND_INFO_140054f79_UnwindCodes_69__UnwindOpCode:
  *(undefined8 *)(puVar14 + 0xa8) = *(undefined8 *)(puVar14 + 0xa0);
  *(undefined8 *)(puVar14 + 0x90) = *(undefined8 *)(puVar14 + 0x88);
  lVar5 = *(longlong *)(*plVar9 + 8);
  if (*(char *)(lVar5 + 0x19) == '\0') {
    *(undefined8 *)(puVar14 + 0xa0) = *(undefined8 *)(puVar14 + 0x80);
    uVar1 = *(undefined8 *)(lVar5 + 0x10);
    *(undefined8 *)(puVar14 + 0x68) = 0x140056def;
    FUN_140056ef0(plVar9,plVar9,uVar1);
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar14 + 0x68) = 0x140056e01;
    FUN_140017310(lVar5 + 0x50);
  }
  pppppuVar8 = (undefined8 *****)*plVar9;
  plVar11 = *(longlong **)(puVar14 + 0xa8);
  puVar15 = (undefined8 *)(puVar14 + 0x98);
UNWIND_INFO_14028b020_UnwindCodes_14__OffsetInProlog:
  if (pppppuVar8 != (undefined8 *****)0x0) {
    *(longlong **)((longlong)puVar15 + -8) = plVar11;
    *(undefined8 *)((longlong)puVar15 + -0x30) = 0x1402d912c;
    iVar10 = (*DAT_1404264b8)(DAT_1404e4fa0,0,pppppuVar8);
    if (iVar10 == 0) {
      *(undefined8 *)((longlong)puVar15 + -0x30) = 0x1402d9136;
      uVar3 = (*DAT_1404266a8)();
      *(undefined8 *)((longlong)puVar15 + -0x30) = 0x1402d913d;
      func_0x0001402caec4(uVar3);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((longlong)puVar15 + -0x30) = &UNK_1402d9144;
      FUN_1402cb004();
    }
  }
  return;
}

