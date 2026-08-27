// Function: FUN_140186990
// Addr: 140186990
// Size: 709 bytes


void FUN_140186990(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8;
  
  uVar9 = param_1[1] - *param_1 >> 3;
  if (1 < uVar9) {
    lVar7 = *(longlong *)ThreadLocalStoragePointer;
    if ((*(uint *)(lVar7 + 0x2a8) & 1) == 0) {
      *(uint *)(lVar7 + 0x2a8) = *(uint *)(lVar7 + 0x2a8) | 1;
      FUN_14028b030(&LAB_140424eb0);
    }
    FUN_1401a0fc0((longlong *)(lVar7 + 0x1e0),uVar9 * 3 & 0x1fffffffffffffff);
    lVar7 = *(longlong *)(lVar7 + 0x1e0);
    uVar11 = 0;
    if (uVar9 < 4) goto LAB_140186b9c;
    uVar10 = uVar11;
    do {
      lVar8 = *(longlong *)(*param_1 + uVar10 * 8);
      *(undefined1 *)(lVar7 + uVar10 * 0x18) = *(undefined1 *)(lVar8 + 0x2c0);
      *(uint *)(lVar7 + 4 + uVar10 * 0x18) = *(uint *)(lVar8 + 0x2c4) & 3;
      fVar1 = *(float *)(lVar8 + 300);
      fVar2 = param_2[1];
      fVar3 = *(float *)(lVar8 + 0x128);
      fVar4 = *param_2;
      fVar5 = *(float *)(lVar8 + 0x130);
      fVar6 = param_2[2];
      *(longlong *)(lVar7 + 0x10 + uVar10 * 0x18) = lVar8;
      *(float *)(lVar7 + 8 + uVar10 * 0x18) = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
      lVar8 = *(longlong *)(*param_1 + 8 + uVar10 * 8);
      *(undefined1 *)(lVar7 + 0x18 + uVar10 * 0x18) = *(undefined1 *)(lVar8 + 0x2c0);
      *(uint *)(lVar7 + 0x1c + uVar10 * 0x18) = *(uint *)(lVar8 + 0x2c4) & 3;
      fVar1 = *(float *)(lVar8 + 300);
      fVar2 = param_2[1];
      fVar3 = *(float *)(lVar8 + 0x128);
      fVar4 = *param_2;
      fVar5 = *(float *)(lVar8 + 0x130);
      fVar6 = param_2[2];
      *(longlong *)(lVar7 + 0x28 + uVar10 * 0x18) = lVar8;
      *(float *)(lVar7 + 0x20 + uVar10 * 0x18) = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
      lVar8 = *(longlong *)(*param_1 + 0x10 + uVar10 * 8);
      *(undefined1 *)(lVar7 + 0x30 + uVar10 * 0x18) = *(undefined1 *)(lVar8 + 0x2c0);
      *(uint *)(lVar7 + 0x34 + uVar10 * 0x18) = *(uint *)(lVar8 + 0x2c4) & 3;
      fVar1 = *(float *)(lVar8 + 300);
      fVar2 = param_2[1];
      fVar3 = *(float *)(lVar8 + 0x128);
      fVar4 = *param_2;
      fVar5 = *(float *)(lVar8 + 0x130);
      fVar6 = param_2[2];
      *(longlong *)(lVar7 + 0x40 + uVar10 * 0x18) = lVar8;
      *(float *)(lVar7 + 0x38 + uVar10 * 0x18) = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
      lVar8 = *(longlong *)(*param_1 + 0x18 + uVar10 * 8);
      uVar11 = uVar10 + 4;
      *(undefined1 *)(lVar7 + 0x48 + uVar10 * 0x18) = *(undefined1 *)(lVar8 + 0x2c0);
      *(uint *)(lVar7 + 0x4c + uVar10 * 0x18) = *(uint *)(lVar8 + 0x2c4) & 3;
      fVar1 = *(float *)(lVar8 + 300);
      fVar2 = param_2[1];
      fVar3 = *(float *)(lVar8 + 0x128);
      fVar4 = *param_2;
      fVar5 = *(float *)(lVar8 + 0x130);
      fVar6 = param_2[2];
      *(longlong *)(lVar7 + 0x58 + uVar10 * 0x18) = lVar8;
      *(float *)(lVar7 + 0x50 + uVar10 * 0x18) = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
      uVar10 = uVar11;
    } while (uVar11 < uVar9 - 3);
    for (; uVar11 < uVar9; uVar11 = uVar11 + 1) {
LAB_140186b9c:
      lVar8 = *(longlong *)(*param_1 + uVar11 * 8);
      *(undefined1 *)(lVar7 + uVar11 * 0x18) = *(undefined1 *)(lVar8 + 0x2c0);
      *(uint *)(lVar7 + 4 + uVar11 * 0x18) = *(uint *)(lVar8 + 0x2c4) & 3;
      fVar1 = *(float *)(lVar8 + 300);
      fVar2 = param_2[1];
      fVar3 = *(float *)(lVar8 + 0x128);
      fVar4 = *param_2;
      fVar5 = *(float *)(lVar8 + 0x130);
      fVar6 = param_2[2];
      *(longlong *)(lVar7 + 0x10 + uVar11 * 0x18) = lVar8;
      *(float *)(lVar7 + 8 + uVar11 * 0x18) = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6;
    }
    FUN_14019f360(lVar7,uVar9 * 0x18 + lVar7,((longlong)(uVar9 * 0x18) >> 3) * -0x5555555555555555,
                  local_res8);
    uVar11 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar11 * 8) = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar9);
  }
  return;
}

