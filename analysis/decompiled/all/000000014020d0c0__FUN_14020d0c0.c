// Function: FUN_14020d0c0
// Addr: 14020d0c0
// Size: 1108 bytes


/* WARNING: Removing unreachable block (ram,0x00014020d6fe) */
/* WARNING: Removing unreachable block (ram,0x00014020d716) */
/* WARNING: Removing unreachable block (ram,0x00014020d727) */
/* WARNING: Removing unreachable block (ram,0x00014020d72d) */
/* WARNING: Removing unreachable block (ram,0x00014020d734) */
/* WARNING: Removing unreachable block (ram,0x00014020d737) */
/* WARNING: Removing unreachable block (ram,0x00014020d222) */
/* WARNING: Removing unreachable block (ram,0x00014020d22f) */
/* WARNING: Removing unreachable block (ram,0x00014020d75e) */
/* WARNING: Removing unreachable block (ram,0x00014020d1fa) */
/* WARNING: Removing unreachable block (ram,0x00014020d214) */
/* WARNING: Removing unreachable block (ram,0x00014020d758) */

void FUN_14020d0c0(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uStackX_1c;
  undefined1 local_f8 [184];
  int *piVar6;
  
  piVar6 = (int *)0x0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x18);
  uVar10 = *(uint *)(lVar2 + 0x18);
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x12ea) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1330) = *(undefined4 *)(lVar2 + 0x60);
  lVar3 = *(longlong *)(param_1 + 0x4b8);
  piVar7 = piVar6;
  piVar8 = piVar6;
  if (*(longlong *)(lVar3 + 0x3a8) - *(longlong *)(lVar3 + 0x3a0) >> 2 != 0) {
    do {
      if ((*(ulonglong *)(lVar3 + 0x398) >> ((ulonglong)piVar8 & 0x3f) & 1) != 0) {
        pcVar1 = (char *)(*(longlong *)(param_1 + 200) + 0x12ea);
        *pcVar1 = *pcVar1 + '\x01';
        iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3a0) +
                        (longlong)piVar8 * 4);
        if (piVar7 == (int *)0x0) {
          func_0x00014028aff0(8);
          return;
        }
        *piVar7 = (int)piVar8;
        piVar7[1] = iVar4;
        piVar7 = piVar7 + 2;
        if (10 < *(byte *)(*(longlong *)(param_1 + 200) + 0x12ea)) break;
      }
      lVar3 = *(longlong *)(param_1 + 0x4b8);
      piVar8 = (int *)(ulonglong)((int)piVar8 + 1);
    } while (piVar8 < (int *)(*(longlong *)(lVar3 + 0x3a8) - *(longlong *)(lVar3 + 0x3a0) >> 2));
  }
  uVar10 = uVar10 >> 0xd;
  if (piVar7 != (int *)0x0) {
    FUN_1402156d0(0,piVar7);
    piVar8 = piVar6;
    if ((uVar10 & 1) != 0) {
      uStackX_1c = (undefined4)(uRam0000000000000000 >> 0x20);
      uVar11 = uRam0000000000000000 & 0xffffffff;
      *(int *)(*(longlong *)(param_1 + 200) + 0x1334) =
           (int)uRam0000000000000000 * *(int *)(lVar2 + 100);
      *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1360) = uStackX_1c;
                    /* WARNING: Subroutine does not return */
      FUN_14005f800(local_f8,(ulonglong)
                             *(uint *)(*(longlong *)(lVar2 + 0x68) + 0x34 + uVar11 * 0x40) * 0x40 +
                             *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x2c8));
    }
    do {
      piVar9 = piVar8 + 2;
      iVar4 = (int)piVar6;
      uStackX_1c = (undefined4)((ulonglong)*(undefined8 *)piVar8 >> 0x20);
      *(int *)(*(longlong *)(param_1 + 200) + 0x1334 + (longlong)piVar6 * 4) =
           (int)*(undefined8 *)piVar8 * *(int *)(lVar2 + 100);
      *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x1360 + (longlong)piVar6 * 4) = uStackX_1c;
      piVar6 = (int *)(ulonglong)(iVar4 + 1);
      piVar8 = piVar9;
    } while (piVar9 != piVar7);
    uVar5 = iVar4 + 1;
    piVar6 = (int *)(ulonglong)uVar5;
    if (10 < uVar5) {
      return;
    }
  }
  uVar5 = (uint)piVar6;
  if ((uVar10 & 1) == 0) {
    if (3 < 0xb - uVar5) {
      lVar2 = *(longlong *)(param_1 + 200);
      do {
        iVar4 = (int)piVar6;
        *(undefined4 *)(lVar2 + 0x1360 + (longlong)piVar6 * 4) = 0;
        *(undefined4 *)(lVar2 + 0x1360 + (ulonglong)(iVar4 + 1) * 4) = 0;
        *(undefined4 *)(lVar2 + 0x1360 + (ulonglong)(iVar4 + 2) * 4) = 0;
        uVar5 = iVar4 + 4;
        piVar6 = (int *)(ulonglong)uVar5;
        *(undefined4 *)(lVar2 + 0x1360 + (ulonglong)(iVar4 + 3) * 4) = 0;
      } while (uVar5 < 8);
    }
    if (uVar5 < 0xb) {
      func_0x000140421870(*(longlong *)(param_1 + 200) + 0x1360 + (ulonglong)uVar5 * 4,0,
                          (ulonglong)(0xb - uVar5) << 2);
    }
  }
  else {
    do {
      lVar2 = *(longlong *)(param_1 + 200);
      uVar10 = (int)piVar6 + 1;
      *(undefined4 *)(lVar2 + 0x1360 + (longlong)piVar6 * 4) = 0;
      *(undefined8 *)(lVar2 + 0xcb0 + (longlong)piVar6 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar2 + 0xcb8 + (longlong)piVar6 * 0x30) = 0;
      *(undefined8 *)(lVar2 + 0xcc0 + (longlong)piVar6 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar2 + 0xcc8 + (longlong)piVar6 * 0x30) = 0;
      *(undefined8 *)(lVar2 + 0xcd0 + (longlong)piVar6 * 0x30) = 0x3f800000;
      *(undefined8 *)(lVar2 + 0xcd8 + (longlong)piVar6 * 0x30) = 0;
      lVar2 = *(longlong *)(param_1 + 200);
      *(undefined4 *)(lVar2 + 0x138c + (longlong)piVar6 * 0xc) = 0;
      *(undefined4 *)(lVar2 + 0x1390 + (longlong)piVar6 * 0xc) = 0xbf800000;
      *(undefined4 *)(lVar2 + 0x1394 + (longlong)piVar6 * 0xc) = 0;
      piVar6 = (int *)(ulonglong)uVar10;
    } while (uVar10 < 0xb);
  }
  return;
}

