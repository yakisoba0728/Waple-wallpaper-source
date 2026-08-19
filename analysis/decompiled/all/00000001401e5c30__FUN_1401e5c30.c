// Function: FUN_1401e5c30
// Addr: 1401e5c30
// Size: 51 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e5c30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x38);
  fVar5 = (float)FUN_14041b1a0(*(float *)(param_1 + 0x110) * DAT_140492790);
  uVar6 = (uint)(DAT_1404927d4 / (fVar5 / (DAT_1404927d4 / *(float *)(lVar1 + 0x14)))) ^
          DAT_1404930c0;
  *(float *)(lVar2 + 0x30) =
       *(float *)(lVar2 + 0x30) - (float)*(int *)(param_1 + 0x84) * *(float *)(param_1 + 0xf8);
  *(float *)(lVar2 + 0x34) =
       *(float *)(lVar2 + 0x34) - (float)*(int *)(param_1 + 0x88) * *(float *)(param_1 + 0xfc);
  *(uint *)(lVar2 + 0x38) = uVar6;
  (**(code **)(**(longlong **)(param_1 + 0x1518) + 0x10))(*(longlong **)(param_1 + 0x1518),lVar1);
  if ((*(uint *)(param_1 + 0x118) & 0x800) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x40);
    fVar7 = (float)puVar3[1] * _UNK_140493120;
    fVar8 = (float)((ulonglong)puVar3[1] >> 0x20) * _UNK_140493124;
    *puVar3 = CONCAT44((float)((ulonglong)*puVar3 >> 0x20) * _UNK_140493124,
                       (float)*puVar3 * _UNK_140493120);
    fVar4 = _UNK_140492f04;
    fVar5 = _DAT_140492f00;
    puVar3[1] = CONCAT44(fVar8,fVar7);
    puVar3[2] = CONCAT44((float)((ulonglong)puVar3[2] >> 0x20) * fVar4,(float)puVar3[2] * fVar5);
    puVar3[3] = CONCAT44((float)((ulonglong)puVar3[3] >> 0x20) * fVar4,(float)puVar3[3] * fVar5);
    puVar3[4] = CONCAT44((float)((ulonglong)puVar3[4] >> 0x20) * fVar4,(float)puVar3[4] * fVar5);
    puVar3[5] = CONCAT44((float)((ulonglong)puVar3[5] >> 0x20) * fVar4,(float)puVar3[5] * fVar5);
    puVar3[6] = puVar3[6];
    puVar3[7] = puVar3[7];
  }
  return;
}

