// Function: FUN_14036b6f0
// Addr: 14036b6f0
// Size: 526 bytes


void FUN_14036b6f0(char *param_1,byte *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*param_1 == '\0') || (param_3 == 0)) {
    return;
  }
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  uVar9 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  do {
    uVar10 = *(uint *)(param_1 + 8);
    plVar1 = (longlong *)(param_1 + 0x18);
    uVar11 = uVar9 >> 9;
    if (uVar10 < *(uint *)(param_1 + 0x14)) {
      if (*(uint *)(*plVar1 + (ulonglong)uVar10 * 8) != uVar11) goto LAB_14036b788;
      puVar8 = (undefined4 *)
               (*(longlong *)(param_1 + 0x28) +
               (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar10 * 8) * 0x48);
    }
    else {
LAB_14036b788:
      iVar7 = *(uint *)(param_1 + 0x14) - 1;
      uVar6 = 0;
      if (-1 < iVar7) {
        do {
          uVar10 = (uint)(iVar7 + (int)uVar6) >> 1;
          uVar5 = (ulonglong)uVar10;
          iVar4 = uVar11 - *(int *)(*plVar1 + uVar5 * 8);
          if (iVar4 < 0) {
            iVar7 = uVar10 - 1;
          }
          else {
            if (iVar4 < 1) goto LAB_14036b854;
            uVar6 = (ulonglong)(uVar10 + 1);
          }
        } while ((int)uVar6 <= iVar7);
      }
      uVar10 = *(uint *)(param_1 + 0x24);
      cVar3 = FUN_1403f8740(param_1,uVar10 + 1,CONCAT71((int7)((ulonglong)*plVar1 >> 8),1),0);
      if (cVar3 == '\0') {
        return;
      }
      uVar5 = (ulonglong)uVar10;
      lVar2 = *(longlong *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x10 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x18 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x20 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x28 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x30 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x38 + uVar5 * 0x48) = 0;
      *(undefined8 *)(lVar2 + 0x40 + uVar5 * 0x48) = 0;
      *(undefined4 *)(lVar2 + uVar5 * 0x48) = 0;
      lVar2 = *plVar1 + uVar6 * 8;
      FUN_1404210f0(lVar2 + 8,lVar2,(*(int *)(param_1 + 0x14) - (int)uVar6) * 8 + -8);
      lVar2 = *plVar1;
      *(uint *)(lVar2 + uVar6 * 8) = uVar11;
      *(uint *)(lVar2 + 4 + uVar6 * 8) = uVar10;
      uVar5 = uVar6;
LAB_14036b854:
      *(int *)(param_1 + 8) = (int)uVar5;
      puVar8 = (undefined4 *)
               (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(*plVar1 + 4 + uVar5 * 8) * 0x48
               );
    }
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    do {
      if (uVar9 != 0xffffffff) {
        uVar6 = (ulonglong)(uVar9 >> 6 & 7);
        *(ulonglong *)(puVar8 + uVar6 * 2 + 2) =
             *(ulonglong *)(puVar8 + uVar6 * 2 + 2) | 1L << (uVar9 & 0x3f);
        *puVar8 = 0xffffffff;
      }
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return;
      }
      param_2 = param_2 + param_4;
      uVar9 = (uint)*param_2 * 0x100 + (uint)param_2[1];
    } while ((uVar11 * 0x200 <= uVar9) && (uVar9 < uVar11 * 0x200 + 0x200));
  } while( true );
}

