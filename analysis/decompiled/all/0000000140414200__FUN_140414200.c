// Function: FUN_140414200
// Addr: 140414200
// Size: 631 bytes


void FUN_140414200(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar4 = (ulonglong)param_3;
  if (*(uint *)(param_2 + 0x60) < param_4) {
    param_4 = *(uint *)(param_2 + 0x60);
  }
  if ((param_3 <= param_4) && (param_3 != param_4)) {
    uVar9 = param_4 - param_3;
    uVar7 = *(uint *)(param_1 + 0x60);
    if (uVar9 + uVar7 < uVar7) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    else {
      FUN_140414d20();
      if (*(char *)(param_1 + 0x58) != '\0') {
        if (uVar7 == 0) {
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        }
        if ((*(char *)(param_1 + 0x5a) == '\0') && (*(char *)(param_2 + 0x5a) != '\0')) {
          FUN_1403b37a0(param_1);
        }
        piVar1 = (int *)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (piVar2 = (int *)(param_2 + 0x38), piVar2 != (int *)0x0)) {
          iVar6 = *piVar1;
          if (iVar6 == 0) {
            iVar6 = *piVar2;
            *piVar1 = iVar6;
          }
          if (iVar6 == *piVar2) {
            iVar6 = *(int *)(param_1 + 0x3c);
            if (iVar6 == 0) {
              iVar6 = *(int *)(param_2 + 0x3c);
              *(int *)(param_1 + 0x3c) = iVar6;
            }
            if ((iVar6 == *(int *)(param_2 + 0x3c)) && (*(longlong *)(param_1 + 0x40) == 0)) {
              *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
            }
          }
        }
        lVar3 = (ulonglong)uVar9 * 5;
        lVar8 = (ulonglong)uVar9 * 0x14;
        if (lVar3 != 0) {
          FUN_1404210f0(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar7 * 0x14,
                        *(longlong *)(param_2 + 0x70) + uVar4 * 0x14,lVar8);
        }
        if ((*(char *)(param_1 + 0x5a) != '\0') && (lVar3 != 0)) {
          FUN_1404210f0(*(longlong *)(param_1 + 0x80) + (ulonglong)uVar7 * 0x14,
                        *(longlong *)(param_2 + 0x80) + uVar4 * 0x14,lVar8);
        }
        if (*(int *)(param_2 + 0x30) == 1) {
          if ((uVar7 == 0) && (*(int *)(param_2 + 0xb0) + param_3 != 0)) {
            *(undefined4 *)(param_1 + 0xb0) = 0;
            uVar5 = 0;
            if (param_3 != 0) {
              uVar7 = 0;
              do {
                uVar5 = (ulonglong)uVar7;
                if (4 < uVar7) break;
                uVar9 = (int)uVar4 - 1;
                uVar4 = (ulonglong)uVar9;
                *(undefined4 *)(param_1 + 0x88 + (ulonglong)uVar7 * 4) =
                     *(undefined4 *)(*(longlong *)(param_2 + 0x70) + uVar4 * 0x14);
                uVar7 = *(int *)(param_1 + 0xb0) + 1;
                uVar5 = (ulonglong)uVar7;
                *(uint *)(param_1 + 0xb0) = uVar7;
              } while (uVar9 != 0);
            }
            if (*(int *)(param_2 + 0xb0) != 0) {
              uVar7 = 0;
              do {
                if (4 < (uint)uVar5) break;
                uVar4 = (ulonglong)uVar7;
                uVar7 = uVar7 + 1;
                *(undefined4 *)(param_1 + 0x88 + uVar5 * 4) =
                     *(undefined4 *)(param_2 + 0x88 + uVar4 * 4);
                uVar9 = *(int *)(param_1 + 0xb0) + 1;
                uVar5 = (ulonglong)uVar9;
                *(uint *)(param_1 + 0xb0) = uVar9;
              } while (uVar7 < *(uint *)(param_2 + 0xb0));
            }
          }
          *(undefined4 *)(param_1 + 0xb4) = 0;
          uVar4 = 0;
          if (param_4 < *(uint *)(param_2 + 0x60)) {
            uVar7 = 0;
            do {
              uVar5 = (ulonglong)param_4;
              uVar4 = (ulonglong)uVar7;
              if (4 < uVar7) break;
              param_4 = param_4 + 1;
              *(undefined4 *)(param_1 + 0x9c + (ulonglong)uVar7 * 4) =
                   *(undefined4 *)(*(longlong *)(param_2 + 0x70) + uVar5 * 0x14);
              uVar7 = *(int *)(param_1 + 0xb4) + 1;
              uVar4 = (ulonglong)uVar7;
              *(uint *)(param_1 + 0xb4) = uVar7;
            } while (param_4 < *(uint *)(param_2 + 0x60));
          }
          if (*(int *)(param_2 + 0xb4) != 0) {
            uVar7 = 0;
            do {
              if (4 < (uint)uVar4) {
                return;
              }
              uVar5 = (ulonglong)uVar7;
              uVar7 = uVar7 + 1;
              *(undefined4 *)(param_1 + 0x9c + uVar4 * 4) =
                   *(undefined4 *)(param_2 + 0x9c + uVar5 * 4);
              uVar9 = *(int *)(param_1 + 0xb4) + 1;
              uVar4 = (ulonglong)uVar9;
              *(uint *)(param_1 + 0xb4) = uVar9;
            } while (uVar7 < *(uint *)(param_2 + 0xb4));
          }
        }
      }
    }
  }
  return;
}

