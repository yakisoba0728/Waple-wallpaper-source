// Function: FUN_140417640
// Addr: 140417640
// Size: 779 bytes


byte * FUN_140417640(longlong param_1,int param_2,undefined4 param_3,undefined8 *param_4,
                    undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res10 [8];
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  code *local_38;
  uint *local_30;
  undefined4 local_28;
  
  uVar10 = 0;
  local_68[0] = 0;
  local_38 = (code *)0x0;
  local_58 = &DAT_14045dd10;
  if (param_4 != (undefined8 *)0x0) {
    local_58 = param_4;
  }
  local_50 = &DAT_14045dd10;
  if (param_5 != (undefined8 *)0x0) {
    local_50 = param_5;
  }
  local_48 = &DAT_14045dd10;
  if (param_6 != (undefined8 *)0x0) {
    local_48 = param_6;
  }
  local_40 = &DAT_14045dd10;
  if (param_7 != (undefined8 *)0x0) {
    local_40 = param_7;
  }
  local_60 = param_1;
  local_30 = (uint *)_calloc_base(1,0x48);
  if (local_30 == (uint *)0x0) {
    local_30 = (uint *)&DAT_14045dd10;
    pbVar8 = (byte *)0x0;
  }
  else {
    *local_30 = 0;
    *(undefined1 *)(local_30 + 1) = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    *(undefined1 *)(local_30 + 4) = 1;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[8] = 0;
    local_30[9] = 0;
    local_30[10] = 0;
    local_30[0xb] = 0;
    local_30[0xc] = 0;
    local_30[0xd] = 0;
    local_30[0xe] = 0;
    local_30[0xf] = 0;
    *(undefined1 *)(local_30 + 0x10) = 0;
    *local_30 = 1;
    *(undefined1 *)(local_30 + 1) = 1;
    local_30[2] = 0;
    local_30[3] = 0;
    *(undefined1 *)(local_30 + 4) = 1;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[8] = 0;
    local_30[9] = 0;
    local_30[10] = 0;
    local_30[0xb] = 0;
    local_30[0xc] = 0;
    local_30[0xd] = 0;
    local_30[0xe] = 0;
    local_30[0xf] = 0;
    *(undefined1 *)(local_30 + 0x10) = 0;
    *local_30 = 1;
    *(undefined1 *)(local_30 + 1) = 1;
    local_30[2] = 0;
    local_30[3] = 0;
    pbVar8 = (byte *)(ulonglong)*local_30;
  }
  local_28 = 0x40;
  if (param_2 == 0x47504f53) {
    puVar5 = (undefined8 *)FUN_1403c4ed0(param_1 + 0x148);
    puVar6 = &DAT_14045dd10;
    if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
    }
    puVar5 = &DAT_14045dd10;
    if (3 < *(uint *)(puVar6 + 3)) {
      puVar5 = (undefined8 *)puVar6[2];
    }
    pbVar7 = (byte *)FUN_1403cbf00(puVar5,param_3);
    bVar1 = pbVar7[1];
    bVar2 = *pbVar7;
    uVar11 = (uint)pbVar7[4] * 0x100 + (uint)pbVar7[5];
    pbVar8 = pbVar7;
    if (uVar11 != 0) {
      do {
        if ((uint)uVar10 < (uint)pbVar7[4] * 0x100 + (uint)pbVar7[5]) {
          pbVar8 = pbVar7 + uVar10 * 2 + 6;
        }
        else {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        uVar9 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
        if (uVar9 == 0) {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar8 = pbVar7 + uVar9;
        }
        pbVar8 = (byte *)FUN_140378060(pbVar8,local_res10,local_68,(uint)bVar2 * 0x100 + (uint)bVar1
                                      );
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar11);
    }
  }
  else if (param_2 == 0x47535542) {
    puVar5 = (undefined8 *)FUN_1403c4f70(param_1 + 0x140);
    puVar6 = &DAT_14045dd10;
    if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar5;
    }
    puVar5 = &DAT_14045dd10;
    if (3 < *(uint *)(puVar6 + 3)) {
      puVar5 = (undefined8 *)puVar6[2];
    }
    pbVar7 = (byte *)FUN_1403cbf00(puVar5,param_3);
    local_38 = FUN_14037c3e0;
    bVar1 = *pbVar7;
    bVar2 = pbVar7[1];
    uVar11 = (uint)pbVar7[4] * 0x100 + (uint)pbVar7[5];
    pbVar8 = (byte *)(ulonglong)pbVar7[5];
    if (uVar11 != 0) {
      do {
        if ((uint)uVar10 < (uint)pbVar7[4] * 0x100 + (uint)pbVar7[5]) {
          pbVar8 = pbVar7 + uVar10 * 2 + 6;
        }
        else {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        uVar9 = (uint)*pbVar8 * 0x100 + (uint)pbVar8[1];
        if (uVar9 == 0) {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar8 = pbVar7 + uVar9;
        }
        pbVar8 = (byte *)FUN_1403783d0(pbVar8,local_res10,local_68,(uint)bVar1 * 0x100 + (uint)bVar2
                                      );
        uVar9 = (uint)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 < uVar11);
    }
  }
  puVar4 = local_30;
  if ((local_30 != (uint *)0x0) && (pbVar8 = (byte *)(ulonglong)*local_30, *local_30 != 0)) {
    LOCK();
    uVar11 = *local_30;
    pbVar8 = (byte *)(ulonglong)uVar11;
    *local_30 = *local_30 - 1;
    UNLOCK();
    if (uVar11 == 1) {
      *local_30 = 0xffff2153;
      lVar3 = *(longlong *)(local_30 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        puVar4[2] = 0;
        puVar4[3] = 0;
      }
      FUN_140396110(puVar4);
      pbVar8 = (byte *)thunk_FUN_1402d9040(puVar4);
    }
  }
  return pbVar8;
}

