// Function: FUN_140283d60
// Addr: 140283d60
// Size: 915 bytes


void FUN_140283d60(longlong *param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  int local_res10;
  int local_res20;
  int local_134;
  int local_130;
  double local_120;
  double local_118;
  longlong *local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [24];
  longlong local_d8;
  longlong local_d0;
  longlong local_c0;
  longlong local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  
  dVar2 = param_3[4];
  dVar3 = param_3[5];
  uVar7 = (uint)((char)param_2[3] != '\0');
  if (*(uint *)((longlong)param_1 + 0x14) != uVar7) {
    *(uint *)((longlong)param_1 + 0x14) = uVar7;
    *param_1 = *param_1 + (longlong)((*(int *)((longlong)param_1 + 0xc) + -1) * (int)param_1[2]) * 4
    ;
    *(int *)(param_1 + 2) = -(int)param_1[2];
  }
  local_108 = param_2;
  FUN_1402854d0(&local_100,param_2);
  iVar8 = 0;
  for (plVar12 = (longlong *)*param_2; plVar12 != (longlong *)param_2[1]; plVar12 = plVar12 + 3) {
    iVar8 = iVar8 + (int)(plVar12[1] - *plVar12 >> 3);
  }
  FUN_140280e00(&local_c0,(longlong)iVar8);
  dVar6 = DAT_140492758;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    iVar8 = (int)param_1[1];
    local_130 = 0;
    local_134 = 1;
    do {
      local_res10 = iVar8 + -1;
      if (-1 < local_134) {
        local_res10 = 0;
      }
      if (0 < iVar8) {
        local_res20 = 0;
        lVar1 = *param_1 + (longlong)(local_130 * (int)param_1[2]) * 4;
        do {
          local_118 = ((double)local_130 + dVar6) / param_3[1] - param_3[3];
          local_120 = ((double)local_res10 + dVar6) / *param_3 - param_3[2];
          lVar10 = local_d8;
          local_100 = local_120;
          local_f8 = local_118;
          if (local_d8 != local_d0) {
            do {
              FUN_140284ac0(lVar10,&local_120);
              lVar10 = lVar10 + 0xa0;
            } while (lVar10 != local_d0);
          }
          plVar12 = (longlong *)*local_108;
          lVar10 = local_c0;
          if (local_c0 == local_b8) {
            lVar10 = 0;
          }
          plVar9 = local_108;
          if (plVar12 != (longlong *)local_108[1]) {
            do {
              puVar4 = (undefined8 *)plVar12[1];
              puVar11 = (undefined8 *)*plVar12;
              lVar16 = lVar10;
              if (puVar11 != puVar4) {
                uVar15 = puVar4[-1];
                lVar14 = (longlong)((int)((longlong)plVar12 - *plVar9 >> 3) * -0x55555555) * 0xa0 +
                         local_d8;
                if ((ulonglong)((longlong)puVar4 - (longlong)puVar11) < 0x10) {
                  uVar13 = *puVar11;
                }
                else {
                  uVar13 = puVar4[-2];
                }
                do {
                  uVar5 = *puVar11;
                  lVar16 = lVar10 + 0x38;
                  FUN_140284c20(lVar14,lVar10,uVar13,uVar15,uVar5);
                  puVar11 = puVar11 + 1;
                  plVar9 = local_108;
                  uVar13 = uVar15;
                  uVar15 = uVar5;
                  lVar10 = lVar16;
                } while (puVar11 != (undefined8 *)plVar12[1]);
              }
              plVar12 = plVar12 + 3;
              lVar10 = lVar16;
            } while (plVar12 != (longlong *)plVar9[1]);
          }
          FUN_140285730(&local_100,&local_a8);
          lVar10 = (longlong)(local_res10 * 3);
          local_res10 = local_res10 + local_134;
          local_res20 = local_res20 + 1;
          *(float *)(lVar1 + lVar10 * 4) = (float)((dVar3 + local_a8) * dVar2);
          *(float *)(lVar1 + 4 + lVar10 * 4) = (float)((dVar3 + local_a0) * dVar2);
          *(float *)(lVar1 + 8 + lVar10 * 4) = (float)((dVar3 + local_98) * dVar2);
        } while (local_res20 < iVar8);
      }
      local_134 = -local_134;
      local_130 = local_130 + 1;
    } while (local_130 < *(int *)((longlong)param_1 + 0xc));
  }
  FUN_140103850(&local_c0);
  FUN_140284100(&local_d8);
  FUN_140031b80(local_f0);
  return;
}

