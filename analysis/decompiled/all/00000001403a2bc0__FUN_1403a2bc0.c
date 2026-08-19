// Function: FUN_1403a2bc0
// Addr: 1403a2bc0
// Size: 67 bytes


void FUN_1403a2bc0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  pbVar5 = (byte *)FUN_140398810(*param_1 + 0x188);
  if ((((uint)*pbVar5 * 0x100 + (uint)pbVar5[1]) * 0x100 + (uint)pbVar5[2]) * 0x100 +
      (uint)pbVar5[3] != 0) {
    uVar2 = *param_2;
    if (uVar2 != 0x61616c74) {
      iVar11 = 0;
      iVar12 = 0x4d;
      do {
        uVar4 = (uint)(iVar12 + iVar11) >> 1;
        lVar7 = (ulonglong)uVar4 * 0x10;
        uVar1 = *(uint *)(&UNK_140454a30 + lVar7);
        if (uVar2 < uVar1) {
          iVar12 = uVar4 - 1;
        }
        else {
          if (uVar2 <= uVar1) {
            uVar3 = *(undefined4 *)(&UNK_140454a34 + lVar7);
            uVar6 = FUN_140398810(*param_1 + 0x188);
            lVar9 = FUN_1403c9020(uVar6,uVar3);
            if ((uint)*(byte *)(lVar9 + 3) + (uint)*(byte *)(lVar9 + 2) * 0x100 == 0) {
              if (*(int *)(&UNK_140454a34 + lVar7) != 0x25) {
                return;
              }
              if (*(int *)(&UNK_140454a38 + lVar7) != 1) {
                return;
              }
              uVar6 = FUN_140398810(*param_1 + 0x188);
              lVar9 = FUN_1403c9020(uVar6,3);
              if ((uint)*(byte *)(lVar9 + 3) + (uint)*(byte *)(lVar9 + 2) * 0x100 == 0) {
                return;
              }
            }
            puVar8 = (undefined4 *)FUN_1403f55b0(param_1 + 5);
            puVar8[4] = param_2[2];
            puVar8[5] = param_2[3];
            *puVar8 = *(undefined4 *)(&UNK_140454a34 + lVar7);
            lVar10 = 8;
            if (param_2[1] == 0) {
              lVar10 = 0xc;
            }
            puVar8[1] = *(undefined4 *)(lVar10 + (longlong)(&UNK_140454a30 + lVar7));
            puVar8[3] = *(undefined4 *)((longlong)param_1 + 0x2c);
            *(byte *)(puVar8 + 2) = *(byte *)(lVar9 + 8) >> 7;
            return;
          }
          iVar11 = uVar4 + 1;
        }
        if (iVar12 < iVar11) {
          return;
        }
      } while( true );
    }
    uVar6 = FUN_140398810(*param_1 + 0x188);
    lVar7 = FUN_1403c9020(uVar6,0x11);
    if ((uint)*(byte *)(lVar7 + 3) + (uint)*(byte *)(lVar7 + 2) * 0x100 != 0) {
      puVar8 = (undefined4 *)FUN_1403f55b0(param_1 + 5);
      puVar8[4] = param_2[2];
      puVar8[5] = param_2[3];
      *puVar8 = 0x11;
      puVar8[1] = param_2[1];
      puVar8[3] = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(undefined1 *)(puVar8 + 2) = 1;
      return;
    }
  }
  return;
}

