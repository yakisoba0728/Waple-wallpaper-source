// Function: FUN_140413ae0
// Addr: 140413ae0
// Size: 887 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140413ae0(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  float fVar19;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  uint local_88;
  undefined4 local_84;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  int aiStack_58 [4];
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  local_60 = param_1;
  puVar7 = (undefined8 *)FUN_1403ce760(*(longlong *)(param_1 + 0x20) + 0x60);
  local_78 = 0;
  iVar6 = (**(code **)*puVar7)(puVar7,&DAT_140470b78,&local_70);
  if (iVar6 < 0) {
    return local_78;
  }
  iVar6 = (**(code **)(*local_70 + 0x1c0))(local_70,&local_80);
  if (-1 < iVar6) {
    uVar15 = (ulonglong)*(uint *)(param_1 + 0x7c);
    if ((int)*(uint *)(param_1 + 0x7c) < 0) {
      uVar15 = 0;
    }
    uVar14 = (uint)uVar15;
    if (uVar14 == 0) {
      lVar8 = 0;
      local_88 = 0;
    }
    else {
      if ((0x1ffffffe < uVar14) || (lVar8 = _realloc_base(0,uVar15 << 3), lVar8 == 0)) {
        (**(code **)(*local_80 + 0x10))();
        goto LAB_140413e32;
      }
      local_88 = uVar14;
      if (uVar14 * 8 != 0) {
        FUN_1404217a0(lVar8,0,uVar14 * 8);
      }
    }
    uVar13 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
      do {
        lVar9 = FUN_1403c5100(*(longlong *)(param_1 + 0x20) + 0x100);
        uVar5 = local_88;
        uVar17 = (uint)*(byte *)(lVar9 + 9) + (uint)*(byte *)(lVar9 + 8) * 0x100;
        uVar16 = (uint)*(byte *)(lVar9 + 4) * 0x100 + (uint)*(byte *)(lVar9 + 5);
        if (uVar16 == 0) {
          puVar7 = &DAT_14045dd10;
        }
        else {
          puVar7 = (undefined8 *)((ulonglong)uVar16 + lVar9);
        }
        uVar12 = (uint)uVar13;
        local_84 = 0;
        uVar16 = 0;
        if (uVar12 <= uVar17) {
          uVar16 = uVar17 - uVar12;
        }
        uVar17 = 1;
        if (uVar16 < 2) {
          uVar17 = uVar16;
        }
        local_68 = (longlong)puVar7 + uVar13 * 0x14;
        if (uVar17 != 0) {
          uVar16 = 0;
          do {
            uVar18 = (ulonglong)uVar16;
            bVar2 = *(byte *)(local_68 + 0x13 + uVar18 * 0x14);
            pbVar1 = (byte *)(local_68 + uVar18 * 0x14);
            bVar3 = *(byte *)(local_68 + 1 + uVar18 * 0x14);
            aiStack_58[uVar18 * 8] = uVar12 + uVar16;
            bVar4 = pbVar1[0x12];
            aiStack_58[uVar18 * 8 + 1] =
                 (uint)bVar3 * 0x10000 + (uint)pbVar1[2] * 0x100 + (uint)*pbVar1 * 0x1000000 +
                 (uint)pbVar1[3];
            bVar3 = pbVar1[0x11];
            aiStack_58[uVar18 * 8 + 2] = (uint)bVar2 + (uint)bVar4 * 0x100;
            aiStack_58[uVar18 * 8 + 3] = (uint)pbVar1[0x10] * 0x100 + (uint)bVar3;
            FUN_1403c7020(pbVar1,&local_48 + uVar18 * 8,(longlong)&local_44 + uVar18 * 0x20,
                          (longlong)&local_40 + uVar18 * 0x20);
            uVar16 = uVar16 + 1;
            *(undefined4 *)((longlong)&uStack_3c + uVar18 * 0x20) = 0;
            param_1 = local_60;
          } while (uVar16 < uVar17);
        }
        if (uVar12 < uVar14) {
          puVar10 = (uint *)(lVar8 + uVar13 * 8);
        }
        else {
          DAT_1404e4f20 = DAT_14045dd10;
          puVar10 = (uint *)&DAT_1404e4f20;
        }
        *puVar10 = (uint)(ushort)(SUB82(aiStack_58._4_8_,2) >> 8 | SUB82(aiStack_58._4_8_,2) << 8) |
                   (SUB84(aiStack_58._4_8_,1) & 0xff | (uint)(ushort)((short)aiStack_58._4_8_ << 8))
                   << 0x10;
        fVar19 = local_44;
        if (uVar12 < *(uint *)(param_1 + 0x7c)) {
          pfVar11 = &local_48;
          if (local_48 <= *(float *)(*(longlong *)(param_1 + 0x88) + uVar13 * 4)) {
            pfVar11 = (float *)(*(longlong *)(param_1 + 0x88) + uVar13 * 4);
          }
          fVar19 = *pfVar11;
          if (local_40 <= fVar19) {
            fVar19 = local_40;
          }
        }
        if (uVar12 < uVar14) {
          puVar7 = (undefined8 *)(lVar8 + uVar13 * 8);
        }
        else {
          DAT_1404e4f20 = DAT_14045dd10;
          puVar7 = &DAT_1404e4f20;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        *(float *)((longlong)puVar7 + 4) = fVar19;
        local_88 = uVar5;
      } while (uVar12 + 1 < *(uint *)(param_1 + 0x7c));
    }
    uVar14 = local_88;
    local_98 = &local_78;
    (**(code **)(*local_80 + 0x68))(local_80,0,lVar8,uVar15);
    (**(code **)(*local_80 + 0x10))();
    if (1 < uVar14 + 1) {
      thunk_FUN_1402d9040(lVar8);
    }
  }
LAB_140413e32:
  (**(code **)(*local_70 + 0x10))();
  return local_78;
}

