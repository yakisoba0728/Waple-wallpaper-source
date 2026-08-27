// Function: FUN_14016c400
// Addr: 14016c400
// Size: 1020 bytes


ulonglong * FUN_14016c400(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *******pppppppuVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  char *pcVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char local_76;
  undefined2 local_75;
  char local_73 [3];
  undefined8 ******local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar11 = (undefined8 *)*puVar2;
LAB_14016c434:
  do {
    if (puVar11 == puVar2) {
      return param_1;
    }
    plVar14 = puVar11 + 2;
    FUN_1400532a0(param_1,"#define ",8);
    if (0xf < (ulonglong)puVar11[5]) {
      plVar14 = (longlong *)*plVar14;
    }
    FUN_1400532a0(param_1,plVar14,puVar11[4]);
    uVar10 = param_1[2];
    uVar3 = param_1[3];
    if (uVar10 < uVar3) {
      param_1[2] = uVar10 + 1;
      puVar6 = param_1;
      if (0xf < uVar3) {
        puVar6 = (ulonglong *)*param_1;
      }
      *(undefined2 *)((longlong)puVar6 + uVar10) = 0x20;
    }
    else {
      if (uVar10 == 0x7fffffffffffffff) goto LAB_14016c7f2;
      uVar16 = uVar10 + 1 | 0xf;
      if (uVar16 < 0x8000000000000000) {
        if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
          uVar16 = 0x7fffffffffffffff;
          uVar15 = 0x8000000000000027;
          goto LAB_14016c523;
        }
        uVar15 = (uVar3 >> 1) + uVar3;
        if (uVar16 < uVar15) {
          uVar16 = uVar15;
        }
        uVar1 = uVar16 + 1;
        if (uVar1 == 0) {
          uVar15 = 0;
        }
        else {
          if (0xfff < uVar1) {
            uVar15 = uVar16 + 0x28;
            if (uVar15 <= uVar1) goto LAB_14016c7f8;
            goto LAB_14016c523;
          }
          uVar15 = FUN_14028af20(uVar1);
        }
      }
      else {
        uVar16 = 0x7fffffffffffffff;
        uVar15 = 0x8000000000000027;
LAB_14016c523:
        lVar7 = FUN_14028af20(uVar15);
        if (lVar7 == 0) goto LAB_14016c7d7;
        uVar15 = lVar7 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar15 - 8) = lVar7;
      }
      param_1[2] = uVar10 + 1;
      param_1[3] = uVar16;
      if (uVar3 < 0x10) {
        FUN_1404210f0(uVar15,param_1,uVar10);
        *(undefined2 *)(uVar15 + uVar10) = 0x20;
      }
      else {
        uVar16 = *param_1;
        FUN_1404210f0(uVar15,uVar16,uVar10);
        *(undefined2 *)(uVar15 + uVar10) = 0x20;
        if (uVar3 + 1 < 0x1000) {
          thunk_FUN_14028af80(uVar16);
        }
        else {
          if (0x1f < (uVar16 - *(longlong *)(uVar16 - 8)) - 8) goto LAB_14016c7d7;
          thunk_FUN_14028af80(*(longlong *)(uVar16 - 8),uVar3 + 0x28);
        }
      }
      *param_1 = uVar15;
    }
    uVar8 = *(uint *)(puVar11 + 6);
    pcVar13 = local_73;
    if (uVar8 < 10) {
      local_75._1_1_ = (char)uVar8 + '0';
      pcVar13 = (char *)((longlong)&local_75 + 1);
    }
    else {
      do {
        pcVar12 = pcVar13;
        pcVar13 = pcVar12 + -2;
        uVar5 = uVar8 / 100;
        *(undefined2 *)pcVar13 = *(undefined2 *)(&DAT_140474390 + (ulonglong)(uVar8 % 100) * 2);
        uVar8 = uVar5;
      } while (9 < uVar5);
      if (uVar5 != 0) {
        pcVar13 = pcVar12 + -3;
        *pcVar13 = (char)uVar5 + '0';
      }
    }
    FUN_140053d10(local_70,pcVar13,local_73);
    pppppppuVar9 = local_70;
    if (0xf < local_58) {
      pppppppuVar9 = (undefined8 *******)local_70[0];
    }
    FUN_1400532a0(param_1,pppppppuVar9,local_60);
    if (0xf < local_58) {
      uVar10 = local_58 + 1;
      pppppppuVar9 = (undefined8 *******)local_70[0];
      if (0xfff < uVar10) {
        pppppppuVar9 = (undefined8 *******)local_70[0][-1];
        if (0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)pppppppuVar9)))
        goto LAB_14016c7d7;
        uVar10 = local_58 + 0x28;
      }
      thunk_FUN_14028af80(pppppppuVar9,uVar10);
    }
    uVar10 = param_1[2];
    uVar3 = param_1[3];
    if (uVar10 < uVar3) {
      param_1[2] = uVar10 + 1;
      puVar6 = param_1;
      if (0xf < uVar3) {
        puVar6 = (ulonglong *)*param_1;
      }
      *(undefined2 *)((longlong)puVar6 + uVar10) = 10;
      puVar11 = (undefined8 *)*puVar11;
      goto LAB_14016c434;
    }
    if (uVar10 == 0x7fffffffffffffff) {
LAB_14016c7f2:
                    /* WARNING: Subroutine does not return */
      FUN_1400172e0();
    }
    uVar16 = uVar10 + 1 | 0xf;
    if (uVar16 < 0x8000000000000000) {
      if (0x7fffffffffffffff - (uVar3 >> 1) < uVar3) {
        uVar16 = 0x7fffffffffffffff;
        uVar15 = 0x8000000000000027;
        goto LAB_14016c72b;
      }
      uVar15 = (uVar3 >> 1) + uVar3;
      if (uVar16 < uVar15) {
        uVar16 = uVar15;
      }
      uVar1 = uVar16 + 1;
      if (uVar1 == 0) {
        uVar15 = 0;
      }
      else {
        if (0xfff < uVar1) {
          uVar15 = uVar16 + 0x28;
          if (uVar15 <= uVar1) {
LAB_14016c7f8:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          goto LAB_14016c72b;
        }
        uVar15 = FUN_14028af20(uVar1);
      }
    }
    else {
      uVar16 = 0x7fffffffffffffff;
      uVar15 = 0x8000000000000027;
LAB_14016c72b:
      lVar7 = FUN_14028af20(uVar15);
      if (lVar7 == 0) goto LAB_14016c7d7;
      uVar15 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar15 - 8) = lVar7;
    }
    param_1[2] = uVar10 + 1;
    param_1[3] = uVar16;
    if (uVar3 < 0x10) {
      FUN_1404210f0(uVar15,param_1,uVar10);
      *(undefined2 *)(uVar15 + uVar10) = 10;
      *param_1 = uVar15;
      puVar11 = (undefined8 *)*puVar11;
    }
    else {
      uVar16 = *param_1;
      FUN_1404210f0(uVar15,uVar16,uVar10);
      *(undefined2 *)(uVar15 + uVar10) = 10;
      if (uVar3 + 1 < 0x1000) {
        thunk_FUN_14028af80(uVar16);
        *param_1 = uVar15;
        puVar11 = (undefined8 *)*puVar11;
      }
      else {
        if (0x1f < (uVar16 - *(longlong *)(uVar16 - 8)) - 8) {
LAB_14016c7d7:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          return param_1;
        }
        thunk_FUN_14028af80(*(longlong *)(uVar16 - 8),uVar3 + 0x28);
        *param_1 = uVar15;
        puVar11 = (undefined8 *)*puVar11;
      }
    }
  } while( true );
}

