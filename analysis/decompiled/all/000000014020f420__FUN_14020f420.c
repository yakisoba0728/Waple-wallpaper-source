// Function: FUN_14020f420
// Addr: 14020f420
// Size: 415 bytes


void FUN_14020f420(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [192];
  
  lVar14 = param_1[0x97];
  if ((lVar14 != 0) && (*(longlong *)(lVar14 + 8) != 0)) {
    puVar1 = (undefined8 *)param_4[1];
    uVar12 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    uVar7 = puVar1[4];
    uVar8 = puVar1[5];
    uVar9 = puVar1[6];
    uVar10 = puVar1[7];
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
        uVar17 = 0;
        lVar16 = *(longlong *)(lVar14 + 0x38);
        iVar13 = (int)(*(longlong *)(lVar14 + 0x40) - lVar16 >> 4) * -0x11111111;
        if (0 < iVar13) {
          do {
            cVar11 = FUN_14000d0e0(uVar17 * 0xf0 + lVar16,pcVar2);
            if (((cVar11 != '\0') &&
                (uVar17 < (ulonglong)
                          (*(longlong *)(lVar14 + 0x2d0) - *(longlong *)(lVar14 + 0x2c8) >> 6))) &&
               (lVar3 = *(longlong *)(lVar14 + 0x340), lVar3 != 0)) {
              lVar14 = uVar17 * 0x40;
              *(undefined8 *)(lVar3 + lVar14) = uVar12;
              ((undefined8 *)(lVar3 + lVar14))[1] = uVar4;
              puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar14);
              *puVar1 = uVar5;
              puVar1[1] = uVar6;
              puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar14);
              *puVar1 = uVar7;
              puVar1[1] = uVar8;
              puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar14);
              *puVar1 = uVar9;
              puVar1[1] = uVar10;
              uVar12 = (**(code **)(*param_1 + 0x80))(param_1);
                    /* WARNING: Subroutine does not return */
              FUN_14005f800(auStack_d8,uVar12);
            }
            uVar15 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar15;
          } while ((int)uVar15 < iVar13);
        }
      }
    }
    else {
      iVar13 = *(int *)*param_4;
      if (((-1 < iVar13) &&
          ((ulonglong)(longlong)iVar13 <
           (ulonglong)(*(longlong *)(lVar14 + 0x2d0) - *(longlong *)(lVar14 + 0x2c8) >> 6))) &&
         (lVar14 = *(longlong *)(lVar14 + 0x340), lVar14 != 0)) {
        lVar16 = (longlong)iVar13 * 0x40;
        *(undefined8 *)(lVar14 + lVar16) = uVar12;
        ((undefined8 *)(lVar14 + lVar16))[1] = uVar4;
        puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar16);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar16);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar16);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        uVar12 = (**(code **)(*param_1 + 0x80))(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_14005f800(auStack_d8,uVar12);
      }
    }
  }
  return;
}

