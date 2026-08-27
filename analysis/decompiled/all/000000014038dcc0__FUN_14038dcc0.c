// Function: FUN_14038dcc0
// Addr: 14038dcc0
// Size: 550 bytes


undefined8 FUN_14038dcc0(char *param_1,char param_2,byte *param_3,int param_4,uint param_5)

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
LAB_14038decf:
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
      if (*(uint *)(param_1 + 0x14) <= uVar10) break;
      if (*(uint *)(*plVar1 + (ulonglong)uVar10 * 8) != uVar12) break;
      puVar11 = (undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                (ulonglong)*(uint *)(*plVar1 + 4 + (ulonglong)uVar10 * 8) * 0x48);
LAB_14038de5c:
      if ((param_2 != '\0') && (puVar11 == (undefined4 *)0x0)) goto LAB_14038decb;
LAB_14038de66:
      uVar10 = uVar13;
      do {
        uVar13 = uVar9;
        if (uVar13 < uVar10) goto LAB_14038decb;
        if ((param_2 != '\0') || (puVar11 != (undefined4 *)0x0)) {
          uVar6 = (ulonglong)(uVar13 >> 6 & 7);
          *(ulonglong *)(puVar11 + uVar6 * 2 + 2) =
               *(ulonglong *)(puVar11 + uVar6 * 2 + 2) | 1L << (uVar13 & 0x3f);
          *puVar11 = 0xffffffff;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_14038decf;
        param_3 = param_3 + param_5;
        uVar9 = (uint)*param_3 * 0x100 + (uint)param_3[1];
        uVar10 = uVar13;
      } while (uVar9 < (uVar12 + 1) * 0x200);
    }
    iVar8 = *(uint *)(param_1 + 0x14) - 1;
    uVar6 = 0;
    if (-1 < iVar8) {
      do {
        uVar10 = (uint)(iVar8 + (int)uVar6) >> 1;
        uVar5 = (ulonglong)uVar10;
        iVar4 = uVar12 - *(int *)(*plVar1 + uVar5 * 8);
        if (iVar4 < 0) {
          iVar8 = uVar10 - 1;
        }
        else {
          if (iVar4 < 1) goto LAB_14038de42;
          uVar6 = (ulonglong)(uVar10 + 1);
        }
      } while ((int)uVar6 <= iVar8);
    }
    if (param_2 == '\0') {
      puVar11 = (undefined4 *)0x0;
      goto LAB_14038de66;
    }
    uVar10 = *(uint *)(param_1 + 0x24);
    cVar3 = FUN_1403f8740(param_1,uVar10 + 1,CONCAT71((int7)((ulonglong)plVar1 >> 8),1),0);
    if (cVar3 != '\0') {
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
      lVar2 = *(longlong *)(param_1 + 0x18) + uVar6 * 8;
      FUN_1404210f0(lVar2 + 8,lVar2,(*(int *)(param_1 + 0x14) - (int)uVar6) * 8 + -8);
      lVar2 = *(longlong *)(param_1 + 0x18);
      *(uint *)(lVar2 + uVar6 * 8) = uVar12;
      *(uint *)(lVar2 + 4 + uVar6 * 8) = uVar10;
      uVar5 = uVar6;
LAB_14038de42:
      *(int *)(param_1 + 8) = (int)uVar5;
      puVar11 = (undefined4 *)
                (*(longlong *)(param_1 + 0x28) +
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 4 + uVar5 * 8) * 0x48);
      goto LAB_14038de5c;
    }
LAB_14038decb:
    uVar7 = 0;
  }
  return uVar7;
}

