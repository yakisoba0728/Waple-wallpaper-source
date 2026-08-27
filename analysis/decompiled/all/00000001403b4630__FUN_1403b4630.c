// Function: FUN_1403b4630
// Addr: 1403b4630
// Size: 590 bytes


void FUN_1403b4630(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong local_res8;
  longlong local_res10;
  byte *local_78;
  undefined8 local_70;
  longlong local_60;
  byte *local_58;
  int local_50;
  int local_4c;
  longlong *local_48;
  undefined4 local_40;
  
  uVar11 = (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 5) * 0x10000 +
           (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
  if (uVar11 != 0) {
    uVar13 = 0;
    local_res10 = param_2;
    do {
      uVar12 = (uint)uVar13;
      if (param_3 == 0) {
LAB_1403b4723:
        if (uVar12 < (uint)*(byte *)(param_1 + 6) * 0x100 + (uint)*(byte *)(param_1 + 4) * 0x1000000
                     + (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 7)) {
          pbVar7 = (byte *)(param_1 + 0xc + uVar13 * 8);
        }
        else {
          pbVar7 = (byte *)((longlong)&DAT_14045dd10 + 4);
        }
        uVar5 = (uint)pbVar7[3] +
                (uint)pbVar7[1] * 0x10000 + (uint)pbVar7[2] * 0x100 + (uint)*pbVar7 * 0x1000000;
        if (uVar5 == 0) {
          local_78 = (byte *)&DAT_14045dd10;
        }
        else {
          local_78 = (byte *)((ulonglong)uVar5 + param_1);
        }
        iVar8 = 0;
        pbVar7 = local_78;
        local_res8 = local_res10;
        local_70 = param_4;
        for (iVar10 = (uint)local_78[5] + (uint)local_78[4] * 0x100;
            ((pbVar9 = pbVar7 + 6, iVar10 != 0 &&
             (cVar1 = *(char *)(local_res8 + 0x40),
             cVar3 = FUN_1403c58e0(local_res8 + 0x10,(uint)pbVar7[7] + (uint)*pbVar9 * 0x100),
             cVar3 == cVar1)) && (iVar10 != 0)); iVar10 = iVar10 + -1) {
          iVar8 = iVar8 + 1;
          pbVar7 = pbVar9;
        }
        local_60 = local_res8;
        local_48 = &local_res8;
        local_40 = 0;
        local_58 = pbVar9;
        local_50 = iVar10;
        local_4c = iVar8;
        FUN_140361cc0(&local_78);
      }
      else {
        lVar2 = *(longlong *)(param_3 + 0x28);
        if ((lVar2 != 0) &&
           (uVar6 = (ulonglong)(uVar12 * 0x1e3779b1 & 0x3fffffff) %
                    (ulonglong)*(uint *)(param_3 + 0x20),
           (*(uint *)(lVar2 + 4 + uVar6 * 0x10) >> 1 & 1) != 0)) {
          iVar10 = 0;
          do {
            puVar4 = (uint *)(uVar6 * 0x10 + lVar2);
            if (*puVar4 == uVar12) {
              if (((puVar4[1] & 1) != 0) && (puVar4 != (uint *)0x0)) goto LAB_1403b4723;
              break;
            }
            iVar10 = iVar10 + 1;
            uVar6 = (ulonglong)((int)uVar6 + iVar10 & *(uint *)(param_3 + 0x1c));
          } while ((*(uint *)(lVar2 + 4 + uVar6 * 0x10) >> 1 & 1) != 0);
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
    } while (uVar12 + 1 < uVar11);
  }
  return;
}

