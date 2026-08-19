// Function: FUN_14038a6f0
// Addr: 14038a6f0
// Size: 337 bytes


void FUN_14038a6f0(longlong param_1,byte *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 4) != '\0') {
    if (param_3 == 0xffffffff) {
      func_0x000140421ed0(param_2);
      return;
    }
    if (param_5 == 0xffffffff) {
      param_5 = param_3 - param_4;
    }
    uVar11 = param_3;
    if (param_4 <= param_3) {
      uVar11 = param_4;
    }
    uVar5 = 0;
    if (-1 < (int)param_5) {
      uVar5 = param_5;
    }
    uVar8 = param_3 - uVar11;
    if ((int)uVar5 <= (int)(param_3 - uVar11)) {
      uVar8 = uVar5;
    }
    if (uVar8 < 0x10000000) {
      cVar4 = func_0x0001403bf270(param_1,(int)((ulonglong)(longlong)(int)uVar8 >> 2) +
                                          *(int *)(param_1 + 0x60));
      if (cVar4 != '\0') {
        if ((*(int *)(param_1 + 0x60) == 0) && (uVar11 != 0)) {
          *(undefined4 *)(param_1 + 0xb0) = 0;
          if (param_2 < param_2 + uVar11) {
            uVar5 = 0;
            pbVar7 = param_2 + uVar11;
            do {
              if (4 < uVar5) break;
              pbVar10 = pbVar7 + -1;
              for (pbVar9 = pbVar10;
                  ((param_2 < pbVar9 && ((*pbVar9 & 0xc0) == 0x80)) &&
                  ((longlong)pbVar7 - (longlong)pbVar9 < 4)); pbVar9 = pbVar9 + -1) {
              }
              pbVar6 = (byte *)FUN_1403ecf70(pbVar9,pbVar7,local_res8,uVar2);
              uVar3 = uVar2;
              if (pbVar6 == pbVar7) {
                pbVar10 = pbVar9;
                uVar3 = local_res8[0];
              }
              local_res8[0] = uVar3;
              *(undefined4 *)(param_1 + 0x88 + (ulonglong)*(uint *)(param_1 + 0xb0) * 4) =
                   local_res8[0];
              *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
              uVar5 = *(uint *)(param_1 + 0xb0);
              pbVar7 = pbVar10;
            } while (param_2 < pbVar10);
          }
        }
        pbVar10 = param_2 + uVar11;
        pbVar7 = pbVar10;
        while (pbVar9 = pbVar7, pbVar9 < pbVar10 + (int)uVar8) {
          pbVar7 = (byte *)FUN_1403ecf70(pbVar9,pbVar10 + (int)uVar8,local_res8,uVar2);
          cVar4 = func_0x0001403bf270(param_1,*(int *)(param_1 + 0x60) + 1);
          if (cVar4 != '\0') {
            puVar1 = (undefined4 *)
                     (*(longlong *)(param_1 + 0x70) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x14);
            *(undefined8 *)(puVar1 + 3) = 0;
            *puVar1 = local_res8[0];
            puVar1[1] = 0;
            puVar1[2] = (int)pbVar9 - (int)param_2;
            *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
          }
        }
        param_2 = param_2 + (int)param_3;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        if (pbVar9 < param_2) {
          uVar11 = 0;
          do {
            if (4 < uVar11) break;
            pbVar9 = (byte *)FUN_1403ecf70(pbVar9,param_2,local_res8,uVar2);
            *(undefined4 *)(param_1 + 0x9c + (ulonglong)uVar11 * 4) = local_res8[0];
            *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
            uVar11 = *(uint *)(param_1 + 0xb4);
          } while (pbVar9 < param_2);
        }
        *(undefined4 *)(param_1 + 0x30) = 1;
      }
    }
  }
  return;
}

