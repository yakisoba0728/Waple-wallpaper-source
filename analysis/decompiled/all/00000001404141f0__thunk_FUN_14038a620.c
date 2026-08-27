// Function: thunk_FUN_14038a620
// Addr: 1404141f0
// Size: 5 bytes


void thunk_FUN_14038a620(longlong param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 auStackX_8 [2];
  
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_3 == 0xffffffff) {
      sVar6 = strlen((char *)param_2);
      param_3 = (uint)sVar6;
    }
    if (param_5 == 0xffffffff) {
      param_5 = param_3 - param_4;
    }
    uVar12 = param_3;
    if (param_4 <= param_3) {
      uVar12 = param_4;
    }
    uVar5 = 0;
    if (-1 < (int)param_5) {
      uVar5 = param_5;
    }
    uVar9 = param_3 - uVar12;
    if ((int)uVar5 <= (int)(param_3 - uVar12)) {
      uVar9 = uVar5;
    }
    if (uVar9 < 0x10000000) {
      cVar4 = FUN_1403bf1a0(param_1,(int)((ulonglong)(longlong)(int)uVar9 >> 2) +
                                    *(int *)(param_1 + 0x60));
      if (cVar4 != '\0') {
        if ((*(int *)(param_1 + 0x60) == 0) && (uVar12 != 0)) {
          *(undefined4 *)(param_1 + 0xb0) = 0;
          if (param_2 < param_2 + uVar12) {
            uVar5 = 0;
            pbVar8 = param_2 + uVar12;
            do {
              if (4 < uVar5) break;
              pbVar11 = pbVar8 + -1;
              for (pbVar10 = pbVar11;
                  ((param_2 < pbVar10 && ((*pbVar10 & 0xc0) == 0x80)) &&
                  ((longlong)pbVar8 - (longlong)pbVar10 < 4)); pbVar10 = pbVar10 + -1) {
              }
              pbVar7 = (byte *)FUN_1403ecea0(pbVar10,pbVar8,auStackX_8,uVar2);
              uVar3 = uVar2;
              if (pbVar7 == pbVar8) {
                pbVar11 = pbVar10;
                uVar3 = auStackX_8[0];
              }
              auStackX_8[0] = uVar3;
              *(undefined4 *)(param_1 + 0x88 + (ulonglong)*(uint *)(param_1 + 0xb0) * 4) =
                   auStackX_8[0];
              *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
              uVar5 = *(uint *)(param_1 + 0xb0);
              pbVar8 = pbVar11;
            } while (param_2 < pbVar11);
          }
        }
        pbVar11 = param_2 + uVar12;
        pbVar8 = pbVar11;
        while (pbVar10 = pbVar8, pbVar10 < pbVar11 + (int)uVar9) {
          pbVar8 = (byte *)FUN_1403ecea0(pbVar10,pbVar11 + (int)uVar9,auStackX_8,uVar2);
          cVar4 = FUN_1403bf1a0(param_1,*(int *)(param_1 + 0x60) + 1);
          if (cVar4 != '\0') {
            puVar1 = (undefined4 *)
                     (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x14);
            *(undefined8 *)(puVar1 + 3) = 0;
            *puVar1 = auStackX_8[0];
            puVar1[1] = 0;
            puVar1[2] = (int)pbVar10 - (int)param_2;
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
        }
        param_2 = param_2 + (int)param_3;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        if (pbVar10 < param_2) {
          uVar12 = 0;
          do {
            if (4 < uVar12) break;
            pbVar10 = (byte *)FUN_1403ecea0(pbVar10,param_2,auStackX_8,uVar2);
            *(undefined4 *)(param_1 + 0x9c + (ulonglong)uVar12 * 4) = auStackX_8[0];
            *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
            uVar12 = *(uint *)(param_1 + 0xb4);
          } while (pbVar10 < param_2);
        }
        *(undefined4 *)(param_1 + 0x30) = 1;
      }
    }
  }
  return;
}

