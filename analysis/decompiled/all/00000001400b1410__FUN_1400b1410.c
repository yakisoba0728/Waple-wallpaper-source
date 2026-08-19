// Function: FUN_1400b1410
// Addr: 1400b1410
// Size: 1 bytes


char * FUN_1400b1410(longlong param_1,uint *param_2,longlong *param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uStackX_10;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = 0;
code_r0x0001400b1457:
    uVar5 = *(int *)(&UNK_140482b20 + (ulonglong)((uint)uVar3 & 0xf) * 4) +
            *(int *)(&UNK_140482b20 + (ulonglong)((uint)(uVar3 >> 0xc) & 0xf) * 4) +
            *(int *)(&UNK_140482b20 + (ulonglong)((uint)(uVar3 >> 8) & 0xf) * 4) +
            *(int *)(&UNK_140482b20 + (ulonglong)((uint)(uVar3 >> 4) & 0xf) * 4);
    uVar3 = (ulonglong)uVar5;
    if ((uVar5 & 7) != 0) {
      return "#base: unsupported option";
    }
    if (param_2 == (uint *)0x0) {
      lVar20 = 0;
      uVar10 = 0;
      uVar19 = 0;
      lVar6 = 0;
      goto code_r0x0001400b14e0;
    }
  }
  else {
    uVar3 = (ulonglong)*param_2;
    if ((*param_2 & 0x30000) == 0) goto code_r0x0001400b1457;
    uVar3 = 0;
  }
  lVar20 = *(longlong *)(param_2 + 4);
  uVar10 = *(ulonglong *)(param_2 + 6);
  uVar19 = *(ulonglong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 10);
