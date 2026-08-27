// Function: FUN_14039f550
// Addr: 14039f550
// Size: 930 bytes


void FUN_14039f550(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int local_res18 [2];
  uint local_res20;
  
  local_res20 = *(uint *)(param_3 + 0x60);
  uVar13 = 0;
  lVar3 = *(longlong *)(param_3 + 0x70);
  uVar14 = *(uint *)(param_3 + 0x38) & 0xfffffffe;
  lVar4 = *(longlong *)(param_3 + 0x80);
  if (local_res20 != 0) {
    lVar15 = 0;
    do {
      lVar1 = lVar15 * 0x14;
      if (((*(byte *)(lVar3 + 0x10 + lVar15 * 0x14) & 0x1f) != 0x1d) ||
         ((*(byte *)(lVar3 + 0xc + lVar1) & 0x20) != 0)) goto switchD_14039f65e_default;
      if ((*(int *)(param_3 + 0x24) != 0) && (*(int *)(lVar3 + lVar1) == *(int *)(param_3 + 0x24)))
      {
        if (uVar14 == 4) {
          *(int *)(lVar1 + lVar4) =
               (int)(*(int *)(param_2 + 0x28) + (*(int *)(param_2 + 0x28) >> 0x1f & 3U)) >> 2;
        }
        else {
          *(int *)(lVar1 + 4 + lVar4) =
               -((int)(*(int *)(param_2 + 0x2c) + (*(int *)(param_2 + 0x2c) >> 0x1f & 3U)) >> 2);
        }
      }
      uVar2 = *(ushort *)(lVar3 + 0x10 + lVar1);
      if (((byte)uVar2 & 0x1f) != 0x1d) goto switchD_14039f65e_default;
      uVar7 = uVar2 >> 8;
      switch(uVar7) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0x10:
        if (uVar14 == 4) {
          *(int *)(lVar1 + lVar4) =
               (int)(*(int *)(param_2 + 0x28) + (uint)(uVar2 >> 9)) / (int)(uint)uVar7;
        }
        else {
          *(int *)(lVar1 + 4 + lVar4) =
               -((int)(*(int *)(param_2 + 0x2c) + (uint)(uVar2 >> 9)) / (int)(uint)uVar7);
        }
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x12:
        break;
      case 0x11:
        if (uVar14 == 4) {
          *(int *)(lVar4 + lVar1) = (int)(((longlong)*(int *)(param_2 + 0x28) << 2) / 0x12);
        }
        else {
          *(int *)(lVar4 + 4 + lVar1) = (int)(((longlong)-*(int *)(param_2 + 0x2c) << 2) / 0x12);
        }
        break;
      case 0x13:
        cVar12 = '0';
        do {
          local_res18[0] = 0;
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
          uVar11 = 0;
          if (lVar5 != 0) {
            uVar11 = *(undefined8 *)(lVar5 + 0x10);
          }
          iVar10 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                             (param_2,*(undefined8 *)(param_2 + 0x98),cVar12,local_res18,uVar11);
          if (iVar10 != 0) goto LAB_14039f89b;
          cVar12 = cVar12 + '\x01';
        } while (cVar12 < ':');
        break;
      case 0x14:
        local_res18[0] = 0;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        uVar11 = 0;
        if (lVar5 != 0) {
          uVar11 = *(undefined8 *)(lVar5 + 0x10);
        }
        iVar10 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                           (param_2,*(undefined8 *)(param_2 + 0x98),0x2e,local_res18,uVar11);
        if (iVar10 == 0) {
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
          uVar11 = 0;
          if (lVar5 != 0) {
            uVar11 = *(undefined8 *)(lVar5 + 0x10);
          }
          local_res18[0] = iVar10;
          iVar10 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                             (param_2,*(undefined8 *)(param_2 + 0x98),0x2c,local_res18,uVar11);
          if (iVar10 == 0) break;
        }
LAB_14039f89b:
        lVar5 = *(longlong *)(param_2 + 0x90);
        lVar6 = *(longlong *)(lVar5 + 0x10);
        if (uVar14 == 4) {
          if (lVar6 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(lVar6 + 0x28);
          }
          iVar8 = (**(code **)(lVar5 + 0x48))
                            (param_2,*(undefined8 *)(param_2 + 0x98),local_res18[0],uVar11);
          iVar10 = *(int *)(param_2 + 0x40);
          if ((iVar10 != 0) && (*(char *)(param_2 + 0x3c) == '\0')) {
            if (*(int *)(param_2 + 0x28) < 0) {
              iVar10 = -iVar10;
            }
            iVar9 = 0;
            if (iVar8 != 0) {
              iVar9 = iVar10;
            }
            iVar8 = iVar8 + iVar9;
          }
          *(int *)(lVar4 + lVar1) = iVar8;
        }
        else {
          if (lVar6 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(lVar6 + 0x30);
          }
          iVar8 = (**(code **)(lVar5 + 0x50))
                            (param_2,*(undefined8 *)(param_2 + 0x98),local_res18[0],uVar11);
          iVar10 = *(int *)(param_2 + 0x44);
          if ((iVar10 != 0) && (*(char *)(param_2 + 0x3c) == '\0')) {
            if (*(int *)(param_2 + 0x2c) < 0) {
              iVar10 = -iVar10;
            }
            iVar9 = 0;
            if (iVar8 != 0) {
              iVar9 = iVar10;
            }
            iVar8 = iVar8 + iVar9;
          }
          *(int *)(lVar4 + 4 + lVar1) = iVar8;
        }
        break;
      case 0x15:
        if (uVar14 == 4) {
          *(int *)(lVar4 + lVar1) = *(int *)(lVar4 + lVar1) / 2;
        }
        else {
          *(int *)(lVar4 + 4 + lVar1) = *(int *)(lVar4 + 4 + lVar1) / 2;
        }
      default:
        goto switchD_14039f65e_default;
      }
switchD_14039f65e_default:
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 1;
    } while (uVar13 < local_res20);
  }
  return;
}

