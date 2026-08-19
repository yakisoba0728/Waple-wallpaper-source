// Function: FUN_1403d51b0
// Addr: 1403d51b0
// Size: 29 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403d51b0(longlong param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  pbVar3 = (byte *)FUN_140398d10(lVar6 + 200);
  if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] != 0) {
    if (param_3 != (int *)0x0) {
      lVar4 = FUN_140398d10(lVar6 + 200);
      bVar1 = *(byte *)(lVar4 + 5);
      bVar2 = *(byte *)(lVar4 + 4);
      uVar5 = FUN_1403c50e0(lVar6 + 0x120);
      fVar7 = (float)func_0x0001403cfff0(uVar5,0x76617363,*(undefined8 *)(param_1 + 0x80),
                                         *(undefined4 *)(param_1 + 0x7c));
      fVar7 = (float)FUN_14041a690((float)((uint)(fVar7 + (float)(int)(short)((ushort)bVar1 +
                                                                             (ushort)bVar2 * 0x100))
                                          & _DAT_140493090) * *(float *)(param_1 + 0x50) +
                                   DAT_140492790);
      *param_3 = (int)fVar7;
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar6 = lVar4 + 200;
    pbVar3 = (byte *)FUN_140398d10(lVar6);
    if ((uint)*pbVar3 * 0x100 + (uint)pbVar3[1] != 0) {
      if (param_3 + 1 != (int *)0x0) {
        lVar6 = FUN_140398d10(lVar6);
        bVar1 = *(byte *)(lVar6 + 6);
        bVar2 = *(byte *)(lVar6 + 7);
        uVar5 = FUN_1403c50e0(lVar4 + 0x120);
        fVar7 = (float)func_0x0001403cfff0(uVar5,0x76647363,*(undefined8 *)(param_1 + 0x80),
                                           *(undefined4 *)(param_1 + 0x7c));
        dVar8 = (double)(fVar7 + (float)(int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100));
        fVar7 = (float)FUN_14041a690((float)(double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                                             _UNK_1404930a4 ^ DAT_1404930b0._4_4_,
                                                             SUB84(dVar8,0) & _DAT_1404930a0 ^
                                                             (uint)DAT_1404930b0) *
                                     *(float *)(param_1 + 0x50) + DAT_140492790);
        param_3[1] = (int)fVar7;
      }
      lVar6 = *(longlong *)(param_1 + 0x20);
      pbVar3 = (byte *)FUN_140398d10(lVar6 + 200);
      if ((uint)pbVar3[1] + (uint)*pbVar3 * 0x100 != 0) {
        if (param_3 + 2 != (int *)0x0) {
          uVar5 = FUN_1403c50e0(lVar6 + 0x120);
          lVar6 = FUN_140398d10(lVar6 + 200);
          bVar1 = *(byte *)(lVar6 + 8);
          bVar2 = *(byte *)(lVar6 + 9);
          fVar7 = (float)func_0x0001403cfff0(uVar5,0x766c6770,*(undefined8 *)(param_1 + 0x80),
                                             *(undefined4 *)(param_1 + 0x7c));
          fVar7 = (float)FUN_14041a690((fVar7 + (float)(int)(short)((ushort)bVar2 +
                                                                   (ushort)bVar1 * 0x100)) *
                                       *(float *)(param_1 + 0x50) + DAT_140492790);
          param_3[2] = (int)fVar7;
        }
        return 1;
      }
    }
  }
  return 0;
}

