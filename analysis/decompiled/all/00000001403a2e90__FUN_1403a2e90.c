// Function: FUN_1403a2e90
// Addr: 1403a2e90
// Size: 728 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403a2e90(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,byte param_8,byte param_9,
                  byte param_10,undefined4 param_11)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined4 local_104;
  longlong *local_100;
  int *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  uint local_d8 [32];
  ulonglong local_58;
  
  local_58 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  local_f0 = param_3 & 0xffffffff;
  local_f8 = &DAT_140462270 + local_f0;
  local_104 = param_4;
  local_100 = param_1;
  local_e8 = param_2;
  if ((&DAT_140462270)[local_f0] == 0x47504f53) {
    puVar4 = (undefined8 *)FUN_1403c4fa0(*param_1 + 0x148);
    puVar6 = &DAT_14045dde0;
    if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar4;
    }
    if (*(uint *)(puVar6 + 3) < 4) {
      pbVar9 = (byte *)&DAT_14045dde0;
      goto LAB_1403a2f66;
    }
  }
  else {
    if ((&DAT_140462270)[local_f0] != 0x47535542) {
      pbVar9 = (byte *)&DAT_14045dde0;
      goto LAB_1403a2f66;
    }
    puVar4 = (undefined8 *)FUN_1403c5040(*param_1 + 0x140);
    puVar6 = &DAT_14045dde0;
    if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*puVar4;
    }
    if (*(uint *)(puVar6 + 3) < 4) {
      pbVar9 = (byte *)&DAT_14045dde0;
      goto LAB_1403a2f66;
    }
  }
  pbVar9 = (byte *)puVar6[2];
LAB_1403a2f66:
  if ((uint)*pbVar9 * 0x100 + (uint)pbVar9[1] == 1) {
    uVar12 = (uint)pbVar9[9] + (uint)pbVar9[8] * 0x100;
    if (uVar12 == 0) {
      pbVar9 = (byte *)&DAT_14045dde0;
    }
    else {
      pbVar9 = pbVar9 + uVar12;
    }
    uVar12 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
  }
  else {
    uVar12 = 0;
  }
  local_108 = 0;
  do {
    uVar10 = local_108;
    if (*local_f8 == 0x47504f53) {
      puVar6 = (undefined8 *)FUN_1403c4fa0(*local_100 + 0x148);
LAB_1403a2fe3:
      puVar4 = &DAT_14045dde0;
      if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar6;
      }
      puVar6 = &DAT_14045dde0;
      if (3 < *(uint *)(puVar4 + 3)) {
        puVar6 = (undefined8 *)puVar4[2];
      }
    }
    else {
      if (*local_f8 == 0x47535542) {
        puVar6 = (undefined8 *)FUN_1403c5040(*local_100 + 0x140);
        goto LAB_1403a2fe3;
      }
      puVar6 = &DAT_14045dde0;
    }
    lVar5 = FUN_1403c9130(puVar6,param_4,param_5);
    lVar2 = local_e8;
    uVar1 = local_f0;
    puVar16 = local_d8;
    iVar15 = 0x20;
    uVar7 = (uint)*(byte *)(lVar5 + 3) + (uint)*(byte *)(lVar5 + 2) * 0x100;
    uVar13 = 0;
    if (uVar10 <= uVar7) {
      uVar13 = uVar7 - uVar10;
    }
    uVar7 = 0x20;
    if (uVar13 < 0x21) {
      uVar7 = uVar13;
    }
    puVar14 = (ushort *)((byte *)(lVar5 + 2) + ((ulonglong)uVar10 + 1) * 2);
    uVar13 = uVar7;
    while (uVar13 != 0) {
      uVar8 = (uint)(byte)*puVar14 * 0x100 + (uint)(*puVar14 >> 8);
      if (iVar15 == 0) {
        uVar13 = uVar13 - 1;
        puVar14 = puVar14 + 1;
        DAT_1404e4ff0._0_4_ = uVar8;
      }
      else {
        *puVar16 = uVar8;
        iVar15 = iVar15 + -1;
        puVar16 = puVar16 + 1;
        uVar13 = uVar13 - 1;
        puVar14 = puVar14 + 1;
      }
    }
    uVar11 = 0;
    if (uVar7 != 0) {
      do {
        if (local_d8[uVar11] < uVar12) {
          lVar5 = (uVar1 + 2) * 0x10 + lVar2;
          uVar10 = *(int *)(lVar5 + 4) + 1;
          if ((int)uVar10 < 0) {
            uVar10 = 0;
          }
          cVar3 = FUN_1403a4d50(lVar5,uVar10,0);
          if (cVar3 == '\0') {
            puVar6 = &DAT_1404e4ff0;
            DAT_1404e4ff0._0_4_ = (uint)DAT_14045dde0;
            ram0x0001404e4ff4 = ram0x00014045dde4;
          }
          else {
            uVar13 = *(uint *)(lVar5 + 4);
            if ((uVar13 < uVar10) && (((uVar10 - uVar13) * 3 & 0x3fffffff) != 0)) {
              func_0x000140421870(*(longlong *)(lVar5 + 8) + (ulonglong)uVar13 * 0xc,0,
                                  (uVar10 - uVar13) * 0xc);
              return;
            }
            *(uint *)(lVar5 + 4) = uVar10;
            puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 8) + (ulonglong)(uVar10 - 1) * 0xc);
          }
          *(undefined4 *)((longlong)puVar6 + 4) = param_6;
          *(short *)puVar6 = (short)local_d8[uVar11];
          *(ushort *)((longlong)puVar6 + 2) = *(ushort *)((longlong)puVar6 + 2) & 0xfffe;
          *(ushort *)((longlong)puVar6 + 2) =
               ((param_9 & 0xfffd | (ushort)param_10 * 2) * 2 | param_8 & 0xfff9) * 2 |
               ((ushort)param_7 | *(ushort *)((longlong)puVar6 + 2)) & 0xfff1;
          *(undefined4 *)(puVar6 + 1) = param_11;
        }
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        param_4 = local_104;
        uVar10 = local_108;
      } while (uVar13 < uVar7);
    }
    local_108 = uVar10 + uVar7;
    if (uVar7 != 0x20) {
      func_0x0001402ed2f0(local_58 ^ (ulonglong)auStack_128);
      return;
    }
  } while( true );
}