code_r0x0001400b14e0:
  uStackX_10 = 0;
  uVar16 = 0;
  uVar4 = param_3[1];
  if (uVar4 != 0) {
    uVar3 = uVar3 >> 3;
    uVar13 = *(uint *)(param_1 + 0x28) * uVar3;
    do {
      if (uVar4 < uVar16) {
        lVar15 = 0;
        lVar11 = 0;
      }
      else {
        lVar15 = uVar4 - uVar16;
        lVar11 = *param_3 + uVar16;
      }
      uVar5 = *(uint *)(param_1 + 0x94);
      if (*(uint *)(param_1 + 0x8c) <= uVar5) {
        if (*(char *)(param_1 + 0x43) != '\0') {
          return (char *)0x0;
        }
        return "#base: too much data";
      }
      if (uVar5 < uVar19) {
        lVar7 = lVar6 * (ulonglong)uVar5 + lVar20;
        uVar4 = uVar10;
      }
      else {
        uVar4 = 0;
        lVar7 = 0;
      }
      if (uVar5 < *(uint *)(param_1 + 0x2c)) {
        if (uVar13 < uVar4) {
          uVar4 = uVar13;
        }
        puVar14 = (uint *)(param_1 + 0x90);
        uVar5 = *puVar14;
        uVar18 = uVar5 * uVar3;
        if (uVar18 < uVar4) {
          uVar17 = *(uint *)(param_1 + 0x88) * uVar3;
          if ((uVar18 < uVar17 || uVar18 - uVar17 == 0) && (uVar17 < uVar4 || uVar17 - uVar4 == 0))
          {
            lVar9 = ((ulonglong)*(uint *)(param_1 + 0x88) - (ulonglong)uVar5) * uVar3;
          }
          else {
            lVar9 = uVar4 - uVar18;
          }
          if (((undefined8 *)(param_1 + 0xb0) == (undefined8 *)0x0) ||
             (pcVar1 = *(code **)(param_1 + 0xb0), pcVar1 == (code *)0x0)) {
            lVar11 = 0;
          }
          else {
            lVar11 = (*pcVar1)(lVar7 + uVar18,lVar9,param_1 + 0x1918,0x400,lVar11,lVar15);
          }
          uStackX_10 = lVar11 + uVar16;
          if (uStackX_10 < uVar16) {
            uStackX_10 = 0xffffffffffffffff;
          }
          uVar5 = (int)lVar11 + *puVar14;
          if (uVar5 < *puVar14) {
            uVar5 = 0xffffffff;
          }
          *puVar14 = uVar5;
          uVar12 = *(uint *)(param_1 + 0x94) + 1;
          if (uVar12 < *(uint *)(param_1 + 0x94)) {
            uVar12 = 0xffffffff;
          }
          if (uVar12 < *(uint *)(param_1 + 0x98)) {
            uVar12 = *(uint *)(param_1 + 0x98);
          }
          *(uint *)(param_1 + 0x98) = uVar12;
          uVar16 = uStackX_10;
        }
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x90);
      }
      puVar14 = (uint *)(param_1 + 0x90);
      uVar12 = *(uint *)(param_1 + 0x88);
      if (uVar5 < uVar12) {
        uVar4 = param_3[1];
        if (uVar4 == uVar16) {
          return (char *)0x0;
        }
        if (uVar4 < uVar16) {
code_r0x0001400b1929:
          return "#gif: internal error: inconsistent ri/wi";
        }
        uVar18 = uVar4 - uVar16;
        if ((ulonglong)(uVar12 - uVar5) < uVar4 - uVar16) {
          uVar18 = (ulonglong)(uVar12 - uVar5);
        }
        uStackX_10 = uVar16 + uVar18;
        if (uStackX_10 < uVar16) {
          uStackX_10 = 0xffffffffffffffff;
        }
        uVar2 = (int)uVar18 + uVar5;
        if (uVar2 < uVar5) {
          uVar2 = 0xffffffff;
        }
        *puVar14 = uVar2;
        if (uVar2 < uVar12) {
          if (uStackX_10 == uVar4) {
            return (char *)0x0;
          }
          goto code_r0x0001400b1929;
        }
        uVar4 = (ulonglong)*(byte *)(param_1 + 0x4b);
        *puVar14 = *(uint *)(param_1 + 0x80);
        uVar5 = (uint)(byte)(&UNK_14047a574)[uVar4] + *(uint *)(param_1 + 0x94);
        if (uVar5 < *(uint *)(param_1 + 0x94)) {
          uVar5 = 0xffffffff;
        }
        *(uint *)(param_1 + 0x94) = uVar5;
        uVar16 = uStackX_10;
        if (*(byte *)(param_1 + 0x4b) != 0) {
          do {
            if (uVar5 < *(uint *)(param_1 + 0x8c)) break;
            bVar8 = (char)uVar4 - 1;
            *(byte *)(param_1 + 0x4b) = bVar8;
            uVar4 = (ulonglong)bVar8;
            uVar5 = *(int *)(&UNK_14047a560 + (ulonglong)bVar8 * 4) + *(uint *)(param_1 + 0x84);
            if (uVar5 < *(uint *)(param_1 + 0x84)) {
              uVar5 = 0xffffffff;
            }
            *(uint *)(param_1 + 0x94) = uVar5;
          } while (bVar8 != 0);
        }
      }
      else {
        bVar8 = *(byte *)(param_1 + 0x4b);
        uVar4 = (ulonglong)bVar8;
        *puVar14 = *(uint *)(param_1 + 0x80);
        if (bVar8 == 0) {
          uVar5 = *(uint *)(param_1 + 0x94) + 1;
          if (uVar5 < *(uint *)(param_1 + 0x94)) {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 0x94) = uVar5;
        }
        else {
          if (((*(longlong *)(param_1 + 0x78) == 0) && (*(char *)(param_1 + 0x5c) == '\0')) &&
             (1 < bVar8)) {
            uVar5 = *(uint *)(param_1 + 0x94);
            if (uVar5 < uVar19) {
              lVar11 = lVar6 * (ulonglong)uVar5 + lVar20;
              uVar18 = uVar10;
            }
            else {
              uVar18 = 0;
              lVar11 = 0;
            }
            uVar12 = (byte)(&UNK_14047a4d8)[uVar4] + uVar5;
            if ((byte)(&UNK_14047a4d8)[uVar4] + uVar5 < uVar5) {
              uVar12 = 0xffffffff;
            }
            uVar2 = *(uint *)(param_1 + 0x8c);
            if (uVar12 < *(uint *)(param_1 + 0x8c)) {
              uVar2 = uVar12;
            }
            uVar12 = uVar5 + 1;
            if (uVar5 + 1 < uVar5) {
              uVar12 = 0xffffffff;
            }
            if (uVar12 < uVar2) {
              do {
                if (uVar12 < uVar19) {
                  lVar15 = lVar6 * (ulonglong)uVar12 + lVar20;
                  uVar4 = uVar10;
                }
                else {
                  uVar4 = 0;
                  lVar15 = 0;
                }
                uVar16 = uVar18;
                if (uVar4 < uVar18) {
                  uVar16 = uVar4;
                }
                if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1404211c0(lVar15,lVar11);
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar2);
              uVar4 = (ulonglong)*(byte *)(param_1 + 0x4b);
              uVar16 = uStackX_10;
            }
            if (uVar2 < *(uint *)(param_1 + 0x98)) {
              uVar2 = *(uint *)(param_1 + 0x98);
            }
            *(uint *)(param_1 + 0x98) = uVar2;
          }
          uVar5 = (uint)(byte)(&UNK_14047a574)[uVar4] + *(uint *)(param_1 + 0x94);
          if (uVar5 < *(uint *)(param_1 + 0x94)) {
            uVar5 = 0xffffffff;
          }
          *(uint *)(param_1 + 0x94) = uVar5;
          if ((char)uVar4 != '\0') {
            do {
              if (uVar5 < *(uint *)(param_1 + 0x8c)) break;
              bVar8 = (char)uVar4 - 1;
              uVar4 = (ulonglong)bVar8;
              *(byte *)(param_1 + 0x4b) = bVar8;
              uVar5 = *(int *)(&UNK_14047a560 + uVar4 * 4) + *(uint *)(param_1 + 0x84);
              if (uVar5 < *(uint *)(param_1 + 0x84)) {
                uVar5 = 0xffffffff;
              }
              *(uint *)(param_1 + 0x94) = uVar5;
            } while (bVar8 != 0);
          }
        }
      }
      uVar4 = param_3[1];
    } while (uVar16 < uVar4);
  }
  return (char *)0x0;
}

