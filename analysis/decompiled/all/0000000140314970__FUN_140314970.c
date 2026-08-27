// Function: FUN_140314970
// Addr: 140314970
// Size: 1052 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140314970(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  code *pcVar15;
  uint uVar16;
  ulonglong uVar17;
  int local_res8 [2];
  int local_res18 [4];
  
  lVar14 = *param_1;
  lVar12 = *(longlong *)(lVar14 + 0x90);
  if (lVar12 != 0) {
    uVar13 = *(undefined8 *)(lVar12 + 0x10);
    uVar2 = *(undefined8 *)(lVar14 + 0x98);
    lVar10 = FUN_1402f7e90(uVar13,0x340,local_res18);
    if (local_res18[0] == 0) {
      pcVar3 = *(code **)(*(longlong *)(lVar12 + 8) + 0x138);
      pcVar15 = FUN_14030ce10;
      if (pcVar3 != (code *)0x0) {
        pcVar15 = pcVar3;
      }
      *(code **)(lVar10 + 0x18) = pcVar15;
      *(undefined8 *)(lVar10 + 0x10) = uVar13;
      *(undefined4 *)(lVar10 + 0x254) = 0x20;
      uVar11 = FUN_1402f7ff0(uVar13,0x18,0,0x20,0,local_res18);
      *(undefined8 *)(lVar10 + 600) = uVar11;
      if (local_res18[0] != 0) {
        FUN_1402f7f90(uVar13,lVar10);
        return 0x99;
      }
    }
    if (lVar10 != 0) {
      param_1[0x22] = lVar10;
      *(undefined1 *)(lVar10 + 0x2c6) = param_2;
      uVar8 = *(ushort *)(lVar14 + 0x184);
      *(uint *)(lVar10 + 0x22c) = (uint)uVar8;
      uVar1 = *(ushort *)(lVar14 + 0x186);
      *(uint *)(lVar10 + 0x23c) = (uint)uVar1;
      lVar12 = FUN_1402f80b0(uVar2,0x14,0,(uint)uVar1 + (uint)uVar8,0,local_res8);
      *(longlong *)(lVar10 + 0x230) = lVar12;
      if (local_res8[0] == 0) {
        *(undefined4 *)(lVar10 + 0x228) = 0;
        *(undefined4 *)(lVar10 + 0x238) = 0;
        *(undefined8 *)(lVar10 + 0x248) = 0;
        *(ulonglong *)(lVar10 + 0x240) = lVar12 + (ulonglong)*(uint *)(lVar10 + 0x22c) * 0x14;
        uVar8 = *(ushort *)(lVar14 + 0x188);
        uVar16 = 0x80;
        if (0x100 < (uVar8 & 0xfffe)) {
          uVar16 = (uint)(uVar8 >> 1);
        }
        *(uint *)(lVar10 + 0x28) = uVar8 + uVar16;
        uVar1 = *(ushort *)(lVar14 + 0x182);
        *(ushort *)(lVar10 + 0x298) = uVar1;
        iVar9 = *(int *)(lVar14 + 0x3d0);
        *(int *)(lVar10 + 0x1f8) = iVar9;
        uVar13 = FUN_1402f80b0(uVar2,4,0,iVar9 + (uint)uVar1 + (uint)uVar8 + uVar16,0,local_res8);
        *(undefined8 *)(lVar10 + 0x30) = uVar13;
        if (local_res8[0] == 0) {
          uVar8 = *(short *)(lVar14 + 0x180) + 4;
          uVar17 = (ulonglong)uVar8;
          lVar14 = FUN_1402f7e90(uVar2,(uint)uVar8 * 0x19,local_res18);
          param_1[0x1c] = lVar14;
          if (local_res18[0] == 0) {
            *(ushort *)(param_1 + 0x1b) = uVar8;
            *(undefined2 *)((longlong)param_1 + 0xda) = 0;
            param_1[0x1d] = uVar17 * 8 + lVar14;
            param_1[0x1e] = lVar14 + uVar17 * 0x10;
            lVar14 = lVar14 + uVar17 * 0x18;
            *(undefined2 *)(param_1 + 0x21) = 0;
            param_1[0x20] = lVar14;
            param_1[0x1f] = lVar14;
          }
          lVar14 = _UNK_14043bb48;
          local_res8[0] = local_res18[0];
          if (local_res18[0] == 0) {
            lVar12 = *param_1;
            lVar10 = param_1[0x22];
            param_1[0x11] = _DAT_14043bb40;
            param_1[0x12] = lVar14;
            lVar14 = _UNK_14043bb58;
            param_1[0x13] = _DAT_14043bb50;
            param_1[0x14] = lVar14;
            lVar14 = _UNK_14043bb68;
            param_1[0x15] = _DAT_14043bb60;
            param_1[0x16] = lVar14;
            uVar6 = _DAT_14043bb7c;
            uVar5 = _UNK_14043bb78;
            uVar4 = _UNK_14043bb74;
            *(undefined4 *)(param_1 + 0x17) = _DAT_14043bb70;
            *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
            *(undefined4 *)(param_1 + 0x18) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0xc4) = uVar6;
            uVar7 = _UNK_14043bb88;
            uVar6 = _UNK_14043bb84;
            uVar5 = _UNK_14043bb80;
            uVar4 = _DAT_14043bb7c;
            *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
            *(undefined2 *)((longlong)param_1 + 0x76) = 0;
            *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
            *(undefined4 *)(param_1 + 0x19) = uVar5;
            *(undefined4 *)((longlong)param_1 + 0xcc) = uVar6;
            *(undefined4 *)(param_1 + 0x1a) = uVar7;
            FUN_14030bb90(lVar10,lVar12,param_1);
            *(undefined8 *)(lVar10 + 0x278) = 0;
            *(undefined4 *)(lVar10 + 0x280) = 0;
            *(undefined8 *)(lVar10 + 0x288) = 0;
            *(undefined4 *)(lVar10 + 0x290) = 0;
            iVar9 = *(int *)(lVar12 + 0x3b0);
            if (iVar9 == 0) {
              *(undefined4 *)(param_1 + 0x23) = 0;
            }
            else {
              uVar13 = *(undefined8 *)(lVar12 + 0x3b8);
              *(undefined8 *)(lVar10 + 0x268) = uVar13;
              *(int *)(lVar10 + 0x270) = iVar9;
              *(int *)(lVar10 + 0x1ec) = iVar9;
              *(undefined8 *)(lVar10 + 0x1e0) = uVar13;
              *(undefined4 *)(lVar10 + 0x1e8) = 0;
              *(undefined4 *)(lVar10 + 0x1dc) = 1;
              *(undefined4 *)(lVar10 + 0x1d8) = 1;
              *(undefined4 *)(lVar10 + 0xe8) = 0;
              iVar9 = FUN_14030f330(lVar10,param_1);
              *(int *)(param_1 + 0x23) = iVar9;
              if (iVar9 != 0) {
                return iVar9;
              }
            }
            *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar10 + 0x1bc);
            *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar10 + 0x1c0);
            *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar10 + 0x1c4);
            *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar10 + 0x1c8);
            *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(lVar10 + 0x1cc);
            *(undefined2 *)((longlong)param_1 + 0xca) = *(undefined2 *)(lVar10 + 0x1ce);
            *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(lVar10 + 0x1d0);
            *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)(lVar10 + 0x1d1);
            *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)(lVar10 + 0x1d2);
            *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar10 + 0x1d4);
            return 0;
          }
        }
      }
      FUN_140314850(param_1);
      return local_res8[0];
    }
  }
  return 0x99;
}

