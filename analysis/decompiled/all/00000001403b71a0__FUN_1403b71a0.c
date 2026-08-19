// Function: FUN_1403b71a0
// Addr: 1403b71a0
// Size: 1803 bytes


void FUN_1403b71a0(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined7 local_97;
  undefined4 uStack_90;
  
  uVar14 = 0;
  if ((*(char *)(param_1 + 0x1c) != '\0') && (*(char *)(param_1 + 0x34) != '\0')) {
    fVar2 = *(float *)(param_1 + 0x38);
    bVar15 = *(char *)(param_1 + 0x28) == '\0';
    fVar3 = *(float *)(param_1 + 0x3c);
    lVar11 = 0x2c;
    if (bVar15) {
      lVar11 = 0x20;
    }
    lVar12 = 0x30;
    if (bVar15) {
      lVar12 = 0x24;
    }
    fVar17 = (fVar2 + *(float *)(lVar11 + param_1)) * DAT_140492790;
    plVar10 = *(longlong **)(param_1 + 8);
    plVar1 = plVar10 + 2;
    fVar16 = (fVar3 + *(float *)(lVar12 + param_1)) * DAT_140492790;
    lVar11 = plVar10[1];
    lVar12 = *plVar10;
    if (*(char *)(param_1 + 0x40) == '\0') {
      if ((int)*plVar1 == 0) {
        uVar13 = uVar14;
        if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar12 + 0x38);
        }
        (**(code **)(lVar12 + 0x10))
                  (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                   uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
        *(int *)(plVar10 + 3) = (int)plVar10[4];
        *(int *)plVar1 = 1;
      }
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x10);
      }
      (**(code **)(lVar12 + 0x20))(lVar12,lVar11,plVar1,fVar2,fVar3,fVar17,fVar16,uVar13);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x48);
      uVar5 = *(undefined4 *)(param_1 + 0x44);
      if ((int)*plVar1 == 0) {
        uVar13 = uVar14;
        if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar12 + 0x38);
        }
        (**(code **)(lVar12 + 0x10))
                  (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                   uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
        *(int *)(plVar10 + 3) = (int)plVar10[4];
        *(int *)plVar1 = 1;
      }
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x18);
      }
      (**(code **)(lVar12 + 0x28))
                (lVar12,lVar11,plVar1,uVar5,uVar4,fVar2,fVar3,fVar17,fVar16,uVar13);
    }
    *(float *)((longlong)plVar10 + 0x1c) = fVar17;
    *(float *)(plVar10 + 4) = fVar16;
    *(ulonglong *)(param_1 + 0x35) = CONCAT17((undefined1)uStack_90,local_97);
    *(undefined4 *)(param_1 + 0x3c) = uStack_90;
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') || (*(char *)(param_1 + 0x10) == '\0')) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      if (*(char *)(param_1 + 0x10) != '\0') {
        plVar10 = *(longlong **)(param_1 + 8);
        plVar1 = plVar10 + 2;
        uVar4 = *(undefined4 *)(param_1 + 0x18);
        uVar5 = *(undefined4 *)(param_1 + 0x14);
        lVar11 = plVar10[1];
        lVar12 = *plVar10;
        if ((int)*plVar1 == 0) {
          uVar13 = uVar14;
          if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
            uVar13 = **(undefined8 **)(lVar12 + 0x38);
          }
          (**(code **)(lVar12 + 0x10))
                    (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                     uVar13);
          *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
          *(int *)(plVar10 + 3) = (int)plVar10[4];
          *(int *)plVar1 = 1;
        }
        uVar13 = uVar14;
        if (*(longlong *)(lVar12 + 0x38) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 8);
        }
        (**(code **)(lVar12 + 0x18))(lVar12,lVar11,plVar1,uVar5,uVar4,uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
        *(undefined4 *)(plVar10 + 4) = uVar4;
        goto UNWIND_INFO_1403b78ab_UnwindCodes_31__OffsetInProlog;
      }
    }
    else if (*(char *)(param_1 + 0x10) != '\0') {
      plVar10 = *(longlong **)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x3c);
      plVar1 = plVar10 + 2;
      lVar11 = plVar10[1];
      lVar12 = *plVar10;
      uVar7 = *(undefined4 *)(param_1 + 0x38);
      if (*(char *)(param_1 + 0x40) == '\0') {
        if ((int)*plVar1 == 0) {
          uVar13 = uVar14;
          if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
            uVar13 = **(undefined8 **)(lVar12 + 0x38);
          }
          (**(code **)(lVar12 + 0x10))
                    (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                     uVar13);
          *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
          *(int *)(plVar10 + 3) = (int)plVar10[4];
          *(int *)plVar1 = 1;
        }
        uVar13 = uVar14;
        if (*(longlong *)(lVar12 + 0x38) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x10);
        }
        (**(code **)(lVar12 + 0x20))(lVar12,lVar11,plVar1,uVar7,uVar6,uVar5,uVar4,uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
        *(undefined4 *)(plVar10 + 4) = uVar4;
      }
      else {
        uVar8 = *(undefined4 *)(param_1 + 0x48);
        uVar9 = *(undefined4 *)(param_1 + 0x44);
        if ((int)*plVar1 == 0) {
          uVar13 = uVar14;
          if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
            uVar13 = **(undefined8 **)(lVar12 + 0x38);
          }
          (**(code **)(lVar12 + 0x10))
                    (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                     uVar13);
          *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
          *(int *)(plVar10 + 3) = (int)plVar10[4];
          *(int *)plVar1 = 1;
        }
        uVar13 = uVar14;
        if (*(longlong *)(lVar12 + 0x38) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x18);
        }
        (**(code **)(lVar12 + 0x28))
                  (lVar12,lVar11,plVar1,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
        *(undefined4 *)(plVar10 + 4) = uVar4;
      }
      goto UNWIND_INFO_1403b78ab_UnwindCodes_31__OffsetInProlog;
    }
    if (*(char *)(param_1 + 0x1c) != '\0') {
      plVar10 = *(longlong **)(param_1 + 8);
      plVar1 = plVar10 + 2;
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x24);
      if ((int)*plVar1 != 0) {
        lVar11 = plVar10[1];
        lVar12 = *plVar10;
        if ((*(float *)((longlong)plVar10 + 0x14) != *(float *)((longlong)plVar10 + 0x1c)) ||
           (*(float *)(plVar10 + 3) != *(float *)(plVar10 + 4))) {
          uVar13 = uVar14;
          if (*(longlong *)(lVar12 + 0x38) != 0) {
            uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 8);
          }
          (**(code **)(lVar12 + 0x18))
                    (lVar12,lVar11,plVar1,*(float *)((longlong)plVar10 + 0x14),(int)plVar10[3],
                     uVar13);
        }
        uVar13 = uVar14;
        if (*(longlong *)(lVar12 + 0x38) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x20);
        }
        (**(code **)(lVar12 + 0x30))(lVar12,lVar11,plVar1,uVar13);
        *plVar1 = 0;
        *(undefined4 *)(plVar10 + 4) = 0;
        *(undefined4 *)(plVar10 + 3) = 0;
      }
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar4;
      *(undefined4 *)(plVar10 + 4) = uVar5;
      plVar10 = *(longlong **)(param_1 + 8);
      plVar1 = plVar10 + 2;
      lVar11 = plVar10[1];
      lVar12 = *plVar10;
      if ((int)*plVar1 == 0) {
        uVar13 = uVar14;
        if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar12 + 0x38);
        }
        (**(code **)(lVar12 + 0x10))
                  (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                   uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
        *(int *)(plVar10 + 3) = (int)plVar10[4];
        *(int *)plVar1 = 1;
      }
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x10);
      }
      (**(code **)(lVar12 + 0x20))(lVar12,lVar11,plVar1,uVar4,uVar5,uVar4,uVar5,uVar13);
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar4;
      *(undefined4 *)(plVar10 + 4) = uVar5;
    }
  }
  else {
    plVar10 = *(longlong **)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    plVar1 = plVar10 + 2;
    lVar11 = plVar10[1];
    lVar12 = *plVar10;
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    if (*(char *)(param_1 + 0x28) == '\0') {
      if ((int)*plVar1 == 0) {
        uVar13 = uVar14;
        if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar12 + 0x38);
        }
        (**(code **)(lVar12 + 0x10))
                  (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                   uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
        *(int *)(plVar10 + 3) = (int)plVar10[4];
        *(int *)plVar1 = 1;
      }
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x10);
      }
      (**(code **)(lVar12 + 0x20))(lVar12,lVar11,plVar1,uVar7,uVar6,uVar5,uVar4,uVar13);
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
      *(undefined4 *)(plVar10 + 4) = uVar4;
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      uVar9 = *(undefined4 *)(param_1 + 0x2c);
      if ((int)*plVar1 == 0) {
        uVar13 = uVar14;
        if (*(undefined8 **)(lVar12 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar12 + 0x38);
        }
        (**(code **)(lVar12 + 0x10))
                  (lVar12,lVar11,plVar1,*(undefined4 *)((longlong)plVar10 + 0x1c),(int)plVar10[4],
                   uVar13);
        *(undefined4 *)((longlong)plVar10 + 0x14) = *(undefined4 *)((longlong)plVar10 + 0x1c);
        *(int *)(plVar10 + 3) = (int)plVar10[4];
        *(int *)plVar1 = 1;
      }
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x18);
      }
      (**(code **)(lVar12 + 0x28))(lVar12,lVar11,plVar1,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar13);
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar5;
      *(undefined4 *)(plVar10 + 4) = uVar4;
    }
  }
