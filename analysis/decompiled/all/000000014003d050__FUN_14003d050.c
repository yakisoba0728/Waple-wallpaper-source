// Function: FUN_14003d050
// Addr: 14003d050
// Size: 1185 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d050(char *param_1)

{
  undefined4 uVar1;
  HMONITOR pHVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  LONG LVar8;
  int iVar9;
  BOOL BVar10;
  int iVar11;
  HWND hwnd;
  HMONITOR pHVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  int *piVar17;
  longlong lVar18;
  bool bVar19;
  uint local_res8 [2];
  longlong local_res10;
  undefined1 local_48 [32];
  
  bVar19 = DAT_1404e5288 != 0;
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  if (bVar19) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    return;
  }
  _DAT_1404e8c30 = param_1;
  hwnd = GetForegroundWindow();
  DAT_1404e8c90 = GetAncestor(hwnd,3);
  if (DAT_1404e8c90 == (HWND)0x0) {
    _DAT_1404e8f28 = 0;
  }
  else {
    GetClassNameW(DAT_1404e8c90,(LPWSTR)&DAT_1404e8f28,0xc);
  }
  uVar7 = GetWindowLongW(DAT_1404e8c90,-0x10);
  LVar8 = GetWindowLongW(DAT_1404e8c90,-0x14);
  iVar9 = FUN_1402cafd0(&DAT_1404e8f28,L"Multitaskin",0xb);
  if ((iVar9 == 0) || (iVar9 = FUN_1402cafd0(&DAT_1404e8f28,L"XamlExplore",0xb), iVar9 == 0)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  iVar9 = FUN_1402cafd0(&DAT_1404e8f28,L"Windows.UI.",0xb);
  if ((((uVar7 & 0x800f0000) != 0) && (-1 < (char)LVar8)) ||
     ((*param_1 == '\0' && ((bVar19 || (iVar9 == 0)))))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((*param_1 != '\0') && ((bVar19 || (iVar9 == 0)))) {
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    return;
  }
  BVar10 = IsIconic(DAT_1404e8c90);
  if (((((BVar10 == 0) && (BVar10 = IsWindowVisible(DAT_1404e8c90), BVar10 != 0)) &&
       (iVar11 = FUN_1402cafd0(&DAT_1404e8f28,L"WPEUI",5), iVar11 != 0)) &&
      ((iVar11 = FUN_1402cafd0(&DAT_1404e8f28,L"WorkerW",7), iVar11 != 0 &&
       (iVar11 = FUN_1402cafd0(&DAT_1404e8f28,L"Progman",7), iVar11 != 0)))) &&
     ((*param_1 == '\0' || (iVar9 != 0)))) {
    cVar6 = FUN_14003bb60(DAT_1404e8c90);
    bVar19 = false;
    if (cVar6 != '\0') goto LAB_14003d22f;
  }
  else {
LAB_14003d22f:
    bVar19 = true;
  }
  if (bVar5) {
    if (!bVar19) {
      pHVar12 = MonitorFromWindow(DAT_1404e8c90,2);
      uVar13 = DAT_1404e8c80 &
               (((((((((ulonglong)pHVar12 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)pHVar12 >> 8 & 0xff) * 0x100000001b3 ^
                    (ulonglong)pHVar12 >> 0x10 & 0xff) * 0x100000001b3 ^
                   (ulonglong)pHVar12 >> 0x18 & 0xff) * 0x100000001b3 ^
                  (ulonglong)pHVar12 >> 0x20 & 0xff) * 0x100000001b3 ^
                 (ulonglong)pHVar12 >> 0x28 & 0xff) * 0x100000001b3 ^
                (ulonglong)pHVar12 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)pHVar12 >> 0x38) *
               0x100000001b3;
      lVar18 = *(longlong *)(DAT_1404e8c68 + 8 + uVar13 * 0x10);
      if (lVar18 == DAT_1404e8c58) {
LAB_14003d335:
        lVar18 = DAT_1404e8c58;
      }
      else {
        pHVar2 = *(HMONITOR *)(lVar18 + 0x10);
        while (pHVar12 != pHVar2) {
          if (lVar18 == *(longlong *)(DAT_1404e8c68 + uVar13 * 0x10)) goto LAB_14003d335;
          lVar18 = *(longlong *)(lVar18 + 8);
          pHVar2 = *(HMONITOR *)(lVar18 + 0x10);
        }
        if (lVar18 == 0) goto LAB_14003d335;
      }
      if (lVar18 != DAT_1404e8c58) {
        if (param_1[1] == '\0') {
          *(int *)(param_1 + 0x10) = 1 << ((byte)*(undefined4 *)(lVar18 + 0x18) & 0x1f);
        }
        else {
          GetWindowThreadProcessId(DAT_1404e8c90,local_res8);
          lVar3 = *(longlong *)(param_1 + 8);
          lVar4 = *(longlong *)(lVar3 + 0x80);
          uVar13 = *(ulonglong *)(lVar3 + 0xa8) &
                   (((((ulonglong)local_res8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)(local_res8[0] >> 8) & 0xff) * 0x100000001b3 ^
                    (ulonglong)(local_res8[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
                   (ulonglong)(local_res8[0] >> 0x18)) * 0x100000001b3;
          lVar14 = *(longlong *)(*(longlong *)(lVar3 + 0x90) + 8 + uVar13 * 0x10);
          if (lVar14 != lVar4) {
            uVar7 = *(uint *)(lVar14 + 0x10);
            while (local_res8[0] != uVar7) {
              if (lVar14 == *(longlong *)(*(longlong *)(lVar3 + 0x90) + uVar13 * 0x10))
              goto LAB_14003d485;
              lVar14 = *(longlong *)(lVar14 + 8);
              uVar7 = *(uint *)(lVar14 + 0x10);
            }
            if (lVar14 == 0) {
              lVar14 = lVar4;
            }
            if (lVar14 != lVar4) {
              uVar1 = *(undefined4 *)(lVar18 + 0x18);
              lVar14 = lVar14 + 0x18;
              plVar15 = (longlong *)FUN_140128e80(lVar3 + 0xb8,&local_res10,lVar14);
              if (*plVar15 != *(longlong *)(lVar3 + 0xc0)) {
                uVar16 = FUN_140016600(local_48,lVar14);
                FUN_1401347a0(lVar3,uVar16,uVar1,1);
              }
              FUN_140128e80(lVar3 + 0x20,&local_res10,lVar14);
              if (local_res10 != *(longlong *)(lVar3 + 0x28)) {
                for (piVar17 = *(int **)(local_res10 + 0x30);
                    piVar17 != *(int **)(local_res10 + 0x38); piVar17 = piVar17 + 2) {
                  if (*piVar17 == 1) goto LAB_14003d49a;
                }
              }
            }
          }
LAB_14003d485:
          *(int *)(param_1 + 0x10) = 1 << ((byte)*(undefined4 *)(lVar18 + 0x18) & 0x1f);
        }
      }
      goto LAB_14003d49e;
    }
LAB_14003d493:
    DAT_1404e8c90 = (HWND)0x0;
  }
  else if (bVar19) goto LAB_14003d493;
LAB_14003d49a:
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
LAB_14003d49e:
  EnumWindows(FUN_14003bba0,0x1404e8c30);
  if (DAT_1404e8c90 != (HWND)0x0) {
    FUN_14003bba0(DAT_1404e8c90,&DAT_1404e8c30);
  }
  return;
}

