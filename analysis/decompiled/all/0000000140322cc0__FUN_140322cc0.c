// Function: FUN_140322cc0
// Addr: 140322cc0
// Size: 690 bytes


int FUN_140322cc0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined1 local_e8 [48];
  code *local_b8;
  undefined8 local_58;
  longlong local_50;
  int local_44;
  uint local_40;
  
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  FUN_1404217a0(local_e8,0,200);
  local_res8[0] =
       FUN_140323800(local_e8,*(undefined8 *)(param_1 + 0xa0),uVar6,*(undefined8 *)(param_1 + 0xe0))
  ;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_140323610(param_1,local_e8,local_50), local_res8[0] == 0)) &&
     (-1 < param_2)) {
    puVar5 = (undefined8 *)FUN_1402f7e90(uVar6,0x48,local_res8);
    *(undefined8 **)(param_1 + 0x1e8) = puVar5;
    if (local_res8[0] == 0) {
      puVar3 = *(undefined8 **)(param_1 + 0xa0);
      if (local_40 == 0) {
        uVar6 = puVar3[1];
        *puVar5 = *puVar3;
        puVar5[1] = uVar6;
        uVar6 = puVar3[3];
        puVar5[2] = puVar3[2];
        puVar5[3] = uVar6;
        uVar6 = puVar3[5];
        puVar5[4] = puVar3[4];
        puVar5[5] = uVar6;
        uVar6 = puVar3[7];
        puVar5[6] = puVar3[6];
        puVar5[7] = uVar6;
        puVar5[8] = puVar3[8];
        *(int *)(param_1 + 0x1c0) = local_44;
      }
      else {
        uVar8 = *(int *)(puVar3 + 1) - local_44;
        if (local_40 <= (uint)(*(int *)(puVar3 + 1) - local_44)) {
          uVar8 = local_40;
        }
        local_40 = uVar8;
        uVar6 = FUN_1402f7fa0(uVar6,local_40,local_res8);
        *(undefined8 *)(param_1 + 0x1e0) = uVar6;
        if ((local_res8[0] != 0) ||
           (local_res8[0] = FUN_140322f80(uVar6,local_40,local_44,param_1,local_res18),
           local_res8[0] != 0)) goto LAB_140322f40;
        FUN_1402f5480(*(undefined8 *)(param_1 + 0x1e8),*(undefined8 *)(param_1 + 0x1e0));
        local_44 = 0;
        *(undefined4 *)(param_1 + 0x1c0) = 0;
      }
      uVar8 = *(uint *)(param_1 + 0x1a8);
      if (((uVar8 != 0) && (*(uint *)(param_1 + 0x1a4) < 5)) && (uVar8 < 5)) {
        uVar10 = *(int *)(*(longlong *)(param_1 + 0x1e8) + 8) - local_44;
        if (((*(uint *)(param_1 + 0x1a0) <= uVar10) && (*(uint *)(param_1 + 0x1ac) < 0x20000000)) &&
           ((uVar8 + *(uint *)(param_1 + 0x1a4)) * *(uint *)(param_1 + 0x1ac) <=
            uVar10 - *(uint *)(param_1 + 0x1a0))) {
          uVar9 = 0;
          if (*(int *)(param_1 + 0x1b0) != 0) {
            do {
              lVar7 = uVar9 * 0xfc;
              lVar4 = *(longlong *)(param_1 + 0x1b8);
              if (1000 < *(uint *)(lVar7 + 0x70 + lVar4)) {
                *(undefined4 *)(lVar7 + 0x70 + lVar4) = 7;
              }
              if (1000 < *(uint *)(lVar7 + 0x74 + lVar4)) {
                *(undefined4 *)(lVar7 + 0x74 + lVar4) = 1;
              }
              uVar8 = *(uint *)(lVar7 + 0xf0 + lVar4);
              if (((uVar8 != 0) && (*(int *)(lVar7 + 0xf8 + lVar4) == 0)) ||
                 (((uVar1 = *(uint *)(lVar7 + 0xf8 + lVar4), 4 < uVar1 ||
                   ((uVar2 = *(uint *)(lVar7 + 0xf4 + lVar4), uVar10 < uVar2 || (0x3fffffff < uVar8)
                    ))) || (uVar10 - uVar2 < uVar1 * uVar8)))) goto LAB_140322f39;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
            } while (uVar8 < *(uint *)(param_1 + 0x1b0));
          }
          local_res8[0] = FUN_140323c20(param_1);
          goto LAB_140322f40;
        }
      }
LAB_140322f39:
      local_res8[0] = 3;
    }
  }
LAB_140322f40:
  if (local_50 != 0) {
    FUN_1402f5c00(local_58,&local_50);
  }
  (*local_b8)(local_e8);
  return local_res8[0];
}

