// Function: FUN_1403b42a0
// Addr: 1403b42a0
// Size: 908 bytes


void FUN_1403b42a0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  uVar11 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
  if (uVar11 == 0) {
    puVar6 = &DAT_14045dd10;
  }
  else {
    puVar6 = (undefined8 *)((ulonglong)uVar11 + param_1);
  }
  cVar3 = FUN_14036f9e0(puVar6,*(undefined8 *)(param_2 + 0x18));
  if (cVar3 != '\0') {
    uVar11 = 0;
    uVar12 = (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5);
    if (uVar12 != 0) {
      do {
        if (uVar11 < (uint)*(byte *)(param_1 + 4) * 0x100 + (uint)*(byte *)(param_1 + 5)) {
          pbVar4 = (byte *)(param_1 + ((ulonglong)uVar11 + 3) * 2);
        }
        else {
          pbVar4 = (byte *)&DAT_14045dd10;
        }
        uVar8 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
        if (uVar8 == 0) {
          pbVar4 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar4 = (byte *)((ulonglong)uVar8 + param_1);
        }
        lVar13 = *(longlong *)(param_2 + 0x10);
        iVar5 = (uint)*pbVar4 * 0x100 + (uint)pbVar4[1];
        if (iVar5 == 1) {
          iVar5 = (uint)pbVar4[2] * 0x100 + (uint)pbVar4[3];
          if (*(char *)(lVar13 + 0x40) == '\0') {
            cVar3 = FUN_14038dcc0(lVar13 + 0x10,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1),
                                  pbVar4 + 4,iVar5,2);
          }
          else {
            cVar3 = FUN_1403734b0(lVar13 + 0x10,pbVar4 + 4,iVar5,2);
          }
        }
        else {
          if (iVar5 != 2) {
            return;
          }
          bVar1 = pbVar4[2];
          pbVar9 = pbVar4 + 4;
          bVar2 = pbVar4[3];
          if (pbVar9 != pbVar4 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4) {
            do {
              if (*(char *)(lVar13 + 0x40) == '\0') {
                cVar3 = FUN_1403a3350(lVar13 + 0x10,(uint)*pbVar9 * 0x100 + (uint)pbVar9[1],
                                      (uint)pbVar9[3] + (uint)pbVar9[2] * 0x100);
                if (cVar3 == '\0') {
                  cVar3 = '\0';
                  goto LAB_1403b4446;
                }
              }
              else {
                FUN_1403bdc00();
              }
              pbVar9 = pbVar9 + 6;
            } while (pbVar9 != pbVar4 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4);
          }
          cVar3 = '\x01';
        }
LAB_1403b4446:
        if (cVar3 == '\0') {
          return;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    uVar11 = 0;
    lVar13 = (ulonglong)*(byte *)(param_1 + 4) * 0x100 + (ulonglong)*(byte *)(param_1 + 5) + 3;
    pbVar4 = (byte *)(param_1 + lVar13 * 2);
    uVar12 = (uint)*(byte *)(param_1 + lVar13 * 2) * 0x100 + (uint)pbVar4[1];
    if (uVar12 != 0) {
      do {
        if (uVar11 < (uint)*pbVar4 * 0x100 + (uint)pbVar4[1]) {
          pbVar9 = pbVar4 + ((ulonglong)uVar11 + 1) * 2;
        }
        else {
          pbVar9 = (byte *)&DAT_14045dd10;
        }
        uVar8 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
        if (uVar8 == 0) {
          pbVar9 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar9 = (byte *)((ulonglong)uVar8 + param_1);
        }
        lVar13 = *(longlong *)(param_2 + 0x20);
        iVar5 = (uint)*pbVar9 * 0x100 + (uint)pbVar9[1];
        if (iVar5 == 1) {
          iVar5 = (uint)pbVar9[2] * 0x100 + (uint)pbVar9[3];
          if (*(char *)(lVar13 + 0x40) == '\0') {
            cVar3 = FUN_14038dcc0(lVar13 + 0x10,CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1),
                                  pbVar9 + 4,iVar5,2);
          }
          else {
            cVar3 = FUN_1403734b0(lVar13 + 0x10,pbVar9 + 4,iVar5,2);
          }
        }
        else {
          if (iVar5 != 2) {
            return;
          }
          bVar1 = pbVar9[2];
          pbVar10 = pbVar9 + 4;
          bVar2 = pbVar9[3];
          if (pbVar10 != pbVar9 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4) {
            do {
              if (*(char *)(lVar13 + 0x40) == '\0') {
                cVar3 = FUN_1403a3350(lVar13 + 0x10,(uint)*pbVar10 * 0x100 + (uint)pbVar10[1],
                                      (uint)pbVar10[3] + (uint)pbVar10[2] * 0x100);
                if (cVar3 == '\0') {
                  cVar3 = '\0';
                  goto LAB_1403b45a8;
                }
              }
              else {
                FUN_1403bdc00();
              }
              pbVar10 = pbVar10 + 6;
            } while (pbVar10 != pbVar9 + (ulonglong)CONCAT11(bVar1,bVar2) * 6 + 4);
          }
          cVar3 = '\x01';
        }
LAB_1403b45a8:
        if (cVar3 == '\0') {
          return;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
    uVar7 = (ulonglong)CONCAT11(*pbVar4,pbVar4[1]);
    if (*(char *)(*(longlong *)(param_2 + 0x28) + 0x40) == '\0') {
      FUN_14036b6f0(*(longlong *)(param_2 + 0x28) + 0x10,pbVar4 + uVar7 * 2 + 4,
                    (uint)pbVar4[uVar7 * 2 + 3] + (uint)pbVar4[uVar7 * 2 + 2] * 0x100,2);
    }
    else {
      FUN_140373360();
    }
  }
  return;
}

