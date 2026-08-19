// Function: FUN_14038dd90
// Addr: 14038dd90
// Size: 501 bytes


undefined8 FUN_14038dd90(char *param_1,char param_2,byte *param_3,int param_4,uint param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  
  if ((*param_1 == '\0') || (param_4 == 0)) {
LAB_14038df9f:
    uVar7 = 1;
  }
  else {
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar9 = (uint)*param_3 * 0x100 + (uint)param_3[1];
    uVar13 = uVar9;
    while( true ) {
      uVar10 = *(uint *)(param_1 + 8);
      plVar1 = (longlong *)(param_1 + 0x18);
      uVar12 = uVar9 >> 9;
      if (uVar10 < *(uint *)(param_1 + 0x14)) break;
LAB_14038de27:
      iVar8 = *(uint *)(param_1 + 0x14) - 1;
      uVar6 = 0;
      if (-1 < iVar8) {
        do {
          uVar10 = (uint)(iVar8 + (int)uVar6) >> 1;
          iVar4 = uVar12 - *(int *)(*plVar1 + (ulonglong)uVar10 * 8);
          if (iVar4 < 0) {
            iVar8 = uVar10 - 1;
          }
          else {
            if (iVar4 < 1) {
              *(uint *)(param_1 + 8) = uVar10;
              puVar11 = (undefined4 *)
                        (*(longlong *)(param_1 + 0x28) +
                        (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar10 * 8) * 0x48);
              goto LAB_14038df2c;
            }
            uVar6 = (ulonglong)(uVar10 + 1);
          }
        } while ((int)uVar6 <= iVar8);
      }
      if (param_2 != '\0') {
        uVar9 = *(uint *)(param_1 + 0x24);
        cVar3 = FUN_1403f8810(param_1,uVar9 + 1,CONCAT71((int7)((ulonglong)plVar1 >> 8),1),0);
        if (cVar3 != '\0') {
          uVar5 = (ulonglong)uVar9;
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
          lVar2 = *(longlong *)(param_1 + 0x18) + uVar6 * 8;
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar2 + 8,lVar2,(*(int *)(param_1 + 0x14) - (int)uVar6) * 8 + -8);
        }
        goto LAB_14038df9b;
      }
      puVar11 = (undefined4 *)0x0;
LAB_14038df36:
      uVar10 = uVar13;
      do {
        uVar13 = uVar9;
        if (uVar13 < uVar10) goto LAB_14038df9b;
        if ((param_2 != '\0') || (puVar11 != (undefined4 *)0x0)) {
          uVar6 = (ulonglong)(uVar13 >> 6 & 7);
          *(ulonglong *)(puVar11 + uVar6 * 2 + 2) =
               *(ulonglong *)(puVar11 + uVar6 * 2 + 2) | 1L << (uVar13 & 0x3f);
          *puVar11 = 0xffffffff;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_14038df9f;
        param_3 = param_3 + param_5;
        uVar9 = (uint)*param_3 * 0x100 + (uint)param_3[1];
        uVar10 = uVar13;
      } while (uVar9 < (uVar12 + 1) * 0x200);
    }
    if (*(uint *)(*plVar1 + (ulonglong)uVar10 * 8) != uVar12) goto LAB_14038de27;
    puVar11 = (undefined4 *)
              (*(longlong *)(param_1 + 0x28) +
              (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar10 * 8) * 0x48);
LAB_14038df2c:
    if ((param_2 == '\0') || (puVar11 != (undefined4 *)0x0)) goto LAB_14038df36;
LAB_14038df9b:
    uVar7 = 0;
  }
  return uVar7;
}

