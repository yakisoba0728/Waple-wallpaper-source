// Function: FUN_1403110d0
// Addr: 1403110d0
// Size: 660 bytes


void FUN_1403110d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x408);
  uVar11 = *(undefined8 *)(lVar1 + 0x30);
  local_res8[0] = (**(code **)(param_1 + 0x2a0))(param_1,0x4d564152,lVar1,local_res10);
  if (local_res8[0] == 0) {
    iVar8 = FUN_1402f54a0(lVar1);
    sVar4 = FUN_1402f5ac0(lVar1,local_res8);
    if (((local_res8[0] == 0) && (local_res8[0] = FUN_1402f5c90(lVar1,2), local_res8[0] == 0)) &&
       (sVar4 == 1)) {
      uVar10 = FUN_1402f7e90(uVar11,0x30,local_res8);
      *(undefined8 *)(lVar2 + 0x60) = uVar10;
      if ((local_res8[0] == 0) && (local_res8[0] = FUN_1402f5c90(lVar1,4), local_res8[0] == 0)) {
        puVar12 = *(undefined2 **)(lVar2 + 0x60);
        uVar5 = FUN_1402f5ac0(lVar1,local_res8);
        *puVar12 = uVar5;
        if ((local_res8[0] == 0) && (uVar6 = FUN_1402f5ac0(lVar1,local_res8), local_res8[0] == 0)) {
          uVar9 = FUN_1402f54a0(lVar1);
          local_res8[0] = FUN_140307e50(param_1,iVar8 + (uint)uVar6,*(longlong *)(lVar2 + 0x60) + 8)
          ;
          if (local_res8[0] == 0) {
            puVar12 = *(undefined2 **)(lVar2 + 0x60);
            uVar11 = FUN_1402f80b0(uVar11,0xc,0,*puVar12,0,local_res8);
            *(undefined8 *)(puVar12 + 0x14) = uVar11;
            if (((local_res8[0] == 0) &&
                (local_res8[0] = FUN_1402f5c50(lVar1,uVar9), local_res8[0] == 0)) &&
               (iVar8 = FUN_1402f4fe0(lVar1,(ulonglong)**(ushort **)(lVar2 + 0x60) << 3), iVar8 == 0
               )) {
              puVar3 = *(ushort **)(lVar2 + 0x60);
              puVar13 = *(undefined4 **)(puVar3 + 0x14);
              local_res8[0] = 0;
              if (puVar13 != (undefined4 *)0x0) {
                puVar14 = puVar13 + (ulonglong)*puVar3 * 3;
                for (; puVar13 < puVar14; puVar13 = puVar13 + 3) {
                  uVar9 = FUN_1402f5200(lVar1);
                  *puVar13 = uVar9;
                  uVar5 = FUN_1402f52a0(lVar1);
                  *(undefined2 *)(puVar13 + 1) = uVar5;
                  uVar7 = FUN_1402f52a0(lVar1);
                  uVar6 = *(ushort *)(puVar13 + 1);
                  *(ushort *)((longlong)puVar13 + 6) = uVar7;
                  if (((uVar6 != 0xffff) || (uVar7 != 0xffff)) &&
                     ((*(uint *)(puVar3 + 4) <= (uint)uVar6 ||
                      (*(uint *)((ulonglong)uVar6 * 0x20 + *(longlong *)(puVar3 + 8)) <= (uint)uVar7
                      )))) {
                    local_res8[0] = 8;
                    break;
                  }
                }
              }
              FUN_1402f5100(lVar1);
              if (local_res8[0] == 0) {
                puVar13 = *(undefined4 **)(*(ushort **)(lVar2 + 0x60) + 0x14);
                if ((puVar13 != (undefined4 *)0x0) &&
                   (puVar14 = puVar13 + (ulonglong)**(ushort **)(lVar2 + 0x60) * 3,
                   puVar13 < puVar14)) {
                  do {
                    puVar12 = (undefined2 *)FUN_1403104d0(param_1,*puVar13);
                    if (puVar12 != (undefined2 *)0x0) {
                      *(undefined2 *)(puVar13 + 2) = *puVar12;
                    }
                    puVar13 = puVar13 + 3;
                  } while (puVar13 < puVar14);
                }
                *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) | 0x100;
              }
            }
          }
        }
      }
    }
  }
  return;
}

