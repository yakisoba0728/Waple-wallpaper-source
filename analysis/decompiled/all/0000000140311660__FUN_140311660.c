// Function: FUN_140311660
// Addr: 140311660
// Size: 470 bytes


void FUN_140311660(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  
  puVar2 = *(uint **)(param_1 + 0x408);
  uVar9 = param_2;
  if (*puVar2 < param_2) {
    uVar9 = *puVar2;
  }
  uVar7 = 0;
  if (uVar9 != 0) {
    if ((uVar9 < 4) ||
       ((param_4 <= param_3 + (ulonglong)(uVar9 - 1) * 4 &&
        (param_3 <= param_4 + (ulonglong)(uVar9 - 1) * 4)))) {
      do {
        lVar10 = uVar7 * 4;
        lVar1 = uVar7 * 4;
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        *(undefined4 *)(param_4 + lVar1) = *(undefined4 *)(param_3 + lVar10);
      } while (uVar6 < uVar9);
    }
    else {
      FUN_1404210f0(param_4,param_3,(ulonglong)uVar9 << 2);
      do {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar9);
    }
  }
  if ((uint)uVar7 < param_2) {
    FUN_1404217a0(param_4 + uVar7 * 4,0,(ulonglong)(param_2 - (uint)uVar7) << 2);
  }
  if (((*(undefined8 **)(puVar2 + 0xe) == (undefined8 *)0x0) ||
      (puVar8 = (ushort *)**(undefined8 **)(puVar2 + 0xe), puVar8 == (ushort *)0x0)) ||
     (uVar7 = 0, uVar9 == 0)) {
    lVar10 = *(longlong *)(*(longlong *)(puVar2 + 6) + 0x10);
    if (uVar9 == 0) {
      return;
    }
  }
  else {
    do {
      if (1 < *puVar8) {
        iVar3 = *(int *)(param_4 + uVar7 * 4);
        lVar10 = *(longlong *)(puVar8 + 4);
        uVar6 = 1;
        do {
          iVar5 = *(int *)(lVar10 + 4 + (ulonglong)uVar6 * 8);
          if (iVar3 < iVar5) {
            lVar1 = (ulonglong)(uVar6 - 1) * 8;
            iVar3 = FUN_1402f20b0(iVar3 - *(int *)(lVar1 + 4 + lVar10),
                                  *(int *)(lVar10 + (ulonglong)uVar6 * 8) - *(int *)(lVar1 + lVar10)
                                  ,iVar5 - *(int *)(lVar1 + 4 + lVar10));
            *(int *)(param_4 + uVar7 * 4) = iVar3 + *(int *)(*(longlong *)(puVar8 + 4) + lVar1);
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *puVar8);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      puVar8 = puVar8 + 8;
    } while (uVar6 < uVar9);
    lVar10 = *(longlong *)(*(longlong *)(puVar2 + 6) + 0x10);
  }
  uVar7 = 0;
  piVar11 = (int *)(lVar10 + 0xc);
  do {
    iVar3 = *(int *)(param_4 + uVar7 * 4);
    lVar1 = uVar7 * 4;
    iVar5 = *piVar11;
    if (iVar3 < 0) {
      iVar4 = iVar5 - *(int *)(lVar10 + 8);
LAB_1403117f0:
      iVar5 = (int)((ulonglong)
                    ((longlong)iVar4 * (longlong)iVar3 + 0x8000 +
                    ((longlong)iVar4 * (longlong)iVar3 >> 0x3f)) >> 0x10) + iVar5;
    }
    else if (0 < iVar3) {
      iVar4 = *(int *)(lVar10 + 0x10) - iVar5;
      goto LAB_1403117f0;
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
    *(int *)(param_4 + lVar1) = iVar5;
    lVar10 = lVar10 + 0x20;
    piVar11 = piVar11 + 8;
    if (uVar9 <= uVar6) {
      return;
    }
  } while( true );
}

