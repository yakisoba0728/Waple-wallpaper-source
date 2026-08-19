// Function: FUN_14034b810
// Addr: 14034b810
// Size: 1606 bytes


longlong FUN_14034b810(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  ulonglong in_stack_ffffffffffffff88;
  int local_68;
  uint local_64;
  longlong local_60;
  int *local_58;
  longlong local_50;
  longlong local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x418) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x88))(param_1,&local_64,&local_58,0,&local_50);
    if (((*(uint *)(param_1 + 4) & 0x7fff0000) != 0) && ((*(uint *)(param_1 + 8) & 0x8000) == 0)) {
      lVar5 = *(longlong *)(param_1 + 0x2d0);
      uVar11 = (ulonglong)((int)*(uint *)(param_1 + 4) >> 0x10 & 0x7fff);
      iVar9 = *(int *)(*(longlong *)(local_50 + 0x18) + -4 + uVar11 * 0x10);
      local_48 = 0;
      if (((iVar9 == 6) || (iVar9 - 0x100U < 0x7f00)) &&
         ((**(code **)(lVar5 + 0x158))(param_1,iVar9,&local_48), local_48 != 0)) {
        lVar5 = func_0x000140421ed0(local_48);
        return lVar5;
      }
      (**(code **)(lVar5 + 0x158))
                (param_1,*(undefined2 *)(*(longlong *)(local_50 + 0x18) + -8 + uVar11 * 0x10),
                 &local_60);
      if (local_60 != 0) {
        lVar5 = func_0x000140421ed0();
        return lVar5;
      }
    }
    lVar5 = *(longlong *)(local_50 + 0x10);
    lVar6 = FUN_1402f8070(uVar3,*(int *)(param_1 + 0x420) + local_64 * 0x11 + 1,&local_68);
    if (local_68 != 0) {
      return 0;
    }
    func_0x0001404221b0(lVar6,*(undefined8 *)(param_1 + 0x418));
    uVar14 = 0;
    pcVar10 = (char *)((ulonglong)*(uint *)(param_1 + 0x420) + lVar6);
    if (local_64 != 0) {
      do {
        if (*local_58 != *(int *)(lVar5 + 0xc)) {
          *pcVar10 = '_';
          pcVar10 = (char *)FUN_140349090(*local_58,pcVar10 + 1);
          cVar7 = *(char *)(lVar5 + 0x17);
          iVar9 = (int)cVar7;
          if ((cVar7 != ' ') &&
             (((iVar9 - 0x30U < 10 || (iVar9 - 0x41U < 0x1a)) || (iVar9 - 0x61U < 0x1a)))) {
            *pcVar10 = cVar7;
            pcVar10 = pcVar10 + 1;
          }
          cVar7 = *(char *)(lVar5 + 0x16);
          iVar9 = (int)cVar7;
          if ((cVar7 != ' ') &&
             (((iVar9 - 0x30U < 10 || (iVar9 - 0x41U < 0x1a)) || (iVar9 - 0x61U < 0x1a)))) {
            *pcVar10 = cVar7;
            pcVar10 = pcVar10 + 1;
          }
          cVar7 = (char)((uint)*(undefined4 *)(lVar5 + 0x14) >> 8);
          if ((cVar7 != ' ') &&
             (((iVar9 = (int)cVar7, iVar9 - 0x30U < 10 || (iVar9 - 0x41U < 0x1a)) ||
              (iVar9 - 0x61U < 0x1a)))) {
            *pcVar10 = cVar7;
            pcVar10 = pcVar10 + 1;
          }
          cVar7 = *(char *)(lVar5 + 0x14);
          iVar9 = (int)cVar7;
          if ((cVar7 != ' ') &&
             (((iVar9 - 0x30U < 10 || (iVar9 - 0x41U < 0x1a)) || (iVar9 - 0x61U < 0x1a)))) {
            *pcVar10 = cVar7;
            pcVar10 = pcVar10 + 1;
          }
        }
        local_58 = local_58 + 1;
        uVar14 = uVar14 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar14 < local_64);
    }
    *pcVar10 = '\0';
    if (0x7f < (longlong)(pcVar10 + (1 - lVar6))) {
      FUN_140349980(lVar6,((int)pcVar10 - (int)lVar6) + 1,0x75bcd15,&local_40);
      puVar13 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x420) + lVar6);
      *puVar13 = 0x2d;
      *(undefined4 *)(puVar13 + 0x21) = 0x2e2e2e;
      puVar13[0x20] = "0123456789ABCDEF"[local_34 & 0xf];
      puVar13[0x1f] = "0123456789ABCDEF"[local_34 >> 4 & 0xf];
      puVar13[0x1e] = "0123456789ABCDEF"[local_34 >> 8 & 0xf];
      puVar13[0x1d] = "0123456789ABCDEF"[local_34 >> 0xc & 0xf];
      puVar13[0x1c] = "0123456789ABCDEF"[local_34 >> 0x10 & 0xf];
      puVar13[0x1b] = "0123456789ABCDEF"[local_34 >> 0x14 & 0xf];
      puVar13[0x1a] = "0123456789ABCDEF"[local_34 >> 0x18 & 0xf];
      puVar13[0x19] = "0123456789ABCDEF"[local_34 >> 0x1c];
      puVar13[0x18] = "0123456789ABCDEF"[local_38 & 0xf];
      puVar13[0x17] = "0123456789ABCDEF"[local_38 >> 4 & 0xf];
      puVar13[0x16] = "0123456789ABCDEF"[local_38 >> 8 & 0xf];
      puVar13[0x15] = "0123456789ABCDEF"[local_38 >> 0xc & 0xf];
      puVar13[0x14] = "0123456789ABCDEF"[local_38 >> 0x10 & 0xf];
      puVar13[0x13] = "0123456789ABCDEF"[local_38 >> 0x14 & 0xf];
      puVar13[0x12] = "0123456789ABCDEF"[local_38 >> 0x18 & 0xf];
      puVar13[0x11] = "0123456789ABCDEF"[local_38 >> 0x1c];
      puVar13[0x10] = "0123456789ABCDEF"[local_3c & 0xf];
      puVar13[0xf] = "0123456789ABCDEF"[local_3c >> 4 & 0xf];
      puVar13[0xe] = "0123456789ABCDEF"[local_3c >> 8 & 0xf];
      puVar13[0xd] = "0123456789ABCDEF"[local_3c >> 0xc & 0xf];
      puVar13[0xc] = "0123456789ABCDEF"[local_3c >> 0x10 & 0xf];
      puVar13[0xb] = "0123456789ABCDEF"[local_3c >> 0x14 & 0xf];
      puVar13[10] = "0123456789ABCDEF"[local_3c >> 0x18 & 0xf];
      puVar13[9] = "0123456789ABCDEF"[local_3c >> 0x1c];
      puVar13[8] = "0123456789ABCDEF"[local_40 & 0xf];
      puVar13[7] = "0123456789ABCDEF"[local_40 >> 4 & 0xf];
      puVar13[6] = "0123456789ABCDEF"[local_40 >> 8 & 0xf];
      puVar13[5] = "0123456789ABCDEF"[local_40 >> 0xc & 0xf];
      puVar13[4] = "0123456789ABCDEF"[local_40 >> 0x10 & 0xf];
      puVar13[3] = "0123456789ABCDEF"[local_40 >> 0x14 & 0xf];
      puVar13[2] = "0123456789ABCDEF"[local_40 >> 0x18 & 0xf];
      puVar13[1] = "0123456789ABCDEF"[local_40 >> 0x1c];
      return lVar6;
    }
    return lVar6;
  }
  uVar1 = *(ushort *)(param_1 + 0x1d0);
  uVar14 = (uint)uVar1;
  if (uVar1 == 0) {
LAB_14034b8e4:
    iVar9 = -1;
    iVar8 = iVar9;
    if (uVar14 == 0) {
LAB_14034b973:
      bVar4 = false;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x1e8);
      uVar11 = 0;
      do {
        iVar12 = (int)uVar11;
        if ((*(short *)(lVar5 + 6 + uVar11 * 0x18) == 0x10) &&
           (*(short *)(lVar5 + 8 + uVar11 * 0x18) != 0)) {
          sVar2 = *(short *)(lVar5 + uVar11 * 0x18);
          if (sVar2 == 3) {
            if ((*(ushort *)(lVar5 + 2 + uVar11 * 0x18) < 2) &&
               ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0x409 || (iVar8 == -1)))) {
              iVar8 = iVar12;
            }
          }
          else if (((sVar2 == 1) && (*(short *)(lVar5 + 2 + uVar11 * 0x18) == 0)) &&
                  ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0 || (iVar9 == -1)))) {
            iVar9 = iVar12;
          }
        }
        uVar11 = (ulonglong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < (int)(uint)uVar1);
      if ((iVar8 < 0) && (iVar9 < 0)) goto LAB_14034b973;
      bVar4 = true;
    }
    if (!bVar4) {
      if (uVar1 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x1e8);
      iVar9 = -1;
      uVar11 = 0;
      iVar8 = iVar9;
      do {
        iVar12 = (int)uVar11;
        if ((*(short *)(lVar5 + 6 + uVar11 * 0x18) == 1) &&
           (*(short *)(lVar5 + 8 + uVar11 * 0x18) != 0)) {
          sVar2 = *(short *)(lVar5 + uVar11 * 0x18);
          if (sVar2 == 3) {
            if ((*(ushort *)(lVar5 + 2 + uVar11 * 0x18) < 2) &&
               ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0x409 || (iVar8 == -1)))) {
              iVar8 = iVar12;
            }
          }
          else if (((sVar2 == 1) && (*(short *)(lVar5 + 2 + uVar11 * 0x18) == 0)) &&
                  ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0 || (iVar9 == -1)))) {
            iVar9 = iVar12;
          }
        }
        uVar11 = (ulonglong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < (int)uVar14);
      if ((iVar8 < 0) && (iVar9 < 0)) {
        return 0;
      }
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1e8);
    iVar8 = -1;
    iVar9 = -1;
    uVar11 = 0;
    do {
      iVar12 = (int)uVar11;
      if ((*(short *)(lVar5 + 6 + uVar11 * 0x18) == 0x19) &&
         (*(short *)(lVar5 + 8 + uVar11 * 0x18) != 0)) {
        sVar2 = *(short *)(lVar5 + uVar11 * 0x18);
        if (sVar2 == 3) {
          if ((*(ushort *)(lVar5 + 2 + uVar11 * 0x18) < 2) &&
             ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0x409 || (iVar8 == -1)))) {
            iVar8 = iVar12;
          }
        }
        else if (((sVar2 == 1) && (*(short *)(lVar5 + 2 + uVar11 * 0x18) == 0)) &&
                ((*(short *)(lVar5 + 4 + uVar11 * 0x18) == 0 || (iVar9 == -1)))) {
          iVar9 = iVar12;
        }
      }
      uVar11 = (ulonglong)(iVar12 + 1U);
    } while ((int)(iVar12 + 1U) < (int)uVar14);
    if ((iVar8 < 0) && (iVar9 < 0)) goto LAB_14034b8e4;
  }
  if (iVar8 != -1) {
    in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
    lVar5 = func_0x000140349480(uVar3,*(undefined8 *)(param_1 + 0x200),
                                *(longlong *)(param_1 + 0x1e8) + (longlong)iVar8 * 0x18,
                                &LAB_14034bfd0,in_stack_ffffffffffffff88);
    if (lVar5 != 0) goto LAB_14034ba90;
  }
  if ((iVar9 == -1) ||
     (lVar5 = FUN_140349280(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x200),
                            *(longlong *)(param_1 + 0x1e8) + (longlong)iVar9 * 0x18,&LAB_14034bfd0,
                            in_stack_ffffffffffffff88 & 0xffffffffffffff00), lVar5 == 0)) {
    return 0;
  }
LAB_14034ba90:
  lVar5 = func_0x000140421ed0(lVar5);
  return lVar5;
}

