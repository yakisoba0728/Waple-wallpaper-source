// Function: FUN_14040ab50
// Addr: 14040ab50
// Size: 862 bytes


ulonglong FUN_14040ab50(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,ulonglong param_7)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined2 local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  undefined4 local_64;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar8 = (ushort *)FUN_140386e00(param_2,param_1);
  if ((puVar8 != (ushort *)0x0) && (*(int *)(param_2 + 0x2c) == 0)) {
    puVar1 = (ushort *)(param_1 + 4);
    puVar8 = (ushort *)(param_1 + 6);
    if (puVar1 <= puVar8) {
      lVar3 = *(longlong *)(param_2 + 8);
      pbVar12 = (byte *)((longlong)puVar1 + (2 - lVar3));
      if ((pbVar12 < (byte *)0x80000000) &&
         (puVar8 = (ushort *)(*(longlong *)(param_2 + 0x10) - lVar3),
         (longlong)pbVar12 <= (longlong)puVar8)) {
        if ((int)pbVar12 != 0) {
          FUN_1404217a0(lVar3,0,(ulonglong)pbVar12 & 0xffffffff);
        }
        lVar3 = *(longlong *)(param_2 + 8);
        puVar8 = (ushort *)(pbVar12 + lVar3);
        *(ushort **)(param_2 + 8) = puVar8;
        if ((lVar3 == 0) || (puVar1 == (ushort *)0x0)) goto LAB_14040ae91;
        uVar17 = *(uint *)(param_3 + 0x10);
        bVar10 = (byte)(uVar17 >> 8);
        local_98 = CONCAT11((char)uVar17,bVar10);
        puVar8 = (ushort *)(ulonglong)local_98;
        *puVar1 = local_98;
        if ((uint)bVar10 * 0x100 + (uVar17 & 0xff) != uVar17) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        if (*(int *)(param_2 + 0x2c) != 0) goto LAB_14040ae91;
        puVar8 = (ushort *)((ulonglong)*(byte *)(param_1 + 5) + 1);
        if (puVar1 + (longlong)(puVar8 + (ulonglong)*(byte *)puVar1 * 0x80) < puVar1)
        goto LAB_14040ae91;
        lVar3 = *(longlong *)(param_2 + 8);
        uVar13 = (longlong)(puVar1 + (longlong)(puVar8 + (ulonglong)*(byte *)puVar1 * 0x80)) - lVar3
        ;
        if ((uVar13 < 0x80000000) &&
           (puVar8 = (ushort *)(*(longlong *)(param_2 + 0x10) - lVar3),
           (longlong)uVar13 <= (longlong)puVar8)) {
          if ((int)uVar13 != 0) {
            FUN_1404217a0(lVar3,0,uVar13 & 0xffffffff);
          }
          lVar3 = *(longlong *)(param_2 + 8);
          puVar8 = (ushort *)(lVar3 + uVar13);
          *(ushort **)(param_2 + 8) = puVar8;
          if (lVar3 != 0) {
            if (uVar17 != 0) {
              uVar13 = 0;
              uVar17 = *(uint *)(param_6 + 0x10);
              local_90 = *(longlong *)(param_6 + 8);
              local_88 = *(longlong *)(param_5 + 8);
              uVar15 = *(uint *)(param_5 + 0x10);
              while( true ) {
                uVar11 = (uint)uVar13;
                if (uVar11 < *(uint *)(param_4 + 0x10)) {
                  puVar14 = (uint *)(*(longlong *)(param_4 + 8) + uVar13 * 4);
                }
                else {
                  puVar14 = (uint *)&DAT_14045dd10;
                }
                uVar2 = *puVar14;
                uVar4 = uVar2;
                if (uVar17 <= uVar2) {
                  uVar4 = uVar17;
                }
                uVar5 = uVar2;
                if (uVar15 <= uVar2) {
                  uVar5 = uVar15;
                }
                if (uVar11 < (uint)*(byte *)puVar1 * 0x100 + (uint)*(byte *)(param_1 + 5)) {
                  puVar16 = (undefined8 *)(param_1 + 6 + uVar13 * 2);
                }
                else {
                  puVar16 = &DAT_1404e4f20;
                }
                *(undefined2 *)puVar16 = 0;
                if (*(int *)(param_2 + 0x2c) == 0) {
                  puVar9 = (undefined8 *)FUN_1403a3490(param_2 + 0x30);
                  if (puVar9 == (undefined8 *)0x0) {
                    if (*(int *)(param_2 + 0x2c) == 0) {
                      *(undefined4 *)(param_2 + 0x2c) = 1;
                    }
                  }
                  else {
                    *puVar9 = *(undefined8 *)(param_2 + 8);
                    puVar9[1] = *(undefined8 *)(param_2 + 0x10);
                    puVar9[6] = *(undefined8 *)(param_2 + 0x48);
                    *(undefined8 **)(param_2 + 0x48) = puVar9;
                  }
                }
                local_78 = local_58;
                local_70 = local_90;
                local_64 = 0;
                local_44 = 0;
                local_50 = local_88;
                uVar13 = param_7;
                local_68 = uVar4;
                local_48 = uVar5;
                cVar6 = FUN_14040a7f0(*(undefined8 *)(param_2 + 8),param_2,&local_58,&local_78,
                                      param_7);
                if (cVar6 == '\0') {
                  puVar8 = (ushort *)FUN_1403f0c80(param_2);
                  goto LAB_14040ae91;
                }
                uVar7 = FUN_1403f0d30(param_2,1);
                FUN_14036b900(param_2,puVar16,uVar7,0,uVar13 & 0xffffffff00000000);
                uVar4 = uVar2;
                if (uVar15 < uVar2) {
                  uVar4 = uVar15;
                }
                if (uVar17 < uVar2) {
                  uVar2 = uVar17;
                }
                uVar13 = (ulonglong)(uVar11 + 1);
                if (*(uint *)(param_3 + 0x10) <= uVar11 + 1) break;
                local_88 = local_88 + (ulonglong)uVar4 * 2;
                uVar17 = uVar17 - uVar2;
                uVar15 = uVar15 - uVar4;
                local_90 = local_90 + (ulonglong)uVar2 * 4;
              }
            }
            uVar13 = FUN_14038dc20(param_1 + 2,param_2,param_3);
            return uVar13;
          }
          goto LAB_14040ae91;
        }
      }
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
LAB_14040ae91:
  return (ulonglong)puVar8 & 0xffffffffffffff00;
}

