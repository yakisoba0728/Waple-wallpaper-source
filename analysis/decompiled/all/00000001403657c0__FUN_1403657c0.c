// Function: FUN_1403657c0
// Addr: 1403657c0
// Size: 351 bytes


ulonglong * FUN_1403657c0(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  puVar4 = param_3 + 1;
  if (param_2 < param_3) {
    uVar6 = *param_3;
    do {
      uVar2 = param_3[-1];
      puVar5 = param_3 + -1;
      if ((uVar2 < uVar6) || (uVar2 != uVar6)) break;
      param_3 = puVar5;
      uVar6 = uVar2;
    } while (param_2 < puVar5);
  }
  puVar5 = puVar4;
  puVar3 = param_3;
  if (puVar4 < param_4) {
    do {
      puVar5 = puVar4;
      if ((*puVar4 < *param_3) || (*puVar4 != *param_3)) break;
      puVar4 = puVar4 + 1;
      puVar5 = puVar4;
    } while (puVar4 < param_4);
  }
joined_r0x000140365833:
  do {
    puVar1 = param_3;
    if (param_4 <= puVar4) {
joined_r0x00014036585b:
      while (param_3 = puVar1, param_2 < param_3) {
        uVar6 = param_3[-1];
        puVar1 = param_3 + -1;
        if (*puVar3 <= uVar6) {
          if (uVar6 != *puVar3) break;
          puVar3 = puVar3 + -1;
          if (puVar3 != puVar1) {
            uVar2 = *puVar3;
            *puVar3 = uVar6;
            *puVar1 = uVar2;
          }
        }
      }
      if (param_3 == param_2) {
        if (puVar4 == param_4) {
          *param_1 = (ulonglong)puVar3;
          param_1[1] = (ulonglong)puVar5;
          return param_1;
        }
        if (puVar5 != puVar4) {
          uVar6 = *puVar3;
          *puVar3 = *puVar5;
          *puVar5 = uVar6;
        }
        uVar6 = *puVar3;
        *puVar3 = *puVar4;
        *puVar4 = uVar6;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      else {
        param_3 = param_3 + -1;
        if (puVar4 == param_4) {
          puVar3 = puVar3 + -1;
          if (param_3 != puVar3) {
            uVar6 = *param_3;
            *param_3 = *puVar3;
            *puVar3 = uVar6;
          }
          uVar6 = *puVar3;
          *puVar3 = puVar5[-1];
          puVar5[-1] = uVar6;
          puVar5 = puVar5 + -1;
        }
        else {
          uVar6 = *puVar4;
          *puVar4 = *param_3;
          puVar4 = puVar4 + 1;
          *param_3 = uVar6;
        }
      }
      goto joined_r0x000140365833;
    }
    uVar6 = *puVar4;
    if (uVar6 <= *puVar3) {
      if (*puVar3 != uVar6) goto joined_r0x00014036585b;
      if (puVar5 != puVar4) {
        uVar2 = *puVar5;
        *puVar5 = uVar6;
        *puVar4 = uVar2;
      }
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
  } while( true );
}

