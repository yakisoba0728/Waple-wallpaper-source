// Function: FUN_1402fcb20
// Addr: 1402fcb20
// Size: 631 bytes


int FUN_1402fcb20(longlong param_1,int param_2,int param_3,char param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(uint *)(param_1 + 0x10) < 0xc) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0xc;
      *(longlong *)(param_1 + 0x18) = param_1 + 0x538;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 <= *(uint *)(param_1 + 0x10)) {
      if (0x1c71c70 < uVar1) {
        *param_6 = 0;
        return 0x40;
      }
      uVar10 = (uVar1 >> 2) + 4 + uVar1;
      if ((uVar10 < uVar1) || (0x1c71c71 < uVar10)) {
        uVar10 = 0x1c71c71;
      }
      if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)(param_1 + 0x538)) {
        puVar4 = (undefined8 *)FUN_1402f80b0(param_5,0x48,0,uVar10,0,local_res8);
        *(undefined8 **)(param_1 + 0x18) = puVar4;
        if (local_res8[0] != 0) {
          *param_6 = 0;
          return local_res8[0];
        }
        lVar7 = 6;
        puVar3 = (undefined8 *)(param_1 + 0x538);
        do {
          puVar8 = puVar3;
          puVar5 = puVar4;
          uVar6 = puVar8[1];
          *puVar5 = *puVar8;
          puVar5[1] = uVar6;
          uVar6 = puVar8[3];
          puVar5[2] = puVar8[2];
          puVar5[3] = uVar6;
          uVar6 = puVar8[5];
          puVar5[4] = puVar8[4];
          puVar5[5] = uVar6;
          uVar6 = puVar8[7];
          puVar5[6] = puVar8[6];
          puVar5[7] = uVar6;
          uVar6 = puVar8[9];
          puVar5[8] = puVar8[8];
          puVar5[9] = uVar6;
          uVar6 = puVar8[0xb];
          puVar5[10] = puVar8[10];
          puVar5[0xb] = uVar6;
          uVar6 = puVar8[0xd];
          puVar5[0xc] = puVar8[0xc];
          puVar5[0xd] = uVar6;
          uVar6 = puVar8[0xf];
          puVar5[0xe] = puVar8[0xe];
          puVar5[0xf] = uVar6;
          lVar7 = lVar7 + -1;
          puVar4 = puVar5 + 0x10;
          puVar3 = puVar8 + 0x10;
        } while (lVar7 != 0);
        uVar6 = puVar8[0x11];
        puVar5[0x10] = puVar8[0x10];
        puVar5[0x11] = uVar6;
        uVar6 = puVar8[0x13];
        puVar5[0x12] = puVar8[0x12];
        puVar5[0x13] = uVar6;
        uVar6 = puVar8[0x15];
        puVar5[0x14] = puVar8[0x14];
        puVar5[0x15] = uVar6;
        uVar6 = puVar8[0x17];
        puVar5[0x16] = puVar8[0x16];
        puVar5[0x17] = uVar6;
        uVar6 = puVar8[0x19];
        puVar5[0x18] = puVar8[0x18];
        puVar5[0x19] = uVar6;
        uVar6 = puVar8[0x1b];
        puVar5[0x1a] = puVar8[0x1a];
        puVar5[0x1b] = uVar6;
        *(uint *)(param_1 + 0x14) = uVar10;
      }
      else {
        uVar6 = FUN_1402f80b0(param_5,0x48,uVar1,uVar10,*(undefined8 **)(param_1 + 0x18),local_res8)
        ;
        *(undefined8 *)(param_1 + 0x18) = uVar6;
        if (local_res8[0] != 0) {
          *param_6 = 0;
          return local_res8[0];
        }
        *(uint *)(param_1 + 0x14) = uVar10;
      }
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  puVar3 = puVar4 + (ulonglong)*(uint *)(param_1 + 0x10) * 9;
  while (puVar4 < puVar3) {
    iVar9 = (int)*(short *)(puVar3 + -9);
    if (param_4 == '\0') {
      bVar2 = iVar9 < param_2;
    }
    else {
      bVar2 = param_2 < iVar9;
    }
    if ((bVar2) || ((iVar9 == param_2 && (param_3 == *(int *)(param_1 + 0x20))))) break;
    *puVar3 = puVar3[-9];
    puVar3[1] = puVar3[-8];
    puVar3[2] = puVar3[-7];
    puVar3[3] = puVar3[-6];
    puVar3[4] = puVar3[-5];
    puVar3[5] = puVar3[-4];
    puVar3[6] = puVar3[-3];
    puVar3[7] = puVar3[-2];
    puVar3[8] = puVar3[-1];
    puVar3 = puVar3 + -9;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *param_6 = puVar3;
  return local_res8[0];
}

