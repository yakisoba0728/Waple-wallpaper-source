// Function: FUN_140120790
// Addr: 140120790
// Size: 1775 bytes


/* WARNING: Removing unreachable block (ram,0x000140120e78) */

void FUN_140120790(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  DWORD DVar17;
  longlong lVar18;
  float fVar19;
  LARGE_INTEGER local_res8 [4];
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  _SYSTEMTIME local_a8 [6];
  
  timeBeginPeriod(1);
  QueryPerformanceFrequency(&local_b0);
  QueryPerformanceCounter(&local_b8);
  dVar12 = DAT_140492720;
  dVar11 = DAT_1404926d8;
  dVar10 = DAT_1404926b8;
  dVar9 = DAT_140492670;
  if (*(char *)(param_1 + 0xe48) != '\0') {
    lVar1 = param_1 + 0xe50;
    cVar13 = '\0';
    do {
      lVar16 = 0;
      QueryPerformanceCounter(local_res8);
      fVar19 = (float)local_b0.QuadPart;
      lVar18 = local_res8[0].QuadPart - (longlong)local_b8;
      local_b8.s = local_res8[0].s;
      iVar15 = FUN_140290d80(lVar1);
      if (iVar15 != 0) goto LAB_140120e6d;
      if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) goto LAB_140120e58;
      if (((*(char *)(param_1 + 0xea7) == '\0') && (*(char *)(param_1 + 0xe49) != '\0')) &&
         (cVar13 != '\0')) {
        lVar3 = *(longlong *)(param_1 + 0xe30);
        cVar13 = '\0';
        GetLocalTime(local_a8);
        *(float *)(lVar3 + 0x150) =
             (float)((double)local_a8[0].wHour * dVar12 + (double)local_a8[0].wMinute * dVar11 +
                     (double)local_a8[0].wSecond * dVar10 +
                    (double)local_a8[0].wMilliseconds * dVar9);
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x48))();
        FUN_14017fa70(*(undefined8 *)(param_1 + 0xe30),(float)lVar18 / fVar19);
        if (((*(longlong *)(param_1 + 0xe30) == 0) ||
            (lVar18 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,
                                    "materials/background.json"), lVar18 == 0)) ||
           ((*(longlong *)(lVar18 + 0xd0) == 0 ||
            ((lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0xd0) + 0xd8), lVar18 == 0 ||
             (*(char *)(lVar18 + 8) == '\0')))))) {
          DVar17 = 10;
          goto LAB_1401209dc;
        }
        plVar4 = *(longlong **)(param_1 + 0xd0);
        if ((plVar4 == (longlong *)0x0) ||
           (iVar15 = (**(code **)(*plVar4 + 0xb0))(plVar4,1,0,&DAT_1404e8fc8),
           (iVar15 + 0x7785fffbU & 0xfffffffd) == 0)) {
          FUN_140098760("DXGI device lost in render loop.\n");
          *(undefined1 *)(param_1 + 0xea7) = 1;
        }
        else {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x70) + 0x17c);
          *puVar2 = *puVar2 | 1;
        }
      }
      else {
        DVar17 = 1;
LAB_1401209dc:
        Sleep(DVar17);
      }
      FUN_140290ea0(lVar1);
      iVar15 = FUN_140290d80(lVar1);
      if (iVar15 != 0) goto LAB_140120e6d;
      if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) goto LAB_140120e58;
      if ((*(longlong *)(param_1 + 0xe30) != 0) &&
         (lVar18 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,"materials/background.json"
                                ), lVar18 != 0)) {
        if (*(longlong *)(lVar18 + 0xd0) == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)(*(longlong *)(lVar18 + 0xd0) + 0xd8);
        }
      }
      if ((*(char *)(param_1 + 0xea7) == '\0') && (lVar16 != 0)) {
        while (((((*(longlong *)(param_1 + 0xe30) != 0 &&
                  (lVar16 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,
                                          "materials/background.json"), lVar16 != 0)) &&
                 (*(longlong *)(lVar16 + 0xd0) != 0)) &&
                (((plVar4 = *(longlong **)(*(longlong *)(lVar16 + 0xd0) + 0xd8),
                  plVar4 != (longlong *)0x0 && (*(char *)(param_1 + 0xe48) != '\0')) &&
                 ((*(char *)(param_1 + 0xe49) != '\0' &&
                  ((cVar13 = (**(code **)(*plVar4 + 0x88))(plVar4), cVar13 == '\0' &&
                   ((**(code **)(*plVar4 + 0x90))(plVar4),
                   *(char *)((longlong)plVar4 + 0x93) == '\0')))))))) &&
               (*(char *)((longlong)plVar4 + 0x94) == '\0'))) {
          if (lVar1 == 0) goto LAB_140120e4f;
          FUN_140290ea0(lVar1);
          cVar14 = (**(code **)(*plVar4 + 0x40))(plVar4);
          DVar17 = 100;
          if (cVar14 != '\0') {
            DVar17 = 1;
          }
          Sleep(DVar17);
          iVar15 = FUN_140290d80(lVar1);
          if (iVar15 != 0) goto LAB_140120e6d;
          if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) goto LAB_140120e58;
        }
        if ((((*(longlong *)(param_1 + 0xe30) != 0) &&
             (lVar16 = FUN_14014ff70(*(longlong *)(param_1 + 0xe30) + 0x1640,
                                     "materials/background.json"), lVar16 != 0)) &&
            (*(longlong *)(lVar16 + 0xd0) != 0)) &&
           (lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0xd0) + 0xd8), lVar16 != 0)) {
          if (*(char *)(lVar16 + 0x93) == '\0') {
            if (*(char *)(lVar16 + 0x94) != '\0') {
              LOCK();
              *(undefined1 *)(lVar16 + 0x94) = 0;
              UNLOCK();
              PostMessageW(*(HWND *)(param_1 + 0x78),0x40a,0,0);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xea7) = 1;
          }
        }
        bVar8 = true;
        if (*(char *)(param_1 + 0xea7) != '\0') {
          if (lVar1 == 0) goto LAB_140120e4f;
          FUN_140290ea0(lVar1);
          goto LAB_140120c1a;
        }
