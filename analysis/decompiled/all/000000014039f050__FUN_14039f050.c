// Function: FUN_14039f050
// Addr: 14039f050
// Size: 1272 bytes


undefined8 FUN_14039f050(longlong param_1,uint param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  ushort uVar10;
  ushort uVar11;
  float fVar12;
  
  lVar9 = *(longlong *)(param_1 + 0x20);
  if (param_2 < 0x76617364) {
    if (param_2 != 0x76617363) {
      if (param_2 == 0x68617363) {
        lVar6 = FUN_140398100(lVar9 + 0xa0);
        if ((*(char *)(lVar6 + 0x3f) < '\0') &&
           ((((lVar6 = FUN_140398100(lVar9 + 0xa0),
              (ushort)((ushort)*(byte *)(lVar6 + 5) + (ushort)*(byte *)(lVar6 + 4) * 0x100) != 0 ||
              ((ushort)((ushort)*(byte *)(lVar6 + 7) + (ushort)*(byte *)(lVar6 + 6) * 0x100) != 0))
             || ((ushort)((ushort)*(byte *)(lVar6 + 0x41) + (ushort)*(byte *)(lVar6 + 0x40) * 0x100)
                 != 0)) ||
            ((ushort)((ushort)*(byte *)(lVar6 + 0x43) + (ushort)*(byte *)(lVar6 + 0x42) * 0x100) !=
             0)))) {
          if (param_3 == (int *)0x0) {
            return 1;
          }
          lVar6 = FUN_140398100(lVar9 + 0xa0);
          uVar10 = (ushort)*(byte *)(lVar6 + 0x45);
          uVar11 = (ushort)*(byte *)(lVar6 + 0x44) << 8;
        }
        else {
          pbVar8 = (byte *)FUN_140398830(lVar9 + 0x90);
          if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
          lVar6 = FUN_140398830(lVar9 + 0x90);
          uVar11 = (ushort)*(byte *)(lVar6 + 5);
          uVar10 = (ushort)*(byte *)(lVar6 + 4) << 8;
        }
        uVar7 = FUN_1403c5010(lVar9 + 0x120);
        fVar12 = (float)FUN_1403cff20(uVar7,0x68617363,*(undefined8 *)(param_1 + 0x80),
                                      *(undefined4 *)(param_1 + 0x7c));
        fVar12 = (float)FUN_14039ad60(fVar12 + (float)(int)(short)(uVar10 + uVar11),0x68617363);
        fVar12 = fVar12 * *(float *)(param_1 + 0x54);
        goto LAB_14039f51a;
      }
      if (param_2 == 0x68647363) {
        lVar6 = FUN_140398100(lVar9 + 0xa0);
        if (*(char *)(lVar6 + 0x3f) < '\0') {
          uVar7 = FUN_140398100(lVar9 + 0xa0);
          cVar3 = FUN_1403d0b20(uVar7);
          if (cVar3 == '\0') goto LAB_14039f1e4;
          if (param_3 == (int *)0x0) {
            return 1;
          }
          lVar6 = FUN_140398100(lVar9 + 0xa0);
          bVar1 = *(byte *)(lVar6 + 0x46);
          bVar2 = *(byte *)(lVar6 + 0x47);
          uVar7 = FUN_1403c5010(lVar9 + 0x120);
          fVar12 = (float)FUN_1403cff20(uVar7,0x68647363,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined4 *)(param_1 + 0x7c));
          sVar4 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
        }
        else {
LAB_14039f1e4:
          pbVar8 = (byte *)FUN_140398830(lVar9 + 0x90);
          if ((uint)pbVar8[1] + (uint)*pbVar8 * 0x100 == 0) {
            return 0;
          }
          if (param_3 == (int *)0x0) {
            return 1;
          }
          uVar7 = FUN_1403c5010(lVar9 + 0x120);
          lVar9 = FUN_140398830(lVar9 + 0x90);
          bVar1 = *(byte *)(lVar9 + 6);
          bVar2 = *(byte *)(lVar9 + 7);
          fVar12 = (float)FUN_1403cff20(uVar7,0x68647363,*(undefined8 *)(param_1 + 0x80),
                                        *(undefined4 *)(param_1 + 0x7c));
          sVar4 = (ushort)bVar1 * 0x100 + (ushort)bVar2;
        }
        fVar12 = (float)FUN_14039ad60(fVar12 + (float)(int)sVar4,0x68647363);
        fVar12 = fVar12 * *(float *)(param_1 + 0x54);
        goto LAB_14039f51a;
      }
      if (param_2 != 0x686c6770) {
        return 0;
      }
      lVar6 = FUN_140398100(lVar9 + 0xa0);
      if (*(char *)(lVar6 + 0x3f) < '\0') {
        uVar7 = FUN_140398100(lVar9 + 0xa0);
        cVar3 = FUN_1403d0b20(uVar7);
        if (cVar3 == '\0') goto LAB_14039f0e8;
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar6 = FUN_140398100(lVar9 + 0xa0);
        uVar11 = (ushort)*(byte *)(lVar6 + 0x49);
        uVar10 = (ushort)*(byte *)(lVar6 + 0x48) << 8;
      }
      else {
LAB_14039f0e8:
        pbVar8 = (byte *)FUN_140398830(lVar9 + 0x90);
        if ((uint)pbVar8[1] + (uint)*pbVar8 * 0x100 == 0) {
          return 0;
        }
        if (param_3 == (int *)0x0) {
          return 1;
        }
        lVar6 = FUN_140398830(lVar9 + 0x90);
        uVar10 = (ushort)*(byte *)(lVar6 + 9);
        uVar11 = (ushort)*(byte *)(lVar6 + 8) << 8;
      }
      uVar7 = FUN_1403c5010(lVar9 + 0x120);
      fVar12 = (float)FUN_1403cff20(uVar7,0x686c6770,*(undefined8 *)(param_1 + 0x80),
                                    *(undefined4 *)(param_1 + 0x7c));
      fVar12 = (float)FUN_14039ad60(fVar12 + (float)(int)(short)(uVar10 + uVar11),0x686c6770);
      fVar12 = fVar12 * *(float *)(param_1 + 0x54);
      goto LAB_14039f51a;
    }
    pbVar8 = (byte *)FUN_140398c40(lVar9 + 200);
    if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) {
      return 0;
    }
    if (param_3 == (int *)0x0) {
      return 1;
    }
    lVar6 = FUN_140398c40(lVar9 + 200);
    bVar1 = *(byte *)(lVar6 + 4);
    bVar2 = *(byte *)(lVar6 + 5);
    uVar7 = FUN_1403c5010(lVar9 + 0x120);
    fVar12 = (float)FUN_1403cff20(uVar7,0x76617363,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(param_1 + 0x7c));
    uVar7 = 0x76617363;
    iVar5 = (int)(short)((ushort)bVar1 * 0x100 + (ushort)bVar2);
  }
  else if (param_2 == 0x76647363) {
    pbVar8 = (byte *)FUN_140398c40(lVar9 + 200);
    if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) {
      return 0;
    }
    if (param_3 == (int *)0x0) {
      return 1;
    }
    lVar6 = FUN_140398c40(lVar9 + 200);
    iVar5 = (int)(short)((ushort)*(byte *)(lVar6 + 6) * 0x100 + (ushort)*(byte *)(lVar6 + 7));
    uVar7 = FUN_1403c5010(lVar9 + 0x120);
    fVar12 = (float)FUN_1403cff20(uVar7,0x76647363,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(param_1 + 0x7c));
    uVar7 = 0x76647363;
  }
  else {
    if (param_2 != 0x766c6770) {
      return 0;
    }
    pbVar8 = (byte *)FUN_140398c40(lVar9 + 200);
    if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) {
      return 0;
    }
    if (param_3 == (int *)0x0) {
      return 1;
    }
    uVar7 = FUN_1403c5010(lVar9 + 0x120);
    lVar9 = FUN_140398c40(lVar9 + 200);
    bVar1 = *(byte *)(lVar9 + 8);
    bVar2 = *(byte *)(lVar9 + 9);
    fVar12 = (float)FUN_1403cff20(uVar7,0x766c6770,*(undefined8 *)(param_1 + 0x80),
                                  *(undefined4 *)(param_1 + 0x7c));
    uVar7 = 0x766c6770;
    iVar5 = (int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  }
  fVar12 = (float)FUN_14039ad60(fVar12 + (float)iVar5,uVar7);
  fVar12 = fVar12 * *(float *)(param_1 + 0x50);
LAB_14039f51a:
  fVar12 = (float)FUN_14041a5c0(fVar12 + DAT_1404926c0);
  *param_3 = (int)fVar12;
  return 1;
}

