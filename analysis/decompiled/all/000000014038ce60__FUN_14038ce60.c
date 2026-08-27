// Function: FUN_14038ce60
// Addr: 14038ce60
// Size: 701 bytes


undefined8 FUN_14038ce60(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  short sVar16;
  undefined1 local_88 [8];
  ushort *local_80;
  int local_78;
  longlong local_60;
  int local_58;
  
  lVar6 = FUN_140386cc0(param_2,param_1);
  if (lVar6 != 0) {
    puVar9 = *(ushort **)(param_3 + 8);
    iVar7 = *(int *)(param_3 + 0x10);
    iVar8 = 0;
    lVar6 = *(longlong *)(param_3 + 0x28);
    iVar10 = *(int *)(param_3 + 0x30);
    FUN_1403bee50(param_3,local_88);
    iVar13 = -2;
    while (((puVar9 != local_80 || (iVar7 != local_78)) &&
           ((lVar6 != local_60 || (iVar10 != local_58))))) {
      if (iVar10 == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
      }
      if (iVar7 == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
        uVar2 = (ushort)DAT_14045dd10;
      }
      else {
        uVar2 = *puVar9;
      }
      iVar11 = (uVar2 & 0xff) * 0x100 + (uint)(uVar2 >> 8);
      iVar4 = iVar8 + 1;
      if (iVar13 + 1 == iVar11) {
        iVar4 = iVar8;
      }
      iVar8 = iVar4;
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        puVar9 = puVar9 + 1;
      }
      iVar13 = iVar11;
      if (iVar10 != 0) {
        iVar10 = iVar10 + -1;
        lVar6 = lVar6 + 2;
      }
    }
    cVar5 = FUN_14040aeb0(param_1 + 2,param_2,iVar8);
    if (cVar5 != '\0') {
      if (iVar8 != 0) {
        puVar9 = *(ushort **)(param_3 + 8);
        sVar16 = 0;
        iVar7 = *(int *)(param_3 + 0x10);
        bVar3 = false;
        lVar6 = *(longlong *)(param_3 + 0x28);
        uVar14 = 0xffffffff;
        iVar10 = *(int *)(param_3 + 0x30);
        FUN_1403bee50(param_3,local_88);
        uVar15 = 0xfffffffe;
        while (((puVar9 != local_80 || (iVar7 != local_78)) &&
               ((lVar6 != local_60 || (iVar10 != local_58))))) {
          if (iVar10 == 0) {
            DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
          }
          if (iVar7 == 0) {
            DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
            uVar2 = (ushort)DAT_14045dd10;
          }
          else {
            uVar2 = *puVar9;
          }
          uVar12 = (uVar2 & 0xff) * 0x100 + (uint)(uVar2 >> 8);
          if (uVar15 + 1 != uVar12) {
            if ((uVar15 != 0xfffffffe) && (uVar12 < uVar15 + 1)) {
              bVar3 = true;
            }
            uVar14 = (ulonglong)((int)uVar14 + 1);
            lVar1 = param_1 + uVar14 * 6;
            *(ushort *)(lVar1 + 4) = uVar2;
            *(char *)(lVar1 + 8) = (char)((ushort)sVar16 >> 8);
            *(char *)(lVar1 + 9) = (char)sVar16;
          }
          sVar16 = sVar16 + 1;
          *(ushort *)(param_1 + (uVar14 + 1) * 6) = uVar2;
          if (iVar7 != 0) {
            iVar7 = iVar7 + -1;
            puVar9 = puVar9 + 1;
          }
          uVar15 = uVar12;
          if (iVar10 != 0) {
            iVar10 = iVar10 + -1;
            lVar6 = lVar6 + 2;
          }
        }
        if ((bVar3) &&
           (iVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3), iVar7 != 0)
           ) {
          FUN_1402ea670(param_1 + 4,iVar7,6,&LAB_1403b3890);
        }
      }
      return 1;
    }
  }
  return 0;
}

