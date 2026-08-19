// Function: FUN_14006a100
// Addr: 14006a100
// Size: 880 bytes


void FUN_14006a100(ulonglong param_1,char param_2)

{
  byte *pbVar1;
  longlong lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  ulonglong local_res8;
  char local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a0 [3];
  ulonglong local_88;
  
  bVar3 = false;
  plVar11 = DAT_1404e53e0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (DAT_1404e53e0 != DAT_1404e53e8) {
    do {
      if (*(char *)(*plVar11 + 0x39) == '\0') {
        bVar3 = true;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != DAT_1404e53e8);
    if (bVar3) {
      FUN_140031780();
      plVar18 = DAT_1404e53e8;
      fVar5 = DAT_140492900;
      fVar4 = DAT_140492790;
      plVar11 = DAT_1404e53e0;
      do {
        if (plVar11 == plVar18) {
          (*DAT_140426658)();
          local_res8 = local_res8 & 0xffffffffffffff00;
          local_res18 = DAT_1404e53e8;
          plVar11 = DAT_1404e53e8;
          plVar18 = DAT_1404e53e0;
          lVar19 = local_b0;
          if (DAT_1404e53e0 != DAT_1404e53e8) {
            do {
              lVar15 = *plVar18;
              if (*(char *)(lVar15 + 0x39) == '\0') {
                uVar12 = *(ulonglong *)(lVar15 + 0x28);
                lVar10 = lVar15 + 0x10;
                uVar17 = *(ulonglong *)(lVar15 + 0x20);
                if (0xf < uVar12) {
                  lVar10 = *(longlong *)(lVar15 + 0x10);
                }
                uVar13 = 0;
                uVar16 = 0xcbf29ce484222325;
                if (uVar17 != 0) {
                  do {
                    pbVar1 = (byte *)(lVar10 + uVar13);
                    uVar13 = uVar13 + 1;
                    uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
                  } while (uVar13 < uVar17);
                }
                lVar10 = *(longlong *)(local_a0[0] + 8 + (local_88 & uVar16) * 0x10);
                if (lVar10 != lVar19) {
                  lVar2 = *(longlong *)(local_a0[0] + (local_88 & uVar16) * 0x10);
                  while( true ) {
                    plVar11 = (longlong *)(lVar10 + 0x10);
                    if (0xf < *(ulonglong *)(lVar10 + 0x28)) {
                      plVar11 = (longlong *)*plVar11;
                    }
                    if (uVar12 < 0x10) {
                      lVar14 = lVar15 + 0x10;
                    }
                    else {
                      lVar14 = *(longlong *)(lVar15 + 0x10);
                    }
                    if ((uVar17 == *(ulonglong *)(lVar10 + 0x20)) &&
                       ((uVar17 == 0 ||
                        (iVar9 = func_0x0001404210c0(lVar14,plVar11,uVar17), iVar9 == 0)))) break;
                    if (lVar10 == lVar2) goto LAB_14006a407;
                    lVar10 = *(longlong *)(lVar10 + 8);
                  }
                  if (lVar10 != 0) goto LAB_14006a40a;
                }
LAB_14006a407:
                lVar10 = lVar19;
LAB_14006a40a:
                uVar6 = local_res20;
                if (lVar10 == lVar19) {
                  local_res8 = CONCAT71(local_res8._1_7_,1);
                  plVar11 = local_res18;
                }
                else {
                  iVar9 = func_0x000140290e50(lVar15 + 0x50);
                  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_140290e00(5);
                  }
                  if (*(int *)(lVar15 + 0x9c) == 0x7fffffff) {
                    *(undefined4 *)(lVar15 + 0x9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_140290e00(6);
                  }
                  *(undefined8 *)(lVar15 + 0xb8) = uVar6;
                  *(undefined1 *)(lVar15 + 0x39) = 1;
                  FUN_140290f70();
                  plVar11 = local_res18;
                  lVar19 = local_b0;
                }
              }
              plVar18 = plVar18 + 1;
            } while (plVar18 != plVar11);
          }
          func_0x00014000dab0(local_a0);
          return;
        }
        lVar19 = *plVar11;
        if (*(char *)(lVar19 + 0x39) == '\0') {
          if (*(ulonglong *)(lVar19 + 0x28) < 0x10) {
            lVar15 = lVar19 + 0x10;
          }
          else {
            lVar15 = *(longlong *)(lVar19 + 0x10);
          }
          uVar12 = 0;
          uVar17 = 0xcbf29ce484222325;
          if (*(ulonglong *)(lVar19 + 0x20) != 0) {
            do {
              pbVar1 = (byte *)(lVar15 + uVar12);
              uVar12 = uVar12 + 1;
              uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
            } while (uVar12 < *(ulonglong *)(lVar19 + 0x20));
          }
          lVar10 = func_0x000140011170(&DAT_1404e53f8,local_d8,lVar19 + 0x10,uVar17);
          lVar15 = DAT_1404e5400;
          if (*(longlong *)(lVar10 + 8) != 0) {
            lVar15 = *(longlong *)(lVar10 + 8);
          }
          if ((lVar15 != DAT_1404e5400) && (*(longlong **)(lVar15 + 0x30) != (longlong *)0x0)) {
            iVar9 = (**(code **)(**(longlong **)(lVar15 + 0x30) + 0x20))();
            fVar21 = fVar4;
            if ((iVar9 != 2) && (iVar9 != 3)) {
              fVar21 = fVar5;
            }
            cVar8 = (**(code **)(**(longlong **)(lVar15 + 0x30) + 0x78))();
            if (cVar8 == '\0') {
              (*DAT_140426658)(&local_res8);
              lVar15 = *(longlong *)(lVar19 + 0xa0);
              *(ulonglong *)(lVar19 + 0xa0) = local_res8;
              fVar20 = (float)(longlong)(local_res8 - lVar15) / (float)*(longlong *)(lVar19 + 0xa8)
                       + *(float *)(lVar19 + 0xb0);
              *(float *)(lVar19 + 0xb0) = fVar20;
              if (fVar20 < fVar21) goto LAB_14006a2e1;
            }
          }
          func_0x000140032c90(local_b8,local_c8,lVar19 + 0x10);
        }
LAB_14006a2e1:
        plVar11 = plVar11 + 1;
      } while( true );
    }
  }
  uVar7 = DAT_1404e53b4 & 0xff7fffff;
  if ((param_2 != '\0') && ((DAT_1404e53b4 & 0x300000) == 0x300000)) {
    DAT_1404e53b4 = DAT_1404e53b4 & 0xff5fffff;
    func_0x000140074e70();
    uVar7 = DAT_1404e53b4;
  }
  DAT_1404e53b4 = uVar7;
  return;
}

