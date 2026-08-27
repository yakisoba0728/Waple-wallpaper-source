// Function: FUN_140138b80
// Addr: 140138b80
// Size: 1523 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char FUN_140138b80(LARGE_INTEGER param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  BOOL BVar8;
  int iVar9;
  float fVar10;
  HANDLE hProcess;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  char cVar19;
  LARGE_INTEGER local_res8;
  float local_res18 [2];
  int local_res20 [2];
  longlong *local_1098;
  longlong *local_1090;
  DWORD local_1088 [2];
  undefined8 local_1080;
  float fStack_1078;
  undefined4 uStack_1074;
  undefined1 local_1070 [40];
  WCHAR local_1048 [1024];
  WCHAR local_848 [1032];
  
  local_res8 = param_1;
  if (*(char *)(param_1.QuadPart + 0x10) != '\0') {
    *(undefined1 *)(param_1.QuadPart + 0x10) = 0;
    FUN_140139270();
  }
  iVar16 = 0;
  if ((*(char *)(param_1.QuadPart + 0x11) != '\0') && (*(longlong *)(param_1.QuadPart + 0x48) != 0))
  {
    *(undefined1 *)(param_1.QuadPart + 0x11) = 0;
    plVar13 = *(longlong **)(param_1.QuadPart + 0x60);
    for (plVar17 = *(longlong **)(param_1.QuadPart + 0x58); plVar17 != plVar13;
        plVar17 = plVar17 + 2) {
      if ((longlong *)*plVar17 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar17 + 0x10))();
      }
    }
    if (*(longlong *)(param_1.QuadPart + 0x58) != *(longlong *)(param_1.QuadPart + 0x60)) {
      *(longlong *)(param_1.QuadPart + 0x60) = *(longlong *)(param_1.QuadPart + 0x58);
    }
    if (*(longlong **)(param_1.QuadPart + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1.QuadPart + 0x50) + 0x10))();
      *(undefined8 *)(param_1.QuadPart + 0x50) = 0;
    }
    iVar6 = (**(code **)(**(longlong **)(param_1.QuadPart + 0x48) + 0x28))
                      (*(longlong **)(param_1.QuadPart + 0x48),param_1.QuadPart + 0x50);
    if (-1 < iVar6) {
      local_res20[0] = 0;
      fVar7 = (float)GetCurrentProcessId();
      iVar6 = (**(code **)(**(longlong **)(param_1.QuadPart + 0x50) + 0x18))
                        (*(longlong **)(param_1.QuadPart + 0x50),local_res20);
      if ((iVar6 == 0) && (0 < local_res20[0])) {
        do {
          local_1090 = (longlong *)0x0;
          local_1098 = (longlong *)0x0;
          iVar6 = (**(code **)(**(longlong **)(param_1.QuadPart + 0x50) + 0x20))
                            (*(longlong **)(param_1.QuadPart + 0x50),iVar16,&local_1090);
          if ((iVar6 == 0) &&
             ((local_1090 != (longlong *)0x0 &&
              (iVar6 = (**(code **)*local_1090)(local_1090,&DAT_14048ad58,&local_1098), iVar6 == 0))
             )) {
            if (local_1098 != (longlong *)0x0) {
              iVar6 = (**(code **)(*local_1098 + 0x78))();
              if (iVar6 == 1) {
                local_res18[0] = 0.0;
                iVar6 = (**(code **)(*local_1098 + 0x70))(local_1098,local_res18);
                if ((local_res18[0] != 0.0) &&
                   (hProcess = OpenProcess(0x1000,0,(DWORD)local_res18[0]), hProcess != (HANDLE)0x0)
                   ) {
                  FUN_1404217a0(local_1048,0,0x800);
                  local_1088[0] = 0x400;
                  BVar8 = QueryFullProcessImageNameW(hProcess,0,local_1048,local_1088);
                  if (BVar8 == 1) {
                    GetCurrentDirectoryW(0x400,local_848);
                    uVar11 = FUN_1402d6aa0(local_848);
                    iVar9 = FUN_1402cafd0(local_848,local_1048,uVar11);
                    if (iVar9 == 0) {
                      local_res18[0] = fVar7;
                    }
                  }
                  CloseHandle(hProcess);
                }
                if (((iVar6 == 0) || (iVar6 == 0x889000d)) && (fVar7 != local_res18[0])) {
                  puVar3 = *(undefined4 **)(param_1.QuadPart + 0x60);
                  local_1080 = local_1090;
                  plVar13 = local_1080;
                  fStack_1078 = local_res18[0];
                  if (puVar3 == *(undefined4 **)(param_1.QuadPart + 0x68)) {
                    FUN_1400f98a0(param_1.QuadPart + 0x58,puVar3,&local_1080);
                    local_1090 = (longlong *)0x0;
                  }
                  else {
                    local_1080._0_4_ = SUB84(local_1090,0);
                    local_1080._4_4_ = (undefined4)((ulonglong)local_1090 >> 0x20);
                    *puVar3 = (undefined4)local_1080;
                    puVar3[1] = local_1080._4_4_;
                    puVar3[2] = local_res18[0];
                    puVar3[3] = uStack_1074;
                    *(longlong *)(param_1.QuadPart + 0x60) =
                         *(longlong *)(param_1.QuadPart + 0x60) + 0x10;
                    local_1090 = (longlong *)0x0;
                    local_1080 = plVar13;
                  }
                }
              }
              goto LAB_140138e24;
            }
          }
          else {
LAB_140138e24:
            if (local_1098 != (longlong *)0x0) {
              (**(code **)(*local_1098 + 0x10))(local_1098);
              local_1098 = (longlong *)0x0;
            }
          }
          if (local_1090 != (longlong *)0x0) {
            (**(code **)(*local_1090 + 0x10))();
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < local_res20[0]);
      }
    }
  }
  fVar7 = DAT_140492608;
  puVar18 = *(undefined8 **)(param_1.QuadPart + 0x58);
  cVar19 = '\0';
  puVar4 = *(undefined8 **)(param_1.QuadPart + 0x60);
  do {
    if (puVar18 == puVar4) {
      if (cVar19 != '\0') {
        *(undefined4 *)(param_1.QuadPart + 0x88) = 0;
        QueryPerformanceCounter((LARGE_INTEGER *)(param_1.QuadPart + 0x78));
        *(char *)(param_1.QuadPart + 0x70) = cVar19;
        return cVar19;
      }
      if (*(char *)(param_1.QuadPart + 0x70) != '\0') {
        if (*(float *)(param_1.QuadPart + 0x88) <= DAT_140492858 &&
            DAT_140492858 != *(float *)(param_1.QuadPart + 0x88)) {
          QueryPerformanceCounter(&local_res8);
          lVar12 = *(longlong *)(param_1.QuadPart + 0x78);
          ((LARGE_INTEGER *)(param_1.QuadPart + 0x78))->QuadPart = (LONGLONG)local_res8;
          *(float *)(param_1.QuadPart + 0x88) =
               (float)(local_res8.QuadPart - lVar12) / (float)*(longlong *)(param_1.QuadPart + 0x80)
               + *(float *)(param_1.QuadPart + 0x88);
          return '\x01';
        }
        *(undefined1 *)(param_1.QuadPart + 0x70) = 0;
      }
      return '\0';
    }
    plVar13 = (longlong *)*puVar18;
    uVar2 = *(uint *)(puVar18 + 1);
    iVar16 = (**(code **)(*plVar13 + 0x18))(plVar13,local_res20);
    if ((iVar16 == 0) && (local_res20[0] == 1)) {
      local_1098 = (longlong *)0x0;
      fVar10 = (float)(**(code **)*plVar13)(plVar13,&DAT_14048ad48,&local_1098);
      if ((fVar10 == 0.0) && (local_1098 != (longlong *)0x0)) {
        local_res18[0] = fVar10;
        iVar16 = (**(code **)(*local_1098 + 0x18))(local_1098,local_res18);
        if (local_1098 != (longlong *)0x0) {
          (**(code **)(*local_1098 + 0x10))();
          local_1098 = (longlong *)0x0;
        }
        if ((iVar16 == 0) && (fVar7 < local_res18[0])) {
          if ((*(longlong *)(param_2 + 0x30) != 0) ||
             (*(longlong *)(param_2 + 0x60) != *(longlong *)(param_2 + 0x68))) {
            uVar14 = *(ulonglong *)(param_2 + 0xa8) &
                     (((((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)(uVar2 >> 8 & 0xff)) * 0x100000001b3 ^
                      (ulonglong)(uVar2 >> 0x10 & 0xff)) * 0x100000001b3 ^
                     (ulonglong)(uVar2 >> 0x18)) * 0x100000001b3;
            lVar5 = *(longlong *)(param_2 + 0x80);
            lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 8 + uVar14 * 0x10);
            if (lVar12 != lVar5) {
              uVar1 = *(uint *)(lVar12 + 0x10);
              while (uVar2 != uVar1) {
                if (lVar12 == *(longlong *)(*(longlong *)(param_2 + 0x90) + uVar14 * 0x10))
                goto LAB_140139078;
                lVar12 = *(longlong *)(lVar12 + 8);
                uVar1 = *(uint *)(lVar12 + 0x10);
              }
              if (lVar12 == 0) {
                lVar12 = lVar5;
              }
              if (lVar12 != lVar5) {
                lVar12 = lVar12 + 0x18;
                plVar13 = (longlong *)FUN_140128e80(param_2 + 0xb8,local_1088,lVar12);
                if (*plVar13 != *(longlong *)(param_2 + 0xc0)) {
                  uVar11 = FUN_140016600(local_1070,lVar12);
                  FUN_1401347a0(param_2,uVar11,0,4);
                  plVar13 = (longlong *)FUN_140136350(param_2 + 0x150,&local_1080,lVar12);
                  *(undefined4 *)(*plVar13 + 0x30) = 0x40400000;
                }
                FUN_140128e80(param_2 + 0x20,&local_1090,lVar12);
                if (local_1090 != *(longlong **)(param_2 + 0x28)) {
                  for (piVar15 = (int *)local_1090[6]; piVar15 != (int *)local_1090[7];
                      piVar15 = piVar15 + 2) {
                    if ((*piVar15 == 4) && (piVar15[1] == 0)) {
                      if (cVar19 == '\0') goto LAB_14013907b;
                      break;
                    }
                  }
                }
              }
            }
          }
LAB_140139078:
          cVar19 = '\x01';
        }
      }
    }
LAB_14013907b:
    puVar18 = puVar18 + 2;
    param_1 = local_res8;
  } while( true );
}

