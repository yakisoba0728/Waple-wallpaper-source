// Function: FUN_140156090
// Addr: 140156090
// Size: 1439 bytes


void FUN_140156090(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  longlong local_res10 [2];
  longlong local_res20;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_208 [104];
  longlong local_1a0 [44];
  
  cVar7 = *(char *)(*(longlong *)(param_1 + 200) + 0x12eb);
  while (cVar7 != '\x02') {
    if (*(longlong *)(*(longlong *)(param_1 + 200) + 0x2e0) != 0) goto LAB_1401571fe;
    lVar14 = *(longlong *)(param_1 + 0x308) - *(longlong *)(param_1 + 0x300) >> 3;
    uVar16 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 200) + 0x12eb) + 1;
    if ((ulonglong)(lVar14 * 0x6db6db6db6db6db7) < uVar16) {
      uVar11 = (*(longlong *)(param_1 + 0x310) - *(longlong *)(param_1 + 0x300) >> 3) *
               0x6db6db6db6db6db7;
      if (uVar11 < uVar16) {
        uVar8 = 0x492492492492492 - (uVar11 >> 1);
        if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
          uVar11 = (uVar11 >> 1) + uVar11;
          uVar8 = uVar16;
          if ((uVar16 <= uVar11) && (uVar8 = uVar11, 0x492492492492492 < uVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_140017440();
          }
        }
        else {
          uVar8 = 0x492492492492492;
        }
        puVar9 = (undefined8 *)FUN_140017460(uVar8 * 0x38);
        FUN_14015b710(puVar9 + lVar14,uVar16 + lVar14 * -0x6db6db6db6db6db7);
        puVar2 = *(undefined8 **)(param_1 + 0x308);
        puVar18 = puVar9;
        for (puVar17 = *(undefined8 **)(param_1 + 0x300); puVar17 != puVar2; puVar17 = puVar17 + 7)
        {
          *puVar18 = *puVar17;
          uVar10 = puVar17[3];
          uVar3 = puVar17[1];
          uVar4 = puVar17[2];
          puVar17[3] = 0;
          puVar17[2] = 0;
          puVar17[1] = 0;
          puVar18[1] = uVar3;
          puVar18[2] = uVar4;
          puVar18[3] = uVar10;
          uVar10 = puVar17[6];
          uVar3 = puVar17[5];
          uVar4 = puVar17[4];
          puVar17[6] = 0;
          puVar17[5] = 0;
          puVar17[4] = 0;
          puVar18[4] = uVar4;
          puVar18[5] = uVar3;
          puVar18[6] = uVar10;
          puVar18 = puVar18 + 7;
        }
        FUN_14015af90(puVar18,puVar18);
        if (*(longlong *)(param_1 + 0x300) != 0) {
          uVar19 = FUN_14015af90(*(longlong *)(param_1 + 0x300),*(undefined8 *)(param_1 + 0x308));
          FUN_14015b7a0(uVar19,*(longlong *)(param_1 + 0x300),
                        (*(longlong *)(param_1 + 0x310) - *(longlong *)(param_1 + 0x300) >> 3) *
                        0x6db6db6db6db6db7);
        }
        *(undefined8 **)(param_1 + 0x300) = puVar9;
        *(undefined8 **)(param_1 + 0x308) = puVar9 + uVar16 * 7;
        *(undefined8 **)(param_1 + 0x310) = puVar9 + uVar8 * 7;
      }
      else {
        uVar10 = FUN_14015b710(*(longlong *)(param_1 + 0x308),uVar16 + lVar14 * -0x6db6db6db6db6db7)
        ;
        *(undefined8 *)(param_1 + 0x308) = uVar10;
      }
    }
    local_res20 = *(longlong *)(param_1 + 0x300);
    lVar14 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 200) + 0x12eb) * 0x38;
    if (*(longlong *)(local_res20 + lVar14) == 0) {
      local_250 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x000140031a20(local_208);
      lVar14 = *(longlong *)(param_1 + 200);
      uStack_268 = 0;
      local_260 = 0;
      local_258 = 0xf;
      local_res10[0] = *(longlong *)(param_1 + 0x1e0) + 0xb0;
      local_270 = 0;
      if (0xf < *(ulonglong *)(*(longlong *)(param_1 + 0x1e0) + 200)) {
        local_res10[0] = *(longlong *)local_res10[0];
      }
      FUN_1401a7590(lVar14 + 0x15a8,local_1a0,local_res10);
      if ((local_1a0[0] != *(longlong *)(lVar14 + 0x15b0)) &&
         (plVar12 = (longlong *)(local_1a0[0] + 0xb0), &local_270 != plVar12)) {
        if (0xf < *(ulonglong *)(local_1a0[0] + 200)) {
          plVar12 = (longlong *)*plVar12;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14000f950(&local_270,plVar12,*(undefined8 *)(local_1a0[0] + 0xc0));
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(&local_270,"shadowcaster",0xc);
    }
    lVar5 = *(longlong *)(local_res20 + lVar14);
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x2e0) = lVar5;
    pbVar15 = *(byte **)(local_res20 + 0x10 + lVar14);
    for (pbVar13 = *(byte **)(local_res20 + 8 + lVar14); pbVar13 != pbVar15; pbVar13 = pbVar13 + 2)
    {
      *(undefined8 *)(lVar5 + 0xd0 + (ulonglong)pbVar13[1] * 8) =
           *(undefined8 *)(param_1 + 0xd0 + (ulonglong)*pbVar13 * 8);
    }
    if ((*(longlong *)(local_res20 + 0x20 + lVar14) != *(longlong *)(local_res20 + 0x28 + lVar14))
       && ((*(uint *)(param_1 + 0x1f8) & 2) != 0)) {
      *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffd;
      *(uint *)(lVar5 + 0x1f8) = *(uint *)(lVar5 + 0x1f8) | 3;
      pbVar15 = *(byte **)(local_res20 + 0x20 + lVar14);
      if (pbVar15 != *(byte **)(local_res20 + 0x28 + lVar14)) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(lVar5 + ((ulonglong)pbVar15[1] + 0x48) * 4,
                      param_1 + ((ulonglong)*pbVar15 + 0x48) * 4,pbVar15[2]);
      }
    }
    param_1 = lVar5;
    cVar7 = *(char *)(*(longlong *)(lVar5 + 200) + 0x12eb);
  }
  uVar16 = (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x20))();
  if ((uVar16 & 0x20) != 0) {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar12 + 0x150))(plVar12,*(undefined1 *)(*(longlong *)(param_1 + 0x1e0) + 0x1f));
  }
