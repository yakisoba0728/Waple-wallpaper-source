// Function: FUN_1401d7830
// Addr: 1401d7830
// Size: 600 bytes


void FUN_1401d7830(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong uVar17;
  uint in_stack_ffffffffffffff80;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  lVar14 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 0x40);
  lVar3 = *(longlong *)(param_2 + 0x28);
  do {
    if (lVar14 == lVar3) {
      return;
    }
    puVar4 = *(undefined8 **)(param_2 + 0x240);
    if (puVar4 == *(undefined8 **)(param_2 + 0x248)) {
      FUN_1401dbea0(param_2 + 0x238);
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
    uVar7 = (longlong)*(int *)(lVar14 + 0x40) / (longlong)*(int *)(lVar14 + 0x3c);
    plVar5 = *(longlong **)(*param_1 + 0x1518);
    uVar17 = *(ulonglong *)(lVar14 + 0x58);
    uVar15 = uVar7 & 0xffffffff;
    lVar6 = *(longlong *)(param_2 + 0x240);
    if (uVar17 == 0) {
      in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffff00;
      uVar17 = in_stack_ffffffffffffff78 & 0xffffffff00000000;
      uVar9 = (**(code **)(*plVar5 + 0x48))
                        (plVar5,*(undefined4 *)(lVar14 + 0x38),*(undefined8 *)(lVar14 + 0x48),uVar15
                         ,uVar17,in_stack_ffffffffffffff80);
    }
    else {
      bVar10 = *(byte *)(lVar14 + 0x18) & 1;
      in_stack_ffffffffffffff80 = *(int *)(lVar14 + 0x50) / (int)((uint)bVar10 * 2 + 2);
      uVar9 = (**(code **)(*plVar5 + 0x40))
                        (plVar5,*(undefined4 *)(lVar14 + 0x38),*(undefined8 *)(lVar14 + 0x48),uVar15
                         ,uVar17,in_stack_ffffffffffffff80,bVar10,0,0);
    }
    *(undefined8 *)(lVar6 + -0x20) = uVar9;
    if (lVar2 != lVar1) {
      if (*(longlong *)(lVar14 + 0x68) != *(longlong *)(lVar14 + 0x70)) {
        iVar11 = (int)(*(longlong *)(lVar14 + 0x70) - *(longlong *)(lVar14 + 0x68) >> 6) *
                 (int)uVar7;
        iVar12 = iVar11 * 2;
        if ((*(uint *)(lVar14 + 0x18) >> 10 & 1) == 0) {
          iVar12 = iVar11;
        }
        if ((*(uint *)(lVar14 + 0x18) >> 0xb & 1) != 0) {
          iVar12 = iVar12 + iVar11;
        }
        uVar13 = (uint)((iVar12 * 3 & 3U) != 0) + ((uint)(iVar12 * 3) >> 2);
        fVar16 = (float)uVar13;
        if (0.0 <= fVar16) {
          fVar16 = (float)FUN_14041a690(SQRT(fVar16));
          iVar11 = (int)(longlong)fVar16;
          iVar12 = iVar11 + 1;
          if (uVar13 <= (uint)(iVar11 * iVar11)) {
            iVar12 = iVar11;
          }
          auVar8 = ZEXT816(2) * ZEXT416((uint)(iVar12 * iVar12 * 4));
          uVar9 = auVar8._0_8_;
          if (auVar8._8_8_ != 0) {
            uVar9 = 0xffffffffffffffff;
          }
          uVar9 = FUN_14028b190(uVar9);
          func_0x000140421870(uVar9,0,iVar12 * iVar12 * 8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14041ade0(fVar16);
      }
    }
    lVar14 = lVar14 + 200;
    in_stack_ffffffffffffff78 = uVar17;
  } while( true );
}