UNWIND_INFO_1403b78ab_UnwindCodes_31__OffsetInProlog:
  plVar10 = *(longlong **)(param_1 + 8);
  *(ulonglong *)(param_1 + 0x41) = CONCAT17((undefined1)uStack_90,local_97);
  *(undefined4 *)(param_1 + 0x48) = uStack_90;
  *(undefined1 *)(param_1 + 0x40) = 0;
  uVar13 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x34) = uVar13;
  *(undefined8 *)(param_1 + 0x1c) = uVar13;
  *(undefined8 *)(param_1 + 0x10) = uVar13;
  *(undefined4 *)(param_1 + 0x3c) = uStack_90;
  *(undefined4 *)(param_1 + 0x24) = uStack_90;
  *(undefined4 *)(param_1 + 0x18) = uStack_90;
  plVar1 = plVar10 + 2;
  if ((int)*plVar1 != 0) {
    lVar11 = plVar10[1];
    lVar12 = *plVar10;
    if ((*(float *)((longlong)plVar10 + 0x14) != *(float *)((longlong)plVar10 + 0x1c)) ||
       (*(float *)(plVar10 + 3) != *(float *)(plVar10 + 4))) {
      uVar13 = uVar14;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 8);
      }
      (**(code **)(lVar12 + 0x18))
                (lVar12,lVar11,plVar1,*(float *)((longlong)plVar10 + 0x14),(int)plVar10[3],uVar13);
    }
    if (*(longlong *)(lVar12 + 0x38) != 0) {
      uVar14 = *(undefined8 *)(*(longlong *)(lVar12 + 0x38) + 0x20);
    }
    (**(code **)(lVar12 + 0x30))(lVar12,lVar11,plVar1,uVar14);
  }
  *plVar1 = 0;
  *(undefined8 *)((longlong)plVar10 + 0x1c) = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  return;
}

