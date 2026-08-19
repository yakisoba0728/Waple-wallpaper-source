// Function: FUN_140076cb0
// Addr: 140076cb0
// Size: 366 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140076cb0(longlong param_1,uint param_2,char param_3)

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
  longlong local_res8;
  undefined1 local_68 [64];
  
  local_res8 = param_1;
  (*DAT_140426658)(&local_res8);
  plVar7 = DAT_1404e5400;
  fVar6 = DAT_1404929b0;
  fVar5 = DAT_1404926f0;
  lVar10 = local_res8 - _DAT_1404e5640;
  bVar4 = false;
  _DAT_1404e5640 = local_res8;
  bVar2 = (byte)DAT_1404e53b4 & 1;
  plVar13 = (longlong *)*DAT_1404e5400;
  fVar16 = (float)lVar10 / (float)_DAT_1404e5648;
  if (DAT_140492928 <= fVar16) {
    fVar16 = DAT_140492928;
  }
  if (plVar13 != DAT_1404e5400) {
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
        lVar9 = func_0x000140011170(&DAT_1404e5438,local_68,plVar13 + 2,uVar14);
        lVar10 = DAT_1404e5440;
        if (*(longlong *)(lVar9 + 8) != 0) {
          lVar10 = *(longlong *)(lVar9 + 8);
        }
        if ((lVar10 == DAT_1404e5440) || ((param_2 >> (*(byte *)(lVar10 + 0x51) & 0x1f) & 1) == 0))
        {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((bVar2 == 0) && (!bVar3)) || ((*(byte *)((longlong)plVar13 + 0x74) & 2) != 0)) {
          if ((int)plVar13[0xe] - 2U < 2) {
            if (param_3 != '\0') goto code_r0x000140076e67;
          }
          else if (((fVar5 <= *(float *)(plVar13 + 0xd)) &&
                   (fVar15 = fVar16 + *(float *)((longlong)plVar13 + 0x7c),
                   *(float *)((longlong)plVar13 + 0x7c) = fVar15,
                   *(float *)(plVar13 + 0xd) <= fVar15 / fVar6)) &&
                  ((((longlong *)plVar13[6] == (longlong *)0x0 ||
                    (iVar8 = (**(code **)(*(longlong *)plVar13[6] + 0x20))(), iVar8 != 4)) ||
                   (((*(byte *)((longlong)plVar13 + 0x74) & 1) == 0 &&
                    (*(char *)((longlong)plVar13 + 0xe2) == '\0')))))) {
code_r0x000140076e67:
            func_0x000140067ad0(&DAT_1404e53b0,plVar13 + 2,0);
            bVar4 = true;
          }
        }
      }
      plVar13 = (longlong *)*plVar13;
    } while (plVar13 != plVar7);
    if (bVar4) {
      FUN_14006a100(0xcbf29ce484222325,1);
    }
  }
  return;
}

