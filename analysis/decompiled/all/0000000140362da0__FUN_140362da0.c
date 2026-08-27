// Function: FUN_140362da0
// Addr: 140362da0
// Size: 484 bytes


uint * FUN_140362da0(uint *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    for (puVar6 = param_1 + 4; puVar6 != param_2; puVar6 = puVar6 + 4) {
      uVar2 = *puVar6;
      uVar5 = *param_1;
      uVar1 = *(undefined8 *)(puVar6 + 1);
      uVar3 = puVar6[3];
      uVar8 = (uVar2 >> 0x10 & 0xff) * 0x100 + (uVar2 >> 8 & 0xff) * 0x10000 + uVar2 * 0x1000000 +
              (uVar2 >> 0x18);
      uVar5 = (uVar5 >> 8 & 0xff) * 0x10000 + (uVar5 >> 0x10 & 0xff) * 0x100 + uVar5 * 0x1000000 +
              (uVar5 >> 0x18);
      if ((int)((uint)(uVar5 < uVar8) - (uint)(uVar8 < uVar5)) < 0) {
        FUN_1404210f0(param_1 + 4,param_1,(longlong)puVar6 - (longlong)param_1);
        *(undefined8 *)(param_1 + 1) = uVar1;
        param_1[3] = uVar3;
        *param_1 = uVar2;
      }
      else {
        uVar5 = puVar6[-4];
        uVar5 = (uVar5 >> 8 & 0xff) * 0x10000 + (uVar5 >> 0x10 & 0xff) * 0x100 + uVar5 * 0x1000000 +
                (uVar5 >> 0x18);
        iVar7 = (uint)(uVar5 < uVar8) - (uint)(uVar8 < uVar5);
        puVar4 = puVar6;
        while (iVar7 < 0) {
          *puVar4 = puVar4[-4];
          puVar4[1] = puVar4[-3];
          puVar4[2] = puVar4[-2];
          puVar4[3] = puVar4[-1];
          uVar5 = puVar4[-8];
          uVar5 = (uVar5 >> 8 & 0xff) * 0x10000 + (uVar5 >> 0x10 & 0xff) * 0x100 + uVar5 * 0x1000000
                  + (uVar5 >> 0x18);
          puVar4 = puVar4 + -4;
          iVar7 = (uint)(uVar5 < uVar8) - (uint)(uVar8 < uVar5);
        }
        *(undefined8 *)(puVar4 + 1) = uVar1;
        puVar4[3] = uVar3;
        *puVar4 = uVar2;
      }
    }
    return param_2;
  }
  return param_2;
}

