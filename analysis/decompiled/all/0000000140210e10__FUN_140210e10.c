// Function: FUN_140210e10
// Addr: 140210e10
// Size: 593 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140210e10(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar7 = _UNK_140492a68;
  lVar3 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if ((*param_3 >> 9 & 1) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x38);
        uVar9 = (*(longlong *)(lVar3 + 0x40) - lVar4 >> 4) * -0x1111111111111111;
        if (uVar9 != 0) {
          iVar11 = 0;
          pcVar5 = (char *)*param_4;
          cVar2 = *pcVar5;
          do {
            if ((cVar2 == '\0') ||
               (cVar8 = FUN_14000d010((longlong)iVar11 * 0xf0 + lVar4,pcVar5), cVar8 != '\0')) {
              uVar7 = _UNK_140492a68;
              lVar6 = *(longlong *)(lVar3 + 0x3b8);
              uVar10 = (ulonglong)iVar11;
              if (uVar10 < (ulonglong)
                           ((*(longlong *)(lVar3 + 0x3c0) - lVar6 >> 4) * -0x3333333333333333)) {
                puVar1 = (undefined8 *)(lVar6 + uVar10 * 0x50);
                *puVar1 = _DAT_140492a60;
                puVar1[1] = uVar7;
                puVar1 = (undefined8 *)(lVar6 + 0x10 + uVar10 * 0x50);
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar10 * 0x50);
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1 = (undefined8 *)(lVar6 + 0x30 + uVar10 * 0x50);
                *puVar1 = 0;
                puVar1[1] = 0;
                puVar1 = (undefined8 *)(lVar6 + 0x40 + uVar10 * 0x50);
                *puVar1 = 0;
                puVar1[1] = 0;
                return;
              }
            }
            iVar11 = iVar11 + 1;
          } while ((ulonglong)(longlong)iVar11 < uVar9);
        }
      }
    }
    else {
      uVar9 = (ulonglong)*(int *)*param_4;
      if ((-1 < *(int *)*param_4) &&
         (lVar4 = *(longlong *)(lVar3 + 0x3b8),
         uVar9 < (ulonglong)((*(longlong *)(lVar3 + 0x3c0) - lVar4 >> 4) * -0x3333333333333333))) {
        puVar1 = (undefined8 *)(lVar4 + uVar9 * 0x50);
        *puVar1 = _DAT_140492a60;
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar9 * 0x50);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar9 * 0x50);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar9 * 0x50);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar4 + 0x40 + uVar9 * 0x50);
        *puVar1 = 0;
        puVar1[1] = 0;
        return;
      }
    }
  }
  return;
}