LAB_1401571fe:
  if ((*(byte *)(param_1 + 0x1f8) & 1) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0x10))
              (*(longlong **)(param_1 + 0x1e0),param_1 + 0x120,param_1 + 0x1e8);
    *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) & 0xfffffffe;
  }
  cVar7 = *(char *)(param_1 + 0x1f0);
  if (((cVar7 == '\x01') || (cVar7 == '\x02')) || (cVar7 == '\x03')) {
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1518) + 0x128))();
  }
  if (*(char *)(param_1 + 0x1f2) == '\x01') {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar12 + 200))(plVar12,0);
  }
  if (*(char *)(param_1 + 499) == '\x01') {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar12 + 0xd0))(plVar12,0);
  }
  if (*(char *)(param_1 + 500) == '\x01') {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar12 + 0xa8))(plVar12,0);
  }
  if ((*(char *)(param_1 + 0x1f1) == '\x01') || (*(char *)(param_1 + 0x1f1) == '\x02')) {
    cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x1518) + 0xe0))();
    uVar6 = *(uint *)(param_1 + 0x1f8) | 0x10;
    if (cVar7 == '\0') {
      uVar6 = *(uint *)(param_1 + 0x1f8) & 0xffffffef;
    }
    *(uint *)(param_1 + 0x1f8) = uVar6;
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
    (**(code **)(*plVar12 + 0xd8))
              (plVar12,CONCAT71((uint7)(uint3)(uVar6 >> 8),1),*(char *)(param_1 + 0x1f1) == '\x01');
  }
  *(longlong *)(*(longlong *)(param_1 + 200) + 0x58) = param_1 + 0xd0;
  pbVar15 = (byte *)(*(longlong *)(param_1 + 0x1e0) + 0x14);
  bVar1 = *pbVar15;
  while (bVar1 != 0xff) {
    plVar12 = *(longlong **)(param_1 + 0xd0 + (ulonglong)(*pbVar15 & 0xf) * 8);
    (**(code **)(*plVar12 + 0x20))(plVar12,*pbVar15 & 0xf);
    pbVar13 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar1 = *pbVar13;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401573be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x1e0) + 8))
            (*(longlong **)(param_1 + 0x1e0),param_1 + 0x120,*(undefined8 *)(param_1 + 0x1e8));
  return;
}

