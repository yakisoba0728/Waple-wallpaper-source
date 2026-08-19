// Function: FUN_1404142d0
// Addr: 1404142d0
// Size: 106 bytes


/* WARNING: Removing unreachable block (ram,0x0001404143d5) */

void FUN_1404142d0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = (ulonglong)param_3;
  if (*(uint *)(param_2 + 0x60) < param_4) {
    param_4 = *(uint *)(param_2 + 0x60);
  }
  if ((param_3 <= param_4) && (param_3 != param_4)) {
    uVar7 = param_4 - param_3;
    uVar6 = *(uint *)(param_1 + 0x60);
    if (uVar7 + uVar6 < uVar6) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    else {
      func_0x000140414df0();
      if (*(char *)(param_1 + 0x58) != '\0') {
        if (uVar6 == 0) {
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        }
        if ((*(char *)(param_1 + 0x5a) == '\0') && (*(char *)(param_2 + 0x5a) != '\0')) {
          func_0x0001403b3870(param_1);
        }
        piVar1 = (int *)(param_1 + 0x38);
        if ((piVar1 != (int *)0x0) && (piVar2 = (int *)(param_2 + 0x38), piVar2 != (int *)0x0)) {
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            iVar5 = *piVar2;
            *piVar1 = iVar5;
          }
          if (iVar5 == *piVar2) {
            iVar5 = *(int *)(param_1 + 0x3c);
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_2 + 0x3c);
              *(int *)(param_1 + 0x3c) = iVar5;
            }
            if ((iVar5 == *(int *)(param_2 + 0x3c)) && (*(longlong *)(param_1 + 0x40) == 0)) {
              *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
            }
          }
        }
        if ((ulonglong)uVar7 * 5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar6 * 0x14,
                        *(longlong *)(param_2 + 0x70) + uVar3 * 0x14,(ulonglong)uVar7 * 0x14);
        }
        if (*(int *)(param_2 + 0x30) == 1) {
          if ((uVar6 == 0) && (*(int *)(param_2 + 0xb0) + param_3 != 0)) {
            *(undefined4 *)(param_1 + 0xb0) = 0;
            uVar4 = 0;
            if (param_3 != 0) {
              uVar6 = 0;
              do {
                uVar4 = (ulonglong)uVar6;
                if (4 < uVar6) break;
                uVar7 = (int)uVar3 - 1;
                uVar3 = (ulonglong)uVar7;
                *(undefined4 *)(param_1 + 0x88 + (ulonglong)uVar6 * 4) =
                     *(undefined4 *)(*(longlong *)(param_2 + 0x70) + uVar3 * 0x14);
                uVar6 = *(int *)(param_1 + 0xb0) + 1;
                uVar4 = (ulonglong)uVar6;
                *(uint *)(param_1 + 0xb0) = uVar6;
              } while (uVar7 != 0);
            }
            if (*(int *)(param_2 + 0xb0) != 0) {
              uVar6 = 0;
              do {
                if (4 < (uint)uVar4) break;
                uVar3 = (ulonglong)uVar6;
                uVar6 = uVar6 + 1;
                *(undefined4 *)(param_1 + 0x88 + uVar4 * 4) =
                     *(undefined4 *)(param_2 + 0x88 + uVar3 * 4);
                uVar7 = *(int *)(param_1 + 0xb0) + 1;
                uVar4 = (ulonglong)uVar7;
                *(uint *)(param_1 + 0xb0) = uVar7;
              } while (uVar6 < *(uint *)(param_2 + 0xb0));
            }
          }
          *(undefined4 *)(param_1 + 0xb4) = 0;
          uVar3 = 0;
          if (param_4 < *(uint *)(param_2 + 0x60)) {
            uVar6 = 0;
            do {
              uVar4 = (ulonglong)param_4;
              uVar3 = (ulonglong)uVar6;
              if (4 < uVar6) break;
              param_4 = param_4 + 1;
              *(undefined4 *)(param_1 + 0x9c + (ulonglong)uVar6 * 4) =
                   *(undefined4 *)(*(longlong *)(param_2 + 0x70) + uVar4 * 0x14);
              uVar6 = *(int *)(param_1 + 0xb4) + 1;
              uVar3 = (ulonglong)uVar6;
              *(uint *)(param_1 + 0xb4) = uVar6;
            } while (param_4 < *(uint *)(param_2 + 0x60));
          }
          if (*(int *)(param_2 + 0xb4) != 0) {
            uVar6 = 0;
            do {
              if (4 < (uint)uVar3) {
                return;
              }
              uVar4 = (ulonglong)uVar6;
              uVar6 = uVar6 + 1;
              *(undefined4 *)(param_1 + 0x9c + uVar3 * 4) =
                   *(undefined4 *)(param_2 + 0x9c + uVar4 * 4);
              uVar7 = *(int *)(param_1 + 0xb4) + 1;
              uVar3 = (ulonglong)uVar7;
              *(uint *)(param_1 + 0xb4) = uVar7;
            } while (uVar6 < *(uint *)(param_2 + 0xb4));
          }
        }
      }
    }
  }
  return;
}

