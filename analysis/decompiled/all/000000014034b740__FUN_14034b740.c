// Function: FUN_14034b740
// Addr: 14034b740
// Size: 1983 bytes


char * FUN_14034b740(longlong param_1)

{
  char *pcVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  char *pcVar7;
  size_t sVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  uint uVar17;
  ulonglong in_stack_ffffffffffffff88;
  int local_68;
  uint local_64;
  char *local_60;
  int *local_58;
  longlong local_50;
  char *local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  lVar13 = *(longlong *)(param_1 + 0x2e0);
  if (*(longlong *)(param_1 + 0x418) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x1d0);
    uVar17 = (uint)uVar2;
    if (uVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1e8);
      iVar10 = -1;
      iVar11 = -1;
      uVar12 = 0;
      do {
        iVar14 = (int)uVar12;
        if ((*(short *)(lVar5 + 6 + uVar12 * 0x18) == 0x19) &&
           (*(short *)(lVar5 + 8 + uVar12 * 0x18) != 0)) {
          sVar3 = *(short *)(lVar5 + uVar12 * 0x18);
          if (sVar3 == 3) {
            if ((*(ushort *)(lVar5 + 2 + uVar12 * 0x18) < 2) &&
               ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0x409 || (iVar10 == -1)))) {
              iVar10 = iVar14;
            }
          }
          else if (((sVar3 == 1) && (*(short *)(lVar5 + 2 + uVar12 * 0x18) == 0)) &&
                  ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0 || (iVar11 == -1)))) {
            iVar11 = iVar14;
          }
        }
        uVar12 = (ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < (int)uVar17);
      if ((iVar10 < 0) && (iVar11 < 0)) goto LAB_14034b814;
LAB_14034b940:
      if (iVar10 == -1) {
LAB_14034b97a:
        if ((iVar11 == -1) ||
           (pcVar7 = (char *)FUN_1403491b0(*(undefined8 *)(param_1 + 0x98),
                                           *(undefined8 *)(param_1 + 0x200),
                                           *(longlong *)(param_1 + 0x1e8) + (longlong)iVar11 * 0x18,
                                           &LAB_14034bf00,
                                           in_stack_ffffffffffffff88 & 0xffffffffffffff00),
           pcVar7 == (char *)0x0)) goto LAB_14034bb73;
      }
      else {
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
        pcVar7 = (char *)FUN_1403493b0(uVar4,*(undefined8 *)(param_1 + 0x200),
                                       *(longlong *)(param_1 + 0x1e8) + (longlong)iVar10 * 0x18,
                                       &LAB_14034bf00,in_stack_ffffffffffffff88);
        if (pcVar7 == (char *)0x0) goto LAB_14034b97a;
      }
      sVar8 = strlen(pcVar7);
      uVar17 = (uint)sVar8;
      if (0x5b < uVar17) {
        uVar17 = 0x5b;
        pcVar7[0x5b] = '\0';
      }
      *(char **)(param_1 + 0x418) = pcVar7;
      *(uint *)(param_1 + 0x420) = uVar17;
      goto LAB_14034b9e4;
    }
LAB_14034b814:
    iVar11 = -1;
    iVar10 = iVar11;
    if (uVar17 == 0) {
LAB_14034b8a3:
      bVar6 = false;
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x1e8);
      uVar12 = 0;
      do {
        iVar14 = (int)uVar12;
        if ((*(short *)(lVar5 + 6 + uVar12 * 0x18) == 0x10) &&
           (*(short *)(lVar5 + 8 + uVar12 * 0x18) != 0)) {
          sVar3 = *(short *)(lVar5 + uVar12 * 0x18);
          if (sVar3 == 3) {
            if ((*(ushort *)(lVar5 + 2 + uVar12 * 0x18) < 2) &&
               ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0x409 || (iVar10 == -1)))) {
              iVar10 = iVar14;
            }
          }
          else if (((sVar3 == 1) && (*(short *)(lVar5 + 2 + uVar12 * 0x18) == 0)) &&
                  ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0 || (iVar11 == -1)))) {
            iVar11 = iVar14;
          }
        }
        uVar12 = (ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < (int)(uint)uVar2);
      if ((iVar10 < 0) && (iVar11 < 0)) goto LAB_14034b8a3;
      bVar6 = true;
    }
    if (bVar6) goto LAB_14034b940;
    if (uVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1e8);
      iVar11 = -1;
      uVar12 = 0;
      iVar10 = iVar11;
      do {
        iVar14 = (int)uVar12;
        if ((*(short *)(lVar5 + 6 + uVar12 * 0x18) == 1) &&
           (*(short *)(lVar5 + 8 + uVar12 * 0x18) != 0)) {
          sVar3 = *(short *)(lVar5 + uVar12 * 0x18);
          if (sVar3 == 3) {
            if ((*(ushort *)(lVar5 + 2 + uVar12 * 0x18) < 2) &&
               ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0x409 || (iVar10 == -1)))) {
              iVar10 = iVar14;
            }
          }
          else if (((sVar3 == 1) && (*(short *)(lVar5 + 2 + uVar12 * 0x18) == 0)) &&
                  ((*(short *)(lVar5 + 4 + uVar12 * 0x18) == 0 || (iVar11 == -1)))) {
            iVar11 = iVar14;
          }
        }
        uVar12 = (ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < (int)uVar17);
      if ((-1 < iVar10) || (-1 < iVar11)) goto LAB_14034b940;
    }
