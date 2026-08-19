// Function: FUN_1403e5350
// Addr: 1403e5350
// Size: 635 bytes


longlong FUN_1403e5350(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  int local_res8;
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48;
  undefined4 local_44;
  
  local_res8 = 200000;
  *(undefined1 *)(*param_1 + 0x1048) = 0;
  do {
    lVar8 = *param_1;
    uVar3 = *(uint *)(lVar8 + 0x14);
    uVar9 = uVar3 + 1;
    if (*(uint *)(lVar8 + 0x10) < uVar9) {
      uVar10 = 0xe;
      if (*(int *)(lVar8 + 0x105c) != 0) {
        uVar10 = 0xb;
      }
LAB_1403e5572:
      FUN_1403f3550(uVar10,lVar8,param_2);
    }
    else {
      bVar2 = *(byte *)((ulonglong)uVar3 + *(longlong *)(lVar8 + 8));
      uVar10 = (uint)bVar2;
      *(uint *)(lVar8 + 0x14) = uVar9;
      if (bVar2 == 0xc) {
        if (*(uint *)(lVar8 + 0x10) < uVar3 + 2) {
          uVar10 = 0xffff;
        }
        else {
          uVar10 = *(byte *)((ulonglong)uVar9 + *(longlong *)(lVar8 + 8)) + 0x100;
          *(uint *)(lVar8 + 0x14) = uVar3 + 2;
        }
      }
      lVar8 = *param_1;
      if (uVar10 == 10) goto LAB_1403e5572;
      if (uVar10 == 0xf) {
        FUN_1403f5160(lVar8);
        *(undefined4 *)(lVar8 + 0x1c) = 0;
      }
      else {
        if (uVar10 != 0x10) goto LAB_1403e5572;
        FUN_1403f22d0(lVar8);
        uVar3 = *(uint *)(lVar8 + 0x11e8);
        if (*(int *)(lVar8 + 0x1c) == 0) {
          *(undefined1 *)(lVar8 + 0x18) = 1;
          pdVar5 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        else {
          uVar9 = *(int *)(lVar8 + 0x1c) - 1;
          *(uint *)(lVar8 + 0x1c) = uVar9;
          pdVar5 = (double *)(lVar8 + ((ulonglong)uVar9 + 4) * 8);
        }
        uVar9 = (uint)*pdVar5;
        if ((int)uVar9 < 0) {
          *(undefined1 *)(lVar8 + 0x18) = 1;
          uVar9 = 0;
          uVar10 = 0;
LAB_1403e5473:
          if (uVar10 <= *(uint *)(lVar8 + 0x1c)) {
            iVar7 = *(uint *)(lVar8 + 0x1c) - uVar10;
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                local_44 = 0;
                uVar6 = uVar10 + iVar7;
                uVar1 = uVar10 * uVar3 + uVar9 + iVar7;
                uVar4 = ((0x201 - uVar10 * uVar3) - uVar9) - iVar7;
                if (0x201 < uVar1) {
                  uVar4 = 0;
                }
                local_48 = uVar3;
                if (uVar4 <= uVar3) {
                  local_48 = uVar4;
                }
                local_50 = lVar8 + ((ulonglong)uVar1 + 4) * 8;
                dVar11 = (double)FUN_1403b2370(lVar8,local_58);
                uVar10 = uVar10 + 1;
                *(double *)(lVar8 + 0x20 + (ulonglong)uVar6 * 8) =
                     dVar11 + *(double *)(lVar8 + 0x20 + (ulonglong)uVar6 * 8);
              } while (uVar10 < uVar9);
            }
            if (*(uint *)(lVar8 + 0x1c) < uVar9 * uVar3) {
              *(undefined1 *)(lVar8 + 0x18) = 1;
            }
            else {
              *(uint *)(lVar8 + 0x1c) = *(uint *)(lVar8 + 0x1c) - uVar9 * uVar3;
            }
            goto LAB_1403e557d;
          }
        }
        else {
          uVar10 = (uVar3 + 1) * uVar9;
          if ((uVar9 == 0) || (uVar3 + 1 < (uint)(0xffffffff / (ulonglong)uVar9)))
          goto LAB_1403e5473;
        }
        *(int *)(lVar8 + 0x14) = *(int *)(lVar8 + 0x10) + 1;
      }
    }
LAB_1403e557d:
    lVar8 = *param_1;
    if ((((*(char *)(lVar8 + 0x1058) != '\0') || (*(uint *)(lVar8 + 0x10) < *(uint *)(lVar8 + 0x14))
         ) || (*(char *)(lVar8 + 0x18) != '\0')) || (local_res8 = local_res8 + -1, local_res8 == 0))
    {
      iVar7 = *(int *)(lVar8 + 0x10) + 1;
      *(int *)(lVar8 + 0x14) = iVar7;
      return (ulonglong)(uint3)((uint)iVar7 >> 8) << 8;
    }
    if (*(char *)(lVar8 + 0x1048) != '\0') {
      return CONCAT71((uint7)(uint3)(*(uint *)(lVar8 + 0x10) >> 8),1);
    }
  } while( true );
}

