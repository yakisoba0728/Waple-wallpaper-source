// Function: FUN_1403d4eb0
// Addr: 1403d4eb0
// Size: 547 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403d4eb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  cVar4 = FUN_14039f050(param_1,0x68617363);
  if (cVar4 == '\0') {
LAB_1403d50bf:
    uVar6 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x20);
    piVar1 = (int *)(param_3 + 4);
    lVar5 = FUN_140398100(lVar7 + 0xa0);
    fVar10 = DAT_1404926c0;
    if (*(char *)(lVar5 + 0x3f) < '\0') {
      uVar6 = FUN_140398100(lVar7 + 0xa0);
      cVar4 = FUN_1403d0b20(uVar6);
      if (cVar4 == '\0') goto LAB_1403d4f46;
      if (piVar1 != (int *)0x0) {
        lVar5 = FUN_140398100(lVar7 + 0xa0);
        bVar2 = *(byte *)(lVar5 + 0x46);
        bVar3 = *(byte *)(lVar5 + 0x47);
        uVar6 = FUN_1403c5010(lVar7 + 0x120);
LAB_1403d4f94:
        fVar9 = (float)FUN_1403cff20(uVar6,0x68647363,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(param_1 + 0x7c));
        dVar11 = (double)(fVar9 + (float)(int)(short)((ushort)bVar3 + (ushort)bVar2 * 0x100));
        fVar9 = (float)FUN_14041a5c0((float)(double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                                                             _UNK_140492fd4 ^ DAT_140492fe0._4_4_,
                                                             SUB84(dVar11,0) & _DAT_140492fd0 ^
                                                             (uint)DAT_140492fe0) *
                                     *(float *)(param_1 + 0x54) + fVar10);
        *piVar1 = (int)fVar9;
      }
    }
    else {
LAB_1403d4f46:
      pbVar8 = (byte *)FUN_140398830(lVar7 + 0x90);
      if ((uint)pbVar8[1] + (uint)*pbVar8 * 0x100 == 0) goto LAB_1403d50bf;
      if (piVar1 != (int *)0x0) {
        uVar6 = FUN_1403c5010(lVar7 + 0x120);
        lVar7 = FUN_140398830(lVar7 + 0x90);
        bVar2 = *(byte *)(lVar7 + 6);
        bVar3 = *(byte *)(lVar7 + 7);
        goto LAB_1403d4f94;
      }
    }
    piVar1 = (int *)(param_3 + 8);
    lVar7 = *(longlong *)(param_1 + 0x20);
    lVar5 = FUN_140398100(lVar7 + 0xa0);
    if (*(char *)(lVar5 + 0x3f) < '\0') {
      uVar6 = FUN_140398100(lVar7 + 0xa0);
      cVar4 = FUN_1403d0b20(uVar6);
      if (cVar4 == '\0') goto LAB_1403d503a;
      if (piVar1 != (int *)0x0) {
        lVar5 = FUN_140398100(lVar7 + 0xa0);
        bVar2 = *(byte *)(lVar5 + 0x49);
        bVar3 = *(byte *)(lVar5 + 0x48);
LAB_1403d506d:
        uVar6 = FUN_1403c5010(lVar7 + 0x120);
        fVar9 = (float)FUN_1403cff20(uVar6,0x686c6770,*(undefined8 *)(param_1 + 0x80),
                                     *(undefined4 *)(param_1 + 0x7c));
        fVar10 = (float)FUN_14041a5c0((fVar9 + (float)(int)(short)((ushort)bVar3 * 0x100 +
                                                                  (ushort)bVar2)) *
                                      *(float *)(param_1 + 0x54) + fVar10);
        *piVar1 = (int)fVar10;
      }
    }
    else {
LAB_1403d503a:
      pbVar8 = (byte *)FUN_140398830(lVar7 + 0x90);
      if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 0) goto LAB_1403d50bf;
      if (piVar1 != (int *)0x0) {
        lVar5 = FUN_140398830(lVar7 + 0x90);
        bVar2 = *(byte *)(lVar5 + 9);
        bVar3 = *(byte *)(lVar5 + 8);
        goto LAB_1403d506d;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

