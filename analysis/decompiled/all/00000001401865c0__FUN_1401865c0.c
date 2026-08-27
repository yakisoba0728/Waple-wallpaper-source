// Function: FUN_1401865c0
// Addr: 1401865c0
// Size: 949 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1401865c0(longlong *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 local_res8;
  undefined1 local_1018 [4088];
  undefined8 uStack_20;
  
  uStack_20 = 0x1401865cf;
  uVar6 = param_1[1] - *param_1 >> 3;
  if (1 < uVar6) {
    lVar1 = *(longlong *)ThreadLocalStoragePointer;
    if ((*(uint *)(lVar1 + 0x2a8) & 1) == 0) {
      *(uint *)(lVar1 + 0x2a8) = *(uint *)(lVar1 + 0x2a8) | 1;
      FUN_14028b030(&LAB_140424eb0);
    }
    lVar7 = uVar6 * 0x10;
    FUN_1401a0fc0((longlong *)(lVar1 + 0x1e0),(uVar6 & 0xfffffffffffffff) << 1);
    fVar2 = DAT_140492a28;
    lVar1 = *(longlong *)(lVar1 + 0x1e0);
    uVar4 = 0;
    if (uVar6 < 4) goto LAB_1401867d6;
    uVar5 = uVar4;
    do {
      lVar8 = *(longlong *)(*param_1 + uVar5 * 8);
      fVar9 = fVar2;
      if ((*(ushort *)(lVar8 + 0x120) & 0x200) == 0) {
        fVar9 = *(float *)(lVar8 + 300) * param_2[1] + *(float *)(lVar8 + 0x128) * *param_2 +
                *(float *)(lVar8 + 0x130) * param_2[2];
      }
      *(float *)(lVar1 + uVar5 * 0x10) = fVar9;
      *(longlong *)(lVar1 + 8 + uVar5 * 0x10) = lVar8;
      lVar8 = *(longlong *)(*param_1 + 8 + uVar5 * 8);
      fVar9 = fVar2;
      if ((*(ushort *)(lVar8 + 0x120) & 0x200) == 0) {
        fVar9 = *(float *)(lVar8 + 300) * param_2[1] + *(float *)(lVar8 + 0x128) * *param_2 +
                *(float *)(lVar8 + 0x130) * param_2[2];
      }
      *(float *)(lVar1 + 0x10 + uVar5 * 0x10) = fVar9;
      *(longlong *)(lVar1 + 0x18 + uVar5 * 0x10) = lVar8;
      lVar8 = *(longlong *)(*param_1 + 0x10 + uVar5 * 8);
      fVar9 = fVar2;
      if ((*(ushort *)(lVar8 + 0x120) & 0x200) == 0) {
        fVar9 = *(float *)(lVar8 + 300) * param_2[1] + *(float *)(lVar8 + 0x128) * *param_2 +
                *(float *)(lVar8 + 0x130) * param_2[2];
      }
      *(float *)(lVar1 + 0x20 + uVar5 * 0x10) = fVar9;
      *(longlong *)(lVar1 + 0x28 + uVar5 * 0x10) = lVar8;
      lVar8 = *(longlong *)(*param_1 + 0x18 + uVar5 * 8);
      fVar9 = fVar2;
      if ((*(ushort *)(lVar8 + 0x120) & 0x200) == 0) {
        fVar9 = *(float *)(lVar8 + 300) * param_2[1] + *(float *)(lVar8 + 0x128) * *param_2 +
                *(float *)(lVar8 + 0x130) * param_2[2];
      }
      uVar4 = uVar5 + 4;
      *(float *)(lVar1 + 0x30 + uVar5 * 0x10) = fVar9;
      *(longlong *)(lVar1 + 0x38 + uVar5 * 0x10) = lVar8;
      uVar5 = uVar4;
    } while (uVar4 < uVar6 - 3);
    for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
LAB_1401867d6:
      lVar8 = *(longlong *)(*param_1 + uVar4 * 8);
      fVar9 = fVar2;
      if ((*(ushort *)(lVar8 + 0x120) & 0x200) == 0) {
        fVar9 = *(float *)(lVar8 + 300) * param_2[1] + *(float *)(lVar8 + 0x128) * *param_2 +
                *(float *)(lVar8 + 0x130) * param_2[2];
      }
      *(float *)(lVar1 + uVar4 * 0x10) = fVar9;
      *(longlong *)(lVar1 + 8 + uVar4 * 0x10) = lVar8;
    }
    lVar8 = lVar7 >> 4;
    if (lVar8 < 0x21) {
      FUN_14019ee60(lVar1);
    }
    else {
      uVar5 = lVar8 - (lVar8 - (lVar7 >> 0x3f) >> 1);
      uVar4 = uVar5;
      if (0x100 < uVar5) {
        uVar4 = 0x7fffffffffffffff;
        if ((longlong)uVar5 < 0x7fffffffffffffff) {
          uVar4 = uVar5;
        }
        if ((uVar4 < 0x1000000000000000) && (0 < (longlong)uVar4)) {
          do {
            puVar3 = (undefined1 *)FUN_1402ecff0(uVar4 << 4,&PTR_140426e20);
            if (puVar3 != (undefined1 *)0x0) {
              if (0x100 < uVar4) goto LAB_1401868de;
              goto LAB_1401868c7;
            }
            uVar4 = uVar4 >> 1;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined1 *)0x0;
LAB_1401868c7:
        FUN_14028af80(puVar3);
        uVar4 = 0x100;
      }
      puVar3 = local_1018;
LAB_1401868de:
      FUN_14019ef50(lVar1,lVar7 + lVar1,lVar8,puVar3,uVar4,local_res8);
      if (0x100 < uVar4) {
        FUN_14028af80(puVar3);
      }
    }
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = *(undefined8 *)(lVar1 + 8 + uVar4 * 0x10);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return;
}

