// Function: FUN_140100dc0
// Addr: 140100dc0
// Size: 119 bytes


void FUN_140100dc0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStackX_8;
  undefined8 local_res10;
  int iStackX_18;
  int iStackX_20;
  char acStack_788 [40];
  undefined1 auStack_760 [64];
  undefined1 auStack_720 [32];
  undefined1 auStack_700 [56];
  undefined1 local_6c8;
  undefined7 uStack_6c7;
  undefined8 uStack_6b8;
  ulonglong uStack_6b0;
  undefined1 auStack_6a8 [608];
  char *pcStack_448;
  undefined2 uStack_440;
  undefined1 auStack_438 [64];
  undefined **appuStack_3f8 [7];
  undefined ***pppuStack_3c0;
  undefined1 auStack_3b8 [888];
  
  uVar11 = *(ulonglong *)(param_1 + 0x118);
  plVar12 = (longlong *)(param_1 + 0x100);
  lVar5 = *(longlong *)(param_1 + 0x110);
  if (0xf < uVar11) {
    plVar12 = (longlong *)*plVar12;
  }
  if (*(ulonglong *)(param_1 + 0x298) < 0x10) {
    lVar6 = param_1 + 0x280;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x280);
  }
  local_res10 = param_2;
  if ((*(longlong *)(param_1 + 0x290) != lVar5) ||
     ((*(longlong *)(param_1 + 0x290) != 0 &&
      (iVar3 = func_0x0001404210c0(lVar6,plVar12), iVar3 != 0)))) {
    puVar4 = (undefined8 *)(param_1 + 0x100);
    if (param_1 != param_1 + -0x180) {
      if (0xf < uVar11) {
        puVar4 = (undefined8 *)*puVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(param_1 + 0x280,puVar4,lVar5);
    }
    *(undefined4 *)(param_1 + 0x278) = 0;
    func_0x000140039e40(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    puVar4 = (undefined8 *)(param_1 + 0x2e0);
    if (0xf < *(ulonglong *)(param_1 + 0x2f8)) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined1 *)puVar4 = 0;
  }
  iVar9 = 1;
  LOCK();
  iVar3 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  plVar12 = ThreadLocalStoragePointer;
  do {
    ThreadLocalStoragePointer = plVar12;
    if (iVar3 == 0) {
      uStackX_8._0_4_ = *(int *)(param_1 + 0x14c);
      iStackX_18 = *(int *)(param_1 + 0x150);
      iVar3 = *(int *)(param_1 + 0x144);
      iVar9 = *(int *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x140) = 0;
      if ((*(int *)(*plVar12 + 0x130) < DAT_1404e9310) &&
         (FUN_14028b210(&DAT_1404e9310), DAT_1404e9310 == -1)) {
        acStack_788[0x10] = '\b';
        acStack_788[0x11] = '\0';
        acStack_788[0x12] = '\0';
        acStack_788[0x13] = '\0';
        acStack_788[0x14] = '\0';
        acStack_788[0x15] = '\0';
        acStack_788[0x16] = '\0';
        acStack_788[0x17] = '\0';
        acStack_788[0] = s_mfEngine_140477000[0];
        acStack_788[1] = s_mfEngine_140477000[1];
        acStack_788[2] = s_mfEngine_140477000[2];
        acStack_788[3] = s_mfEngine_140477000[3];
        acStack_788[4] = s_mfEngine_140477000[4];
        acStack_788[5] = s_mfEngine_140477000[5];
        acStack_788[6] = s_mfEngine_140477000[6];
        acStack_788[7] = s_mfEngine_140477000[7];
        pcStack_448 = "Media Engine Dx11";
        acStack_788[0x18] = '\x0f';
        acStack_788[0x19] = '\0';
        acStack_788[0x1a] = '\0';
        acStack_788[0x1b] = '\0';
        acStack_788[0x1c] = '\0';
        acStack_788[0x1d] = '\0';
        acStack_788[0x1e] = '\0';
        acStack_788[0x1f] = '\0';
        acStack_788[8] = '\0';
        acStack_788[9] = '\0';
        acStack_788[10] = '\0';
        acStack_788[0xb] = '\0';
        acStack_788[0xc] = '\0';
        acStack_788[0xd] = '\0';
        acStack_788[0xe] = '\0';
        acStack_788[0xf] = '\0';
        uStack_440 = 0x101;
        FUN_140031780(auStack_438);
        appuStack_3f8[0] = &PTR_UNWIND_INFO_140104288_UnwindCodes_2__OffsetInProlog_140488a10;
        pppuStack_3c0 = appuStack_3f8;
                    /* WARNING: Subroutine does not return */
        FUN_140017090(auStack_3b8,acStack_788);
      }
      if (*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 5 != 0) {
        iStackX_20 = 0;
        iStackX_18 = iStackX_18 - iVar9;
        uStackX_8 = CONCAT44(uStackX_8._4_4_,(int)uStackX_8 - iVar3);
        do {
          iVar3 = iStackX_20;
          plVar12 = *(longlong **)(param_1 + 0x160);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x20))();
            *(longlong *)(param_1 + 0x160) = 0;
          }
          uVar14 = 0xcbf29ce484222325;
          puVar13 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x260));
          uVar11 = puVar13[3];
          uVar15 = puVar13[2];
          puVar4 = puVar13;
          if (0xf < uVar11) {
            puVar4 = (undefined8 *)*puVar13;
          }
          uVar10 = 0;
          if (uVar15 != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar4 + uVar10);
              uVar10 = uVar10 + 1;
              uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
            } while (uVar10 < uVar15);
          }
          lVar5 = func_0x000140011170(param_1 + 0x2a0,auStack_720,puVar13,uVar14);
          if ((*(longlong *)(lVar5 + 8) == 0) ||
             (*(longlong *)(lVar5 + 8) == *(longlong *)(param_1 + 0x2a8))) {
            puVar4 = puVar13;
            if (0xf < uVar11) {
              puVar4 = (undefined8 *)*puVar13;
            }
            uVar11 = 0;
            uVar14 = 0xcbf29ce484222325;
            if (uVar15 != 0) {
              do {
                pbVar1 = (byte *)(uVar11 + (longlong)puVar4);
                uVar11 = uVar11 + 1;
                uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
              } while (uVar11 < uVar15);
            }
            lVar6 = func_0x0001401039a0(uVar11,auStack_700,puVar13,uVar14);
            uVar8 = local_res10;
            lVar5 = DAT_1404e9328;
            if (*(longlong *)(lVar6 + 8) != 0) {
              lVar5 = *(longlong *)(lVar6 + 8);
            }
            if ((lVar5 != DAT_1404e9328) &&
               (((*(uint *)(param_1 + 0x17c) >> 6 & 1) == 0 || (*(char *)(lVar5 + 0x38) == '\0'))))
            {
              uVar7 = FUN_1402d6b70();
              acStack_788[0x10] = '\0';
              acStack_788[0x11] = '\0';
              acStack_788[0x12] = '\0';
              acStack_788[0x13] = '\0';
              acStack_788[0x14] = '\0';
              acStack_788[0x15] = '\0';
              acStack_788[0x16] = '\0';
              acStack_788[0x17] = '\0';
              acStack_788[0x18] = '\0';
              acStack_788[0x19] = '\0';
              acStack_788[0x1a] = '\0';
              acStack_788[0x1b] = '\0';
              acStack_788[0x1c] = '\0';
              acStack_788[0x1d] = '\0';
              acStack_788[0x1e] = '\0';
              acStack_788[0x1f] = '\0';
              acStack_788[0] = '\0';
              acStack_788[1] = '\0';
              acStack_788[2] = '\0';
              acStack_788[3] = '\0';
              acStack_788[4] = '\0';
              acStack_788[5] = '\0';
              acStack_788[6] = '\0';
              acStack_788[7] = '\0';
              acStack_788[8] = '\0';
              acStack_788[9] = '\0';
              acStack_788[10] = '\0';
              acStack_788[0xb] = '\0';
              acStack_788[0xc] = '\0';
              acStack_788[0xd] = '\0';
              acStack_788[0xe] = '\0';
              acStack_788[0xf] = '\0';
              FUN_140016240(acStack_788,uVar8,uVar7);
              uVar8 = FUN_140054050(acStack_788,auStack_6a8);
              puVar13 = (undefined8 *)FUN_140018db0(uVar8);
              puVar4 = puVar13;
              if (0xf < (ulonglong)puVar13[3]) {
                puVar4 = (undefined8 *)*puVar13;
              }
              uVar11 = 0;
              uVar15 = 0xcbf29ce484222325;
              if (puVar13[2] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)puVar4 + uVar11);
                  uVar11 = uVar11 + 1;
                  uVar15 = (uVar15 ^ *pbVar1) * 0x100000001b3;
                } while (uVar11 < (ulonglong)puVar13[2]);
              }
              func_0x000140011170(lVar5 + 0x40,auStack_760,puVar13,uVar15);
              if (0xf < uStack_6b0) {
                lVar6 = CONCAT71(uStack_6c7,local_6c8);
                uVar11 = uStack_6b0 + 1;
                lVar5 = lVar6;
                if (0xfff < uVar11) {
                  lVar5 = *(longlong *)(lVar6 + -8);
                  if (0x1f < (lVar6 - lVar5) - 8U) {
                    pcVar2 = (code *)swi(0x29);
                    (*pcVar2)(5);
                    /* WARNING: Subroutine does not return */
                    FUN_14028c390();
                  }
                  uVar11 = uStack_6b0 + 0x28;
                }
                func_0x00014028b040(lVar5,uVar11);
              }
              uStack_6b8 = 0;
              uStack_6b0 = 0xf;
              local_6c8 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_140016840(auStack_6a8);
            }
          }
          iStackX_20 = iStackX_20 + 1;
        } while ((ulonglong)(longlong)iStackX_20 <
                 (ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 5));
      }
      if (((*(longlong *)(param_1 + 0x160) == 0) && (*(int *)(param_1 + 0x278) < 0)) &&
         (*(longlong *)(param_1 + 0x68) != 0)) {
        uStackX_8 = 0;
        (*DAT_1404267f0)(*(longlong *)(param_1 + 0x68),0x407,2,(longlong)*(int *)(param_1 + 0x278),1
                         ,0,&uStackX_8);
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x140);
    while (iVar3 != 0) {
      iVar3 = iVar9;
      if (iVar9 == 0) {
code_r0x000140100ed9:
        iVar9 = iVar9 * 2;
      }
      else {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar9 < 0x40) goto code_r0x000140100ed9;
        iVar9 = 0x40;
      }
      iVar3 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar3 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
    plVar12 = ThreadLocalStoragePointer;
  } while( true );
}

