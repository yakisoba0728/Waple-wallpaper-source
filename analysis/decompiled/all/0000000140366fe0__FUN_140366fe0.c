// Function: FUN_140366fe0
// Addr: 140366fe0
// Size: 700 bytes


ulonglong * FUN_140366fe0(ulonglong *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = param_3 + 3;
  if (param_2 < param_3) {
    while( true ) {
      uVar2 = param_3[-3];
      puVar8 = param_3 + -3;
      uVar3 = *param_3;
      if (uVar2 < uVar3) break;
      if ((((uVar2 == uVar3) &&
           ((param_3[-1] < param_3[2] || ((param_3[-1] == param_3[2] && (param_3[-2] < param_3[1])))
            ))) || (uVar3 < uVar2)) ||
         ((param_3[2] < param_3[-1] ||
          (((param_3[2] == param_3[-1] && (param_3[1] < param_3[-2])) ||
           (param_3 = puVar8, puVar8 <= param_2)))))) break;
    }
  }
  puVar8 = puVar7;
  puVar6 = param_3;
  if (puVar7 < param_4) {
    uVar2 = *param_3;
    while( true ) {
      uVar3 = *puVar7;
      puVar8 = puVar7;
      if (((uVar3 < uVar2) ||
          ((uVar3 == uVar2 &&
           ((puVar7[2] < param_3[2] || ((puVar7[2] == param_3[2] && (puVar7[1] < param_3[1]))))))))
         || (uVar2 < uVar3)) break;
      if (((param_3[2] < puVar7[2]) || ((param_3[2] == puVar7[2] && (param_3[1] < puVar7[1])))) ||
         (puVar7 = puVar7 + 3, puVar8 = puVar7, param_4 <= puVar7)) break;
    }
  }
joined_r0x0001403670a3:
  do {
    if (param_4 <= puVar7) {
joined_r0x000140367113:
      while (puVar5 = puVar6, puVar4 = param_3, puVar6 = puVar5, param_2 < puVar4) {
        uVar2 = puVar4[-3];
        param_3 = puVar4 + -3;
        uVar3 = *puVar5;
        if ((uVar3 <= uVar2) &&
           ((uVar2 != uVar3 ||
            ((puVar5[2] <= puVar4[-1] && ((puVar4[-1] != puVar5[2] || (puVar5[1] <= puVar4[-2]))))))
           )) {
          if ((uVar3 < uVar2) ||
             ((puVar5[2] < puVar4[-1] || ((puVar5[2] == puVar4[-1] && (puVar5[1] < puVar4[-2]))))))
          break;
          puVar6 = puVar5 + -3;
          if (puVar6 != param_3) {
            uVar1 = *(undefined8 *)puVar6;
            uVar2 = puVar5[-1];
            *(undefined8 *)puVar6 = *(undefined8 *)param_3;
            puVar5[-1] = puVar4[-1];
            *(undefined8 *)param_3 = uVar1;
            puVar4[-1] = uVar2;
          }
        }
      }
      if (puVar4 == param_2) {
        if (puVar7 == param_4) {
          *param_1 = (ulonglong)puVar5;
          param_1[1] = (ulonglong)puVar8;
          return param_1;
        }
        if (puVar8 != puVar7) {
          uVar1 = *(undefined8 *)puVar5;
          uVar2 = puVar5[2];
          *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
          puVar5[2] = puVar8[2];
          *(undefined8 *)puVar8 = uVar1;
          puVar8[2] = uVar2;
        }
        uVar1 = *(undefined8 *)puVar5;
        uVar2 = puVar5[2];
        *(undefined8 *)puVar5 = *(undefined8 *)puVar7;
        puVar5[2] = puVar7[2];
        *(undefined8 *)puVar7 = uVar1;
        puVar7[2] = uVar2;
        puVar7 = puVar7 + 3;
        puVar8 = puVar8 + 3;
        param_3 = puVar4;
        puVar6 = puVar5 + 3;
      }
      else {
        param_3 = puVar4 + -3;
        if (puVar7 == param_4) {
          puVar6 = puVar5 + -3;
          if (param_3 != puVar6) {
            uVar1 = *(undefined8 *)param_3;
            uVar2 = puVar4[-1];
            *(undefined8 *)param_3 = *(undefined8 *)puVar6;
            puVar4[-1] = puVar5[-1];
            *(undefined8 *)puVar6 = uVar1;
            puVar5[-1] = uVar2;
          }
          uVar1 = *(undefined8 *)puVar6;
          uVar2 = puVar5[-1];
          *(undefined8 *)puVar6 = *(undefined8 *)(puVar8 + -3);
          puVar5[-1] = puVar8[-1];
          *(undefined8 *)(puVar8 + -3) = uVar1;
          puVar8[-1] = uVar2;
          puVar8 = puVar8 + -3;
        }
        else {
          uVar1 = *(undefined8 *)puVar7;
          uVar2 = puVar7[2];
          *(undefined8 *)puVar7 = *(undefined8 *)param_3;
          puVar7[2] = puVar4[-1];
          puVar7 = puVar7 + 3;
          *(undefined8 *)param_3 = uVar1;
          puVar4[-1] = uVar2;
        }
      }
      goto joined_r0x0001403670a3;
    }
    uVar2 = *puVar7;
    uVar3 = *puVar6;
    if ((uVar2 <= uVar3) &&
       ((uVar3 != uVar2 ||
        ((puVar7[2] <= puVar6[2] && ((puVar6[2] != puVar7[2] || (puVar7[1] <= puVar6[1])))))))) {
      if ((uVar2 < uVar3) ||
         ((puVar7[2] < puVar6[2] || ((puVar7[2] == puVar6[2] && (puVar7[1] < puVar6[1]))))))
      goto joined_r0x000140367113;
      if (puVar8 != puVar7) {
        uVar1 = *(undefined8 *)puVar8;
        uVar2 = puVar8[2];
        *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
        puVar8[2] = puVar7[2];
        *(undefined8 *)puVar7 = uVar1;
        puVar7[2] = uVar2;
      }
      puVar8 = puVar8 + 3;
    }
    puVar7 = puVar7 + 3;
  } while( true );
}

