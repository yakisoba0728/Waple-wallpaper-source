// Function: FUN_140256780
// Addr: 140256780
// Size: 801 bytes


void FUN_140256780(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  lVar9 = *(longlong *)(param_1 + 200);
  if (*(char *)(lVar9 + 0x12eb) == '\x02') {
    iVar11 = (**(code **)(**(longlong **)(param_1 + 600) + 0x18))();
    uVar8 = *(undefined4 *)(lVar9 + 0x1a8);
    lVar9 = *(longlong *)(param_1 + 200);
    puVar10 = *(undefined8 **)(lVar9 + 0x38);
    *(undefined1 *)(lVar9 + 0x1ca) = 1;
    *(undefined8 **)(lVar9 + 0x38) = puVar10 + 8;
    fVar13 = ((float)((iVar11 / 2) / (1 << ((byte)uVar8 & 0x1f))) /
             (*(float *)(lVar9 + 0x78) * *(float *)(lVar9 + 0x78))) * DAT_140492934;
    puVar10[8] = *puVar10;
    puVar10[9] = puVar10[1];
    if (DAT_140492704 <= fVar13) {
      fVar13 = DAT_140492704;
    }
    puVar10[10] = puVar10[2];
    puVar10[0xb] = puVar10[3];
    puVar10[0xc] = puVar10[4];
    puVar10[0xd] = puVar10[5];
    fVar12 = fVar13 + fVar13;
    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar10 + 6);
    *(undefined4 *)((longlong)puVar10 + 0x74) = *(undefined4 *)((longlong)puVar10 + 0x34);
    *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(puVar10 + 7);
    *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)((longlong)puVar10 + 0x3c);
    lVar9 = *(longlong *)(param_1 + 200);
    fVar2 = *(float *)(lVar9 + 0x178);
    fVar3 = *(float *)(lVar9 + 0x17c);
    fVar4 = *(float *)(lVar9 + 0x180);
    fVar5 = *(float *)(lVar9 + 0x16c);
    fVar6 = *(float *)(lVar9 + 0x170);
    fVar7 = *(float *)(lVar9 + 0x174);
    *(float *)(lVar9 + 0x178) = fVar2 * fVar12;
    *(ulonglong *)(lVar9 + 0x17c) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x17c) >> 0x20) * fVar12,
                  (float)*(undefined8 *)(lVar9 + 0x17c) * fVar12);
    lVar9 = *(longlong *)(param_1 + 200);
    *(float *)(lVar9 + 0x16c) = fVar12 * *(float *)(lVar9 + 0x16c);
    *(ulonglong *)(lVar9 + 0x170) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(lVar9 + 0x170) >> 0x20) * fVar12,
                  (float)*(undefined8 *)(lVar9 + 0x170) * fVar12);
    *(float *)(*(longlong *)(param_1 + 200) + 0x120) = fVar13 * fVar13;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x38) + 0x30) = 0;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x38) + 0x34) = 0;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x38) + 0x38) = 0;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x38) + 0x3c) = 0x3f800000;
    FUN_140155fc0(*(undefined8 *)(param_1 + 0x240));
    (**(code **)(**(longlong **)(param_1 + 0x248) + 8))();
    FUN_140157430(*(undefined8 *)(param_1 + 0x240));
    fVar13 = DAT_14049267c;
    lVar9 = *(longlong *)(param_1 + 200);
    if (*(int *)(param_1 + 0x260) != *(int *)(lVar9 + 0x144)) {
      *(int *)(param_1 + 0x260) = *(int *)(lVar9 + 0x144);
      *(float *)(lVar9 + 0x178) = fVar2 * fVar13;
      *(float *)(lVar9 + 0x17c) = fVar3 * fVar13;
      *(float *)(lVar9 + 0x180) = fVar4 * fVar13;
      lVar9 = *(longlong *)(param_1 + 200);
      *(float *)(lVar9 + 0x16c) = fVar5 * fVar13;
      *(float *)(lVar9 + 0x170) = fVar6 * fVar13;
      *(float *)(lVar9 + 0x174) = fVar7 * fVar13;
      (**(code **)(**(longlong **)(param_1 + 600) + 8))();
      FUN_140155fc0(*(undefined8 *)(param_1 + 0x250));
      (**(code **)(**(longlong **)(param_1 + 0x248) + 8))();
      FUN_140157430(*(undefined8 *)(param_1 + 0x250));
      (**(code **)(**(longlong **)(param_1 + 600) + 0x10))();
    }
    lVar9 = *(longlong *)(param_1 + 200);
    *(float *)(lVar9 + 0x178) = fVar2;
    *(float *)(lVar9 + 0x17c) = fVar3;
    *(float *)(lVar9 + 0x180) = fVar4;
    lVar9 = *(longlong *)(param_1 + 200);
    *(float *)(lVar9 + 0x16c) = fVar5;
    *(float *)(lVar9 + 0x170) = fVar6;
    *(float *)(lVar9 + 0x174) = fVar7;
    lVar9 = *(longlong *)(param_1 + 200);
    plVar1 = (longlong *)(lVar9 + 0x38);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar9 + 0x1ca) = 1;
  }
  return;
}

