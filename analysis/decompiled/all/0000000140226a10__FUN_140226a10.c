// Function: FUN_140226a10
// Addr: 140226a10
// Size: 419 bytes


ulonglong FUN_140226a10(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x2e8);
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
    return (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  lVar5 = *(longlong *)(param_1 + 0x2d8);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x78) != *(longlong *)(lVar5 + 0x80))) {
    *param_2 = 3.4028235e+38;
    param_2[1] = 3.4028235e+38;
    param_2[2] = 3.4028235e+38;
    *param_3 = -3.4028235e+38;
    param_3[1] = -3.4028235e+38;
    param_3[2] = -3.4028235e+38;
    bVar4 = false;
    lVar5 = *(longlong *)(param_1 + 0x2d8);
    plVar2 = *(longlong **)(lVar5 + 0x80);
    plVar6 = *(longlong **)(lVar5 + 0x78);
    if (plVar6 != plVar2) {
      do {
        lVar3 = *plVar6;
        if ((*(byte *)(lVar3 + 0xd0) & 1) != 0) {
          if ((bVar4) ||
             (fVar7 = *(float *)(*(longlong *)(lVar3 + 0x128) + 0x60),
             pfVar1 = (float *)(*(longlong *)(lVar3 + 0x128) + 0x54),
             *pfVar1 <= fVar7 && fVar7 != *pfVar1)) {
            bVar4 = true;
          }
          lVar5 = *(longlong *)(lVar3 + 0x128);
          fVar7 = *(float *)(lVar5 + 0x58);
          if (param_2[1] <= *(float *)(lVar5 + 0x58)) {
            fVar7 = param_2[1];
          }
          fVar8 = *(float *)(lVar5 + 0x54);
          if (*param_2 <= *(float *)(lVar5 + 0x54)) {
            fVar8 = *param_2;
          }
          fVar9 = *(float *)(lVar5 + 0x5c);
          if (param_2[2] <= *(float *)(lVar5 + 0x5c)) {
            fVar9 = param_2[2];
          }
          param_2[1] = fVar7;
          *param_2 = fVar8;
          param_2[2] = fVar9;
          lVar5 = *(longlong *)(lVar3 + 0x128);
          fVar7 = *(float *)(lVar5 + 0x68);
          if (*(float *)(lVar5 + 0x68) <= param_3[2]) {
            fVar7 = param_3[2];
          }
          fVar8 = *(float *)(lVar5 + 100);
          if (*(float *)(lVar5 + 100) <= param_3[1]) {
            fVar8 = param_3[1];
          }
          fVar9 = *(float *)(lVar5 + 0x60);
          if (*(float *)(lVar5 + 0x60) <= *param_3) {
            fVar9 = *param_3;
          }
          param_3[2] = fVar7;
          param_3[1] = fVar8;
          *param_3 = fVar9;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar2);
      if (bVar4) {
        return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x2e8);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar5 + 0x1b8);
  param_2[2] = *(float *)(lVar5 + 0x1c0);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar5 + 0x1c4);
  fVar7 = *(float *)(lVar5 + 0x1cc);
  param_3[2] = fVar7;
  return (ulonglong)CONCAT31((int3)((uint)fVar7 >> 8),*param_2 <= *param_3 && *param_3 != *param_2);
}

