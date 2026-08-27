// Function: FUN_1400f3ea0
// Addr: 1400f3ea0
// Size: 1465 bytes


void FUN_1400f3ea0(undefined8 *****param_1)

{
  undefined8 ****ppppuVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  undefined1 *puVar17;
  ulonglong _Size;
  longlong lVar18;
  undefined8 ***local_res8;
  undefined8 ***local_res18;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 ***local_88;
  undefined8 ***local_78;
  undefined8 ***local_70;
  undefined8 ****local_68;
  undefined8 ***pppuStack_60;
  undefined8 ***local_58;
  undefined8 ***pppuStack_50;
  
  uVar7 = local_res8._0_1_;
  puVar17 = auStack_a8;
  pppuStack_60 = (undefined8 ****)0x0;
  local_res18 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  pppuStack_50 = (undefined8 ****)0xf;
  local_68 = (undefined8 *****)0x0;
  bVar6 = false;
  do {
    pppppuVar13 = param_1;
    if ((undefined8 ****)0xf < param_1[3]) {
      pppppuVar13 = (undefined8 *****)*param_1;
    }
    if (((param_1[2] <= local_res18) ||
        (lVar18 = (longlong)param_1[2] + (longlong)pppppuVar13,
        lVar10 = thunk_FUN_14028cf70((longlong)local_res18 + (longlong)pppppuVar13,lVar18,10),
        lVar10 == lVar18)) ||
       (ppppuVar15 = (undefined8 ****)(lVar10 - (longlong)pppppuVar13),
       ppppuVar15 == (undefined8 ****)0xffffffffffffffff)) {
      ppppuVar15 = param_1[2];
    }
    ppppuVar16 = (undefined8 ****)local_res18;
    pppppuVar13 = param_1;
    if ((undefined8 ****)0xf < param_1[3]) {
      pppppuVar13 = (undefined8 *****)*param_1;
    }
    for (; (ppppuVar16 < ppppuVar15 &&
           ((*(char *)((longlong)pppppuVar13 + (longlong)ppppuVar16) == ' ' ||
            (*(char *)((longlong)pppppuVar13 + (longlong)ppppuVar16) == '\t'))));
        ppppuVar16 = (undefined8 ****)((longlong)ppppuVar16 + 1)) {
    }
    pppppuVar13 = param_1;
    if ((undefined8 ****)0xf < param_1[3]) {
      pppppuVar13 = (undefined8 *****)*param_1;
    }
    if ((ulonglong)((longlong)ppppuVar15 - (longlong)ppppuVar16) < 5) {
LAB_1400f41f9:
      bVar5 = false;
      bVar3 = false;
      if (bVar6) goto LAB_1400f420f;
    }
    else {
      if (param_1[2] < ppppuVar16) {
        FUN_1400fa6a0();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = (longlong)param_1[2] - (longlong)ppppuVar16;
      _Size = 5;
      if (uVar11 < 5) {
        _Size = uVar11;
      }
      iVar9 = memcmp((void *)((longlong)pppppuVar13 + (longlong)ppppuVar16),"const",_Size);
      if ((iVar9 != 0) || (_Size < 5)) goto LAB_1400f41f9;
      if ((undefined8 ****)((longlong)ppppuVar16 + 5U) != ppppuVar15) {
        bVar2 = *(byte *)((longlong)pppppuVar13 + (longlong)ppppuVar16 + 5);
        iVar9 = isalnum((uint)bVar2);
        if ((iVar9 != 0) || (bVar2 == 0x5f)) goto LAB_1400f41f9;
      }
      pppuVar8 = pppuStack_50;
      bVar5 = true;
      if (!bVar6) {
        local_70 = param_1[2] + 8;
        if (pppuStack_50 < local_70) {
          local_78 = local_58;
          if (0x7fffffffffffffffU - (longlong)local_58 <
              (ulonglong)((longlong)local_70 - (longlong)local_58)) goto LAB_1400f4449;
          local_res8 = (undefined8 ***)((ulonglong)local_70 | 0xf);
          if (local_res8 < (undefined8 ****)0x8000000000000000) {
            if ((undefined8 ****)(0x7fffffffffffffff - ((ulonglong)pppuStack_50 >> 1)) <
                pppuStack_50) {
              local_res8 = (undefined8 ****)0x7fffffffffffffff;
              ppppuVar12 = (undefined8 ****)0x8000000000000027;
              goto LAB_1400f40be;
            }
            ppppuVar12 = (undefined8 ****)(((ulonglong)pppuStack_50 >> 1) + (longlong)pppuStack_50);
            if (local_res8 < ppppuVar12) {
              local_res8 = ppppuVar12;
            }
            ppppuVar1 = (undefined8 ****)((longlong)local_res8 + 1);
            pppppuVar13 = (undefined8 *****)0x0;
            if (ppppuVar1 != (undefined8 ****)0x0) {
              if ((undefined8 ****)0xfff < ppppuVar1) {
                ppppuVar12 = (undefined8 ****)(local_res8 + 5);
                if (ppppuVar12 <= ppppuVar1) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1400f40be;
              }
              pppppuVar13 = (undefined8 *****)FUN_14028af20(ppppuVar1);
            }
          }
          else {
            local_res8 = (undefined8 ****)0x7fffffffffffffff;
            ppppuVar12 = (undefined8 ****)0x8000000000000027;
LAB_1400f40be:
            ppppuVar12 = (undefined8 ****)FUN_14028af20(ppppuVar12);
            if (ppppuVar12 == (undefined8 ****)0x0) goto LAB_1400f4442;
            pppppuVar13 = (undefined8 *****)((longlong)ppppuVar12 + 0x27U & 0xffffffffffffffe0);
            pppppuVar13[-1] = ppppuVar12;
          }
          ppppuVar12 = local_68;
          local_58 = local_70;
          pppuStack_50 = local_res8;
          if (pppuVar8 < (undefined8 ****)0x10) {
            FUN_1404210f0(pppppuVar13,&local_68,(longlong)local_78 + 1U);
          }
          else {
            FUN_1404210f0(pppppuVar13,local_68,(longlong)local_78 + 1U);
            if ((longlong)pppuVar8 + 1U < 0x1000) {
              thunk_FUN_14028af80(ppppuVar12);
            }
            else {
              if (0x1f < (ulonglong)((longlong)ppppuVar12 + (-8 - (longlong)ppppuVar12[-1])))
              goto LAB_1400f4442;
              thunk_FUN_14028af80(ppppuVar12[-1],pppuVar8 + 5);
            }
          }
          local_58 = local_78;
          local_68 = pppppuVar13;
        }
        pppppuVar13 = param_1;
        if ((undefined8 ****)0xf < param_1[3]) {
          pppppuVar13 = (undefined8 *****)*param_1;
        }
        if ((undefined8 ****)((longlong)pppuStack_50 - (longlong)local_58) < local_res18) {
          local_88 = local_res18;
          FUN_140053110(&local_68,local_res18,uVar7);
          bVar6 = true;
          bVar5 = true;
        }
        else {
          pppppuVar14 = &local_68;
          if ((undefined8 ****)0xf < pppuStack_50) {
            pppppuVar14 = (undefined8 *****)local_68;
          }
          lVar18 = (longlong)pppppuVar14 + (longlong)local_58;
          local_58 = (undefined8 ****)((longlong)local_58 + (longlong)local_res18);
          FUN_1404210f0(lVar18,pppppuVar13,local_res18);
          bVar6 = true;
          bVar5 = true;
          *(undefined1 *)((longlong)local_res18 + lVar18) = 0;
        }
      }
LAB_1400f420f:
      pppppuVar13 = param_1;
      if ((undefined8 ****)0xf < param_1[3]) {
        pppppuVar13 = (undefined8 *****)*param_1;
      }
      ppppuVar12 = (undefined8 ****)((longlong)ppppuVar16 - (longlong)local_res18);
      if ((undefined8 ****)((longlong)pppuStack_50 - (longlong)local_58) < ppppuVar12) {
        local_88 = ppppuVar12;
        FUN_140053110(&local_68,ppppuVar12,uVar7);
      }
      else {
        pppppuVar14 = &local_68;
        if ((undefined8 ****)0xf < pppuStack_50) {
          pppppuVar14 = (undefined8 *****)local_68;
        }
        lVar18 = (longlong)pppppuVar14 + (longlong)local_58;
        local_58 = (undefined8 ****)((longlong)local_58 + (longlong)ppppuVar12);
        FUN_1404210f0(lVar18,(longlong)pppppuVar13 + (longlong)local_res18,ppppuVar12);
        *(undefined1 *)((longlong)ppppuVar12 + lVar18) = 0;
      }
      if (bVar5) {
        if ((ulonglong)((longlong)pppuStack_50 - (longlong)local_58) < 7) {
          local_88 = (undefined8 ****)0x7;
          FUN_140053110(&local_68,7,uVar7,"static ");
        }
        else {
          pppppuVar13 = &local_68;
          if ((undefined8 ****)0xf < pppuStack_50) {
            pppppuVar13 = (undefined8 *****)local_68;
          }
          lVar18 = (longlong)pppppuVar13 + (longlong)local_58;
          local_58 = (undefined8 ****)((longlong)local_58 + 7);
          FUN_1404210f0(lVar18,"static ",7);
          *(undefined1 *)(lVar18 + 7) = 0;
        }
      }
      ppppuVar12 = (undefined8 ****)
                   ((longlong)ppppuVar15 +
                   ((ulonglong)(ppppuVar15 < param_1[2]) - (longlong)ppppuVar16));
      pppppuVar13 = param_1;
      if ((undefined8 ****)0xf < param_1[3]) {
        pppppuVar13 = (undefined8 *****)*param_1;
      }
      bVar3 = bVar6;
      if ((undefined8 ****)((longlong)pppuStack_50 - (longlong)local_58) < ppppuVar12) {
        local_88 = ppppuVar12;
        FUN_140053110(&local_68,ppppuVar12,uVar7);
      }
      else {
        pppppuVar14 = &local_68;
        if ((undefined8 ****)0xf < pppuStack_50) {
          pppppuVar14 = (undefined8 *****)local_68;
        }
        lVar18 = (longlong)pppppuVar14 + (longlong)local_58;
        local_58 = (undefined8 ****)((longlong)local_58 + (longlong)ppppuVar12);
        FUN_1404210f0(lVar18,(longlong)pppppuVar13 + (longlong)ppppuVar16,ppppuVar12);
        *(undefined1 *)((longlong)ppppuVar12 + lVar18) = 0;
      }
    }
    local_res18 = (undefined8 ***)((longlong)ppppuVar15 + 1);
  } while (local_res18 <= param_1[2]);
  if ((bVar3) && (param_1 != &local_68)) {
    ppppuVar15 = param_1[3];
    if ((undefined8 ****)0xf < ppppuVar15) {
      ppppuVar12 = *param_1;
      ppppuVar16 = (undefined8 ****)((longlong)ppppuVar15 + 1);
      if ((undefined8 ****)0xfff < ppppuVar16) {
        if (0x1f < (ulonglong)((longlong)ppppuVar12 + (-8 - (longlong)ppppuVar12[-1]))) {
LAB_1400f4442:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar17 = auStack_a0;
LAB_1400f4449:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_1400f444e;
          FUN_1400172e0();
        }
        ppppuVar16 = ppppuVar15 + 5;
        ppppuVar12 = (undefined8 ****)ppppuVar12[-1];
      }
      thunk_FUN_14028af80(ppppuVar12,ppppuVar16);
    }
    *param_1 = local_68;
    param_1[1] = (undefined8 ****)pppuStack_60;
    param_1[2] = (undefined8 ****)local_58;
    param_1[3] = (undefined8 ****)pppuStack_50;
  }
  else if ((undefined8 ****)0xf < pppuStack_50) {
    ppppuVar15 = (undefined8 ****)((longlong)pppuStack_50 + 1);
    pppppuVar13 = (undefined8 *****)local_68;
    if ((undefined8 ****)0xfff < ppppuVar15) {
      pppppuVar13 = (undefined8 *****)local_68[-1];
      if (0x1f < (ulonglong)((longlong)local_68 + (-8 - (longlong)pppppuVar13))) goto LAB_1400f4442;
      ppppuVar15 = (undefined8 ****)(pppuStack_50 + 5);
    }
    thunk_FUN_14028af80(pppppuVar13,ppppuVar15);
  }
  return;
}

