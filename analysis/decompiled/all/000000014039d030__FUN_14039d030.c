// Function: FUN_14039d030
// Addr: 14039d030
// Size: 637 bytes


uint FUN_14039d030(undefined8 param_1,longlong param_2,uint param_3,int *param_4,float *param_5,
                  longlong *param_6)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  longlong *plVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint *puVar13;
  int iVar14;
  int local_res10;
  ushort local_res14;
  short local_res16;
  
  plVar8 = param_6;
  puVar1 = (uint *)(param_2 + 8);
  if (param_4 != (int *)0x0) {
    if (*puVar1 <= param_3) {
      *param_4 = 0;
      return *puVar1;
    }
    iVar14 = 0;
    uVar5 = *(undefined8 *)puVar1;
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(uint *)(param_2 + 0xc);
    fVar7 = DAT_1404925f0;
    while (DAT_1404925f0 = fVar7, uVar3 < param_3) {
      FUN_1402f0140(*(undefined8 *)(*plVar8 + 0x30),&local_res10,puVar1);
      fVar7 = DAT_1404925f0;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
    while ((*param_4 != 0 &&
           (cVar9 = FUN_1402f0140(*(undefined8 *)(*plVar8 + 0x30),&local_res10,puVar1),
           cVar9 != '\0'))) {
      param_5[1] = (float)(uint)(local_res14 == 0xffff);
      *param_5 = (float)local_res10 * fVar7;
      if (local_res14 == 0xffff) {
        uVar3 = *(uint *)((longlong)plVar8 + 0x3c);
        param_5[2] = (float)(((uVar3 & 0xff) * (int)local_res16 >> 0xe ^ uVar3) & 0xff ^ uVar3);
        param_5 = param_5 + 3;
        iVar14 = iVar14 + 1;
      }
      else {
        lVar4 = plVar8[2];
        uVar11 = 0;
        if (*(longlong *)(lVar4 + 0x98) != 0) {
          uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 0x98) + 0x80);
        }
        iVar10 = (**(code **)(lVar4 + 0x90))(lVar4,plVar8[3],local_res14,&param_6,uVar11);
        if (iVar10 == 0) {
          plVar12 = plVar8 + 6;
          if (plVar8 == (longlong *)0xffffffffffffffdf) {
            plVar12 = (longlong *)&DAT_00000010;
          }
          if ((int)*plVar12 == 0) {
            param_5[2] = 0.0;
            param_5 = param_5 + 3;
            iVar14 = iVar14 + 1;
          }
          else {
            if ((uint)local_res14 < *(uint *)(plVar8 + 6)) {
              puVar13 = (uint *)(plVar8[5] + (ulonglong)local_res14 * 4);
            }
            else {
              puVar13 = (uint *)&DAT_14045dd10;
            }
            uVar3 = *puVar13;
            param_5[2] = (float)(((uVar3 >> 8 & 0xff | (uVar3 & 0xff) << 8) << 8 |
                                 uVar3 >> 0x10 & 0xff) << 8 |
                                (int)((uVar3 >> 0x18) * (int)local_res16) >> 0xe & 0xffU);
            param_5 = param_5 + 3;
            iVar14 = iVar14 + 1;
          }
        }
        else {
          param_5[2] = (float)(((uint)param_6 & 0xff) * (int)local_res16 >> 0xe & 0xff |
                              (uint)param_6 & 0xffffff00);
          param_5 = param_5 + 3;
          iVar14 = iVar14 + 1;
        }
      }
    }
    *param_4 = iVar14;
    *(undefined8 *)puVar1 = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0x18) = uVar2;
  }
  return *puVar1;
}

