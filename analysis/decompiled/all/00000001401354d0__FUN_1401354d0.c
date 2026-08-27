// Function: FUN_1401354d0
// Addr: 1401354d0
// Size: 1251 bytes


void FUN_1401354d0(LARGE_INTEGER *param_1,char param_2)

{
  short *psVar1;
  short *psVar2;
  longlong lVar3;
  LARGE_INTEGER LVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  HANDLE hObject;
  undefined8 uVar8;
  short *psVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  short *psVar17;
  float fVar18;
  float fVar19;
  LARGE_INTEGER local_res8;
  undefined8 ***local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  ulonglong local_310;
  undefined8 ***local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  ulonglong local_2f0;
  undefined8 ***local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  ulonglong uStack_2d0;
  undefined8 ***local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong uStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined4 local_288;
  undefined1 local_284 [4];
  undefined1 local_280 [36];
  undefined2 local_25c [260];
  undefined2 local_54 [22];
  
  if ((param_1[6].QuadPart != 0) || (param_1[0xc].QuadPart != param_1[0xd].QuadPart)) {
    QueryPerformanceCounter(&local_res8);
    lVar3 = param_1->QuadPart;
    param_1->QuadPart = (LONGLONG)local_res8;
    fVar19 = (float)(local_res8.QuadPart - lVar3) / (float)param_1[1].QuadPart;
    *(float *)(param_1 + 2) = fVar19 + *(float *)(param_1 + 2);
    plVar10 = *(longlong **)param_1[0x2b].QuadPart;
    if (plVar10 != (longlong *)param_1[0x2b].QuadPart) {
      do {
        fVar18 = *(float *)(plVar10 + 6) - fVar19;
        *(float *)(plVar10 + 6) = fVar18;
        if (0.0 < fVar18) {
          puVar15 = (undefined8 *)*plVar10;
        }
        else {
          if ((ulonglong)plVar10[5] < 8) {
            puVar15 = plVar10 + 2;
          }
          else {
            puVar15 = (undefined8 *)plVar10[2];
          }
          uVar11 = 0xcbf29ce484222325;
          uVar14 = 0;
          if (plVar10[4] * 2 != 0) {
            do {
              uVar13 = uVar14 + 1;
              uVar11 = (uVar11 ^ *(byte *)(uVar14 + (longlong)puVar15)) * 0x100000001b3;
              uVar14 = uVar13;
            } while (uVar13 < (ulonglong)(plVar10[4] * 2));
          }
          uVar11 = uVar11 & param_1[0x30].QuadPart;
          lVar3 = param_1[0x2d].QuadPart;
          puVar15 = *(undefined8 **)(lVar3 + uVar11 * 0x10);
          if (*(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) == plVar10) {
            if (puVar15 == plVar10) {
              LVar4 = param_1[0x2b];
              *(LARGE_INTEGER *)(lVar3 + uVar11 * 0x10) = LVar4;
              *(LARGE_INTEGER *)(lVar3 + 8 + uVar11 * 0x10) = LVar4;
            }
            else {
              *(longlong *)(lVar3 + 8 + uVar11 * 0x10) = plVar10[1];
            }
          }
          else if (puVar15 == plVar10) {
            *(longlong *)(lVar3 + uVar11 * 0x10) = *plVar10;
          }
          puVar15 = (undefined8 *)*plVar10;
          param_1[0x2c].QuadPart = param_1[0x2c].QuadPart + -1;
          *(undefined8 **)plVar10[1] = puVar15;
          puVar15[1] = plVar10[1];
          FUN_140016770(plVar10 + 2);
          thunk_FUN_14028af80(plVar10,0x38);
        }
        plVar10 = puVar15;
      } while (puVar15 != (undefined8 *)param_1[0x2b].QuadPart);
    }
    if ((param_2 != '\0') ||
       (DAT_140492858 < *(float *)(param_1 + 2) || DAT_140492858 == *(float *)(param_1 + 2))) {
      param_1[2].s.LowPart = 0;
      FUN_140136070(param_1 + 0xf);
      FUN_14007ff60(param_1 + 0x1f);
      hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
      if (hObject != (HANDLE)0xffffffffffffffff) {
        FUN_1404217a0(local_284,0,0x234);
        local_288 = 0x238;
        iVar7 = Process32FirstW(hObject,&local_288);
        while (iVar7 != 0) {
          puVar16 = local_25c;
          do {
            uVar6 = FUN_1402d5b48(*puVar16);
            *puVar16 = uVar6;
            puVar16 = puVar16 + 1;
          } while (puVar16 != local_54);
          uVar8 = FUN_1402d6aa0(local_25c);
          local_2f8 = 0;
          local_2f0 = 0;
          local_308 = (undefined8 ****)0x0;
          uStack_300 = 0;
          FUN_140016170(&local_308,local_25c,uVar8);
          ppppuVar12 = &local_308;
          if (7 < local_2f0) {
            ppppuVar12 = (undefined8 ****)local_308;
          }
          psVar2 = (short *)((longlong)ppppuVar12 + local_2f8 * 2);
          psVar17 = psVar2;
          for (psVar9 = (short *)FUN_140015e90(ppppuVar12,psVar2); psVar9 != psVar2;
              psVar9 = psVar9 + 1) {
            if ((*psVar9 != 0x5c) && (*psVar9 != 0x2f)) goto LAB_1401357b0;
          }
LAB_1401357cd:
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2e8 = (undefined8 ****)0x0;
          uStack_2e0 = 0;
          FUN_140016170(&local_2e8,psVar17,(longlong)psVar2 - (longlong)psVar17 >> 1);
          local_318 = 0;
          local_310 = 0;
          local_2b8 = local_2d8;
          uStack_2b0 = uStack_2d0;
          local_2c8 = local_2e8;
          uStack_2c0 = uStack_2e0;
          ppppuVar12 = &local_2c8;
          if (7 < uStack_2d0) {
            ppppuVar12 = (undefined8 ****)local_2e8;
          }
          local_328 = (undefined8 ****)0x0;
          uStack_320 = 0;
          uVar8 = FUN_1402d6aa0(ppppuVar12);
          FUN_140016170(&local_328,ppppuVar12,uVar8);
          if (7 < uStack_2b0) {
            uVar14 = uStack_2b0 * 2 + 2;
            ppppuVar12 = (undefined8 ****)local_2c8;
            if (0xfff < uVar14) {
              ppppuVar12 = (undefined8 ****)local_2c8[-1];
              if (0x1f < (ulonglong)((longlong)local_2c8 + (-8 - (longlong)ppppuVar12)))
              goto LAB_1401359ac;
              uVar14 = uStack_2b0 * 2 + 0x29;
            }
            thunk_FUN_14028af80(ppppuVar12,uVar14);
          }
          if (7 < local_2f0) {
            uVar14 = local_2f0 * 2 + 2;
            ppppuVar12 = (undefined8 ****)local_308;
            if (0xfff < uVar14) {
              ppppuVar12 = (undefined8 ****)local_308[-1];
              if (0x1f < (ulonglong)((longlong)local_308 + (-8 - (longlong)ppppuVar12)))
              goto LAB_1401359ac;
              uVar14 = local_2f0 * 2 + 0x29;
            }
            thunk_FUN_14028af80(ppppuVar12,uVar14);
          }
          plVar10 = (longlong *)FUN_1401365a0(param_1 + 0xf,local_2a8,local_280);
          if ((undefined8 ****)(*plVar10 + 0x18) != &local_328) {
            ppppuVar12 = &local_328;
            if (7 < local_310) {
              ppppuVar12 = (undefined8 ****)local_328;
            }
            FUN_140016ae0((undefined8 ****)(*plVar10 + 0x18),ppppuVar12,local_318);
          }
          FUN_14007d6b0(param_1 + 0x1f,local_298,&local_328);
          if (7 < local_310) {
            uVar14 = local_310 * 2 + 2;
            ppppuVar12 = (undefined8 ****)local_328;
            if (0xfff < uVar14) {
              ppppuVar12 = (undefined8 ****)local_328[-1];
              if (0x1f < (ulonglong)((longlong)local_328 + (-8 - (longlong)ppppuVar12))) {
LAB_1401359ac:
                pcVar5 = (code *)swi(0x29);
                (*pcVar5)(5);
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar14 = local_310 * 2 + 0x29;
            }
            thunk_FUN_14028af80(ppppuVar12,uVar14);
          }
          iVar7 = Process32NextW(hObject,&local_288);
        }
        CloseHandle(hObject);
      }
    }
  }
  return;
LAB_1401357b0:
  psVar1 = psVar17 + -1;
  if (psVar17[-1] == 0x5c) goto LAB_1401357cd;
  if ((psVar17[-1] == 0x2f) || (psVar17 = psVar1, psVar9 == psVar1)) goto LAB_1401357cd;
  goto LAB_1401357b0;
}

