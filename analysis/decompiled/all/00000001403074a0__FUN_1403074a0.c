// Function: FUN_1403074a0
// Addr: 1403074a0
// Size: 64 bytes


void FUN_1403074a0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  int *piStack_d0;
  int iStack_c8;
  undefined1 uStack_c4;
  uint uStack_bc;
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined1 auStack_80 [8];
  longlong *local_78;
  undefined8 uStack_70;
  uint uStack_68;
  ushort uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  ushort uStack_4e;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_f8;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  puVar5 = *(uint **)(param_1 + 0x408);
  uVar1 = *(ushort *)(param_1 + 0xe);
  iVar3 = 0;
  iStack_c8 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uVar11 = (uint)uVar1;
  uStack_bc = uVar11;
  local_78 = param_2;
  if (puVar5 == (uint *)0x0) {
    iStack_c8 = (**(code **)(param_1 + 0x2a0))(param_1,0x66766172,uVar2,auStack_80);
    if (iStack_c8 != 0) goto code_r0x000140307ae0;
    iVar3 = func_0x0001402f5570(uVar2);
    iStack_c8 = FUN_1402f56e0(uVar2,&UNK_14043b490,&uStack_70);
    if (iStack_c8 != 0) goto code_r0x000140307ae0;
    if (uVar11 < uStack_68 >> 0x10) {
      iStack_c8 = 8;
      goto code_r0x000140307ae0;
    }
    uStack_c4 = (uint)uStack_64 == (uint)uStack_70._6_2_ * 4 + 6;
    puVar4 = (uint *)func_0x0001402f7f60(local_b8,0x98,&iStack_c8);
    *(uint **)(param_1 + 0x408) = puVar4;
    if (iStack_c8 != 0) goto code_r0x000140307ae0;
    uVar11 = (uint)uStack_70._6_2_;
    *puVar4 = (uint)uStack_70._6_2_;
  }
  else {
    uVar11 = *puVar5;
    uStack_c4 = 0;
  }
  plVar10 = local_78;
  uStack_b0 = (ulonglong)(uVar11 * uVar1);
  lStack_88 = (ulonglong)uVar1 * 0x10;
  lStack_90 = (ulonglong)uVar11 * 0x20;
  uStack_98 = (ulonglong)uVar11 * 2 + 7 & 0xfffffffffffffff8;
  uVar13 = uStack_b0 * 4 + 7 & 0xfffffffffffffff8;
  uStack_a0 = uVar13;
  if (puVar5 == (uint *)0x0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x20) =
         uVar11 * 5 + uVar13 + lStack_88 + lStack_90 + uStack_98 + 0x20;
    puVar5 = (uint *)func_0x0001402f7f60(local_b8,*(undefined4 *)
                                                   (*(longlong *)(param_1 + 0x408) + 0x20),
                                         &iStack_c8);
    if (iStack_c8 == 0) {
      puVar4 = puVar5 + 8;
      *(uint **)(*(longlong *)(param_1 + 0x408) + 0x18) = puVar5;
      *puVar5 = uVar11;
      *(ulonglong *)(puVar5 + 4) = uStack_98 + (longlong)puVar4;
      puVar5[1] = 0xffffffff;
      puVar5[2] = uStack_bc;
      *(ulonglong *)(puVar5 + 6) = lStack_90 + uStack_98 + (longlong)puVar4;
      lVar12 = lStack_88 + lStack_90 + uStack_98 + (longlong)puVar4;
      if (uStack_bc != 0) {
        uVar13 = 0;
        do {
          uVar8 = (int)uVar13 + 1;
          *(longlong *)(*(longlong *)(puVar5 + 6) + uVar13 * 0x10) = lVar12;
          lVar12 = lVar12 + (ulonglong)uVar11 * 4;
          uVar13 = (ulonglong)uVar8;
        } while (uVar8 < uStack_bc);
      }
      lVar12 = *(longlong *)(puVar5 + 6) + uStack_a0 + lStack_88;
      uVar13 = 0;
      if (uVar11 != 0) {
        do {
          uVar8 = (int)uVar13 + 1;
          *(longlong *)(uVar13 * 0x20 + *(longlong *)(puVar5 + 4)) = lVar12;
          lVar12 = lVar12 + 5;
          uVar13 = (ulonglong)uVar8;
        } while (uVar8 < uVar11);
      }
      iStack_c8 = func_0x0001402f5d20(uVar2,(uint)uStack_70._4_2_ + iVar3);
      if (iStack_c8 == 0) {
        plVar10 = *(longlong **)(puVar5 + 4);
        uVar8 = 0;
        if (uVar11 != 0) {
          do {
            iStack_c8 = 0;
            iStack_c8 = FUN_1402f56e0(uVar2,&UNK_14043b4b8,&uStack_60);
            if (iStack_c8 != 0) goto code_r0x000140307ae0;
            *(undefined4 *)(plVar10 + 1) = uStack_5c;
            *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_58;
            *(undefined4 *)(plVar10 + 2) = uStack_54;
            *(uint *)(plVar10 + 3) = (uint)uStack_4e;
            *(undefined4 *)((longlong)plVar10 + 0x14) = uStack_60;
            *(char *)*plVar10 = (char)((uint)uStack_60 >> 0x18);
            *(undefined1 *)(*plVar10 + 1) = *(undefined1 *)((longlong)plVar10 + 0x16);
            *(undefined1 *)(*plVar10 + 2) = *(undefined1 *)((longlong)plVar10 + 0x15);
            *(undefined1 *)(*plVar10 + 3) = *(undefined1 *)((longlong)plVar10 + 0x14);
            *(undefined1 *)(*plVar10 + 4) = 0;
            *(undefined2 *)puVar4 = uStack_50;
            iVar3 = *(int *)((longlong)plVar10 + 0xc);
            if ((iVar3 < (int)plVar10[1]) || ((int)plVar10[2] < iVar3)) {
              *(int *)(plVar10 + 1) = iVar3;
              *(int *)(plVar10 + 2) = iVar3;
            }
            plVar10 = plVar10 + 4;
            puVar4 = (uint *)((longlong)puVar4 + 2);
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar11);
        }
        iStack_c8 = 0;
        piStack_d0 = &iStack_c8;
        uStack_d8 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1402f8180(local_b8,4,0,uStack_b0 & 0xffffffff);
      }
    }
  }
  else if ((local_78 != (longlong *)0x0) &&
          (lVar12 = func_0x0001402f7ff0(local_b8,*(undefined8 *)
                                                  (*(longlong *)(param_1 + 0x408) + 0x18),
                                        *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),
                                        &iStack_c8), iStack_c8 == 0)) {
    lVar9 = uStack_98 + 0x20 + lVar12;
    *(longlong *)(lVar12 + 0x10) = lVar9;
    *(longlong *)(lVar12 + 0x18) = lStack_90 + lVar9;
    lVar9 = lStack_90 + lStack_88 + lVar9;
    uVar8 = 0;
    if (*(int *)(lVar12 + 8) != 0) {
      do {
        uVar7 = (ulonglong)uVar8;
        uVar8 = uVar8 + 1;
        *(longlong *)(*(longlong *)(lVar12 + 0x18) + uVar7 * 0x10) = lVar9;
        lVar9 = lVar9 + (ulonglong)uVar11 * 4;
      } while (uVar8 < *(uint *)(lVar12 + 8));
    }
    uVar8 = 0;
    plVar6 = *(longlong **)(lVar12 + 0x10);
    lVar9 = *(longlong *)(lVar12 + 0x18) + uVar13 + lStack_88;
    if (uVar11 != 0) {
      do {
        iVar3 = *(int *)((longlong)plVar6 + 0x14);
        *plVar6 = lVar9;
        if (iVar3 == 0x77676874) {
          *plVar6 = (longlong)"Weight";
        }
        else if (iVar3 == 0x77647468) {
          *plVar6 = (longlong)"Width";
        }
        else if (iVar3 == 0x6f70737a) {
          *plVar6 = (longlong)"OpticalSize";
        }
        else if (iVar3 == 0x736c6e74) {
          *plVar6 = (longlong)"Slant";
        }
        else if (iVar3 == 0x6974616c) {
          *plVar6 = (longlong)"Italic";
        }
        lVar9 = lVar9 + 5;
        plVar6 = plVar6 + 4;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar11);
    }
    *plVar10 = lVar12;
  }
code_r0x000140307ae0:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_f8);
  return;
}

