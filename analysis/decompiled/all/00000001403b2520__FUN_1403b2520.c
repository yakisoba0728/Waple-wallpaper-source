// Function: FUN_1403b2520
// Addr: 1403b2520
// Size: 868 bytes


undefined8
FUN_1403b2520(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar12;
  
  if (*(uint *)(param_1 + 0x1c) < 2) {
    lVar8 = FUN_140414570();
    if (*(char *)(lVar8 + 4) != '\0') {
      *(uint *)(lVar8 + 0x18) = *(uint *)(lVar8 + 0x18) & 0xffffffdf;
    }
    lVar9 = FUN_140414570(param_1);
    if (*(char *)(lVar9 + 4) != '\0') {
      *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x18) & 0xffffffdf;
    }
    uVar1 = *(uint *)(param_1 + 0x60);
    uVar2 = *(uint *)(param_2 + 0x60);
    uVar14 = *(uint *)(param_1 + 0x38) & 0xfffffffd;
    uVar10 = (ulonglong)uVar2;
    if (uVar14 == 4) {
      uVar10 = 0;
    }
    if (1 < uVar1 + 1) {
      uVar16 = 1;
      lVar3 = *(longlong *)(param_1 + 0x70);
      lVar4 = *(longlong *)(param_2 + 0x70);
      uVar12 = uVar10;
      do {
        uVar15 = (uint)uVar16;
        if (uVar15 < uVar1) {
          uVar13 = uVar12;
          if ((*(int *)(uVar16 * 0x14 + 8 + lVar3) !=
               *(int *)(lVar3 + 8 + (ulonglong)(uVar15 - 1) * 0x14)) &&
             ((*(byte *)(lVar3 + 4 + (ulonglong)(uVar15 - (uVar14 != 4)) * 0x14) & 1) == 0)) {
LAB_1403b263a:
            if (uVar14 == 4) {
              uVar11 = (uint)uVar12;
              while ((uVar11 < uVar2 &&
                     (*(uint *)(lVar4 + 8 + uVar12 * 0x14) < *(uint *)(uVar16 * 0x14 + 8 + lVar3))))
              {
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              }
            }
            else {
              uVar11 = (uint)uVar10;
              while ((uVar11 != 0 &&
                     (uVar11 = (int)uVar10 - 1,
                     *(uint *)(lVar3 + 8 + (ulonglong)(uVar15 - 1) * 0x14) <=
                     *(uint *)(lVar4 + 8 + (ulonglong)uVar11 * 0x14)))) {
                uVar10 = (ulonglong)uVar11;
              }
            }
            goto LAB_1403b26a4;
          }
        }
        else {
          if (uVar15 != uVar1) goto LAB_1403b263a;
          if (uVar14 == 4) {
            uVar12 = (ulonglong)uVar2;
          }
          else {
            uVar10 = 0;
          }
LAB_1403b26a4:
          if (*(char *)(lVar8 + 4) != '\0') {
            *(undefined4 *)(lVar8 + 0x30) = 0;
            *(undefined8 *)(lVar8 + 0x38) = 0;
            *(undefined8 *)(lVar8 + 0x40) = 0;
            *(undefined8 *)(lVar8 + 0x48) = 0;
            *(undefined8 *)(lVar8 + 0x50) = 0;
            *(undefined2 *)(lVar8 + 0x58) = 1;
            *(undefined1 *)(lVar8 + 0x5a) = 0;
            *(undefined8 *)(lVar8 + 0x5c) = 0;
            *(undefined4 *)(lVar8 + 100) = 0;
            *(undefined8 *)(lVar8 + 0x78) = *(undefined8 *)(lVar8 + 0x70);
            *(undefined8 *)(lVar8 + 0x88) = 0;
            *(undefined8 *)(lVar8 + 0x90) = 0;
            *(undefined8 *)(lVar8 + 0x98) = 0;
            *(undefined8 *)(lVar8 + 0xa0) = 0;
            *(undefined8 *)(lVar8 + 0xa8) = 0;
            *(undefined8 *)(lVar8 + 0xb0) = 0;
            *(undefined2 *)(lVar8 + 0xd0) = 0;
            *(undefined8 *)(lVar8 + 0xd4) = 1;
          }
          uVar11 = *(uint *)(lVar8 + 0x18) & 0xfffffffe;
          if ((int)uVar10 == 0) {
            uVar11 = *(uint *)(lVar8 + 0x18);
          }
          uVar5 = uVar11 & 0xfffffffd;
          if (uVar2 <= (uint)uVar12) {
            uVar5 = uVar11;
          }
          if (*(char *)(lVar8 + 4) != '\0') {
            *(uint *)(lVar8 + 0x18) = uVar5;
          }
          FUN_140414200(lVar8,param_2,uVar10,uVar12);
          iVar6 = FUN_140419030(param_3,lVar8,param_4,param_5,param_6);
          if ((iVar6 == 0) || (*(char *)(lVar8 + 0x58) != '\0')) {
            uVar7 = 1;
            goto LAB_1403b2859;
          }
          FUN_140414200(lVar9,lVar8,0,0xffffffff);
          uVar13 = uVar10;
          if (uVar14 == 4) {
            uVar10 = uVar12;
            uVar13 = uVar12;
          }
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar12 = uVar13;
      } while (uVar15 + 1 < uVar1 + 1);
    }
    uVar7 = 1;
    if ((*(char *)(lVar9 + 0x58) != '\0') &&
       (uVar10 = FUN_140414680(lVar9,param_1,0xffffffff,0), (uVar10 & 0xffffffbf) != 0)) {
      FUN_1403b2470(param_1,param_3,"buffer verify error: unsafe-to-break test failed.");
      uVar7 = 0;
      if (*(char *)(param_1 + 4) != '\0') {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      FUN_140414200(param_1,lVar9,0,0xffffffff);
    }
LAB_1403b2859:
    FUN_1404145e0(lVar9);
    FUN_1404145e0(lVar8);
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

