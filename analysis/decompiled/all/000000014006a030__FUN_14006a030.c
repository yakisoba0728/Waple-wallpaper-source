// Function: FUN_14006a030
// Addr: 14006a030
// Size: 1104 bytes


void FUN_14006a030(LARGE_INTEGER param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  LARGE_INTEGER LVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *_Buf1;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *_Buf2;
  undefined1 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  LARGE_INTEGER local_res8;
  char local_res10;
  longlong *local_res18;
  LARGE_INTEGER local_res20;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  longlong local_a0 [3];
  ulonglong local_88;
  
  bVar3 = false;
  plVar10 = DAT_1404e5310;
  local_res8 = param_1;
  local_res10 = param_2;
  if (DAT_1404e5310 != DAT_1404e5318) {
    do {
      if (*(char *)(*plVar10 + 0x39) == '\0') {
        bVar3 = true;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != DAT_1404e5318);
    if (bVar3) {
      FUN_1400316b0();
      plVar17 = DAT_1404e5318;
      fVar5 = DAT_140492830;
      fVar4 = DAT_1404926c0;
      for (plVar10 = DAT_1404e5310; plVar10 != plVar17; plVar10 = plVar10 + 1) {
        lVar18 = *plVar10;
        if (*(char *)(lVar18 + 0x39) == '\0') {
          if (*(ulonglong *)(lVar18 + 0x28) < 0x10) {
            lVar13 = lVar18 + 0x10;
          }
          else {
            lVar13 = *(longlong *)(lVar18 + 0x10);
          }
          uVar11 = 0;
          uVar16 = 0xcbf29ce484222325;
          if (*(ulonglong *)(lVar18 + 0x20) != 0) {
            do {
              pbVar1 = (byte *)(lVar13 + uVar11);
              uVar11 = uVar11 + 1;
              uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
            } while (uVar11 < *(ulonglong *)(lVar18 + 0x20));
          }
          lVar9 = FUN_1400110a0(&DAT_1404e5328,local_d8,lVar18 + 0x10,uVar16);
          lVar13 = DAT_1404e5330;
          if (*(longlong *)(lVar9 + 8) != 0) {
            lVar13 = *(longlong *)(lVar9 + 8);
          }
          if ((lVar13 != DAT_1404e5330) && (*(longlong **)(lVar13 + 0x30) != (longlong *)0x0)) {
            iVar8 = (**(code **)(**(longlong **)(lVar13 + 0x30) + 0x20))();
            fVar20 = fVar4;
            if ((iVar8 != 2) && (iVar8 != 3)) {
              fVar20 = fVar5;
            }
            cVar7 = (**(code **)(**(longlong **)(lVar13 + 0x30) + 0x78))();
            if (cVar7 == '\0') {
              QueryPerformanceCounter(&local_res8);
              lVar13 = *(longlong *)(lVar18 + 0xa0);
              ((LARGE_INTEGER *)(lVar18 + 0xa0))->QuadPart = (LONGLONG)local_res8;
              fVar19 = (float)(local_res8.QuadPart - lVar13) / (float)*(longlong *)(lVar18 + 0xa8) +
                       *(float *)(lVar18 + 0xb0);
              *(float *)(lVar18 + 0xb0) = fVar19;
              if (fVar19 < fVar20) goto LAB_14006a211;
            }
          }
          FUN_140032bc0(local_b8,local_c8,lVar18 + 0x10);
        }
LAB_14006a211:
      }
      QueryPerformanceCounter(&local_res20);
      uVar15 = '\0';
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffffffffff00;
      local_res18 = DAT_1404e5318;
      plVar10 = DAT_1404e5318;
      plVar17 = DAT_1404e5310;
      lVar18 = local_b0[0];
      if (DAT_1404e5310 != DAT_1404e5318) {
        do {
          lVar13 = *plVar17;
          if (*(char *)(lVar13 + 0x39) == '\0') {
            uVar11 = *(ulonglong *)(lVar13 + 0x28);
            lVar9 = lVar13 + 0x10;
            uVar16 = *(ulonglong *)(lVar13 + 0x20);
            if (0xf < uVar11) {
              lVar9 = *(longlong *)(lVar13 + 0x10);
            }
            uVar12 = 0;
            uVar14 = 0xcbf29ce484222325;
            if (uVar16 != 0) {
              do {
                pbVar1 = (byte *)(lVar9 + uVar12);
                uVar12 = uVar12 + 1;
                uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
              } while (uVar12 < uVar16);
            }
            lVar9 = *(longlong *)(local_a0[0] + 8 + (local_88 & uVar14) * 0x10);
            if (lVar9 != lVar18) {
              lVar2 = *(longlong *)(local_a0[0] + (local_88 & uVar14) * 0x10);
              while( true ) {
                _Buf2 = (undefined8 *)(lVar9 + 0x10);
                if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
                  _Buf2 = (undefined8 *)*_Buf2;
                }
                if (uVar11 < 0x10) {
                  _Buf1 = (void *)(lVar13 + 0x10);
                }
                else {
                  _Buf1 = *(void **)(lVar13 + 0x10);
                }
                if ((uVar16 == *(ulonglong *)(lVar9 + 0x20)) &&
                   ((uVar16 == 0 || (iVar8 = memcmp(_Buf1,_Buf2,uVar16), iVar8 == 0)))) break;
                if (lVar9 == lVar2) goto LAB_14006a337;
                lVar9 = *(longlong *)(lVar9 + 8);
              }
              if (lVar9 != 0) goto LAB_14006a33a;
            }
LAB_14006a337:
            lVar9 = lVar18;
LAB_14006a33a:
            LVar6 = local_res20;
            if (lVar9 != lVar18) {
              iVar8 = FUN_140290d80(lVar13 + 0x50);
              if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_140290d30(5);
              }
              if (*(int *)(lVar13 + 0x9c) == 0x7fffffff) {
                *(undefined4 *)(lVar13 + 0x9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_140290d30(6);
              }
              *(LARGE_INTEGER *)(lVar13 + 0xb8) = LVar6;
              *(undefined1 *)(lVar13 + 0x39) = 1;
              FUN_140290ea0();
              plVar10 = local_res18;
              lVar18 = local_b0[0];
              goto LAB_14006a39c;
            }
            local_res8.s.LowPart._0_1_ = 1;
            plVar10 = local_res18;
            uVar15 = '\x01';
          }
          else {
LAB_14006a39c:
            uVar15 = local_res8.s.LowPart._0_1_;
          }
          plVar17 = plVar17 + 1;
          param_2 = local_res10;
        } while (plVar17 != plVar10);
      }
      FUN_14000d9e0(local_a0);
      FUN_140031340(local_b0);
      if (uVar15 != '\0') {
        DAT_1404e52e4 = DAT_1404e52e4 | 0x800000;
        KillTimer(DAT_1404e5280,0x6a);
        SetTimer(DAT_1404e5280,0x6a,0xf,(TIMERPROC)0x0);
        goto LAB_14006a42c;
      }
    }
  }
  DAT_1404e52e4 = DAT_1404e52e4 & 0xff7fffff;
LAB_14006a42c:
  if ((param_2 != '\0') && ((DAT_1404e52e4 & 0x300000) == 0x300000)) {
    DAT_1404e52e4 = DAT_1404e52e4 & 0xffdfffff;
    FUN_140074da0();
  }
  return;
}

