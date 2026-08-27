// Function: FUN_140051c90
// Addr: 140051c90
// Size: 803 bytes


ulonglong FUN_140051c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 local_res10;
  undefined7 uStackX_11;
  
  if (param_2[2] != 0) {
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    uVar2 = FUN_140290580(&local_res10,param_2,0x80,0x2000000);
    uVar8 = (ulonglong)uVar2;
    if (uVar2 != 0) {
LAB_140051ec1:
      FUN_14028f760(CONCAT71(uStackX_11,local_res10));
      return uVar8;
    }
    uVar8 = param_1[2];
    iVar3 = 0;
    uVar1 = local_res10;
    if (uVar8 < 0x104) {
      uVar4 = 0x104 - uVar8;
      if (param_1[3] - uVar8 < uVar4) {
        FUN_140015670(param_1,uVar4,local_res10,uVar4,0);
        uVar1 = local_res10;
      }
      else {
        param_1[2] = 0x104;
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        puVar9 = (undefined2 *)((longlong)puVar5 + uVar8 * 2);
        if (uVar4 != 0) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
        }
        *(undefined2 *)(puVar5 + 0x41) = 0;
      }
    }
    else {
      param_1[2] = 0x104;
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      *(undefined2 *)(puVar5 + 0x41) = 0;
    }
    do {
      while( true ) {
        uVar2 = *(uint *)(param_1 + 2);
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        uVar4 = FUN_1402901b0(CONCAT71(uStackX_11,local_res10),puVar5,uVar2,iVar3);
        if ((uint)uVar4 != 0) break;
        uVar8 = uVar4 >> 0x20;
        if (((int)(uVar4 >> 0x20) != 3) || (iVar3 != 0)) {
          param_1[2] = 0;
          if (7 < (ulonglong)param_1[3]) {
            param_1 = (undefined8 *)*param_1;
          }
          *(undefined2 *)param_1 = 0;
          goto LAB_140051ec1;
        }
        iVar3 = 2;
      }
      uVar8 = param_1[2];
      uVar7 = uVar4 & 0xffffffff;
      if (uVar8 < uVar7) {
        uVar6 = uVar7 - uVar8;
        if (param_1[3] - uVar8 < uVar6) {
          FUN_140015670(param_1,uVar6,uVar1,uVar6,0);
        }
        else {
          param_1[2] = uVar7;
          puVar5 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar5 = (undefined8 *)*param_1;
          }
          puVar9 = (undefined2 *)((longlong)puVar5 + uVar8 * 2);
          if (uVar6 != 0) {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = 0;
              puVar9 = puVar9 + 1;
            }
          }
          *(undefined2 *)((longlong)puVar5 + uVar7 * 2) = 0;
        }
      }
      else {
        param_1[2] = uVar7;
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        *(undefined2 *)((longlong)puVar5 + uVar7 * 2) = 0;
      }
    } while (uVar2 <= (uint)uVar4);
    FUN_14028f760(CONCAT71(uStackX_11,local_res10));
    if (iVar3 == 0) {
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if (5 < (ulonglong)param_1[2]) {
        iVar3 = FUN_1400158b0(puVar5,L"\\\\?\\",4);
        if ((iVar3 == 0) && ((*(uint *)(puVar5 + 1) & 0xffffffdf) - 0x3a0041 < 0x1a)) {
          uVar8 = param_1[2];
          uVar4 = 4;
          if (uVar8 < 4) {
            uVar4 = uVar8;
          }
          puVar5 = param_1;
          if (7 < (ulonglong)param_1[3]) {
            puVar5 = (undefined8 *)*param_1;
          }
          FUN_1404210f0(puVar5,(longlong)puVar5 + uVar4 * 2,(uVar8 - uVar4) * 2 + 2);
          param_1[2] = uVar8 - uVar4;
          return 0;
        }
      }
      puVar5 = param_1;
      if (7 < (ulonglong)param_1[3]) {
        puVar5 = (undefined8 *)*param_1;
      }
      if ((7 < (ulonglong)param_1[2]) &&
         (iVar3 = FUN_1400158b0(puVar5,L"\\\\?\\UNC\\",8), iVar3 == 0)) {
        uVar8 = param_1[2];
        if (uVar8 < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_140012940();
        }
        uVar4 = 6;
        if (uVar8 - 2 < 6) {
          uVar4 = uVar8 - 2;
        }
        puVar5 = param_1;
        if (7 < (ulonglong)param_1[3]) {
          puVar5 = (undefined8 *)*param_1;
        }
        FUN_1404210f0((longlong)puVar5 + 4,(longlong)puVar5 + (uVar4 + 2) * 2,
                      (uVar8 - uVar4) * 2 + -2);
        param_1[2] = uVar8 - uVar4;
        return 0;
      }
    }
    else {
      FUN_140015910(param_1);
    }
  }
  return 0;
}

