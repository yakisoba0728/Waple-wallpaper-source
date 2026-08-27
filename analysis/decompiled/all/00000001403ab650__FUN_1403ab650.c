// Function: FUN_1403ab650
// Addr: 1403ab650
// Size: 781 bytes


void FUN_1403ab650(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_68 [4];
  int local_64;
  uint local_5c;
  undefined4 local_50 [2];
  uint *local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar11 = *(longlong *)(param_2 + 0x20);
  if (*(char *)(lVar11 + 0x58) != '\0') {
    if ((*(byte *)(lVar11 + 0x18) & 0x40) != 0) {
      uVar10 = *(uint *)(lVar11 + 0x60);
      if (*(uint *)(lVar11 + 0x60) == 0xffffffff) {
        uVar10 = 0xffffffff;
      }
      uVar7 = 0;
      if (uVar10 != 0) {
        do {
          uVar6 = (int)uVar7 + 1;
          puVar4 = (uint *)(*(longlong *)(lVar11 + 0x70) + 4 + uVar7 * 0x14);
          *puVar4 = *puVar4 | 2;
          uVar7 = (ulonglong)uVar6;
        } while (uVar6 < uVar10);
      }
    }
    FUN_14040b460(param_2);
    *(undefined4 *)(param_2 + 0xb0) = 0;
    uVar10 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
             (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar10 != 0) {
      uVar6 = 0;
      param_1 = param_1 + 8;
      local_5c = uVar10;
      do {
        lVar11 = *(longlong *)(param_2 + 0x18);
        local_64 = *(int *)(lVar11 + 0x18);
        if (local_64 == -1) {
          lVar3 = FUN_140398a10(lVar11 + 0x80);
          local_64 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
          if (local_64 == 0) {
            local_64 = 0;
          }
          *(int *)(lVar11 + 0x18) = local_64;
        }
        if (uVar6 < *(uint *)(param_4 + 8)) {
          lVar11 = (ulonglong)uVar6 * 8;
          puVar4 = *(uint **)(lVar11 + *(longlong *)(param_4 + 0x10));
          iVar2 = local_64;
          while (uVar10 = local_5c, local_64 = iVar2, puVar4 == (uint *)0x0) {
            uVar10 = (uint)*(byte *)(param_1 + 0xc) * 0x1000000 +
                     (uint)*(byte *)(param_1 + 0xe) * 0x100 +
                     (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xf);
            if ((0x75074f < uVar10) || (puVar4 = (uint *)_calloc_base(1), puVar4 == (uint *)0x0)) {
              puVar4 = (uint *)0x0;
              uVar10 = local_5c;
              break;
            }
            *puVar4 = uVar10;
            local_48 = puVar4 + 2;
            uVar10 = 0;
            local_50[0] = 0;
            local_3c = 0;
            puVar8 = (undefined1 *)
                     (((((ulonglong)
                         CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9)) * 0x100
                        + (ulonglong)*(byte *)(param_1 + 10)) * 0x100 +
                       (ulonglong)*(byte *)(param_1 + 0xb)) * 3 & 0x3fffffff) * 4 + 0x10 + param_1);
            uVar9 = (uint)*(byte *)(param_1 + 0xc) * 0x1000000 +
                    (uint)*(byte *)(param_1 + 0xd) * 0x10000 +
                    (uint)*(byte *)(param_1 + 0xe) * 0x100 + (uint)*(byte *)(param_1 + 0xf);
            local_40 = iVar2;
            if (uVar9 != 0) {
              do {
                FUN_140376950(puVar8,local_68,local_50);
                uVar10 = uVar10 + 1;
                puVar8 = puVar8 + ((ulonglong)CONCAT11(*puVar8,puVar8[1]) * 0x100 +
                                  (ulonglong)(byte)puVar8[2]) * 0x100 + (ulonglong)(byte)puVar8[3];
              } while (uVar10 < uVar9);
            }
            plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + lVar11);
            LOCK();
            bVar12 = *plVar1 == 0;
            if (bVar12) {
              *plVar1 = (longlong)puVar4;
            }
            UNLOCK();
            uVar10 = local_5c;
            if (bVar12) break;
            thunk_FUN_1402d9040(puVar4);
            iVar2 = local_64;
            puVar4 = *(uint **)(lVar11 + *(longlong *)(param_4 + 0x10));
          }
        }
        else {
          puVar4 = (uint *)0x0;
        }
        if (uVar6 < *(uint *)(param_3 + 4)) {
          puVar5 = (undefined8 *)((ulonglong)uVar6 * 0x10 + *(longlong *)(param_3 + 8));
        }
        else {
          puVar5 = &DAT_14045dd10;
        }
        *(undefined8 **)(param_2 + 0x80) = puVar5;
        FUN_1403a5530(param_1,param_2,puVar4);
        if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x58) == '\0') {
          return;
        }
        uVar6 = uVar6 + 1;
        param_1 = param_1 + (ulonglong)*(byte *)(param_1 + 7) +
                  ((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)) *
                   0x100 + (ulonglong)*(byte *)(param_1 + 6)) * 0x100;
      } while (uVar6 < uVar10);
    }
  }
  return;
}

