// Function: FUN_1401fd330
// Addr: 1401fd330
// Size: 192 bytes


float * FUN_1401fd330(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong local_28 [3];
  ulonglong local_10;
  
  pfVar6 = (float *)FUN_140086de0(param_1 + 0x1b0,"image","");
  fVar3 = pfVar6[2];
  uVar8 = (ulonglong)(uint)fVar3;
  if (SUB41(fVar3,0) == '\x04') {
    lVar9 = *(longlong *)pfVar6;
    if ((lVar9 != 0) && (uVar8 = (ulonglong)((uint)fVar3 >> 8), ((uint)fVar3 >> 8 & 1) != 0)) {
      lVar9 = lVar9 + 4;
    }
    FUN_1400d3f80(local_28,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),lVar9,
                  CONCAT71((int7)(uVar8 >> 8),1));
    pfVar6 = (float *)FUN_140017840(local_28,param_2,0);
    if (0xf < local_10) {
      uVar8 = local_10 + 1;
      lVar9 = local_28[0];
      if (0xfff < uVar8) {
        lVar9 = *(longlong *)(local_28[0] + -8);
        if (0x1f < (local_28[0] - lVar9) - 8U) {
          lVar9 = 5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          if (*(char *)(lVar9 + 0x4b1) == '\0') {
            pfVar6 = (float *)FUN_1401850a0();
            return pfVar6;
          }
          pfVar6 = (float *)(lVar9 + 0x450);
          puVar7 = (undefined8 *)FUN_1401850a0();
          fVar3 = *(float *)(lVar9 + 0x2fc);
          fVar1 = *(float *)(lVar9 + 0x2f8);
          fVar2 = *(float *)(lVar9 + 0x300);
          uVar5 = puVar7[1];
          *(undefined8 *)pfVar6 = *puVar7;
          *(undefined8 *)(lVar9 + 0x458) = uVar5;
          uVar5 = puVar7[3];
          *(undefined8 *)(lVar9 + 0x460) = puVar7[2];
          *(undefined8 *)(lVar9 + 0x468) = uVar5;
          uVar5 = puVar7[5];
          *(undefined8 *)(lVar9 + 0x470) = puVar7[4];
          *(undefined8 *)(lVar9 + 0x478) = uVar5;
          uVar5 = puVar7[7];
          *(undefined8 *)(lVar9 + 0x480) = puVar7[6];
          *(undefined8 *)(lVar9 + 0x488) = uVar5;
          *(float *)(lVar9 + 0x480) =
               fVar2 * *(float *)(lVar9 + 0x470) +
               fVar3 * *(float *)(lVar9 + 0x460) + fVar1 * *pfVar6 + *(float *)(lVar9 + 0x480);
          *(float *)(lVar9 + 0x484) =
               fVar2 * *(float *)(lVar9 + 0x474) +
               fVar3 * *(float *)(lVar9 + 0x464) +
               fVar1 * *(float *)(lVar9 + 0x454) + *(float *)(lVar9 + 0x484);
          *(float *)(lVar9 + 0x488) =
               fVar2 * *(float *)(lVar9 + 0x478) +
               fVar3 * *(float *)(lVar9 + 0x468) +
               fVar1 * *(float *)(lVar9 + 0x458) + *(float *)(lVar9 + 0x488);
          return pfVar6;
        }
        uVar8 = local_10 + 0x28;
      }
      pfVar6 = (float *)thunk_FUN_14028af80(lVar9,uVar8);
    }
  }
  return pfVar6;
}

