// Function: FUN_1400e8a10
// Addr: 1400e8a10
// Size: 55 bytes


undefined8 FUN_1400e8a10(longlong *param_1,char param_2)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined8 *******pppppppuVar16;
  uint uVar17;
  undefined8 *******pppppppuVar18;
  uint *puVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 ******ppppppuStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  undefined *puStack_30;
  
  iVar2 = (int)param_1[0xe];
  if (iVar2 == 0x5c) {
    if ((*(uint *)(param_1 + 0xc) >> 0x14 & 1) != 0) {
      puStack_30 = (undefined *)0x1400e8a3c;
      FUN_1400e5810();
      if ((((ulonglong)param_1[0xc] >> 0xd & 1) != 0) &&
         (*(char *)((longlong)param_1 + 0x75) == 'b')) {
        puStack_30 = (undefined *)0x1400e8a55;
        FUN_1400e5810(param_1);
        *(undefined1 *)((longlong)param_1 + 0x76) = 8;
        return 1;
      }
      if ((param_1[0xc] & 0x80080U) != 0) {
        cVar5 = *(char *)((longlong)param_1 + 0x75);
        if ((byte)(cVar5 - 0x30U) < 10) {
          *(int *)((longlong)param_1 + 0x6c) = cVar5 + -0x30;
          if (cVar5 != '/') {
            puStack_30 = (undefined *)0x1400e8a8f;
            uVar20 = FUN_1400e5810(param_1);
            if ((((*(uint *)(param_1 + 0xc) >> 0x13 & 1) != 0) &&
                (*(int *)((longlong)param_1 + 0x6c) == 0)) &&
               (9 < (byte)(*(char *)((longlong)param_1 + 0x75) - 0x30U))) {
              *(undefined1 *)((longlong)param_1 + 0x76) = 0;
              return 1;
            }
            puStack_30 = &UNK_1400e8bc2;
            func_0x0001400e7590(uVar20,2);
            pcVar4 = (code *)swi(3);
            uVar8 = (*pcVar4)();
            return uVar8;
          }
        }
        else {
          *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
        }
      }
      puStack_30 = (undefined *)0x1400e8ada;
      cVar5 = FUN_1400e7e20(param_1,1);
      if (cVar5 != '\0') {
        return 1;
      }
      uVar20 = extraout_XMM0_Da;
      if ((*(uint *)(param_1 + 0xc) >> 0x10 & 1) != 0) {
        puStack_30 = (undefined *)0x1400e8afa;
        cVar5 = func_0x0001400e7bb0(param_1,0);
        uVar20 = extraout_XMM0_Da_00;
        if (cVar5 != '\0') {
          return 2;
        }
      }
      puStack_30 = &UNK_1400e8bcd;
      func_0x0001400e7590(uVar20,2);
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
  }
  else {
    if (iVar2 == 0x5b) {
      uVar6 = *(undefined1 *)((longlong)param_1 + 0x75);
      puStack_30 = (undefined *)0x1400e8b25;
      FUN_1400e5810();
      uVar15 = *(uint *)(param_1 + 0xe);
      if ((0x3d < uVar15) || ((0x2400400000000000U >> ((ulonglong)uVar15 & 0x3f) & 1) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x76) = uVar6;
        return 1;
      }
      puStack_30 = &UNK_1400e8b45;
      FUN_1400e5810(param_1);
      uVar11 = *(uint *)(param_1 + 0xe);
      lVar10 = *param_1;
      if (uVar11 == 0x3a) {
        uVar11 = 0x3a;
      }
      else {
        do {
          if (((uVar11 == 0x3d) || (uVar11 == 0x2e)) || (uVar11 == 0xffffffff)) break;
          FUN_1400e5810(param_1);
          uVar11 = *(uint *)(param_1 + 0xe);
        } while (uVar11 != 0x3a);
      }
      if (uVar11 != uVar15) {
        func_0x0001400e7590(uVar11,uVar15 == 0x3a);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      lVar3 = *param_1;
      uVar20 = FUN_1400e5810(param_1);
      if ((int)param_1[0xe] != 0x5d) {
        func_0x0001400e7590(uVar20,uVar15 == 0x3a);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      FUN_1400e5810(param_1);
      if (uVar15 == 0x3a) {
        sVar7 = FUN_1400e5340(param_1[0xb],lVar10,lVar3,*(uint *)(param_1 + 0xd) >> 8 & 0xffffff01);
        if (sVar7 != 0) {
          func_0x0001400e9040(param_1 + 7,sVar7,0);
          return 2;
        }
        func_0x0001400e7590(extraout_XMM0_Da_01,1);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      if ((lVar10 == lVar3) || (lVar10 + 1 != lVar3)) {
        uVar20 = 0;
        uStack_38 = 0;
        uStack_40 = 0;
        ppppppuStack_48 = (undefined8 *******)0x0;
        puStack_30 = (undefined *)0xf;
      }
      else {
        uStack_38 = 0;
        puStack_30 = (undefined *)0x0;
        ppppppuStack_48 = (undefined8 *******)0x0;
        uStack_40 = 0;
        uVar20 = func_0x000140017550(&ppppppuStack_48,lVar10,lVar3 - lVar10);
      }
      if (uStack_38 == 0) {
        func_0x0001400e7590(uVar20,0);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      if (0xffffffff < uStack_38) {
        func_0x0001400e7590(uVar20,9);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      pppppppuVar16 = &ppppppuStack_48;
      if (0xf < puStack_30) {
        pppppppuVar16 = (undefined8 *******)ppppppuStack_48;
      }
      if ((uStack_38 == 1) && (uVar15 == 0x2e)) {
        *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)pppppppuVar16;
        if (0xf < puStack_30) {
          uVar12 = (longlong)puStack_30 + 1;
          pppppppuVar16 = (undefined8 *******)ppppppuStack_48;
          if (0xfff < uVar12) {
            pppppppuVar16 = (undefined8 *******)ppppppuStack_48[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)ppppppuStack_48 + (-8 - (longlong)pppppppuVar16))) {
code_r0x0001400e9ee7:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar14 = auStack_60;
code_r0x0001400e9eee:
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar14 + -8) = &UNK_1400e9ef8;
              FUN_14028c410(9);
            }
            uVar12 = (longlong)puStack_30 + 0x28;
          }
          func_0x00014028b040(pppppppuVar16,uVar12);
        }
        uVar8 = 1;
      }
      else {
        pppppppuVar1 = (undefined8 *******)((longlong)pppppppuVar16 + uStack_38);
        pppppppuVar18 = pppppppuVar16;
        if ((*(uint *)(param_1 + 0xd) & 0x100) != 0) {
          do {
            uVar6 = (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x20))
                              (*(longlong **)(param_1[0xb] + 8),*(undefined1 *)pppppppuVar18);
            *(undefined1 *)pppppppuVar18 = uVar6;
            pppppppuVar18 = (undefined8 *******)((longlong)pppppppuVar18 + 1);
          } while (pppppppuVar18 != pppppppuVar1);
        }
        if (uVar15 == 0x3d) {
          FUN_1400e9f30();
          pcVar4 = (code *)swi(3);
          uVar8 = (*pcVar4)();
          return uVar8;
        }
        puVar19 = (uint *)(param_1[8] + 0x20);
        uVar15 = (int)pppppppuVar1 - (int)pppppppuVar16;
        puVar13 = (uint *)0x0;
        if (*(longlong *)(param_1[8] + 0x20) != 0) {
          do {
            puVar13 = *(uint **)puVar19;
            if (*puVar13 <= uVar15) {
              if (uVar15 != *puVar13) goto code_r0x0001400e9de8;
              goto code_r0x0001400e9e10;
            }
            puVar19 = puVar13 + 6;
          } while (*(longlong *)(puVar13 + 6) != 0);
          puVar13 = (uint *)0x0;
        }
code_r0x0001400e9de8:
        puVar9 = (uint *)func_0x00014028aff0(0x20);
        *puVar9 = uVar15;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(uint **)puVar19 = puVar9;
        *(uint **)(puVar9 + 6) = puVar13;
        puVar13 = *(uint **)puVar19;
code_r0x0001400e9e10:
        do {
          uVar6 = *(undefined1 *)pppppppuVar16;
          pppppppuVar16 = (undefined8 *******)((longlong)pppppppuVar16 + 1);
          uVar15 = puVar13[2];
          if (uVar15 <= puVar13[3]) {
            uVar11 = uVar15 >> 1;
            if (uVar11 < 0x11) {
              uVar11 = 0x10;
code_r0x0001400e9ed3:
              if (~uVar11 <= uVar15) goto code_r0x0001400e9e34;
              uVar17 = uVar15 + uVar11;
            }
            else {
              if (uVar11 != 0xffffffff) goto code_r0x0001400e9ed3;
code_r0x0001400e9e34:
              uVar17 = 0xffffffff;
              uVar11 = ~uVar15;
            }
            puVar14 = auStack_68;
            if ((uVar11 == 0) ||
               (lVar10 = func_0x0001402cb2b0(*(undefined8 *)(puVar13 + 4),uVar17),
               puVar14 = auStack_68, lVar10 == 0)) goto code_r0x0001400e9eee;
            *(longlong *)(puVar13 + 4) = lVar10;
            puVar13[2] = uVar17;
          }
          *(undefined1 *)((ulonglong)puVar13[3] + *(longlong *)(puVar13 + 4)) = uVar6;
          puVar13[3] = puVar13[3] + 1;
        } while (pppppppuVar16 != pppppppuVar1);
        if (0xf < puStack_30) {
          uVar12 = (longlong)puStack_30 + 1;
          pppppppuVar16 = (undefined8 *******)ppppppuStack_48;
          if (0xfff < uVar12) {
            pppppppuVar16 = (undefined8 *******)ppppppuStack_48[-1];
            if ((undefined1 *)0x1f <
                (undefined1 *)((longlong)ppppppuStack_48 + (-8 - (longlong)pppppppuVar16)))
            goto code_r0x0001400e9ee7;
            uVar12 = (longlong)puStack_30 + 0x28;
          }
          func_0x00014028b040(pppppppuVar16,uVar12);
        }
        uVar8 = 2;
      }
      return uVar8;
    }
    if (iVar2 == 0x5d) {
      if (((*(uint *)(param_1 + 0xc) >> 0x1d & 1) == 0) || (param_2 == '\0')) {
        return 0;
      }
    }
    else if (iVar2 == -1) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)((longlong)param_1 + 0x75);
  puStack_30 = &UNK_1400e8b96;
  FUN_1400e5810();
  return 1;
}

