// Function: FUN_140209360
// Addr: 140209360
// Size: 476 bytes


void FUN_140209360(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res8;
  
  local_res8._4_4_ = DAT_1404927a8;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar2 = *(uint *)((longlong)param_1 + 0x304);
  fVar6 = (float)*(uint *)(param_2 + 0x2c);
  if ((uVar2 & 2) != 0) {
    *(float *)(param_1 + 0x5e) = fVar6;
    *(float *)((longlong)param_1 + 0x2f4) = (float)*(uint *)(param_2 + 0x30);
    local_res8._0_4_ = local_res8._4_4_;
    goto LAB_14020948c;
  }
  local_res8 = param_1[0x5e];
  if ((uVar2 & 8) != 0) {
    if ((*(byte *)(param_2 + 0x1c) & 4) == 0) {
      if ((uVar2 >> 10 & 1) == 0) {
        lVar4 = param_1[0x93];
        if ((*(byte *)(lVar4 + 0x1f8) & 4) == 0) {
          *(float *)(param_1 + 0x5e) = fVar6;
          uVar3 = *(uint *)(param_2 + 0x30);
          goto LAB_140209464;
        }
        *(float *)(param_1 + 0x5e) = (float)*(ushort *)(lVar4 + 0x2b0);
        fVar7 = (float)*(ushort *)(lVar4 + 0x2b2);
      }
      else {
        *(float *)(param_1 + 0x5e) = (float)*(int *)(param_1[0x19] + 0x84);
        fVar7 = (float)*(int *)(param_1[0x19] + 0x88);
      }
    }
    else {
      *(float *)(param_1 + 0x5e) = (float)*(uint *)(param_2 + 0xb0);
      uVar3 = *(uint *)(param_2 + 0xb4);
LAB_140209464:
      fVar7 = (float)uVar3;
    }
    *(float *)((longlong)param_1 + 0x2f4) = fVar7;
    local_res8 = param_1[0x5e];
  }
LAB_14020948c:
  if (((((*(byte *)(param_2 + 0x1c) & 4) != 0) && (2 < *(int *)(param_2 + 0xac))) ||
      (0 < (int)param_1[100])) || (fVar6 = fVar6 / (float)uVar1, (uVar2 & 0x10) != 0)) {
    fVar6 = DAT_140492704;
  }
  (**(code **)(*param_1 + 0xb0))
            (param_1,fVar6,uVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
             (int)(float)local_res8,(int)local_res8._4_4_);
  (**(code **)(*param_1 + 0xb8))(param_1);
  puVar5 = (undefined8 *)param_1[0x98];
  if ((puVar5 != (undefined8 *)0x0) && (puVar5[10] != param_2)) {
    (**(code **)*puVar5)(puVar5,1);
    param_1[0x98] = 0;
  }
  return;
}

