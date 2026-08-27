// Function: FUN_1403494d0
// Addr: 1403494d0
// Size: 514 bytes


int FUN_1403494d0(longlong param_1,longlong param_2,ushort param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined8 *puVar11;
  ushort uVar12;
  undefined1 *puVar13;
  ushort uVar14;
  byte *pbVar15;
  int local_res18 [2];
  uint local_res20;
  
  uVar5 = (uint)param_3 * 2;
  if (param_4 < uVar5) {
    return 3;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar7 = 0;
  local_res20 = uVar5;
  lVar6 = FUN_1402f7ff0(uVar4,2,0,(uint)param_3,0,local_res18);
  if ((local_res18[0] == 0) && (local_res18[0] = FUN_1402f4fe0(param_2,uVar5), local_res18[0] == 0))
  {
    uVar12 = 0;
    puVar13 = *(undefined1 **)(param_2 + 0x38);
    uVar9 = 0;
    uVar10 = 0;
    if (param_3 != 0) {
      do {
        uVar8 = CONCAT11(*puVar13,puVar13[1]);
        uVar12 = uVar8;
        if (uVar8 <= uVar10) {
          uVar12 = uVar10;
        }
        uVar14 = (short)uVar9 + 1;
        *(ushort *)(lVar6 + uVar9 * 2) = uVar8;
        puVar13 = puVar13 + 2;
        uVar9 = (ulonglong)uVar14;
        uVar10 = uVar12;
      } while (uVar14 < param_3);
    }
    FUN_1402f5100(param_2);
    uVar10 = uVar12 - 0x101;
    if (uVar12 < 0x102) {
      uVar10 = 0;
    }
    if (uVar10 == 0) {
LAB_140349680:
      *(longlong *)(param_1 + 8) = lVar6;
      *(ushort *)(param_1 + 2) = param_3;
      *(ushort *)(param_1 + 4) = uVar10;
      *(longlong *)(param_1 + 0x10) = lVar7;
      return 0;
    }
    param_4 = param_4 - local_res20;
    lVar7 = FUN_1402f7fa0(uVar4,param_4 + 1 + (uint)uVar10 * 8,local_res18);
    if (local_res18[0] == 0) {
      pbVar2 = (byte *)(lVar7 + (ulonglong)uVar10 * 8);
      local_res18[0] = FUN_1402f54b0(param_2,pbVar2);
      if (local_res18[0] == 0) {
        pbVar15 = pbVar2 + param_4;
        for (uVar12 = 0; (pbVar2 < pbVar15 && (uVar12 < uVar10)); uVar12 = uVar12 + 1) {
          bVar3 = *pbVar2;
          pbVar1 = pbVar2 + 1;
          *pbVar2 = 0;
          pbVar2 = pbVar1 + bVar3;
          *(byte **)(lVar7 + (ulonglong)uVar12 * 8) = pbVar1;
        }
        *pbVar15 = 0;
        if (uVar12 < uVar10) {
          puVar11 = (undefined8 *)(lVar7 + (ulonglong)uVar12 * 8);
          for (uVar9 = (ulonglong)(ushort)(uVar10 - uVar12); uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar11 = pbVar15;
            puVar11 = puVar11 + 1;
          }
        }
        goto LAB_140349680;
      }
    }
  }
  FUN_1402f7f90(uVar4,lVar7);
  FUN_1402f7f90(uVar4,lVar6);
  return local_res18[0];
}