LAB_14034bb73:
    pcVar7 = (char *)0x0;
  }
  else {
LAB_14034b9e4:
    (**(code **)(lVar13 + 0x88))(param_1,&local_64,&local_58,0,&local_50);
    if (((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) || ((*(uint *)(param_1 + 8) & 0x8000) != 0)) {
LAB_14034bb48:
      lVar13 = *(longlong *)(local_50 + 0x10);
      pcVar7 = (char *)FUN_1402f7fa0(uVar4,*(int *)(param_1 + 0x420) + local_64 * 0x11 + 1,&local_68
                                    );
      if (local_68 != 0) goto LAB_14034bb73;
      FUN_1404220e0(pcVar7,*(undefined8 *)(param_1 + 0x418));
      uVar17 = 0;
      pcVar16 = pcVar7 + *(uint *)(param_1 + 0x420);
      if (local_64 != 0) {
        do {
          if (*local_58 != *(int *)(lVar13 + 0xc)) {
            *pcVar16 = '_';
            pcVar16 = (char *)FUN_140348fc0(*local_58,pcVar16 + 1);
            cVar9 = *(char *)(lVar13 + 0x17);
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar16 = cVar9;
              pcVar16 = pcVar16 + 1;
            }
            cVar9 = *(char *)(lVar13 + 0x16);
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar16 = cVar9;
              pcVar16 = pcVar16 + 1;
            }
            cVar9 = (char)((uint)*(undefined4 *)(lVar13 + 0x14) >> 8);
            if ((cVar9 != ' ') &&
               (((iVar11 = (int)cVar9, iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) ||
                (iVar11 - 0x61U < 0x1a)))) {
              *pcVar16 = cVar9;
              pcVar16 = pcVar16 + 1;
            }
            cVar9 = *(char *)(lVar13 + 0x14);
            iVar11 = (int)cVar9;
            if ((cVar9 != ' ') &&
               (((iVar11 - 0x30U < 10 || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)))) {
              *pcVar16 = cVar9;
              pcVar16 = pcVar16 + 1;
            }
          }
          local_58 = local_58 + 1;
          uVar17 = uVar17 + 1;
          lVar13 = lVar13 + 0x20;
        } while (uVar17 < local_64);
      }
      *pcVar16 = '\0';
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x2d0);
      uVar12 = (ulonglong)((int)*(uint *)(param_1 + 4) >> 0x10 & 0x7fff);
      iVar11 = *(int *)(*(longlong *)(local_50 + 0x18) + -4 + uVar12 * 0x10);
      local_48 = (char *)0x0;
      if (((iVar11 == 6) || (iVar11 - 0x100U < 0x7f00)) &&
         ((**(code **)(lVar13 + 0x158))(param_1,iVar11,&local_48), pcVar7 = local_48,
         local_48 != (char *)0x0)) {
        sVar8 = strlen(local_48);
        pcVar16 = pcVar7 + sVar8;
      }
      else {
        (**(code **)(lVar13 + 0x158))
                  (param_1,*(undefined2 *)(*(longlong *)(local_50 + 0x18) + -8 + uVar12 * 0x10),
                   &local_60);
        if (local_60 == (char *)0x0) goto LAB_14034bb48;
        sVar8 = strlen(local_60);
        pcVar7 = (char *)FUN_1402f7fa0(uVar4,*(int *)(param_1 + 0x420) + 2 + (int)sVar8,&local_68);
        if (local_68 != 0) goto LAB_14034bb73;
        FUN_1404220e0(pcVar7,*(undefined8 *)(param_1 + 0x418));
        uVar17 = *(uint *)(param_1 + 0x420);
        pcVar7[uVar17] = '-';
        pcVar16 = pcVar7 + (ulonglong)uVar17 + 1;
        cVar9 = *local_60;
        pcVar15 = local_60;
        while (cVar9 != '\0') {
          iVar11 = (int)cVar9;
          if (((iVar11 - 0x30U < 10) || (iVar11 - 0x41U < 0x1a)) || (iVar11 - 0x61U < 0x1a)) {
            *pcVar16 = cVar9;
            pcVar16 = pcVar16 + 1;
          }
          pcVar1 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
          cVar9 = *pcVar1;
        }
        *pcVar16 = '\0';
        FUN_1402f7f90(uVar4,local_60);
        local_60 = (char *)0x0;
      }
    }
    if (0x7f < (longlong)(pcVar16 + (1 - (longlong)pcVar7))) {
      FUN_1403498b0(pcVar7,((int)pcVar16 - (int)pcVar7) + 1,0x75bcd15,&local_40);
      pcVar16 = pcVar7 + *(uint *)(param_1 + 0x420);
      *pcVar16 = '-';
      pcVar16[0x21] = '.';
      pcVar16[0x22] = '.';
      pcVar16[0x23] = '.';
      pcVar16[0x24] = '\0';
      pcVar16[0x20] = "0123456789ABCDEF"[local_34 & 0xf];
      pcVar16[0x1f] = "0123456789ABCDEF"[local_34 >> 4 & 0xf];
      pcVar16[0x1e] = "0123456789ABCDEF"[local_34 >> 8 & 0xf];
      pcVar16[0x1d] = "0123456789ABCDEF"[local_34 >> 0xc & 0xf];
      pcVar16[0x1c] = "0123456789ABCDEF"[local_34 >> 0x10 & 0xf];
      pcVar16[0x1b] = "0123456789ABCDEF"[local_34 >> 0x14 & 0xf];
      pcVar16[0x1a] = "0123456789ABCDEF"[local_34 >> 0x18 & 0xf];
      pcVar16[0x19] = "0123456789ABCDEF"[local_34 >> 0x1c];
      pcVar16[0x18] = "0123456789ABCDEF"[local_38 & 0xf];
      pcVar16[0x17] = "0123456789ABCDEF"[local_38 >> 4 & 0xf];
      pcVar16[0x16] = "0123456789ABCDEF"[local_38 >> 8 & 0xf];
      pcVar16[0x15] = "0123456789ABCDEF"[local_38 >> 0xc & 0xf];
      pcVar16[0x14] = "0123456789ABCDEF"[local_38 >> 0x10 & 0xf];
      pcVar16[0x13] = "0123456789ABCDEF"[local_38 >> 0x14 & 0xf];
      pcVar16[0x12] = "0123456789ABCDEF"[local_38 >> 0x18 & 0xf];
      pcVar16[0x11] = "0123456789ABCDEF"[local_38 >> 0x1c];
      pcVar16[0x10] = "0123456789ABCDEF"[local_3c & 0xf];
      pcVar16[0xf] = "0123456789ABCDEF"[local_3c >> 4 & 0xf];
      pcVar16[0xe] = "0123456789ABCDEF"[local_3c >> 8 & 0xf];
      pcVar16[0xd] = "0123456789ABCDEF"[local_3c >> 0xc & 0xf];
      pcVar16[0xc] = "0123456789ABCDEF"[local_3c >> 0x10 & 0xf];
      pcVar16[0xb] = "0123456789ABCDEF"[local_3c >> 0x14 & 0xf];
      pcVar16[10] = "0123456789ABCDEF"[local_3c >> 0x18 & 0xf];
      pcVar16[9] = "0123456789ABCDEF"[local_3c >> 0x1c];
      pcVar16[8] = "0123456789ABCDEF"[local_40 & 0xf];
      pcVar16[7] = "0123456789ABCDEF"[local_40 >> 4 & 0xf];
      pcVar16[6] = "0123456789ABCDEF"[local_40 >> 8 & 0xf];
      pcVar16[5] = "0123456789ABCDEF"[local_40 >> 0xc & 0xf];
      pcVar16[4] = "0123456789ABCDEF"[local_40 >> 0x10 & 0xf];
      pcVar16[3] = "0123456789ABCDEF"[local_40 >> 0x14 & 0xf];
      pcVar16[2] = "0123456789ABCDEF"[local_40 >> 0x18 & 0xf];
      pcVar16[1] = "0123456789ABCDEF"[local_40 >> 0x1c];
    }
  }
  return pcVar7;
}

