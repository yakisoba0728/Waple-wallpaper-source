// Function: FUN_1400b8f40
// Addr: 1400b8f40
// Size: 1596 bytes


char * FUN_1400b8f40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  pcVar4 = (char *)0x0;
  bVar2 = false;
  puVar9 = (uint *)pcVar4;
  puVar10 = (uint *)pcVar4;
  if ((param_2 != (longlong *)0x0) &&
     (lVar1 = *param_2, puVar9 = (uint *)0x0, puVar10 = (uint *)0x0, lVar1 != 0)) {
    puVar9 = (uint *)(param_2[3] + lVar1);
    puVar10 = (uint *)(param_2[2] + lVar1);
  }
  uVar8 = *(undefined4 *)(param_1 + 0x15c);
  switch(uVar8) {
  case 0:
    if (*(int *)(param_1 + 0x7c) != 0x20) {
      pcVar4 = "#png: bad chunk";
      goto LAB_1400b9557;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 5;
    *(undefined4 *)(param_1 + 0xec) = 0x4348524d;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    break;
  case 1:
    break;
  case 2:
    goto switchD_1400b8f9d_caseD_2;
  case 3:
    goto switchD_1400b8f9d_caseD_3;
  case 4:
    goto switchD_1400b8f9d_caseD_4;
  case 5:
    goto switchD_1400b8f9d_caseD_5;
  case 6:
    goto switchD_1400b8f9d_caseD_6;
  case 7:
    goto switchD_1400b8f9d_caseD_7;
  case 8:
    goto switchD_1400b8f9d_caseD_8;
  case 9:
    goto switchD_1400b8f9d_caseD_9;
  case 10:
    goto switchD_1400b8f9d_caseD_a;
  case 0xb:
    goto switchD_1400b8f9d_caseD_b;
  case 0xc:
    goto switchD_1400b8f9d_caseD_c;
  case 0xd:
    goto switchD_1400b8f9d_caseD_d;
  case 0xe:
    goto switchD_1400b8f9d_caseD_e;
  case 0xf:
    goto switchD_1400b8f9d_caseD_f;
  case 0x10:
    goto switchD_1400b8f9d_caseD_10;
  default:
    goto switchD_1400b8f9d_default;
  }
  if ((longlong)puVar10 - (longlong)puVar9 < 4) {
    *(undefined8 *)(param_1 + 0xade0) = 0;
    uVar8 = 2;
switchD_1400b8f9d_caseD_2:
    while (puVar9 != puVar10) {
      uVar11 = *(uint *)(param_1 + 0xade0);
      uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
      uVar7 = uVar11 & 0xff;
      *(ulonglong *)(param_1 + 0xade0) = uVar6;
      uVar3 = *puVar9;
      puVar9 = (uint *)((longlong)puVar9 + 1);
      uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
      *(ulonglong *)(param_1 + 0xade0) = uVar6;
      if (uVar7 == 0x18) {
        uVar11 = (uint)(uVar6 >> 0x20);
        goto LAB_1400b9076;
      }
      *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
    }
LAB_1400b9061:
    bVar2 = true;
    pcVar4 = "$base: short read";
  }
  else {
    uVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
LAB_1400b9076:
    *(ulonglong *)(param_1 + 0xf0) = *(ulonglong *)(param_1 + 0xf0) | (ulonglong)(uVar11 & 0xffffff)
    ;
switchD_1400b8f9d_caseD_3:
    if ((longlong)puVar10 - (longlong)puVar9 < 4) {
      *(undefined8 *)(param_1 + 0xade0) = 0;
      uVar8 = 4;
switchD_1400b8f9d_caseD_4:
      if (puVar9 == puVar10) goto LAB_1400b9061;
      do {
        uVar11 = *(uint *)(param_1 + 0xade0);
        uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
        uVar7 = uVar11 & 0xff;
        *(ulonglong *)(param_1 + 0xade0) = uVar6;
        uVar3 = *puVar9;
        puVar9 = (uint *)((longlong)puVar9 + 1);
        uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
        *(ulonglong *)(param_1 + 0xade0) = uVar6;
        if (uVar7 == 0x18) {
          uVar11 = (uint)(uVar6 >> 0x20);
          goto LAB_1400b9116;
        }
        *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
      } while (puVar9 != puVar10);
      bVar2 = true;
      pcVar4 = "$base: short read";
    }
    else {
      uVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
LAB_1400b9116:
      *(ulonglong *)(param_1 + 0xf0) =
           *(ulonglong *)(param_1 + 0xf0) | (ulonglong)(uVar11 & 0xffffff) << 0x18;
switchD_1400b8f9d_caseD_5:
      if ((longlong)puVar10 - (longlong)puVar9 < 4) {
        *(undefined8 *)(param_1 + 0xade0) = 0;
        uVar8 = 6;
switchD_1400b8f9d_caseD_6:
        if (puVar9 == puVar10) goto LAB_1400b9061;
        do {
          uVar11 = *(uint *)(param_1 + 0xade0);
          uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
          uVar7 = uVar11 & 0xff;
          *(ulonglong *)(param_1 + 0xade0) = uVar6;
          uVar3 = *puVar9;
          puVar9 = (uint *)((longlong)puVar9 + 1);
          uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
          *(ulonglong *)(param_1 + 0xade0) = uVar6;
          if (uVar7 == 0x18) {
            uVar6 = uVar6 >> 0x20;
            goto LAB_1400b91c6;
          }
          *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
        } while (puVar9 != puVar10);
        bVar2 = true;
        pcVar4 = "$base: short read";
      }
      else {
        uVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar6 = (ulonglong)(uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8);
LAB_1400b91c6:
        *(ulonglong *)(param_1 + 0xf0) = *(ulonglong *)(param_1 + 0xf0) | uVar6 << 0x30;
        *(ulonglong *)(param_1 + 0xf8) = *(ulonglong *)(param_1 + 0xf8) | uVar6 >> 0x10 & 0xff;
switchD_1400b8f9d_caseD_7:
        if ((longlong)puVar10 - (longlong)puVar9 < 4) {
          *(undefined8 *)(param_1 + 0xade0) = 0;
          uVar8 = 8;
switchD_1400b8f9d_caseD_8:
          if (puVar9 == puVar10) goto LAB_1400b9061;
          do {
            uVar11 = *(uint *)(param_1 + 0xade0);
            uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
            uVar7 = uVar11 & 0xff;
            *(ulonglong *)(param_1 + 0xade0) = uVar6;
            uVar3 = *puVar9;
            puVar9 = (uint *)((longlong)puVar9 + 1);
            uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
            *(ulonglong *)(param_1 + 0xade0) = uVar6;
            if (uVar7 == 0x18) {
              uVar11 = (uint)(uVar6 >> 0x20);
              goto LAB_1400b9279;
            }
            *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
          } while (puVar9 != puVar10);
          bVar2 = true;
          pcVar4 = "$base: short read";
        }
        else {
          uVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
LAB_1400b9279:
          *(ulonglong *)(param_1 + 0xf8) =
               *(ulonglong *)(param_1 + 0xf8) | (ulonglong)(uVar11 & 0xffffff) << 8;
switchD_1400b8f9d_caseD_9:
          if ((longlong)puVar10 - (longlong)puVar9 < 4) {
            *(undefined8 *)(param_1 + 0xade0) = 0;
            uVar8 = 10;
switchD_1400b8f9d_caseD_a:
            if (puVar9 == puVar10) goto LAB_1400b9061;
            do {
              uVar11 = *(uint *)(param_1 + 0xade0);
              uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
              uVar7 = uVar11 & 0xff;
              *(ulonglong *)(param_1 + 0xade0) = uVar6;
              uVar3 = *puVar9;
              puVar9 = (uint *)((longlong)puVar9 + 1);
              uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
              *(ulonglong *)(param_1 + 0xade0) = uVar6;
              if (uVar7 == 0x18) {
                uVar11 = (uint)(uVar6 >> 0x20);
                goto LAB_1400b9326;
              }
              *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
            } while (puVar9 != puVar10);
            bVar2 = true;
            pcVar4 = "$base: short read";
          }
          else {
            uVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
LAB_1400b9326:
            *(ulonglong *)(param_1 + 0xf8) =
                 *(ulonglong *)(param_1 + 0xf8) | (ulonglong)(uVar11 & 0xffffff) << 0x20;
switchD_1400b8f9d_caseD_b:
            if ((longlong)puVar10 - (longlong)puVar9 < 4) {
              *(undefined8 *)(param_1 + 0xade0) = 0;
              uVar8 = 0xc;
switchD_1400b8f9d_caseD_c:
              if (puVar9 == puVar10) goto LAB_1400b9061;
              do {
                uVar11 = *(uint *)(param_1 + 0xade0);
                uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
                uVar7 = uVar11 & 0xff;
                *(ulonglong *)(param_1 + 0xade0) = uVar6;
                uVar3 = *puVar9;
                puVar9 = (uint *)((longlong)puVar9 + 1);
                uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
                *(ulonglong *)(param_1 + 0xade0) = uVar6;
                if (uVar7 == 0x18) {
                  uVar6 = uVar6 >> 0x20;
                  goto LAB_1400b93d6;
                }
                *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
              } while (puVar9 != puVar10);
              bVar2 = true;
              pcVar4 = "$base: short read";
            }
            else {
              uVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              uVar6 = (ulonglong)
                      (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8);
LAB_1400b93d6:
              *(ulonglong *)(param_1 + 0xf8) = *(ulonglong *)(param_1 + 0xf8) | uVar6 << 0x38;
              *(ulonglong *)(param_1 + 0x100) =
                   *(ulonglong *)(param_1 + 0x100) | uVar6 >> 8 & 0xffff;
switchD_1400b8f9d_caseD_d:
              if ((longlong)puVar10 - (longlong)puVar9 < 4) {
                *(undefined8 *)(param_1 + 0xade0) = 0;
                uVar8 = 0xe;
switchD_1400b8f9d_caseD_e:
                if (puVar9 == puVar10) goto LAB_1400b9061;
                do {
                  uVar11 = *(uint *)(param_1 + 0xade0);
                  uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
                  uVar7 = uVar11 & 0xff;
                  *(ulonglong *)(param_1 + 0xade0) = uVar6;
                  uVar3 = *puVar9;
                  puVar9 = (uint *)((longlong)puVar9 + 1);
                  uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
                  *(ulonglong *)(param_1 + 0xade0) = uVar6;
                  if (uVar7 == 0x18) {
                    uVar11 = (uint)(uVar6 >> 0x20);
                    goto LAB_1400b9489;
                  }
                  *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
                } while (puVar9 != puVar10);
                bVar2 = true;
                pcVar4 = "$base: short read";
              }
              else {
                uVar11 = *puVar9;
                puVar9 = puVar9 + 1;
                uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8;
LAB_1400b9489:
                *(ulonglong *)(param_1 + 0x100) =
                     *(ulonglong *)(param_1 + 0x100) | (ulonglong)(uVar11 & 0xffffff) << 0x10;
switchD_1400b8f9d_caseD_f:
                if (3 < (longlong)puVar10 - (longlong)puVar9) {
                  uVar11 = *puVar9;
                  puVar9 = puVar9 + 1;
                  uVar6 = (ulonglong)
                          (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8);
LAB_1400b9533:
                  *(ulonglong *)(param_1 + 0x100) = *(ulonglong *)(param_1 + 0x100) | uVar6 << 0x28;
                  *(undefined4 *)(param_1 + 0x15c) = 0;
                  goto LAB_1400b9557;
                }
                *(undefined8 *)(param_1 + 0xade0) = 0;
                uVar8 = 0x10;
switchD_1400b8f9d_caseD_10:
                if (puVar9 == puVar10) goto LAB_1400b9061;
                do {
                  uVar11 = *(uint *)(param_1 + 0xade0);
                  uVar6 = *(ulonglong *)(param_1 + 0xade0) & 0xffffffffffffff00;
                  uVar7 = uVar11 & 0xff;
                  *(ulonglong *)(param_1 + 0xade0) = uVar6;
                  uVar3 = *puVar9;
                  puVar9 = (uint *)((longlong)puVar9 + 1);
                  uVar6 = (ulonglong)(byte)uVar3 << (0x38U - (char)uVar11 & 0x3f) | uVar6;
                  *(ulonglong *)(param_1 + 0xade0) = uVar6;
                  if (uVar7 == 0x18) {
                    uVar6 = uVar6 >> 0x20;
                    goto LAB_1400b9533;
                  }
                  *(ulonglong *)(param_1 + 0xade0) = uVar7 + 8 | uVar6;
                } while (puVar9 != puVar10);
                bVar2 = true;
                pcVar4 = "$base: short read";
              }
            }
          }
        }
      }
    }
  }
switchD_1400b8f9d_default:
  uVar5 = 0;
  if (bVar2) {
    uVar5 = uVar8;
  }
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
LAB_1400b9557:
  if ((param_2 != (longlong *)0x0) && (*param_2 != 0)) {
    param_2[3] = (longlong)puVar9 - *param_2;
  }
  return pcVar4;
}

