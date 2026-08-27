// Function: FUN_140115b90
// Addr: 140115b90
// Size: 2208 bytes


ulonglong FUN_140115b90(HWND param_1,uint param_2,ulonglong param_3,undefined4 *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  LONG_PTR LVar9;
  HDC pHVar10;
  HBRUSH hbr;
  ulonglong uVar11;
  HWND hWnd;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  ushort uVar19;
  longlong *plVar20;
  RECT local_a8;
  tagPAINTSTRUCT local_98;
  
  if (param_2 < 0x40c) {
    if (param_2 == 0x40b) {
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar9 != 0) {
        if (param_3 == 0) {
          FUN_1400604d0(LVar9 + 0x160);
        }
        *(bool *)(LVar9 + 8) = param_3 == 1;
        return 0;
      }
    }
    else if (param_2 < 0x15) {
      if (param_2 == 0x14) {
        return 1;
      }
      if (param_2 != 2) {
        if (param_2 == 5) {
          LVar9 = GetWindowLongPtrW(param_1,-0x15);
          if ((LVar9 != 0) && ((param_3 & 0xfffffffffffffffd) == 0)) {
            uVar18 = (uint)((ulonglong)param_4 >> 0x10) & 0xffff;
            uVar19 = 8;
            if (7 < (ushort)param_4) {
              uVar19 = (ushort)param_4;
            }
            lVar16 = *(longlong *)(LVar9 + 0x180);
            *(ushort *)(LVar9 + 0x24c) = uVar19;
            if (uVar18 < 8) {
              uVar18 = 8;
            }
            *(short *)(LVar9 + 0x24e) = (short)uVar18;
            if (lVar16 != 0) {
              if (*(longlong *)(LVar9 + 0x1c0) == 0) {
                FUN_14017f1b0(lVar16,uVar19,uVar18);
              }
              else if (((*(byte *)(LVar9 + 0x1b8) & 2) == 0) &&
                      (cVar6 = FUN_140099770(*(longlong *)(LVar9 + 0x1c0),lVar16 + 0x10,uVar19,
                                             uVar18), cVar6 != '\0')) {
                FUN_14017f1b0(*(undefined8 *)(LVar9 + 0x180),uVar19,uVar18);
                FUN_14017eae0(*(undefined8 *)(LVar9 + 0x180));
              }
              else {
                *(uint *)(LVar9 + 0x1b8) = *(uint *)(LVar9 + 0x1b8) | 2;
                FUN_140098760("DXGI device lost in WM_SIZE.\n");
              }
            }
          }
        }
        else {
          if (param_2 == 0xf) {
            LVar9 = GetWindowLongPtrW(param_1,-0x15);
            if ((LVar9 != 0) &&
               (*(uint *)(LVar9 + 0x1b8) = *(uint *)(LVar9 + 0x1b8) & 0xfffffffe,
               (*(uint *)(LVar9 + 0x1b8) >> 0x1e & 1) != 0)) {
              pHVar10 = BeginPaint(param_1,&local_98);
              local_a8.left = local_98.rcPaint.left;
              local_a8.top = local_98.rcPaint.top;
              local_a8.right = local_98.rcPaint.right;
              local_a8.bottom = local_98.rcPaint.bottom;
              hbr = GetStockObject(4);
              FillRect(pHVar10,&local_a8,hbr);
              EndPaint(param_1,&local_98);
              return 0;
            }
            BeginPaint(param_1,&local_98);
            EndPaint(param_1,&local_98);
            return 0;
          }
          if (param_2 == 0x10) {
            DestroyWindow(param_1);
            return 0;
          }
        }
switchD_140115ecd_caseD_40d:
        uVar11 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
        return uVar11;
      }
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      SetWindowLongPtrW(param_1,-0x15,0);
      if (LVar9 != 0) {
        *(undefined8 *)(LVar9 + 0x1c8) = 0;
        return 0;
      }
    }
    else if (param_2 != 0x20) {
      if (param_2 == 0x46) {
        LVar9 = GetWindowLongPtrW(param_1,-0x15);
        if (((LVar9 != 0) && (param_4 != (undefined4 *)0x0)) && (((byte)param_4[8] & 3) != 3)) {
          FUN_1400fdcc0(LVar9,&local_a8);
          if ((0 < local_a8.right - local_a8.left) && (0 < local_a8.bottom - local_a8.top)) {
            param_4[7] = local_a8.bottom - local_a8.top;
            param_4[6] = local_a8.right - local_a8.left;
            param_4[4] = local_a8.left;
            param_4[5] = local_a8.top;
            return 0;
          }
        }
      }
      else {
        if (param_2 == 0x83) {
          return 0;
        }
        if (param_2 == 0x200) {
          hWnd = GetParent(param_1);
          BVar7 = PostMessageW(hWnd,0x200,param_3,(LPARAM)param_4);
          return (longlong)BVar7;
        }
      }
      goto switchD_140115ecd_caseD_40d;
    }
  }
  else {
    switch(param_2) {
    case 0x40c:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar9 != 0) {
        *(bool *)(LVar9 + 9) = param_3 == 1;
        return 0;
      }
      break;
    default:
      goto switchD_140115ecd_caseD_40d;
    case 0x40e:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar9 != 0) {
        FUN_14010b900(LVar9,param_4);
        return 0;
      }
      break;
    case 0x465:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar9 != 0) {
        FUN_14017eb50(*(undefined8 *)(LVar9 + 0x180));
        FUN_140113c80(LVar9,param_3);
        if (*(longlong *)(LVar9 + 0xa8) != *(longlong *)(LVar9 + 0xb0)) {
          local_98.fErase = CONCAT31(local_98.fErase._1_3_,7);
          local_98.fErase = local_98.fErase & 0xfffffeff;
          local_98.fIncUpdate = 0;
          local_98.rgbReserved[0] = '\0';
          local_98.rgbReserved[1] = '\0';
          local_98.rgbReserved[2] = '\0';
          local_98.rgbReserved[3] = '\0';
          local_98.rcPaint.top = 0;
          local_98.rcPaint.right = 0;
          local_98.rcPaint.bottom = 0;
          local_98.fRestore = 0;
          pHVar10 = (HDC)FUN_14028af20(0x10);
          *(longlong *)pHVar10 = 0;
          *(longlong *)(pHVar10 + 2) = 0;
          lVar16 = FUN_14028af20(0x58);
          *(longlong *)lVar16 = lVar16;
          *(longlong *)(lVar16 + 8) = lVar16;
          *(longlong *)(lVar16 + 0x10) = lVar16;
          *(undefined2 *)(lVar16 + 0x18) = 0x101;
          *(longlong *)pHVar10 = lVar16;
          local_98.hdc = pHVar10;
          FUN_14010d170(LVar9,&local_98);
          uVar14 = FUN_140086de0(LVar9 + 0x38,"initalwproperties","");
          FUN_140109f80(&local_98,uVar14);
          lVar16 = FUN_140086de0(LVar9 + 0x38,"wproperties","");
          if ((*(char *)(lVar16 + 8) == '\a') && ((char)local_98.fErase == '\a')) {
            plVar3 = *(longlong **)local_98.hdc;
            plVar20 = (longlong *)*plVar3;
            while (plVar20 != plVar3) {
              pcVar1 = (char *)plVar20[4];
              sVar12 = strlen(pcVar1);
              lVar15 = FUN_140087490(lVar16,pcVar1,pcVar1 + sVar12);
              if (lVar15 == 0) {
                pcVar1 = (char *)plVar20[4];
                sVar12 = strlen(pcVar1);
                lVar15 = FUN_140087490(&local_98,pcVar1,pcVar1 + sVar12);
                if (lVar15 == 0) {
                  lVar15 = FUN_140084ac0();
                }
                pcVar1 = (char *)plVar20[4];
                sVar12 = strlen(pcVar1);
                uVar14 = FUN_140086de0(lVar16,pcVar1,pcVar1 + sVar12);
                FUN_140085520(uVar14,lVar15);
              }
              plVar4 = (longlong *)plVar20[2];
              if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
                cVar6 = *(char *)(*plVar4 + 0x19);
                plVar20 = plVar4;
                while (cVar6 == '\0') {
                  plVar20 = (longlong *)*plVar20;
                  cVar6 = *(char *)(*plVar20 + 0x19);
                }
              }
              else {
                cVar6 = *(char *)(plVar20[1] + 0x19);
                plVar5 = (longlong *)plVar20[1];
                plVar4 = plVar20;
                while ((plVar20 = plVar5, cVar6 == '\0' && (plVar4 == (longlong *)plVar20[2]))) {
                  cVar6 = *(char *)(plVar20[1] + 0x19);
                  plVar5 = (longlong *)plVar20[1];
                  plVar4 = plVar20;
                }
              }
            }
          }
          puVar2 = *(undefined8 **)(LVar9 + 0xb0);
          for (puVar17 = *(undefined8 **)(LVar9 + 0xa8); puVar17 != puVar2; puVar17 = puVar17 + 1) {
            uVar14 = *puVar17;
            uVar13 = FUN_140086de0(LVar9 + 0x38,"wproperties","");
            FUN_14011cf10(uVar14,uVar13);
          }
          FUN_140085440(&local_98);
          return 0;
        }
      }
      break;
    case 0x466:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if ((LVar9 != 0) && (*(longlong *)(LVar9 + 0x180) != 0)) {
        FUN_140115280(LVar9,param_3);
        return 0;
      }
      break;
    case 0x467:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (LVar9 != 0) {
        FUN_1401154c0(LVar9,param_3);
        return 0;
      }
      break;
    case 0x469:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if ((LVar9 != 0) && (lVar16 = **(longlong **)(LVar9 + 0x180), lVar16 != 0)) {
        plVar3 = *(longlong **)(lVar16 + 0x160);
        plVar20 = *(longlong **)(lVar16 + 0x158);
        if (plVar20 != plVar3) {
          do {
            plVar4 = (longlong *)*plVar20;
            iVar8 = (**(code **)(*plVar4 + 0x60))(plVar4);
            if (iVar8 == 7) {
              if (param_3 == 1) {
                cVar6 = FUN_1401f6da0(plVar4);
                uVar18 = *(uint *)(plVar4 + 0x62) | 0x10000000;
                if (cVar6 == '\0') {
                  uVar18 = *(uint *)(plVar4 + 0x62) & 0xefffffff;
                }
                *(uint *)(plVar4 + 0x62) = uVar18 | 0x20000000;
                lVar16 = plVar4[0x59];
                for (lVar15 = plVar4[0x58]; lVar15 != lVar16; lVar15 = lVar15 + 0x38) {
                  (**(code **)(**(longlong **)(plVar4[0x19] + 0x158) + 0x90))
                            (*(longlong **)(plVar4[0x19] + 0x158),*(undefined8 *)(lVar15 + 0x28));
                  (**(code **)(**(longlong **)(plVar4[0x19] + 0x158) + 0x80))
                            (*(longlong **)(plVar4[0x19] + 0x158),*(undefined8 *)(lVar15 + 0x20));
                }
                lVar16 = plVar4[0x58];
                lVar15 = plVar4[0x59];
                if (lVar16 != lVar15) {
                  do {
                    FUN_140017240(lVar16);
                    lVar16 = lVar16 + 0x38;
                  } while (lVar16 != lVar15);
                  plVar4[0x59] = plVar4[0x58];
                }
              }
              else {
                uVar18 = *(uint *)(plVar4 + 0x62);
                *(uint *)(plVar4 + 0x62) = uVar18 & 0xcfffffff;
                if ((uVar18 >> 0x1c & 1) != 0) {
                  FUN_1401f5980(plVar4);
                }
              }
            }
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar3);
          return 0;
        }
      }
      break;
    case 0x46a:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (((LVar9 != 0) && (lVar16 = *(longlong *)(LVar9 + 0x180), lVar16 != 0)) &&
         ((*(uint *)(lVar16 + 0x128) >> 10 & 1) != 0)) {
        return (longlong)(*(int *)(lVar16 + 0x98) << 0x10) | (ulonglong)*(ushort *)(lVar16 + 0x94);
      }
      break;
    case 0x46b:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if ((LVar9 != 0) && (*(longlong *)(LVar9 + 0x1c0) != 0)) {
        lVar16 = *(longlong *)(LVar9 + 0x180);
        uVar18 = *(int *)(lVar16 + 0x90) * *(int *)(lVar16 + 0x8c) * 4;
        if (2 < uVar18) {
          uVar14 = thunk_FUN_14028af20(uVar18);
          *(undefined8 *)(param_4 + 2) = uVar14;
          *param_4 = *(undefined4 *)(lVar16 + 0x8c);
          param_4[1] = *(undefined4 *)(lVar16 + 0x90);
          cVar6 = FUN_14009b7b0(*(undefined8 *)(LVar9 + 0x1c0),uVar14,uVar18,1);
          if (cVar6 != '\0') {
            return 1;
          }
          thunk_FUN_14028af80(*(undefined8 *)(param_4 + 2));
          return 0;
        }
      }
      break;
    case 0x46c:
      LVar9 = GetWindowLongPtrW(param_1,-0x15);
      if (((LVar9 != 0) && (*(longlong **)(LVar9 + 0x180) != (longlong *)0x0)) &&
         (lVar16 = **(longlong **)(LVar9 + 0x180), lVar16 != 0)) {
        return (ulonglong)((*(uint *)(lVar16 + 0xe0) >> 0x1d & 1) != 0);
      }
    }
  }
  return 0;
}