LAB_140120deb:
        if (bVar8) goto LAB_140120def;
      }
      else {
        if (lVar1 == 0) goto LAB_140120e4f;
        FUN_140290ea0(lVar1);
        Sleep(0x1e);
LAB_140120c1a:
        bVar8 = false;
        if (*(char *)(param_1 + 0xea7) == '\0') goto LAB_140120deb;
        if (lVar1 == 0) {
LAB_140120e4f:
                    /* WARNING: Subroutine does not return */
          FUN_140052f30(1);
        }
        iVar15 = FUN_140290d80(lVar1);
        if (iVar15 != 0) {
LAB_140120e6d:
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (*(int *)(param_1 + 0xe9c) == 0x7fffffff) {
LAB_140120e58:
          *(undefined4 *)(param_1 + 0xe9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        LOCK();
        *(undefined1 *)(param_1 + 0xe49) = 0;
        UNLOCK();
        plVar4 = *(longlong **)(param_1 + 0xe30);
        if (plVar4 != (longlong *)0x0) {
          *(uint *)(plVar4 + 0x25) = *(uint *)(plVar4 + 0x25) | 0xc000000;
          plVar4[0x2ef] = 0;
          if ((longlong *)plVar4[0x308] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar4[0x308] + 0x10))();
          }
          puVar5 = (undefined8 *)*plVar4;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          puVar5 = (undefined8 *)plVar4[0xb];
          *plVar4 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,1);
          }
          plVar4[0x614] = 0;
          plVar4[0x615] = 0;
          plVar4[0x616] = 0;
          plVar4[0xb] = 0;
          plVar4[0x612] = 0;
          plVar4[0x613] = 0;
          plVar4[0x61f] = 0;
          plVar4[0x620] = 0;
          plVar4[0x617] = 0;
          plVar4[0x618] = 0;
          plVar4[0x619] = 0;
          plVar4[0x61a] = 0;
          plVar4[0x61b] = 0;
          plVar4[0x61c] = 0;
          plVar4[0x61d] = 0;
          plVar4[0x61e] = 0;
          plVar4[0x2a2] = 0;
          plVar4[0x63a] = 0;
          plVar4[0x63b] = 0;
          plVar4[0x63c] = 0;
          *(undefined4 *)(plVar4 + 0x63d) = 0;
          puVar5 = (undefined8 *)plVar4[0x2db];
          for (puVar6 = (undefined8 *)*puVar5; puVar6 != puVar5; puVar6 = (undefined8 *)*puVar6) {
            puVar7 = (undefined8 *)puVar6[6];
            if (puVar7 != (undefined8 *)0x0) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
          FUN_140151e70(plVar4 + 0x2da);
          FUN_14017eb50(plVar4);
          *(uint *)(plVar4 + 0x25) = *(uint *)(plVar4 + 0x25) & 0xf3ffffff;
          lVar16 = *(longlong *)(param_1 + 0xe30);
          if (lVar16 != 0) {
            FUN_140017240(lVar16 + 0x3128);
            FUN_14017d730(lVar16 + 0x10);
            thunk_FUN_14028af80(lVar16,0x31f0);
          }
          *(undefined8 *)(param_1 + 0xe30) = 0;
        }
        *(undefined8 *)(param_1 + 0xe28) = 0;
        FUN_14012b820(param_1 + 0xc0);
        (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x28))(param_1 + 0x2a0);
        FUN_140120050(param_1);
LAB_140120def:
        FUN_140290ea0(lVar1);
      }
    } while (*(char *)(param_1 + 0xe48) != '\0');
  }
  (**(code **)(*(longlong *)(param_1 + 0x2a0) + 0x28))();
  timeEndPeriod(1);
  return;
}

