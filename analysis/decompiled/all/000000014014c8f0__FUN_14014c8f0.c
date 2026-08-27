// Function: FUN_14014c8f0
// Addr: 14014c8f0
// Size: 886 bytes


void FUN_14014c8f0(float *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  char *_Str;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  longlong *local_78;
  undefined8 *local_70;
  undefined8 *****local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  
  puVar15 = auStack_98;
  lVar2 = *param_2;
  _Str = (char *)(lVar2 + 0x78);
  if (0xf < *(ulonglong *)(lVar2 + 0x90)) {
    _Str = *(char **)_Str;
  }
  sVar7 = strlen(_Str);
  uVar17 = 0;
  uVar16 = 0xcbf29ce484222325;
  uVar13 = 0xcbf29ce484222325;
  if (sVar7 != 0) {
    do {
      pbVar1 = (byte *)(_Str + uVar17);
      uVar17 = uVar17 + 1;
      uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
    } while (uVar17 < sVar7);
  }
  plVar9 = *(longlong **)(param_1 + 2);
  plVar14 = *(longlong **)
             (*(longlong *)(param_1 + 6) + 8 + (uVar13 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (plVar14 == plVar9) {
LAB_14014c9b3:
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar10 = *(longlong **)
               (*(longlong *)(param_1 + 6) + (uVar13 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    cVar5 = FUN_14000d010(plVar14 + 2,_Str);
    while (cVar5 == '\0') {
      if (plVar14 == plVar10) goto LAB_14014c9b3;
      plVar14 = (longlong *)plVar14[1];
      cVar5 = FUN_14000d010(plVar14 + 2,_Str);
    }
  }
  if (plVar14 == (longlong *)0x0) {
    plVar14 = plVar9;
  }
  if (plVar14 == plVar9) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_68 = (undefined8 ******)0x0;
    uStack_60 = 0;
    FUN_140017480(&local_68,_Str,sVar7);
    ppppppuVar12 = &local_68;
    if (0xf < uStack_50) {
      ppppppuVar12 = (undefined8 ******)local_68;
    }
    plVar14 = (longlong *)0x0;
    plVar9 = plVar14;
    if (local_58 != (longlong *)0x0) {
      do {
        plVar10 = (longlong *)((longlong)plVar9 + 1);
        uVar16 = (uVar16 ^ *(byte *)((longlong)ppppppuVar12 + (longlong)plVar9)) * 0x100000001b3;
        plVar9 = plVar10;
      } while (plVar10 < local_58);
    }
    FUN_1400110a0(param_1,&local_78,&local_68,uVar16);
    puVar8 = local_70;
    if (local_70 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar8 = (undefined8 *)FUN_14028af20(0x38);
      puVar8[2] = local_68;
      puVar8[3] = uStack_60;
      puVar8[4] = local_58;
      puVar8[5] = uStack_50;
      local_58 = (longlong *)0x0;
      uStack_50 = 0xf;
      local_68 = (undefined8 *****)((ulonglong)local_68 & 0xffffffffffffff00);
      puVar8[6] = 0;
      fVar18 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar18 && fVar18 != *param_1) {
        FUN_14014f1d0(param_1);
        plVar14 = *(longlong **)
                   (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10
                   );
        local_78 = *(longlong **)(param_1 + 2);
        if (plVar14 != *(longlong **)(param_1 + 2)) {
          uVar13 = puVar8[5];
          sVar7 = puVar8[4];
          param_2 = *(longlong **)
                     (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
          while( true ) {
            plVar9 = plVar14 + 2;
            if (0xf < (ulonglong)plVar14[5]) {
              plVar9 = (longlong *)*plVar9;
            }
            if (uVar13 < 0x10) {
              puVar11 = puVar8 + 2;
            }
            else {
              puVar11 = (undefined8 *)puVar8[2];
            }
            if ((sVar7 == plVar14[4]) &&
               ((sVar7 == 0 || (iVar6 = memcmp(puVar11,plVar9,sVar7), iVar6 == 0)))) break;
            local_78 = plVar14;
            if (plVar14 == param_2) goto LAB_14014cb83;
            plVar14 = (longlong *)plVar14[1];
          }
          local_78 = (longlong *)*plVar14;
        }
      }
LAB_14014cb83:
      puVar11 = (undefined8 *)local_78[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar8 = local_78;
      puVar8[1] = puVar11;
      *puVar11 = puVar8;
      local_78[1] = (longlong)puVar8;
      lVar3 = *(longlong *)(param_1 + 6);
      uVar16 = *(ulonglong *)(param_1 + 0xc) & uVar16;
      plVar9 = *(longlong **)(lVar3 + uVar16 * 0x10);
      if (plVar9 == *(longlong **)(param_1 + 2)) {
        *(undefined8 **)(lVar3 + uVar16 * 0x10) = puVar8;
LAB_14014cbc9:
        *(undefined8 **)(lVar3 + 8 + uVar16 * 0x10) = puVar8;
      }
      else if (plVar9 == local_78) {
        *(undefined8 **)(lVar3 + uVar16 * 0x10) = puVar8;
      }
      else if (*(undefined8 **)(lVar3 + 8 + uVar16 * 0x10) == puVar11) goto LAB_14014cbc9;
    }
    puVar8[6] = lVar2;
    if (uStack_50 < 0x10) {
      return;
    }
    uVar16 = uStack_50 + 1;
    ppppppuVar12 = (undefined8 ******)local_68;
    if (0xfff < uVar16) {
      ppppppuVar12 = (undefined8 ******)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)ppppppuVar12))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar15 = auStack_90;
        goto LAB_14014cc1c;
      }
      uVar16 = uStack_50 + 0x28;
    }
    thunk_FUN_14028af80(ppppppuVar12,uVar16);
  }
  else {
LAB_14014cc1c:
    plVar9 = (longlong *)plVar14[6];
    pcVar4 = *(code **)(*plVar9 + 0x50);
    *(undefined8 *)(puVar15 + -8) = 0x14014cc2e;
    (*pcVar4)(plVar9,*(undefined8 *)(puVar15 + 0xa0));
    puVar8 = (undefined8 *)*param_2;
    if (puVar8 != (undefined8 *)0x0) {
      pcVar4 = *(code **)*puVar8;
      *(undefined8 *)(puVar15 + -8) = 0x14014cc41;
      (*pcVar4)(puVar8,1);
    }
    *param_2 = plVar14[6];
  }
  return;
}

