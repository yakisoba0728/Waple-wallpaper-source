// Function: FUN_1401d7760
// Addr: 1401d7760
// Size: 903 bytes


void FUN_1401d7760(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  float fVar24;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar25;
  undefined4 uVar26;
  ulonglong in_stack_ffffffffffffff80;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x28);
  for (lVar17 = *(longlong *)(param_2 + 0x20); lVar17 != lVar3; lVar17 = lVar17 + 200) {
    puVar4 = *(undefined8 **)(param_2 + 0x240);
    if (puVar4 == *(undefined8 **)(param_2 + 0x248)) {
      FUN_1401dbdd0(param_2 + 0x238);
    }
    else {
      *(undefined4 *)((longlong)puVar4 + 0x13) = 0;
      *(undefined1 *)((longlong)puVar4 + 0x17) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined2 *)(puVar4 + 2) = 0;
      *(undefined1 *)((longlong)puVar4 + 0x12) = 0;
      puVar4[3] = 0;
      *(longlong *)(param_2 + 0x240) = *(longlong *)(param_2 + 0x240) + 0x20;
    }
    uVar22 = (longlong)*(int *)(lVar17 + 0x40) / (longlong)*(int *)(lVar17 + 0x3c);
    plVar5 = *(longlong **)(*param_1 + 0x1518);
    uVar25 = *(ulonglong *)(lVar17 + 0x58);
    uVar10 = uVar22 & 0xffffffff;
    lVar6 = *(longlong *)(param_2 + 0x240);
    iVar23 = (int)uVar22;
    if (uVar25 == 0) {
      in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffffffffffff00;
      uVar25 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
      uVar9 = (**(code **)(*plVar5 + 0x48))
                        (plVar5,*(undefined4 *)(lVar17 + 0x38),*(undefined8 *)(lVar17 + 0x48),uVar10
                         ,uVar25,in_stack_ffffffffffffff80);
    }
    else {
      bVar11 = *(byte *)(lVar17 + 0x18) & 1;
      in_stack_ffffffffffffff80 =
           CONCAT44((int)(in_stack_ffffffffffffff80 >> 0x20),
                    *(int *)(lVar17 + 0x50) / (int)((uint)bVar11 * 2 + 2));
      uVar9 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,*(undefined4 *)(lVar17 + 0x38),*(undefined8 *)(lVar17 + 0x48),uVar10
                         ,uVar25,in_stack_ffffffffffffff80,bVar11,0,0);
    }
    *(undefined8 *)(lVar6 + -0x20) = uVar9;
    if (lVar2 != lVar1) {
      if (*(longlong *)(lVar17 + 0x68) != *(longlong *)(lVar17 + 0x70)) {
        iVar12 = (int)(*(longlong *)(lVar17 + 0x70) - *(longlong *)(lVar17 + 0x68) >> 6) * iVar23;
        iVar13 = iVar12 * 2;
        if ((*(uint *)(lVar17 + 0x18) >> 10 & 1) == 0) {
          iVar13 = iVar12;
        }
        if ((*(uint *)(lVar17 + 0x18) >> 0xb & 1) != 0) {
          iVar13 = iVar13 + iVar12;
        }
        uVar15 = (uint)((iVar13 * 3 & 3U) != 0) + ((uint)(iVar13 * 3) >> 2);
        fVar24 = (float)uVar15;
        if (fVar24 < 0.0) {
          fVar24 = (float)FUN_14041ad10(fVar24);
        }
        else {
          fVar24 = SQRT(fVar24);
        }
        fVar24 = (float)FUN_14041a5c0(fVar24);
        iVar13 = (int)(longlong)fVar24;
        uVar22 = (ulonglong)(iVar13 + 1);
        if (uVar15 <= (uint)(iVar13 * iVar13)) {
          uVar22 = (longlong)fVar24 & 0xffffffff;
        }
        iVar13 = (int)uVar22;
        auVar8 = ZEXT816(2) * ZEXT416((uint)(iVar13 * iVar13 * 4));
        uVar9 = auVar8._0_8_;
        if (auVar8._8_8_ != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        uVar10 = thunk_FUN_14028af20(uVar9);
        FUN_1404217a0(uVar10,0,iVar13 * iVar13 * 8);
        uVar26 = (undefined4)(uVar25 >> 0x20);
        lVar21 = *(longlong *)(lVar17 + 0x68);
        if (*(longlong *)(lVar17 + 0x70) - lVar21 >> 6 != 0) {
          uVar15 = iVar23 * 3;
          iVar12 = 0;
          uVar16 = uVar10;
          do {
            lVar20 = (longlong)iVar12 * 0x40;
            if ((*(uint *)(lVar17 + 0x18) & 0xc00) == 0) {
              FUN_1404210f0(uVar16,*(undefined8 *)(lVar21 + 0x10 + lVar20),
                            (ulonglong)(uint)(iVar23 * 6));
              uVar16 = uVar16 + (ulonglong)uVar15 * 2;
            }
            else if ((*(uint *)(lVar17 + 0x18) >> 0xb & 1) == 0) {
              uVar19 = 0;
              if (uVar15 != 0) {
                do {
                  lVar7 = *(longlong *)(lVar21 + 0x10 + lVar20);
                  lVar14 = (longlong)(int)(uVar19 * 2);
                  lVar18 = (longlong)(int)uVar19;
                  uVar19 = uVar19 + 3;
                  *(undefined4 *)(uVar16 + lVar14 * 2) = *(undefined4 *)(lVar7 + lVar18 * 2);
                  *(undefined2 *)(uVar16 + 4 + lVar14 * 2) = *(undefined2 *)(lVar7 + 4 + lVar18 * 2)
                  ;
                  lVar7 = *(longlong *)(lVar21 + 0x18 + lVar20);
                  *(undefined4 *)(uVar16 + 6 + lVar14 * 2) = *(undefined4 *)(lVar7 + lVar18 * 2);
                  *(undefined2 *)(uVar16 + 10 + lVar14 * 2) =
                       *(undefined2 *)(lVar7 + 4 + lVar18 * 2);
                } while (uVar19 < uVar15);
              }
              uVar16 = uVar16 + (ulonglong)(uint)(iVar23 * 6) * 2;
            }
            uVar26 = (undefined4)(uVar25 >> 0x20);
            lVar21 = *(longlong *)(lVar17 + 0x68);
            iVar12 = iVar12 + 1;
          } while ((ulonglong)(longlong)iVar12 <
                   (ulonglong)(*(longlong *)(lVar17 + 0x70) - lVar21 >> 6));
        }
        uVar25 = CONCAT44(uVar26,iVar13);
        in_stack_ffffffffffffff80 = uVar10;
        uVar9 = (**(code **)(**(longlong **)(*param_1 + 0x1518) + 0x58))
                          (*(longlong **)(*param_1 + 0x1518),"morph",0x13,uVar22,uVar25,uVar10,1);
        *(undefined8 *)(lVar6 + -8) = uVar9;
        thunk_FUN_14028af80(uVar10);
      }
    }
    in_stack_ffffffffffffff78 = uVar25;
  }
  return;
}

