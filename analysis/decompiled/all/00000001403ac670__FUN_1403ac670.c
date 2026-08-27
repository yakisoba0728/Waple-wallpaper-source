// Function: FUN_1403ac670
// Addr: 1403ac670
// Size: 1018 bytes


ulonglong FUN_1403ac670(byte *param_1,longlong param_2,uint param_3,uint param_4,byte *param_5,
                       uint param_6,uint param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  short sVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 local_res18 [2];
  float local_res20 [2];
  
  if (param_3 < (uint)*param_1 * 0x100 + (uint)param_1[1]) {
    pbVar9 = param_1 + (ulonglong)param_3 * 4 + 2;
  }
  else {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  uVar7 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
  if (uVar7 == 0) {
    param_1 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1 = param_1 + uVar7;
  }
  uVar4 = 0;
  if (param_4 < (uint)*param_5 * 0x100 + (uint)param_5[1]) {
    uVar7 = (uint)pbVar9[1] + (uint)*pbVar9 * 0x100;
    uVar4 = (ulonglong)param_6;
    if (uVar7 < param_6) {
      lVar2 = *(longlong *)(param_2 + 0xa0);
      uVar7 = param_4 * param_6 + uVar7;
      uVar4 = FUN_1404093d0(param_5 + (ulonglong)uVar7 * 2 + 2,param_2 + 0xa8,param_5);
      if ((char)uVar4 != '\0') {
        bVar6 = param_5[(ulonglong)uVar7 * 2 + 2];
        if (CONCAT11(bVar6,param_5[(ulonglong)uVar7 * 2 + 3]) != 0) {
          uVar4 = FUN_140400fb0(param_5 + (uint)CONCAT11(bVar6,param_5[(ulonglong)uVar7 * 2 + 3]),
                                param_2 + 0xa8);
          if ((char)uVar4 == '\0') goto LAB_1403aca45;
          bVar6 = param_5[(ulonglong)uVar7 * 2 + 2];
        }
        uVar4 = 0;
        uVar7 = (uint)bVar6 * 0x100 + (uint)param_5[(ulonglong)uVar7 * 2 + 3];
        if (uVar7 != 0) {
          param_5 = param_5 + uVar7;
          FUN_14040eef0(lVar2,(ulonglong)param_7,*(int *)(lVar2 + 0x5c) + 1);
          local_res18[0] = 0;
          local_res20[0] = 0.0;
          uVar1 = *(undefined4 *)
                   (*(longlong *)(lVar2 + 0x70) + (ulonglong)*(uint *)(lVar2 + 0x5c) * 0x14);
          iVar8 = (uint)*param_1 * 0x100 + (uint)param_1[1];
          if (iVar8 == 1) {
            fVar10 = (float)(int)(short)((ushort)param_1[3] + (ushort)param_1[2] * 0x100) *
                     *(float *)(*(longlong *)(param_2 + 0x90) + 0x50);
          }
          else if (iVar8 == 2) {
            FUN_1403c6050(param_1,param_2,uVar1,local_res20,local_res18);
            fVar10 = local_res20[0];
          }
          else {
            fVar10 = 0.0;
            if (iVar8 == 3) {
              FUN_1403c6320(param_1,param_2,uVar1,local_res20,local_res18);
              fVar10 = local_res20[0];
            }
          }
          local_res18[0] = 0;
          auVar11 = ZEXT816(0);
          local_res20[0] = 0.0;
          uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + (ulonglong)param_7 * 0x14);
          iVar8 = (uint)*param_5 * 0x100 + (uint)param_5[1];
          if (iVar8 == 1) {
            auVar11 = ZEXT416((uint)((float)(int)(short)((ushort)param_5[3] +
                                                        (ushort)param_5[2] * 0x100) *
                                    *(float *)(*(longlong *)(param_2 + 0x90) + 0x50)));
          }
          else if (iVar8 == 2) {
            FUN_1403c6050(param_5,param_2,uVar1,local_res20,local_res18);
            auVar11 = ZEXT416((uint)local_res20[0]);
          }
          else if (iVar8 == 3) {
            FUN_1403c6320(param_5,param_2,uVar1,local_res20,local_res18);
            auVar11 = ZEXT416((uint)local_res20[0]);
          }
          uVar4 = (ulonglong)*(uint *)(lVar2 + 0x5c);
          lVar3 = *(longlong *)(lVar2 + 0x80);
          sVar5 = (short)param_7 - (short)*(uint *)(lVar2 + 0x5c);
          *(short *)(lVar3 + 0x10 + uVar4 * 0x14) = sVar5;
          if ((int)sVar5 == param_7 - *(int *)(lVar2 + 0x5c)) {
            *(undefined1 *)(lVar3 + 0x12 + uVar4 * 0x14) = 1;
            auVar11._0_4_ = (auVar11._0_4_ - fVar10) + DAT_1404926c0;
            fVar10 = (float)FUN_14041a5c0(auVar11._0_8_);
            *(int *)(lVar3 + 8 + uVar4 * 0x14) = (int)fVar10;
            fVar10 = (float)FUN_14041a5c0();
            iVar8 = (int)fVar10;
            *(int *)(lVar3 + 0xc + uVar4 * 0x14) = iVar8;
            *(uint *)(lVar2 + 0xd8) = *(uint *)(lVar2 + 0xd8) | 8;
          }
          else {
            iVar8 = 0;
            *(undefined2 *)(lVar3 + 0x10 + uVar4 * 0x14) = 0;
          }
          *(int *)(lVar2 + 0x5c) = *(int *)(lVar2 + 0x5c) + 1;
          return CONCAT71((uint7)(uint3)((uint)iVar8 >> 8),1);
        }
      }
    }
  }
LAB_1403aca45:
  return uVar4 & 0xffffffffffffff00;
}

