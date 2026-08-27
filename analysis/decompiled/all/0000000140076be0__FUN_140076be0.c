// Function: FUN_140076be0
// Addr: 140076be0
// Size: 548 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140076be0(LARGE_INTEGER param_1,uint param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  LARGE_INTEGER local_res8;
  undefined1 local_68 [64];
  
  local_res8 = param_1;
  QueryPerformanceCounter(&local_res8);
  plVar7 = DAT_1404e5330;
  fVar6 = DAT_1404928e0;
  fVar5 = DAT_140492620;
  lVar10 = local_res8.QuadPart - _DAT_1404e5570;
  bVar4 = false;
  _DAT_1404e5570 = local_res8.s;
  bVar2 = (byte)DAT_1404e52e4 & 1;
  plVar13 = (longlong *)*DAT_1404e5330;
  fVar16 = (float)lVar10 / (float)_DAT_1404e5578;
  if (DAT_140492858 <= fVar16) {
    fVar16 = DAT_140492858;
  }
  if (plVar13 != DAT_1404e5330) {
    do {
      if (plVar13[7] != plVar13[8]) {
        if ((ulonglong)plVar13[5] < 0x10) {
          plVar12 = plVar13 + 2;
        }
        else {
          plVar12 = (longlong *)plVar13[2];
        }
        uVar14 = 0xcbf29ce484222325;
        uVar11 = 0;
        if (plVar13[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)plVar12 + uVar11);
            uVar11 = uVar11 + 1;
            uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
          } while (uVar11 < (ulonglong)plVar13[4]);
        }
        lVar9 = FUN_1400110a0(&DAT_1404e5368,local_68,plVar13 + 2,uVar14);
        lVar10 = DAT_1404e5370;
        if (*(longlong *)(lVar9 + 8) != 0) {
          lVar10 = *(longlong *)(lVar9 + 8);
        }
        if ((lVar10 == DAT_1404e5370) || ((param_2 >> (*(byte *)(lVar10 + 0x51) & 0x1f) & 1) == 0))
        {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((bVar2 == 0) && (!bVar3)) || ((*(byte *)((longlong)plVar13 + 0x74) & 2) != 0)) {
          if ((int)plVar13[0xe] - 2U < 2) {
            if (param_3 != '\0') goto LAB_140076d97;
          }
          else if (((fVar5 <= *(float *)(plVar13 + 0xd)) &&
                   (fVar15 = fVar16 + *(float *)((longlong)plVar13 + 0x7c),
                   *(float *)((longlong)plVar13 + 0x7c) = fVar15,
                   *(float *)(plVar13 + 0xd) <= fVar15 / fVar6)) &&
                  ((((longlong *)plVar13[6] == (longlong *)0x0 ||
                    (iVar8 = (**(code **)(*(longlong *)plVar13[6] + 0x20))(), iVar8 != 4)) ||
                   (((*(byte *)((longlong)plVar13 + 0x74) & 1) == 0 &&
                    (*(char *)((longlong)plVar13 + 0xe2) == '\0')))))) {
LAB_140076d97:
            FUN_140067a00(&DAT_1404e52e0,plVar13 + 2,0);
            bVar4 = true;
          }
        }
      }
      plVar13 = (longlong *)*plVar13;
    } while (plVar13 != plVar7);
    if (bVar4) {
      FUN_14006a030(0xcbf29ce484222325,1);
    }
  }
  return;
}

