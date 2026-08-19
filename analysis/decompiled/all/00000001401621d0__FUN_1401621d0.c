// Function: FUN_1401621d0
// Addr: 1401621d0
// Size: 845 bytes


void FUN_1401621d0(undefined8 param_1,ulonglong param_2,undefined8 *param_3,undefined8 ******param_4
                  ,longlong param_5)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  undefined8 ******ppppppuVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  char *pcVar17;
  undefined8 *****local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_d0 [80];
  char local_80;
  undefined7 uStack_7f;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [24];
  
  uVar15 = param_3[3];
  lVar12 = param_2 + 0x1410;
  puVar13 = param_3;
  if (0xf < uVar15) {
    puVar13 = (undefined8 *)*param_3;
  }
  uVar10 = 0;
  uVar14 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar13 + uVar10);
      uVar10 = uVar10 + 1;
      uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < (ulonglong)param_3[2]);
  }
  local_60 = lVar12;
  lVar7 = func_0x000140011170(lVar12,local_d0,param_3,uVar14);
  lVar7 = *(longlong *)(lVar7 + 8);
  if ((lVar7 == 0) || (lVar7 == *(longlong *)(param_2 + 0x1418))) {
    local_148 = 0;
    local_140 = 0xf;
    local_128 = 0;
    uStack_150 = 0;
    local_158 = (undefined8 ******)0x0;
    local_138 = 0;
    lStack_130 = 0;
    puVar13 = param_3;
    if (0xf < uVar15) {
      puVar13 = (undefined8 *)*param_3;
    }
    func_0x0001400d4050(&local_80,*(undefined8 *)(param_2 + 0x1898),puVar13,0);
    local_120 = *(undefined4 *)(param_4 + 2);
    FUN_140053080(&local_158,local_120);
    pcVar16 = &local_80;
    if (0xf < local_68) {
      pcVar16 = (char *)CONCAT71(uStack_7f,local_80);
    }
    cVar3 = *pcVar16;
    while (cVar3 != '\0') {
      cVar3 = *pcVar16;
      pcVar17 = pcVar16;
      while (((cVar3 != '\0' && (*pcVar17 != '\r')) && (*pcVar17 != '\n'))) {
        pcVar17 = pcVar17 + 1;
        cVar3 = *pcVar17;
      }
      uVar15 = (longlong)pcVar17 - (longlong)pcVar16;
      iVar6 = func_0x000140421dc0("#include",pcVar16,8);
      if (iVar6 == 0) {
        local_100 = 0;
        uStack_108 = 0;
        local_110 = 0;
        local_f8 = 0xf;
                    /* WARNING: Subroutine does not return */
        FUN_14000f950(&local_110,pcVar16,uVar15);
      }
      if (uVar15 <= local_140 - local_148) {
        ppppppuVar8 = &local_158;
        if (0xf < local_140) {
          ppppppuVar8 = (undefined8 ******)local_158;
        }
        lVar12 = (longlong)ppppppuVar8 + local_148;
        local_148 = local_148 + uVar15;
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar12,pcVar16,uVar15);
      }
      FUN_1400531e0(&local_158,uVar15,param_2 & 0xff,pcVar16,uVar15);
      if (local_140 == local_148) {
        FUN_1400531e0(&local_158,1,param_2 & 0xff,&DAT_1404737b4,1);
      }
      else {
        ppppppuVar8 = &local_158;
        if (0xf < local_140) {
          ppppppuVar8 = (undefined8 ******)local_158;
        }
        puVar2 = (undefined2 *)((longlong)ppppppuVar8 + local_148);
        local_148 = local_148 + 1;
        *puVar2 = 10;
      }
      for (; (cVar3 = *pcVar17, cVar3 == '\r' ||
             (lVar12 = local_60, pcVar16 = pcVar17, cVar3 == '\n')); pcVar17 = pcVar17 + 1) {
      }
    }
    if (param_4 != &local_158) {
      ppppppuVar8 = &local_158;
      if (0xf < local_140) {
        ppppppuVar8 = (undefined8 ******)local_158;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(param_4,ppppppuVar8,local_148);
    }
    plVar9 = (longlong *)func_0x000140164230(lVar12,local_58,param_3);
    ppppppuVar8 = (undefined8 ******)(*plVar9 + 0x30);
    if (ppppppuVar8 != &local_158) {
      ppppppuVar11 = &local_158;
      if (0xf < local_140) {
        ppppppuVar11 = (undefined8 ******)local_158;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(ppppppuVar8,ppppppuVar11,local_148);
    }
    plVar9 = (longlong *)(*plVar9 + 0x50);
    if (plVar9 != &local_138) {
      FUN_1401644f0(plVar9,local_138,lStack_130 - local_138 >> 5);
    }
    if (0xf < local_68) {
      lVar7 = CONCAT71(uStack_7f,local_80);
      uVar15 = local_68 + 1;
      lVar12 = lVar7;
      if (0xfff < uVar15) {
        lVar12 = *(longlong *)(lVar7 + -8);
        if (0x1f < (lVar7 - lVar12) - 8U) goto LAB_140162b70;
        uVar15 = local_68 + 0x28;
      }
      func_0x00014028b040(lVar12,uVar15);
    }
    uStack_70 = 0;
    local_68 = 0xf;
    local_80 = '\0';
    if (local_138 != 0) {
      if (local_138 != lStack_130) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310(local_138);
      }
      uVar15 = local_128 - local_138 & 0xffffffffffffffe0;
      lVar12 = local_138;
      if (0xfff < uVar15) {
        lVar12 = *(longlong *)(local_138 + -8);
        if (0x1f < (local_138 - lVar12) - 8U) goto LAB_140162b70;
        uVar15 = uVar15 + 0x27;
      }
      func_0x00014028b040(lVar12,uVar15);
      local_128 = 0;
      local_138 = 0;
      lStack_130 = 0;
    }
    if (0xf < local_140) {
      uVar15 = local_140 + 1;
      ppppppuVar8 = (undefined8 ******)local_158;
      if (0xfff < uVar15) {
        ppppppuVar8 = (undefined8 ******)local_158[-1];
        if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppppppuVar8))) {
LAB_140162b70:
          pcVar5 = (code *)swi(0x29);
          (*pcVar5)(5);
                    /* WARNING: Subroutine does not return */
          FUN_140012a10();
        }
        uVar15 = local_140 + 0x28;
      }
      func_0x00014028b040(ppppppuVar8,uVar15);
    }
  }
  else {
    ppppppuVar8 = (undefined8 ******)(lVar7 + 0x30);
    if (param_4 != ppppppuVar8) {
      if (0xf < *(ulonglong *)(lVar7 + 0x48)) {
        ppppppuVar8 = (undefined8 ******)*ppppppuVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(param_4,ppppppuVar8,*(undefined8 *)(lVar7 + 0x40));
    }
    if (param_5 != 0) {
      lVar4 = *(longlong *)(lVar7 + 0x58);
      for (lVar12 = *(longlong *)(lVar7 + 0x50); lVar12 != lVar4; lVar12 = lVar12 + 0x20) {
        lVar7 = *(longlong *)(param_5 + 8);
        if (lVar7 != *(longlong *)(param_5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
          FUN_140017090(lVar7,lVar12);
        }
        func_0x00014008d160(param_5,lVar7,lVar12);
      }
    }
  }
  return;
}

